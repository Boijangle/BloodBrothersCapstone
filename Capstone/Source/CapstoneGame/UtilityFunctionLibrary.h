// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Actor.h" 
#include "UtilityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONEGAME_API UUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure, Category = "Utility", meta = (DefaultToSelf = "Actor"))
    static FName GetLevelName(AActor* Actor);

	UFUNCTION(BlueprintPure, Category = "Utility")
    static float GetDefaultGravityZ();

	UFUNCTION(BlueprintCallable, Category = "Utility", meta=(WorldContext="WorldContextObject"))
    static bool SuggestProjectileVelocity(const UObject* WorldContextObject, FVector& OutTossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, float CollisionRadius, const TArray<AActor*>& ActorsToIgnore, bool bFavorHighArc, bool bDrawDebug);
};
