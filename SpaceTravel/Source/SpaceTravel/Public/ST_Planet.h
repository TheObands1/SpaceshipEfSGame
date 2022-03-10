// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ST_Planet.generated.h"

class UStaticMeshComponent;
class USphereComponent;
class AST_Spaceship;

UCLASS()
class SPACETRAVEL_API AST_Planet : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* PlanetMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* SpaceshipDetectorComponent;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Planet Settings")
	float GravityAcceleration;

	UPROPERTY(BlueprintReadOnly, Category = "Planet Settings")
	FRotator CurrentRotation;

	UPROPERTY(BlueprintReadWrite, Category = "Planet Settings")
	AST_Spaceship* CurrentSpaceshipReference;
	
public:	
	// Sets default values for this actor's properties
	AST_Planet();

	UFUNCTION(BlueprintCallable)
	float GetGravityAcceleration() { return GravityAcceleration; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void DetectShipLanding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void DetectShipTakeOff(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	void RotateShipOnLanding();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
