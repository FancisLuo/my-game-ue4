// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"


#include "MysteryGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYSTERY_API AMysteryGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	AMysteryGameModeBase();

	virtual void StartPlay() override;

	void GameOver();

	bool HasMatchEnd() const;

protected:

	virtual void OnGameOver();

protected:


	uint32 bGameOver : 1;
};
