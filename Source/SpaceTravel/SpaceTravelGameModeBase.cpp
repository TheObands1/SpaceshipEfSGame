// Copyright Epic Games, Inc. All Rights Reserved.


#include "SpaceTravelGameModeBase.h"

void ASpaceTravelGameModeBase::Win()
{
	OnUpdateGameStateDelegate.Broadcast("You Win");
}

void ASpaceTravelGameModeBase::GameOver()
{
	OnUpdateGameStateDelegate.Broadcast("GameOver");
}
