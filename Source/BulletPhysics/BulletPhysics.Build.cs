// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BulletPhysics : ModuleRules
{
	public BulletPhysics(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
