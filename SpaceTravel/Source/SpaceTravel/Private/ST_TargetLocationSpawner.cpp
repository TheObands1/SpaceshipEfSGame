// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_TargetLocationSpawner.h"
#include "Components/BillboardComponent.h"

// Sets default values
AST_TargetLocationSpawner::AST_TargetLocationSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
	}

	//Spawn the actor there, taking into account the vector's pos
	
}

// Called every frame
void AST_TargetLocationSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

