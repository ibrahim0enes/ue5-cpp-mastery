// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleAssault : ModuleRules
{
	public ObstacleAssault(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ObstacleAssault",
			"ObstacleAssault/Variant_Platforming",
			"ObstacleAssault/Variant_Platforming/Animation",
			"ObstacleAssault/Variant_Combat",
			"ObstacleAssault/Variant_Combat/AI",
			"ObstacleAssault/Variant_Combat/Animation",
			"ObstacleAssault/Variant_Combat/Gameplay",
			"ObstacleAssault/Variant_Combat/Interfaces",
			"ObstacleAssault/Variant_Combat/UI",
			"ObstacleAssault/Variant_SideScrolling",
			"ObstacleAssault/Variant_SideScrolling/AI",
			"ObstacleAssault/Variant_SideScrolling/Gameplay",
			"ObstacleAssault/Variant_SideScrolling/Interfaces",
			"ObstacleAssault/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
