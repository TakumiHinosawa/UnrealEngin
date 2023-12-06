// Copyright Epic Games, Inc. All Rights Reserved.

#include "test_cppGameMode.h"
#include "test_cppCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atest_cppGameMode::Atest_cppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
