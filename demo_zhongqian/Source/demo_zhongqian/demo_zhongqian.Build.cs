// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class demo_zhongqian : ModuleRules
{
	public demo_zhongqian(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
