// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ST_RotatingActor.generated.h"

class AST_Planet;
class UStaticMeshComponent;

UCLASS()
class SPACETRAVEL_API AST_RotatingActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* RotatingActorMeshComponent;

protected:

	AST_Planet* CurrentPlanetReference;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rotation Settings", meta = (ClampMin = 0.0f))
	float RotatingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rotation Settings", meta = (ClampMin = 0.0f))
	float StartingAngleOfRotation;

	UPROPERTY(BlueprintReadOnly, Category = "Rotation Settings", meta = (ClampMin = 0.0f))
	float CurrentRotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rotation Settings", meta = (ClampMin = 0.0f))
	float RotationRadius;

public:
	// Sets default values for this actor's properties
	AST_RotatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void RotateAroundPlanet(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
