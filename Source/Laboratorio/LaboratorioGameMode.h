// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LaboratorioGameMode.generated.h"

class ANaveEnemiga;
class ANaveAerea;
class ANaveTerrestre;

UCLASS(MinimalAPI)
class ALaboratorioGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALaboratorioGameMode();

	TArray<ANaveEnemiga* >TANavesEnemigas;

protected:
	virtual void BeginPlay() override;

public:

	void Tick(float DeltaTime) override;
};



