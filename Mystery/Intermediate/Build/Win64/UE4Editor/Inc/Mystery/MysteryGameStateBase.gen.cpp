// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mystery/MysteryGameStateBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryGameStateBase() {}
// Cross Module References
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryGameStateBase_NoRegister();
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Mystery();
// End Cross Module References
	void AMysteryGameStateBase::StaticRegisterNativesAMysteryGameStateBase()
	{
	}
	UClass* Z_Construct_UClass_AMysteryGameStateBase_NoRegister()
	{
		return AMysteryGameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_AMysteryGameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMysteryGameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mystery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMysteryGameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MysteryGameStateBase.h" },
		{ "ModuleRelativePath", "MysteryGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMysteryGameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMysteryGameStateBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMysteryGameStateBase_Statics::ClassParams = {
		&AMysteryGameStateBase::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMysteryGameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryGameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMysteryGameStateBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMysteryGameStateBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMysteryGameStateBase, 1103729937);
	template<> MYSTERY_API UClass* StaticClass<AMysteryGameStateBase>()
	{
		return AMysteryGameStateBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMysteryGameStateBase(Z_Construct_UClass_AMysteryGameStateBase, &AMysteryGameStateBase::StaticClass, TEXT("/Script/Mystery"), TEXT("AMysteryGameStateBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMysteryGameStateBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
