// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_Spaceship.h"
#include "Components/StaticMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "ST_Planet.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AST_Spaceship::AST_Spaceship()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpaceshipMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpaceshipMeshComponent"));
	RootComponent = SpaceshipMeshComponent;

	SpaceshipPawnMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("SpaceshipPawnMovementComponent"));

	ShipRotatingSpeed = 20;
	MaxFuelAmount = 100;
	CurrentFuelAmount = MaxFuelAmount;

	bIsLanding = false;

}

// Called when the game starts or when spawned
void AST_Spaceship::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(PlanetClassReference))
	{
		CurrentPlanetReference = Cast<AST_Planet>(PlanetClassReference->GetDefaultObject());
	}

	OnUpdateFuelDelegate.Broadcast(CurrentFuelAmount, MaxFuelAmount);
}

void AST_Spaceship::ApplyGravityTowardsPlanet()
{
	//Find rotation for spaceship to look at planet
	FRotator RotationToPointAtPlanet = UKismetMathLibrary::FindLookAtRotation(CurrentPlanetReference->GetActorLocation(), GetActorLocation());

	//Vector to simulate linear velocity
	FVector NewPosition = UKismetMathLibrary::GetForwardVector(RotationToPointAtPlanet) * -1 * CurrentPlanetReference->GetGravityAcceleration();

	SpaceshipMeshComponent->SetPhysicsLinearVelocity(NewPosition);
}

void AST_Spaceship::AddFuel(float FuelToAdd)
{
	CurrentFuelAmount = FMath::Clamp(CurrentFuelAmount + FuelToAdd, 0.0f, MaxFuelAmount);
}


void AST_Spaceship::MoveUpward(float AxisValue)
{
	if (CurrentFuelAmount != 0)
	{
		AddMovementInput(GetActorUpVector() * AxisValue);
		if (AxisValue > 0)
		{
			CurrentFuelAmount -= 0.5;
		}

		OnUpdateFuelDelegate.Broadcast(CurrentFuelAmount, MaxFuelAmount);
	}	
}

void AST_Spaceship::MoveRight(float AxisValue)
{
	
	AddControllerRollInput(AxisValue);
	FRotator NewRotation = FMath::RInterpTo(GetActorRotation(), GetControlRotation()*4, GetWorld()->GetDeltaSeconds(), ShipRotatingSpeed);
	SetActorRotation(NewRotation);
}

void AST_Spaceship::Land()
{
	BP_Land();

	/*
	//Find rotation for spaceship to look at planet
	FRotator RotationToPointAtPlanet = UKismetMathLibrary::FindLookAtRotation(CurrentPlanetReference->GetActorLocation(), GetActorLocation());


	//Find Rotation to simulate landing of the ship depending on location around planet
	FRotator RotationToSimulateGravity = UKismetMathLibrary::MakeRotFromZY(UKismetMathLibrary::GetForwardVector(RotationToPointAtPlanet), SpaceshipMeshComponent->GetRightVector());


	SetActorRotation(FRotator(RotationToSimulateGravity.Roll , 0, 0));
	*/
	//Determine Spaceship's position in Y to know in side of the planet it is
	/*
	if (GetActorLocation().Y < 0) //if Spaceship is on the left side of the planet
	{
		//RotationToSimulateGravity's Roll must always be negative

		if (RotationToSimulateGravity.Roll < 0)
		{
			SetActorRotation(FRotator(RotationToSimulateGravity.Roll, 0, 0));
		}
		else
		{
			SetActorRotation(FRotator(RotationToSimulateGravity.Roll*-1, 0, 0));
		}

	}
	else //The spaceship is at the Right side of the planet
	{
		// RotationToSimulateGravity's Roll must always be positive
		SetActorRotation(FRotator(UKismetMathLibrary::Abs(RotationToSimulateGravity.Roll), 0, 0));
	}
	*/

}

// Called every frame
void AST_Spaceship::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(CurrentPlanetReference))
	{
		ApplyGravityTowardsPlanet();
		BP_MaintainRotationTowardsPlanet();

		if (bIsLanding)
		{
			Land();
		}
	}
}

// Called to bind functionality to input
void AST_Spaceship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveUpward", this, &AST_Spaceship::MoveUpward);

	PlayerInputComponent->BindAxis("MoveRight", this, &AST_Spaceship::MoveRight);

}

