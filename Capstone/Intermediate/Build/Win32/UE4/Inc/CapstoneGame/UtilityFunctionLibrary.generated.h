// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class AActor;
#ifdef CAPSTONEGAME_UtilityFunctionLibrary_generated_h
#error "UtilityFunctionLibrary.generated.h already included, missing '#pragma once' in UtilityFunctionLibrary.h"
#endif
#define CAPSTONEGAME_UtilityFunctionLibrary_generated_h

#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSuggestProjectileVelocity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTossVelocity); \
		P_GET_STRUCT(FVector,Z_Param_StartLocation); \
		P_GET_STRUCT(FVector,Z_Param_EndLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaunchSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceOption); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionRadius); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bFavorHighArc); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUtilityFunctionLibrary::SuggestProjectileVelocity(Z_Param_WorldContextObject,Z_Param_Out_OutTossVelocity,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_LaunchSpeed,Z_Param_OverrideGravityZ,ESuggestProjVelocityTraceOption::Type(Z_Param_TraceOption),Z_Param_CollisionRadius,Z_Param_Out_ActorsToIgnore,Z_Param_bFavorHighArc,Z_Param_bDrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUtilityFunctionLibrary::GetDefaultGravityZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UUtilityFunctionLibrary::GetLevelName(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSuggestProjectileVelocity) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutTossVelocity); \
		P_GET_STRUCT(FVector,Z_Param_StartLocation); \
		P_GET_STRUCT(FVector,Z_Param_EndLocation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LaunchSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OverrideGravityZ); \
		P_GET_PROPERTY(UByteProperty,Z_Param_TraceOption); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CollisionRadius); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bFavorHighArc); \
		P_GET_UBOOL(Z_Param_bDrawDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UUtilityFunctionLibrary::SuggestProjectileVelocity(Z_Param_WorldContextObject,Z_Param_Out_OutTossVelocity,Z_Param_StartLocation,Z_Param_EndLocation,Z_Param_LaunchSpeed,Z_Param_OverrideGravityZ,ESuggestProjVelocityTraceOption::Type(Z_Param_TraceOption),Z_Param_CollisionRadius,Z_Param_Out_ActorsToIgnore,Z_Param_bFavorHighArc,Z_Param_bDrawDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultGravityZ) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UUtilityFunctionLibrary::GetDefaultGravityZ(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLevelName) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UUtilityFunctionLibrary::GetLevelName(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapstoneGame"), NO_API) \
	DECLARE_SERIALIZER(UUtilityFunctionLibrary)


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_UUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CapstoneGame"), NO_API) \
	DECLARE_SERIALIZER(UUtilityFunctionLibrary)


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
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


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
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


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_14_PROLOG
#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_RPC_WRAPPERS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_INCLASS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_CapstoneGame_UtilityFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
