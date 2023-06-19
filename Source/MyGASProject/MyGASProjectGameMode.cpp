// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGASProjectGameMode.h"
#include "MyGASProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyGASProjectGameMode::AMyGASProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
