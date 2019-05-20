// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapstoneGame/CustomViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomViewportClient() {}
// Cross Module References
	CAPSTONEGAME_API UClass* Z_Construct_UClass_UCustomViewportClient_NoRegister();
	CAPSTONEGAME_API UClass* Z_Construct_UClass_UCustomViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_CapstoneGame();
// End Cross Module References
	void UCustomViewportClient::StaticRegisterNativesUCustomViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UCustomViewportClient_NoRegister()
	{
		return UCustomViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UCustomViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_CapstoneGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomViewportClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomViewportClient.h" },
		{ "ModuleRelativePath", "CustomViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomViewportClient_Statics::ClassParams = {
		&UCustomViewportClient::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCustomViewportClient_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCustomViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomViewportClient, 2395137527);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomViewportClient(Z_Construct_UClass_UCustomViewportClient, &UCustomViewportClient::StaticClass, TEXT("/Script/CapstoneGame"), TEXT("UCustomViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
