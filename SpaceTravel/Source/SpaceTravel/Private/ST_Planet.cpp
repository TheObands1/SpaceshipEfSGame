// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_Planet.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "ST_Spaceship.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AST_Planet::AST_Planet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpaceshipMeshComponent"));

	SpaceshipDetectorComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SpaceshipDetectorComponent"));
	SpaceshipDetectorComponent->SetSphereRadius(200);
	//SpaceshipDetectorComponent->Setsphere

	GravityAcceleration = 200;
}

// Called when the game starts or when spawned
void AST_Planet::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(SpaceshipDetectorComponent))
	{
		SpaceshipDetectorComponent->OnComponentBeginOverlap.AddDynamic(this, &AST_Planet::DetectShipLanding);
		SpaceshipDetectorComponent->OnComponentEndOverlap.AddDynamic(this, &AST_Planet::DetectShipTakeOff);
	}
}

void AST_Planet::DetectShipLanding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(OtherActor))
	{
		AST_Spaceship* PossibleSpaceship = Cast<AST_Spaceship>(OtherActor);

		if (IsValid(PossibleSpaceship))
		{
			PossibleSpaceship->SetbIsLanding(true);
			//PossibleSpaceship->Land();
			//CurrentSpaceshipReference = PossibleSpaceship;
		}
	}
}

void AST_Planet::DetectShipTakeOff(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (IsValid(OtherActor))
	{
		AST_Spaceship* PossibleSpaceship = Cast<AST_Spaceship>(OtherActor);

		if (IsValid(PossibleSpaceship))
		{
			PossibleSpaceship->SetbIsLanding(false);
			//CurrentSpaceshipReference = nullptr;

			//reportgamemode
		}
	}
}

void AST_Planet::RotateShipOnLanding()
{
	/*
	//Find rotation for spaceship to look at planet
	FRotator RotationToPointAtPlanet = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), CurrentSpaceshipReference->GetActorLocation());

	UStaticMeshComponent* SpaceshipMesh = CurrentSpaceshipReference->GetSpaceshipMeshComponent();

	//Find Rotation to simulate landing of the ship depending on location around planet
	FRotator RotationToSimulateGravity = UKismetMathLibrary::MakeRotFromZY(UKismetMathLibrary::GetForwardVector(RotationToPointAtPlanet), SpaceshipMesh->GetRightVector());


	//SetActorRotation(FRotator(RotationToSimulateGravity.Roll , 0, 0));

	//Determine Spaceship's position in Y to know in side of the planet it is
	
	if (CurrentSpaceshipReference->GetActorLocation().Y < 0) //if Spaceship is on the left side of the planet
	{
		//RotationToSimulateGravity's Roll must always be negative

		if (RotationToSimulateGravity.Roll < 0)
		{
			CurrentSpaceshipReference->SetActorRotation(FRotator(RotationToSimulateGravity.Roll, 0, 0));
		}
		else
		{
			CurrentSpaceshipReference->SetActorRotation(FRotator(RotationToSimulateGravity.Roll*-1, 0, 0));
		}

	}
	else //The spaceship is at the Right side of the planet
	{
		// RotationToSimulateGravity's Roll must always be positive
		CurrentSpaceshipReference->SetActorRotation(FRotator(UKismetMathLibrary::Abs(RotationToSimulateGravity.Roll), 0, 0));
	}
	*/
}

// Called every frame
void AST_Planet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(CurrentSpaceshipReference))
	{
		RotateShipOnLanding();
	}

}

