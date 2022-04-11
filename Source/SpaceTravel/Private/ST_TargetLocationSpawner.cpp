// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_TargetLocationSpawner.h"
#include "Components/BillboardComponent.h"
#include "ST_VictoryLocation.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/Quat.h"

// Sets default values
AST_TargetLocationSpawner::AST_TargetLocationSpawner()
{
	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
}

// Called when the game starts or when spawned
void AST_TargetLocationSpawner::BeginPlay()
{
	Super::BeginPlay();

	if (SpawnPoints.Num() > 0)
	{
		int ChosenSpawnPoint = FMath::RandRange(0, SpawnPoints.Num() - 1);
		VictoryTargetTransform = SpawnPoints[ChosenSpawnPoint];

		if (IsValid(VictoryLocationClassReference))
		{
			const FVector SpawnPoint = UKismetMathLibrary::TransformLocation(GetActorTransform(), VictoryTargetTransform.GetLocation());
			
			const FRotator SpawnRotation = UKismetMathLibrary::TransformRotation(GetActorTransform(), VictoryTargetTransform.GetRotation().Rotator());


			FActorSpawnParameters SpawnParameter;
			SpawnParameter.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			AST_VictoryLocation* CurrentVictoryLocation = GetWorld()->SpawnActor<AST_VictoryLocation>(VictoryLocationClassReference, SpawnPoint, SpawnRotation, SpawnParameter);
		}

	}
}

