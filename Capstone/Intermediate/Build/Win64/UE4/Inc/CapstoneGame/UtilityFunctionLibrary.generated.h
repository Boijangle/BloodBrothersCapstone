// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CAPSTONEGAME_UtilityFunctionLibrary_generated_h
#error "UtilityFunctionLibrary.generated.h already included, missing '#pragma once' in UtilityFunctionLibrary.h"
#endif
#define CAPSTONEGAME_UtilityFunctionLibrary_generated_h

#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLevelName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UUtilityFunctionLibrary::GetLevelName(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UUtilityFunctionLibrary::GetLevelName(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapstoneGame"), NO_API) \
	DECLARE_SERIALIZER(UUtilityFunctionLibrary)


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapstoneGame"), NO_API) \
	DECLARE_SERIALIZER(UUtilityFunctionLibrary)


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtilityFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtilityFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtilityFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtilityFunctionLibrary(UUtilityFunctionLibrary&&); \
	NO_API UUtilityFunctionLibrary(const UUtilityFunctionLibrary&); \
public:


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtilityFunctionLibrary(UUtilityFunctionLibrary&&); \
	NO_API UUtilityFunctionLibrary(const UUtilityFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtilityFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtilityFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtilityFunctionLibrary)


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_13_PROLOG
#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_RPC_WRAPPERS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_INCLASS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
