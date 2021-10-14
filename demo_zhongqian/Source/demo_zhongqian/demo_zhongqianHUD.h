// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "demo_zhongqianHUD.generated.h"

UCLASS()
class Ademo_zhongqianHUD : public AHUD
{
	GENERATED_BODY()

public:
	Ademo_zhongqianHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

