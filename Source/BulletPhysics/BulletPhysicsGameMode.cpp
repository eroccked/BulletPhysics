// Copyright Epic Games, Inc. All Rights Reserved.

#include "BulletPhysicsGameMode.h"
#include "BulletPhysicsHUD.h"
#include "BulletPhysicsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABulletPhysicsGameMode::ABulletPhysicsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ABulletPhysicsHUD::StaticClass();
}
