// Copyright Epic Games, Inc. All Rights Reserved.

#include "LaboratorioGameMode.h"
#include "LaboratorioPawn.h"
#include "NaveAerea.h"
#include "NaveTerrestre.h"
#include "TallerGeneral.h"

ALaboratorioGameMode::ALaboratorioGameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = ALaboratorioPawn::StaticClass();
}

void ALaboratorioGameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	if (!World)
	{
		return;
	}

	// Configura las coordenadas de spawn para cada tipo de nave
	FVector UbicacionNaveAerea = FVector(500.0f, 800.0f, 250.0f);
	FVector UbicacionNaveTerrestre = FVector(500.0f, 1000.0f, 250.0f); 

	// Usa la fábrica para crear las naves enemigas con diferentes ubicaciones de spawn
	ANaveEnemiga* NuevaNaveAerea = ATallerGeneral::FabricarNave("Aerea", World, UbicacionNaveAerea, FRotator::ZeroRotator);
	ANaveEnemiga* NuevaNaveTerrestre = ATallerGeneral::FabricarNave("Terrestre", World, UbicacionNaveTerrestre, FRotator::ZeroRotator);
}

void ALaboratorioGameMode::Tick(float DeltaTime)
{
}

