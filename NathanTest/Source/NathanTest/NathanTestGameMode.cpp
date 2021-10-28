// Copyright Epic Games, Inc. All Rights Reserved.

#include "NathanTestGameMode.h"
#include "NathanTestHUD.h"
#include "NathanTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANathanTestGameMode::ANathanTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANathanTestHUD::StaticClass();
}
