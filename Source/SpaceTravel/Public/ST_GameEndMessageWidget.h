// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ST_GameEndMessageWidget.generated.h"

/**
 * 
 */
UCLASS()
class SPACETRAVEL_API UST_GameEndMessageWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	UPROPERTY(BlueprintReadOnly, Category = "Message")
	FString EndMessage;

protected:

	UFUNCTION(BlueprintCallable)
	void InitializeThisWidget();

	UFUNCTION()
	void UpdateMessage(FString NewMessage);

	UFUNCTION(BlueprintCallable)
	void ResetDemo();
	
};
