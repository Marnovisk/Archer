// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArcherGameMode.h"
#include "ArcherCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArcherGameMode::AArcherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
