// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "S05_TsetingGroundsGameMode.h"
#include "S05_TsetingGroundsHUD.h"
#include "S05_TsetingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS05_TsetingGroundsGameMode::AS05_TsetingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS05_TsetingGroundsHUD::StaticClass();
}
