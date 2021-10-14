// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo_zhongqianGameMode.h"
#include "demo_zhongqianHUD.h"
#include "demo_zhongqianCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ademo_zhongqianGameMode::Ademo_zhongqianGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Ademo_zhongqianHUD::StaticClass();
}
