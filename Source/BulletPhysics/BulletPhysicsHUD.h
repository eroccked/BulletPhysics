// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BulletPhysicsHUD.generated.h"

UCLASS()
class ABulletPhysicsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ABulletPhysicsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

