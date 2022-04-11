// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_RotatingActor.h"
#include "Components/StaticMeshComponent.h"
#include "ST_Planet.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AST_RotatingActor::AST_RotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RotatingActorMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RotatingActorMeshComponent"));
	RootComponent = RotatingActorMeshComponent;

	RotatingSpeed = 20.0f;
	StartingAngleOfRotation = 1.0f;
	CurrentRotationRate = 0.0f;
	RotationRadius = 100.0f;

}

// Called when the game starts or when spawned
void AST_RotatingActor::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AST_Planet::StaticClass(), FoundActors);
	CurrentPlanetReference = Cast<AST_Planet>(FoundActors[0]);	
}

void AST_RotatingActor::RotateAroundPlanet(float DeltaTime)
{
	CurrentRotationRate += (DeltaTime*RotatingSpeed);
	//Only Change the Y position
	FVector VectorToRotate = FVector(0, RotationRadius, 0);

	//Rotate around the X Axis
	FVector NewPosition = UKismetMathLibrary::RotateAngleAxis(VectorToRotate, (StartingAngleOfRotation * CurrentRotationRate), FVector(1, 0, 0));

	FVector FinalPosition = CurrentPlanetReference->GetActorLocation() + NewPosition;

	this->SetActorLocation(FinalPosition);
}

// Called every frame
void AST_RotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsValid(CurrentPlanetReference))
	{
		RotateAroundPlanet(DeltaTime);
	}

}

