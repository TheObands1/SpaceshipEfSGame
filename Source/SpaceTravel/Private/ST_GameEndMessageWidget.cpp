// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_GameEndMessageWidget.h"
#include "Kismet/GameplayStatics.h"
#include "../SpaceTravelGameModeBase.h"

void UST_GameEndMessageWidget::InitializeThisWidget()
{
	ASpaceTravelGameModeBase* CurrentGameMode = Cast<ASpaceTravelGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	if (IsValid(CurrentGameMode))
	{
		CurrentGameMode->OnUpdateGameStateDelegate.AddDynamic(this, &UST_GameEndMessageWidget::UpdateMessage);
	}

	this->SetVisibility(ESlateVisibility::Hidden);
}

void UST_GameEndMessageWidget::UpdateMessage(FString NewMessage)
{
	EndMessage = NewMessage;
	this->SetVisibility(ESlateVisibility::Visible);
}

void UST_GameEndMessageWidget::ResetDemo()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName(UGameplayStatics::GetCurrentLevelName(GetWorld())));
}
