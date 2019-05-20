// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "InterpFloatingPawnMovement.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Movement, meta = (BlueprintSpawnableComponent))
class CAPSTONEGAME_API UInterpFloatingPawnMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()
public:
    void ApplyControlInputToVelocity(float);
};