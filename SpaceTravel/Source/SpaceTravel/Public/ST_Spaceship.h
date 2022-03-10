// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ST_Spaceship.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateFuelSignature, float, CurrentAmountOfFuel, float, MaxAmountOfFuel);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateNumberOfLives, float, CurrentNumberOfLives);


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
	bool bIsLanding;

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

	UPROPERTY(BlueprintAssignable)
	FOnUpdateNumberOfLives OnUpdateNumberOfLivesDelegate;

public:
	// Sets default values for this pawn's properties
	AST_Spaceship();

	void SetbIsLanding(bool NewState) { bIsLanding = NewState; };

	void AddFuel(float FuelToAdd);

	UFUNCTION(BlueprintCallable)
	UStaticMeshComponent* GetSpaceshipMeshComponent() { return SpaceshipMeshComponent; };

	void Land();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ApplyGravityTowardsPlanet();

	UFUNCTION(BlueprintImplementableEvent)
	void BP_MaintainRotationTowardsPlanet();

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
