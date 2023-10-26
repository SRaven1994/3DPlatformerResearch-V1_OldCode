// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Research3DPlatformer : ModuleRules
{
	public Research3DPlatformer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
