// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CapstoneGame/InterpFloatingPawnMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpFloatingPawnMovement() {}
// Cross Module References
	CAPSTONEGAME_API UClass* Z_Construct_UClass_UInterpFloatingPawnMovement_NoRegister();
	CAPSTONEGAME_API UClass* Z_Construct_UClass_UInterpFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_CapstoneGame();
// End Cross Module References
	void UInterpFloatingPawnMovement::StaticRegisterNativesUInterpFloatingPawnMovement()
	{
	}
	UClass* Z_Construct_UClass_UInterpFloatingPawnMovement_NoRegister()
	{
		return UInterpFloatingPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UInterpFloatingPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_CapstoneGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "InterpFloatingPawnMovement.h" },
		{ "ModuleRelativePath", "InterpFloatingPawnMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpFloatingPawnMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::ClassParams = {
		&UInterpFloatingPawnMovement::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterpFloatingPawnMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterpFloatingPawnMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterpFloatingPawnMovement, 478411657);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpFloatingPawnMovement(Z_Construct_UClass_UInterpFloatingPawnMovement, &UInterpFloatingPawnMovement::StaticClass, TEXT("/Script/CapstoneGame"), TEXT("UInterpFloatingPawnMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpFloatingPawnMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
