// Fill out your copyright notice in the Description page of Project Settings.

#include "UtilityFunctionLibrary.h"
#include "PhysicsEngine/PhysicsSettings.h"

FName UUtilityFunctionLibrary::GetLevelName(AActor* Actor)
{
    if (Actor != nullptr)
    {
        return Actor->GetLevel()->GetOuter()->GetFName();
    }
 
    return NAME_None;
}

float UUtilityFunctionLibrary::GetDefaultGravityZ()
{
    return UPhysicsSettings::Get()->DefaultGravityZ;
}

bool UUtilityFunctionLibrary::SuggestProjectileVelocity(const UObject* WorldContextObject, FVector& OutTossVelocity, FVector StartLocation, FVector EndLocation, float LaunchSpeed, float OverrideGravityZ, ESuggestProjVelocityTraceOption::Type TraceOption, float CollisionRadius, const TArray<AActor*>& ActorsToIgnore, bool bFavorHighArc, bool bDrawDebug)
{
	// simple pass-through to the C++ interface
	return UGameplayStatics::SuggestProjectileVelocity(WorldContextObject, OutTossVelocity, StartLocation, EndLocation, LaunchSpeed, bFavorHighArc, CollisionRadius, OverrideGravityZ, TraceOption, FCollisionResponseParams::DefaultResponseParam, ActorsToIgnore, bDrawDebug);
}