// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HorseLocomotion : ModuleRules
{
	public HorseLocomotion(ReadOnlyTargetRules Target) : base(Target)
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
			"HorseLocomotion",
			"HorseLocomotion/Variant_Platforming",
			"HorseLocomotion/Variant_Platforming/Animation",
			"HorseLocomotion/Variant_Combat",
			"HorseLocomotion/Variant_Combat/AI",
			"HorseLocomotion/Variant_Combat/Animation",
			"HorseLocomotion/Variant_Combat/Gameplay",
			"HorseLocomotion/Variant_Combat/Interfaces",
			"HorseLocomotion/Variant_Combat/UI",
			"HorseLocomotion/Variant_SideScrolling",
			"HorseLocomotion/Variant_SideScrolling/AI",
			"HorseLocomotion/Variant_SideScrolling/Gameplay",
			"HorseLocomotion/Variant_SideScrolling/Interfaces",
			"HorseLocomotion/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
