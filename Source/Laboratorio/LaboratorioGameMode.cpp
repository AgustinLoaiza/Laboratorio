// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaboratorioGameMode.h"
#include "LaboratorioPawn.h"
#include "TallerGeneral.h"

ALaboratorioGameMode::ALaboratorioGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ALaboratorioPawn::StaticClass();
}

void ALaboratorioGameMode::BeginPlay()
{
	Super::BeginPlay();

}

void ALaboratorioGameMode::Tick(float DeltaTime)
{
}

