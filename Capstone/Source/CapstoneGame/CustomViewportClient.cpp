// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomViewportClient.h"
#include "Engine.h"

bool UCustomViewportClient::InputKey(FViewport * Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed, bool bGamepad)
{
	if (EventType == IE_Released
		&& (Key == EKeys::Gamepad_Special_Right) || (Key == EKeys::SpaceBar))
	{
		// join or leave?
		ULocalPlayer* localPlayer = GEngine->GetLocalPlayerFromControllerId(GetWorld(), ControllerId);

		if (localPlayer == nullptr)
		{
			if (bGamepad)
			{
				ControllerId++;
			}
			UGameplayStatics::CreatePlayer(this, ControllerId+1, true);

			return true;
		}
	}

	return Super::InputKey(Viewport, ControllerId, Key, EventType, AmountDepressed, bGamepad);
}