// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealInkGameMode.h"
#include "UnrealInkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealInkGameMode::AUnrealInkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
