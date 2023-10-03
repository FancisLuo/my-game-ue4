// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYSTERY_MysteryCharacter_generated_h
#error "MysteryCharacter.generated.h already included, missing '#pragma once' in MysteryCharacter.h"
#endif
#define MYSTERY_MysteryCharacter_generated_h

#define Mystery_Source_Mystery_MysteryCharacter_h_15_SPARSE_DATA
#define Mystery_Source_Mystery_MysteryCharacter_h_15_RPC_WRAPPERS
#define Mystery_Source_Mystery_MysteryCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Mystery_Source_Mystery_MysteryCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMysteryCharacter(); \
	friend struct Z_Construct_UClass_AMysteryCharacter_Statics; \
public: \
	DECLARE_CLASS(AMysteryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mystery"), NO_API) \
	DECLARE_SERIALIZER(AMysteryCharacter)


#define Mystery_Source_Mystery_MysteryCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMysteryCharacter(); \
	friend struct Z_Construct_UClass_AMysteryCharacter_Statics; \
public: \
	DECLARE_CLASS(AMysteryCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mystery"), NO_API) \
	DECLARE_SERIALIZER(AMysteryCharacter)


#define Mystery_Source_Mystery_MysteryCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMysteryCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMysteryCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMysteryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMysteryCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMysteryCharacter(AMysteryCharacter&&); \
	NO_API AMysteryCharacter(const AMysteryCharacter&); \
public:


#define Mystery_Source_Mystery_MysteryCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMysteryCharacter(AMysteryCharacter&&); \
	NO_API AMysteryCharacter(const AMysteryCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMysteryCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMysteryCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMysteryCharacter)


#define Mystery_Source_Mystery_MysteryCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCameraComponent() { return STRUCT_OFFSET(AMysteryCharacter, PlayerCameraComponent); } \
	FORCEINLINE static uint32 __PPO__PlayerSpringComponent() { return STRUCT_OFFSET(AMysteryCharacter, PlayerSpringComponent); }


#define Mystery_Source_Mystery_MysteryCharacter_h_12_PROLOG
#define Mystery_Source_Mystery_MysteryCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mystery_Source_Mystery_MysteryCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Mystery_Source_Mystery_MysteryCharacter_h_15_SPARSE_DATA \
	Mystery_Source_Mystery_MysteryCharacter_h_15_RPC_WRAPPERS \
	Mystery_Source_Mystery_MysteryCharacter_h_15_INCLASS \
	Mystery_Source_Mystery_MysteryCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mystery_Source_Mystery_MysteryCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mystery_Source_Mystery_MysteryCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Mystery_Source_Mystery_MysteryCharacter_h_15_SPARSE_DATA \
	Mystery_Source_Mystery_MysteryCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Mystery_Source_Mystery_MysteryCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Mystery_Source_Mystery_MysteryCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYSTERY_API UClass* StaticClass<class AMysteryCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mystery_Source_Mystery_MysteryCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
