// Copyright Epic Games, Inc. All Rights Reserved.

#include "MysteryGameModeBase.h"

#include "MysteryGameStateBase.h"
#include "MysteryCharacterController.h"
#include "MysteryCharacter.h"

AMysteryGameModeBase::AMysteryGameModeBase()
{
	bGameOver = false;

	// ≥ı ºªØ
	GameStateClass			= AMysteryGameStateBase::StaticClass();
	PlayerControllerClass	= AMysteryCharacterController::StaticClass();
	//DefaultPawnClass		= AMysteryCharacter::StaticClass();

	static ConstructorHelpers::FObjectFinder<UBlueprint> PlayerPawnObjects(TEXT("Blueprint'/Game/Demo/Character/Blueprints/BP_MyMysteryCharacter.BP_MyMysteryCharacter'"));
	if (PlayerPawnObjects.Object != NULL)
	{
		DefaultPawnClass = (UClass*)PlayerPawnObjects.Object->GeneratedClass;
	}
}

void AMysteryGameModeBase::StartPlay()
{
	Super::StartPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("GameMode - StartPlay"));
}

void AMysteryGameModeBase::GameOver()
{
	if (bGameOver == false)
	{
		OnGameOver();
		bGameOver = true;
	}
}

bool AMysteryGameModeBase::HasMatchEnd() const
{
	return bGameOver;
}

void AMysteryGameModeBase::OnGameOver()
{
}

