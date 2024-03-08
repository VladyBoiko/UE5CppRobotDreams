// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5CppRobotDreams : ModuleRules
{
	public UE5CppRobotDreams(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "GameplayAbilities" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
