// Copyright Epic Games, Inc. All Rights Reserved.

#include "ML_Car_AdvancedGameMode.h"
#include "ML_Car_AdvancedPawn.h"
#include "ML_Car_AdvancedHud.h"

AML_Car_AdvancedGameMode::AML_Car_AdvancedGameMode()
{
	DefaultPawnClass = AML_Car_AdvancedPawn::StaticClass();
	HUDClass = AML_Car_AdvancedHud::StaticClass();
}
