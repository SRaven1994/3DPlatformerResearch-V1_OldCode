// Copyright Epic Games, Inc. All Rights Reserved.

#include "Research3DPlatformerGameMode.h"
#include "Research3DPlatformerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AResearch3DPlatformerGameMode::AResearch3DPlatformerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
