// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_FuelWidget.h"
#include "Kismet/GameplayStatics.h"
#include "ST_Spaceship.h"

void UST_FuelWidget::InitializeThisWidget()
{
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (IsValid(PlayerPawn))
	{
		AST_Spaceship* PlayerSpaceship = Cast<AST_Spaceship>(PlayerPawn);
		if (IsValid(PlayerSpaceship))
		{
			PlayerSpaceship->OnUpdateFuelDelegate.AddDynamic(this, &UST_FuelWidget::UpdateFuel);
		}

	}
}

void UST_FuelWidget::UpdateFuel(float CurrentFuel, float MaxFuel)
{
	CurrentFuelAmount = CurrentFuel / MaxFuel;
}
