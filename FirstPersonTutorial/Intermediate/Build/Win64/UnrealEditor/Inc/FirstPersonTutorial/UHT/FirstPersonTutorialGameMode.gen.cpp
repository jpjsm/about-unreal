// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonTutorial/FirstPersonTutorialGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonTutorialGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FIRSTPERSONTUTORIAL_API UClass* Z_Construct_UClass_AFirstPersonTutorialGameMode();
	FIRSTPERSONTUTORIAL_API UClass* Z_Construct_UClass_AFirstPersonTutorialGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPersonTutorial();
// End Cross Module References
	void AFirstPersonTutorialGameMode::StaticRegisterNativesAFirstPersonTutorialGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonTutorialGameMode);
	UClass* Z_Construct_UClass_AFirstPersonTutorialGameMode_NoRegister()
	{
		return AFirstPersonTutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonTutorial,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstPersonTutorialGameMode.h" },
		{ "ModuleRelativePath", "FirstPersonTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonTutorialGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::ClassParams = {
		&AFirstPersonTutorialGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFirstPersonTutorialGameMode()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonTutorialGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonTutorialGameMode.OuterSingleton, Z_Construct_UClass_AFirstPersonTutorialGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonTutorialGameMode.OuterSingleton;
	}
	template<> FIRSTPERSONTUTORIAL_API UClass* StaticClass<AFirstPersonTutorialGameMode>()
	{
		return AFirstPersonTutorialGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonTutorialGameMode);
	AFirstPersonTutorialGameMode::~AFirstPersonTutorialGameMode() {}
	struct Z_CompiledInDeferFile_FID_repos_bitbucket_about_Unreal_FirstPersonTutorial_Source_FirstPersonTutorial_FirstPersonTutorialGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repos_bitbucket_about_Unreal_FirstPersonTutorial_Source_FirstPersonTutorial_FirstPersonTutorialGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonTutorialGameMode, AFirstPersonTutorialGameMode::StaticClass, TEXT("AFirstPersonTutorialGameMode"), &Z_Registration_Info_UClass_AFirstPersonTutorialGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonTutorialGameMode), 3877062323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_repos_bitbucket_about_Unreal_FirstPersonTutorial_Source_FirstPersonTutorial_FirstPersonTutorialGameMode_h_2030451690(TEXT("/Script/FirstPersonTutorial"),
		Z_CompiledInDeferFile_FID_repos_bitbucket_about_Unreal_FirstPersonTutorial_Source_FirstPersonTutorial_FirstPersonTutorialGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_repos_bitbucket_about_Unreal_FirstPersonTutorial_Source_FirstPersonTutorial_FirstPersonTutorialGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
