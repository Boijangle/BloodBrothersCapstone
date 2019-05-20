// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapstoneGame/UtilityFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityFunctionLibrary() {}
// Cross Module References
	CAPSTONEGAME_API UClass* Z_Construct_UClass_UUtilityFunctionLibrary_NoRegister();
	CAPSTONEGAME_API UClass* Z_Construct_UClass_UUtilityFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CapstoneGame();
	CAPSTONEGAME_API UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ();
	CAPSTONEGAME_API UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	CAPSTONEGAME_API UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UUtilityFunctionLibrary::StaticRegisterNativesUUtilityFunctionLibrary()
	{
		UClass* Class = UUtilityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDefaultGravityZ", &UUtilityFunctionLibrary::execGetDefaultGravityZ },
			{ "GetLevelName", &UUtilityFunctionLibrary::execGetLevelName },
			{ "SuggestProjectileVelocity", &UUtilityFunctionLibrary::execSuggestProjectileVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics
	{
		struct UtilityFunctionLibrary_eventGetDefaultGravityZ_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventGetDefaultGravityZ_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "UtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunctionLibrary, "GetDefaultGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(UtilityFunctionLibrary_eventGetDefaultGravityZ_Parms), Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics
	{
		struct UtilityFunctionLibrary_eventGetLevelName_Parms
		{
			AActor* Actor;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventGetLevelName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventGetLevelName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "DefaultToSelf", "Actor" },
		{ "ModuleRelativePath", "UtilityFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunctionLibrary, "GetLevelName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14042401, sizeof(UtilityFunctionLibrary_eventGetLevelName_Parms), Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics
	{
		struct UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms
		{
			const UObject* WorldContextObject;
			FVector OutTossVelocity;
			FVector StartLocation;
			FVector EndLocation;
			float LaunchSpeed;
			float OverrideGravityZ;
			TEnumAsByte<ESuggestProjVelocityTraceOption::Type> TraceOption;
			float CollisionRadius;
			TArray<AActor*> ActorsToIgnore;
			bool bFavorHighArc;
			bool bDrawDebug;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static void NewProp_bFavorHighArc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFavorHighArc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceOption;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideGravityZ;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchSpeed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTossVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms), &Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bDrawDebug = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawDebug", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms), &Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bFavorHighArc_SetBit(void* Obj)
	{
		((UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms*)Obj)->bFavorHighArc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bFavorHighArc = { UE4CodeGen_Private::EPropertyClass::Bool, "bFavorHighArc", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms), &Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bFavorHighArc_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore = { UE4CodeGen_Private::EPropertyClass::Array, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, ActorsToIgnore), METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ActorsToIgnore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_CollisionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, CollisionRadius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_TraceOption = { UE4CodeGen_Private::EPropertyClass::Byte, "TraceOption", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, TraceOption), Z_Construct_UEnum_Engine_ESuggestProjVelocityTraceOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_OverrideGravityZ = { UE4CodeGen_Private::EPropertyClass::Float, "OverrideGravityZ", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, OverrideGravityZ), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_LaunchSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "LaunchSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, LaunchSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_EndLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "EndLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_StartLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "StartLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_OutTossVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "OutTossVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, OutTossVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_WorldContextObject_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_bFavorHighArc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_CollisionRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_TraceOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_OverrideGravityZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_LaunchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_OutTossVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "UtilityFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunctionLibrary, "SuggestProjectileVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C42401, sizeof(UtilityFunctionLibrary_eventSuggestProjectileVelocity_Parms), Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtilityFunctionLibrary_NoRegister()
	{
		return UUtilityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUtilityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtilityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CapstoneGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtilityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtilityFunctionLibrary_GetDefaultGravityZ, "GetDefaultGravityZ" }, // 475225658
		{ &Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName, "GetLevelName" }, // 1583264404
		{ &Z_Construct_UFunction_UUtilityFunctionLibrary_SuggestProjectileVelocity, "SuggestProjectileVelocity" }, // 4170287687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtilityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UtilityFunctionLibrary.h" },
		{ "ModuleRelativePath", "UtilityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtilityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtilityFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUtilityFunctionLibrary_Statics::ClassParams = {
		&UUtilityFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UUtilityFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUtilityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtilityFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUtilityFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtilityFunctionLibrary, 2828321199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtilityFunctionLibrary(Z_Construct_UClass_UUtilityFunctionLibrary, &UUtilityFunctionLibrary::StaticClass, TEXT("/Script/CapstoneGame"), TEXT("UUtilityFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilityFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
