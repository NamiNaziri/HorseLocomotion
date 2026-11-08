// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PoseSearch/PoseSearchLibrary.h"
#include "GameFramework/Character.h"
#include "PoseSearchLibraryExtended.generated.h"

/**
 * 
 */
UCLASS()
class HORSELOCOMOTION_API UPoseSearchLibraryExtended : public UPoseSearchLibrary
{
	GENERATED_BODY()
	
public:

	/*UFUNCTION(Experimental, BlueprintPure, Category = "Animation|Pose Search", meta = (BlueprintThreadSafe, AdvancedDisplay = "ContinuingProperties, Future", Keywords = "PoseMatch"))
	static void MotionMatch(
		TArray<UObject*> AssetsToSearch,
		const FPoseSearchContinuingProperties ContinuingProperties,
		FPoseSearchBlueprintResult& Result);


	static void MotionMatch(
		UE::PoseSearch::FSearchContext& SearchContext,
		const TArrayView<const UObject*> AssetsToSearch,
		const FPoseSearchContinuingProperties& ContinuingProperties,
		UE::PoseSearch::FSearchResults& SearchResults);*/
	UFUNCTION(BlueprintCallable, Category = "Animation|Pose Search", meta = (BlueprintThreadSafe, AdvancedDisplay = "ContinuingProperties, Future", Keywords = "PoseMatch"))
	static void DrawPredictedTrajectory(ACharacter* Character, const FVector2D& Input, float SteeringStrength);

};
