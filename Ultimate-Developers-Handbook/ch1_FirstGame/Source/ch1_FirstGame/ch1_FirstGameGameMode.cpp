// Copyright Epic Games, Inc. All Rights Reserved.

#include "ch1_FirstGameGameMode.h"
#include "ch1_FirstGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ach1_FirstGameGameMode::Ach1_FirstGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
