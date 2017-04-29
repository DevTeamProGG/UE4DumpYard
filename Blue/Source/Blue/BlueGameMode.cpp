// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Blue.h"
#include "BlueGameMode.h"
#include "BlueCharacter.h"

ABlueGameMode::ABlueGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = ABlueCharacter::StaticClass();	
}
