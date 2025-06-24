// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ch1_FirstGame/ch1_FirstGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodech1_FirstGameGameMode() {}
// Cross Module References
	CH1_FIRSTGAME_API UClass* Z_Construct_UClass_Ach1_FirstGameGameMode_NoRegister();
	CH1_FIRSTGAME_API UClass* Z_Construct_UClass_Ach1_FirstGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ch1_FirstGame();
// End Cross Module References
	void Ach1_FirstGameGameMode::StaticRegisterNativesAch1_FirstGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_Ach1_FirstGameGameMode_NoRegister()
	{
		return Ach1_FirstGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Ach1_FirstGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ch1_FirstGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ch1_FirstGameGameMode.h" },
		{ "ModuleRelativePath", "ch1_FirstGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Ach1_FirstGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::ClassParams = {
		&Ach1_FirstGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Ach1_FirstGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Ach1_FirstGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Ach1_FirstGameGameMode, 1317547643);
	template<> CH1_FIRSTGAME_API UClass* StaticClass<Ach1_FirstGameGameMode>()
	{
		return Ach1_FirstGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Ach1_FirstGameGameMode(Z_Construct_UClass_Ach1_FirstGameGameMode, &Ach1_FirstGameGameMode::StaticClass, TEXT("/Script/ch1_FirstGame"), TEXT("Ach1_FirstGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Ach1_FirstGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
