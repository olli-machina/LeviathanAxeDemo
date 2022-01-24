// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LeviathanAxe/LeviathanAxeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeviathanAxeGameMode() {}
// Cross Module References
	LEVIATHANAXE_API UClass* Z_Construct_UClass_ALeviathanAxeGameMode_NoRegister();
	LEVIATHANAXE_API UClass* Z_Construct_UClass_ALeviathanAxeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LeviathanAxe();
// End Cross Module References
	void ALeviathanAxeGameMode::StaticRegisterNativesALeviathanAxeGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALeviathanAxeGameMode_NoRegister()
	{
		return ALeviathanAxeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALeviathanAxeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeviathanAxeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LeviathanAxe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeviathanAxeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LeviathanAxeGameMode.h" },
		{ "ModuleRelativePath", "LeviathanAxeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeviathanAxeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeviathanAxeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeviathanAxeGameMode_Statics::ClassParams = {
		&ALeviathanAxeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALeviathanAxeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALeviathanAxeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeviathanAxeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeviathanAxeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeviathanAxeGameMode, 2982213805);
	template<> LEVIATHANAXE_API UClass* StaticClass<ALeviathanAxeGameMode>()
	{
		return ALeviathanAxeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeviathanAxeGameMode(Z_Construct_UClass_ALeviathanAxeGameMode, &ALeviathanAxeGameMode::StaticClass, TEXT("/Script/LeviathanAxe"), TEXT("ALeviathanAxeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeviathanAxeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
