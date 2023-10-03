// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/SpringArmComponent.h>

#include "MysteryCharacter.generated.h"

UCLASS()
class MYSTERY_API AMysteryCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMysteryCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void UnPossessed() override;

public:
	// Actions
	void Roll();
	void Run();

	void MoveForward(float Value);
	void MoveRight(float Value);

	void Jump();
	void StopJump();

	void Crouch();
	void StopCrouch();

	// Actions

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(VisibleAnywhere)
	UCameraComponent* PlayerCameraComponent;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* PlayerSpringComponent;

};
