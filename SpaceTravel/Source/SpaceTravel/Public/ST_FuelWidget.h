// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ST_FuelWidget.generated.h"

/**
 * 
 */
UCLASS()
class SPACETRAVEL_API UST_FuelWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Fuel")
	float CurrentFuelAmount;

protected:

	UFUNCTION(BlueprintCallable)
	void InitializeThisWidget();

	UFUNCTION()
	void UpdateFuel(float CurrentFuel, float MaxFuel);
	
};
