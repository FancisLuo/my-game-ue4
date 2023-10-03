// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MysteryManAnimInstance.generated.h"

/**
 * 动画实例类主要是用来获取Pawn的一些当前状态，这样在后续的动画控制中才能够根据Pawn的状态执行不同的动画
 */
UCLASS()
class MYSTERY_API UMysteryManAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	float MovementSpeed;

	// 是否在空中
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	bool IsInAir;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	bool IsCrouching;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement Variables")
	class AMysteryCharacter* PlayerRef;	// 蓝图动画施加的Pawn对象

	// 重写动画初始化函数，相当于构造函数
	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable, Category = "Animation Property")
	void UpdateAnimationProperties();
};
