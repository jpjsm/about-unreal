// Copyright Epic Games, Inc. All Rights Reserved.

#include "FirstPersonTutorialGameMode.h"
#include "FirstPersonTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirstPersonTutorialGameMode::AFirstPersonTutorialGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
