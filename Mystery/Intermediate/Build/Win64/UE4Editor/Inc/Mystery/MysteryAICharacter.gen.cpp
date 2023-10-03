// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mystery/MysteryAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryAICharacter() {}
// Cross Module References
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryAICharacter_NoRegister();
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryAICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Mystery();
// End Cross Module References
	void AMysteryAICharacter::StaticRegisterNativesAMysteryAICharacter()
	{
	}
	UClass* Z_Construct_UClass_AMysteryAICharacter_NoRegister()
	{
		return AMysteryAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMysteryAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMysteryAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mystery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMysteryAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MysteryAICharacter.h" },
		{ "ModuleRelativePath", "MysteryAICharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMysteryAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMysteryAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMysteryAICharacter_Statics::ClassParams = {
		&AMysteryAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMysteryAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMysteryAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMysteryAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMysteryAICharacter, 2223368803);
	template<> MYSTERY_API UClass* StaticClass<AMysteryAICharacter>()
	{
		return AMysteryAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMysteryAICharacter(Z_Construct_UClass_AMysteryAICharacter, &AMysteryAICharacter::StaticClass, TEXT("/Script/Mystery"), TEXT("AMysteryAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMysteryAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
