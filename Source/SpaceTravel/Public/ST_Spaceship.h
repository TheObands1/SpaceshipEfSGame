// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ST_Spaceship.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateFuelSignature, float, CurrentAmountOfFuel, float, MaxAmountOfFuel);


class UStaticMeshComponent;
class UFloatingPawnMovement;
class AST_Planet;

UCLASS()
class SPACETRAVEL_API AST_Spaceship : public APawn
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* SpaceshipMeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UFloatingPawnMovement* SpaceshipPawnMovementComponent;

protected:
	UPROPERTY(BlueprintReadWrite, Category = "Movement")
	bool bDidShipLand;

	UPROPERTY(BlueprintReadWrite, Category = "Game State")
	bool bIsThisTheFirstTakeOff;

	UPROPERTY(BlueprintReadWrite, Category = "Game State")
	bool bDidShipLandCorrectly;

	UPROPERTY(BlueprintReadWrite, Category = "Fuel", meta = (ClampMin = 0.0f))
	float CurrentFuelAmount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Fuel")
	float MaxFuelAmount;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement",  meta = (ClampMin = 0.0f))
	float ShipRotatingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planet")
	TSubclassOf<AST_Planet> PlanetClassReference;

	UPROPERTY(BlueprintReadOnly, Category = "Planet")
	AST_Planet* CurrentPlanetReference;

public:
	UPROPERTY(BlueprintAssignable)
	FOnUpdateFuelSignature OnUpdateFuelDelegate;

public:
	// Sets default values for this pawn's properties
	AST_Spaceship();

	void SetbDidShipLand(const bool NewState) { bDidShipLand = NewState; };

	void SetbDidShipLandCorrectly(const bool NewState) { bDidShipLandCorrectly = NewState; };

	void SetbIsThisTheFirstTakeOff(const bool NewState) { bIsThisTheFirstTakeOff = NewState; };

	void Land();

	bool GetDidShipLandedCorrectly() { return bDidShipLandCorrectly; };

	bool GetbIsThisTheFirstTakeOff() { return bIsThisTheFirstTakeOff; };

	UFUNCTION(BlueprintCallable)
	UStaticMeshComponent* GetSpaceshipMeshComponent() { return SpaceshipMeshComponent; };

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ApplyGravityTowardsPlanet();

	void MoveUpward(float AxisValue);

	void MoveRight(float AxisValue);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_Land();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
