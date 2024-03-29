// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5CppRobotDreamsGameMode.h"
#include "UE5CppRobotDreamsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5CppRobotDreamsGameMode::AUE5CppRobotDreamsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
