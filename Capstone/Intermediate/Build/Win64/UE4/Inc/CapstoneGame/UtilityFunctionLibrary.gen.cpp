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
	CAPSTONEGAME_API UFunction* Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UUtilityFunctionLibrary::StaticRegisterNativesUUtilityFunctionLibrary()
	{
		UClass* Class = UUtilityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelName", &UUtilityFunctionLibrary::execGetLevelName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		{ &Z_Construct_UFunction_UUtilityFunctionLibrary_GetLevelName, "GetLevelName" }, // 1583264404
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
	IMPLEMENT_CLASS(UUtilityFunctionLibrary, 3927040506);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtilityFunctionLibrary(Z_Construct_UClass_UUtilityFunctionLibrary, &UUtilityFunctionLibrary::StaticClass, TEXT("/Script/CapstoneGame"), TEXT("UUtilityFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilityFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
