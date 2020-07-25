// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShoterGameMode.h"
#include "ShoterHUD.h"
#include "ShoterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShoterGameMode::AShoterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShoterHUD::StaticClass();
}
