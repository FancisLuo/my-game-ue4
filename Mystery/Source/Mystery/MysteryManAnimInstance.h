// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MysteryManAnimInstance.generated.h"

/**
 * ����ʵ������Ҫ��������ȡPawn��һЩ��ǰ״̬�������ں����Ķ��������в��ܹ�����Pawn��״ִ̬�в�ͬ�Ķ���
 */
UCLASS()
class MYSTERY_API UMysteryManAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	float MovementSpeed;

	// �Ƿ��ڿ���
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	bool IsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	bool IsCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	class AMysteryCharacter* PlayerRef;	// ��ͼ����ʩ�ӵ�Pawn����

	// ��д������ʼ���������൱�ڹ��캯��
	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable, Category = "Animation Property")
	void UpdateAnimationProperties();
};
