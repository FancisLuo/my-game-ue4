// Fill out your copyright notice in the Description page of Project Settings.


#include "MysteryCharacter.h"

#include <GameFramework/CharacterMovementComponent.h>

// Sets default values
AMysteryCharacter::AMysteryCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlayerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCameraComponent"));
	PlayerSpringComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	PlayerSpringComponent->TargetArmLength = 300;
	PlayerSpringComponent->bUsePawnControlRotation = true;

	PlayerCameraComponent->SetupAttachment(PlayerSpringComponent);
	PlayerSpringComponent->SetupAttachment(RootComponent);

	//GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationYaw = false;
}

void AMysteryCharacter::PossessedBy(AController* NewController)
{
}

void AMysteryCharacter::UnPossessed()
{
}

void AMysteryCharacter::Roll()
{
}

void AMysteryCharacter::Run()
{
}

void AMysteryCharacter::MoveForward(float Value)
{
	if (Controller && Value != 0)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AMysteryCharacter::MoveRight(float Value)
{
	//FVector right = GetActorRightVector();
	//AddMovementInput(right, Value);
	if (Controller && Value != 0)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AMysteryCharacter::Jump()
{
	Super::Jump();
}

void AMysteryCharacter::StopJump()
{
	Super::StopJumping();
}

void AMysteryCharacter::Crouch()
{
	Super::Crouch(true);
}

void AMysteryCharacter::StopCrouch()
{
	Super::UnCrouch(true);
}

// Called when the game starts or when spawned
void AMysteryCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMysteryCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMysteryCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Run", IE_Pressed, this, &AMysteryCharacter::Run);
	PlayerInputComponent->BindAction("Roll", IE_Pressed, this, &AMysteryCharacter::Roll);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMysteryCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AMysteryCharacter::StopJump);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AMysteryCharacter::Crouch);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AMysteryCharacter::StopCrouch);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMysteryCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMysteryCharacter::MoveRight);
}

