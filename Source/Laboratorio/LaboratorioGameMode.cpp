// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaboratorioGameMode.h"
#include "LaboratorioPawn.h"

ALaboratorioGameMode::ALaboratorioGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ALaboratorioPawn::StaticClass();
}

