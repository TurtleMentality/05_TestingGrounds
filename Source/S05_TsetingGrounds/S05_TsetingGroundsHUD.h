// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S05_TsetingGroundsHUD.generated.h"

UCLASS()
class AS05_TsetingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS05_TsetingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

