// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HellnightGameMode.h"
#include "HellnightHUD.h"
#include "HellnightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHellnightGameMode::AHellnightGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHellnightHUD::StaticClass();
}
