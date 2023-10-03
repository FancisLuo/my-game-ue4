// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mystery/MysteryManAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryManAnimInstance() {}
// Cross Module References
	MYSTERY_API UClass* Z_Construct_UClass_UMysteryManAnimInstance_NoRegister();
	MYSTERY_API UClass* Z_Construct_UClass_UMysteryManAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Mystery();
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMysteryManAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UMysteryManAnimInstance::StaticRegisterNativesUMysteryManAnimInstance()
	{
		UClass* Class = UMysteryManAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UMysteryManAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Property" },
		{ "ModuleRelativePath", "MysteryManAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMysteryManAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMysteryManAnimInstance_NoRegister()
	{
		return UMysteryManAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMysteryManAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInAir_MetaData[];
#endif
		static void NewProp_IsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrouching_MetaData[];
#endif
		static void NewProp_IsCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMysteryManAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Mystery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMysteryManAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMysteryManAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 3242422984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMysteryManAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ????\xca\xb5??????\xd2\xaa????????\xc8\xa1Pawn??\xd2\xbb\xd0\xa9??\xc7\xb0\xd7\xb4\xcc\xac???????\xda\xba????\xc4\xb6????????\xd0\xb2??\xdc\xb9?????Pawn??\xd7\xb4\xcc\xac\xd6\xb4?\xd0\xb2?\xcd\xac?\xc4\xb6???\n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MysteryManAnimInstance.h" },
		{ "ModuleRelativePath", "MysteryManAnimInstance.h" },
		{ "ToolTip", "????\xca\xb5??????\xd2\xaa????????\xc8\xa1Pawn??\xd2\xbb\xd0\xa9??\xc7\xb0\xd7\xb4\xcc\xac???????\xda\xba????\xc4\xb6????????\xd0\xb2??\xdc\xb9?????Pawn??\xd7\xb4\xcc\xac\xd6\xb4?\xd0\xb2?\xcd\xac?\xc4\xb6???" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "MysteryManAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMysteryManAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "Comment", "// ?\xc7\xb7??\xda\xbf???\n" },
		{ "ModuleRelativePath", "MysteryManAnimInstance.h" },
		{ "ToolTip", "?\xc7\xb7??\xda\xbf???" },
	};
#endif
	void Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir_SetBit(void* Obj)
	{
		((UMysteryManAnimInstance*)Obj)->IsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir = { "IsInAir", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMysteryManAnimInstance), &Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "MysteryManAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching_SetBit(void* Obj)
	{
		((UMysteryManAnimInstance*)Obj)->IsCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching = { "IsCrouching", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMysteryManAnimInstance), &Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "MysteryManAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMysteryManAnimInstance, PlayerRef), Z_Construct_UClass_AMysteryCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_PlayerRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMysteryManAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_IsCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMysteryManAnimInstance_Statics::NewProp_PlayerRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMysteryManAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMysteryManAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMysteryManAnimInstance_Statics::ClassParams = {
		&UMysteryManAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMysteryManAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMysteryManAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMysteryManAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMysteryManAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMysteryManAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMysteryManAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMysteryManAnimInstance, 2708563863);
	template<> MYSTERY_API UClass* StaticClass<UMysteryManAnimInstance>()
	{
		return UMysteryManAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMysteryManAnimInstance(Z_Construct_UClass_UMysteryManAnimInstance, &UMysteryManAnimInstance::StaticClass, TEXT("/Script/Mystery"), TEXT("UMysteryManAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMysteryManAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
