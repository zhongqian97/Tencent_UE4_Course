// Copyright Epic Games, Inc. All Rights Reserved.

#include "demoGameMode.h"
#include "demoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AdemoGameMode::AdemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
