// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mystery/MysteryCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryCharacter() {}
// Cross Module References
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryCharacter_NoRegister();
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Mystery();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AMysteryCharacter::StaticRegisterNativesAMysteryCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMysteryCharacter_NoRegister()
	{
		return AMysteryCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMysteryCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpringComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSpringComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMysteryCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mystery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMysteryCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MysteryCharacter.h" },
		{ "ModuleRelativePath", "MysteryCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerCameraComponent_MetaData[] = {
		{ "Category", "MysteryCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MysteryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerCameraComponent = { "PlayerCameraComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMysteryCharacter, PlayerCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerSpringComponent_MetaData[] = {
		{ "Category", "MysteryCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MysteryCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerSpringComponent = { "PlayerSpringComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMysteryCharacter, PlayerSpringComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerSpringComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerSpringComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMysteryCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMysteryCharacter_Statics::NewProp_PlayerSpringComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMysteryCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMysteryCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMysteryCharacter_Statics::ClassParams = {
		&AMysteryCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMysteryCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMysteryCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMysteryCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMysteryCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMysteryCharacter, 3874230327);
	template<> MYSTERY_API UClass* StaticClass<AMysteryCharacter>()
	{
		return AMysteryCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMysteryCharacter(Z_Construct_UClass_AMysteryCharacter, &AMysteryCharacter::StaticClass, TEXT("/Script/Mystery"), TEXT("AMysteryCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMysteryCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
