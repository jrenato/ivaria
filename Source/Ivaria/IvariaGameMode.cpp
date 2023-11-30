// Copyright Epic Games, Inc. All Rights Reserved.

#include "IvariaGameMode.h"
#include "IvariaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIvariaGameMode::AIvariaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
