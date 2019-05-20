// Fill out your copyright notice in the Description page of Project Settings.

#include "InterpFloatingPawnMovement.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "GameFramework/WorldSettings.h"

void UInterpFloatingPawnMovement::ApplyControlInputToVelocity(float DeltaTime)
{
    Velocity = (GetPendingInputVector() - UpdatedComponent->GetComponentLocation()) / DeltaTime;

	ConsumeInputVector();
}