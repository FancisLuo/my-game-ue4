// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mystery/MysteryCharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMysteryCharacterController() {}
// Cross Module References
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryCharacterController_NoRegister();
	MYSTERY_API UClass* Z_Construct_UClass_AMysteryCharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Mystery();
// End Cross Module References
	void AMysteryCharacterController::StaticRegisterNativesAMysteryCharacterController()
	{
	}
	UClass* Z_Construct_UClass_AMysteryCharacterController_NoRegister()
	{
		return AMysteryCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_AMysteryCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMysteryCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Mystery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMysteryCharacterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MysteryCharacterController.h" },
		{ "ModuleRelativePath", "MysteryCharacterController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMysteryCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMysteryCharacterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMysteryCharacterController_Statics::ClassParams = {
		&AMysteryCharacterController::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMysteryCharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMysteryCharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMysteryCharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMysteryCharacterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMysteryCharacterController, 1195683240);
	template<> MYSTERY_API UClass* StaticClass<AMysteryCharacterController>()
	{
		return AMysteryCharacterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMysteryCharacterController(Z_Construct_UClass_AMysteryCharacterController, &AMysteryCharacterController::StaticClass, TEXT("/Script/Mystery"), TEXT("AMysteryCharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMysteryCharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
