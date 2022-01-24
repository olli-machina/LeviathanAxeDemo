// Copyright Epic Games, Inc. All Rights Reserved.

#include "LeviathanAxeGameMode.h"
#include "LeviathanAxeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALeviathanAxeGameMode::ALeviathanAxeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
