// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ST_VictoryLocation.generated.h"


class UParticleSystemComponent;
class UBoxComponent;
class UStaticMeshComponent;

UCLASS()
class SPACETRAVEL_API AST_VictoryLocation : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* LocationMeshComponentForAnchor;

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//UParticleSystemComponent* LocationParticleSystem;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* LocationCollider;
	
public:	
	// Sets default values for this actor's properties
	AST_VictoryLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void DetectSpaceshipLanding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
