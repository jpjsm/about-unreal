// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ch1_FirstGame : ModuleRules
{
	public ch1_FirstGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
