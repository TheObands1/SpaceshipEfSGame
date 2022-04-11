// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ST_TargetLocationSpawner.generated.h"

class AST_Planet;
class UBillboardComponent;
class AST_VictoryLocation;

UCLASS()
class SPACETRAVEL_API AST_TargetLocationSpawner : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBillboardComponent* BillboardComponent;

public:

	UPROPERTY(BlueprintReadOnly, Category = "Spawner")
	FTransform VictoryTargetTransform;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawner", meta = (MakeEditWidget = true))
	TArray<FTransform> SpawnPoints;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Spawner")
	TSubclassOf<AST_VictoryLocation> VictoryLocationClassReference;

public:	
	// Sets default values for this actor's properties
	AST_TargetLocationSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
