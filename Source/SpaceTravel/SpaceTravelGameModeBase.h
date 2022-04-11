// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SpaceTravelGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateGameStateSignature, FString, GameMessage);

/**
 * 
 */
UCLASS()
class SPACETRAVEL_API ASpaceTravelGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnUpdateGameStateSignature OnUpdateGameStateDelegate;

public:
	void Win();

	void GameOver();
	
};
