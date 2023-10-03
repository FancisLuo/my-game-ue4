// Fill out your copyright notice in the Description page of Project Settings.


#include "MysteryManAnimInstance.h"
#include <GameFramework/PawnMovementComponent.h>
#include "MysteryCharacter.h"

void UMysteryManAnimInstance::NativeInitializeAnimation()
{
	PlayerRef = Cast<AMysteryCharacter>(TryGetPawnOwner());
}

void UMysteryManAnimInstance::UpdateAnimationProperties()
{
	if (PlayerRef == nullptr)
	{
		PlayerRef = Cast<AMysteryCharacter>(TryGetPawnOwner());
	}

	if (PlayerRef)
	{
		FVector Speed = PlayerRef->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0);
		MovementSpeed = LateralSpeed.Size();

		IsInAir = PlayerRef->GetMovementComponent()->IsFalling();

		IsCrouching = PlayerRef->GetMovementComponent()->IsCrouching();
	}
}
