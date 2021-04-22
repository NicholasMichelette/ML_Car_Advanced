// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ML_Car_AdvancedHud.generated.h"

UCLASS(config = Game)
class AML_Car_AdvancedHud : public AHUD
{
	GENERATED_BODY()

public:
	AML_Car_AdvancedHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
