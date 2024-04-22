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

	// Configura las coordenadas de spawn para cada tipo de nave
	FVector UbicacionNaveAerea = FVector(300.0f, -1200.0f, 250.0f); 
	FVector UbicacionNaveTerrestre = FVector(-300.0f, -1000.0f, 250.0f); 

	UWorld* World = GetWorld();
	
	if (World!=nullptr)
	{
		for (int i = 0; i < 4; i++) {
			FVector PosicionNaveActual = FVector(UbicacionNaveAerea.X, UbicacionNaveAerea.Y + i * 2200, UbicacionNaveAerea.Z);
			ANaveEnemiga* NuevaNaveAerea = ATallerGeneral::FabricarNave("Aerea", World, PosicionNaveActual, FRotator::ZeroRotator);
			TANavesEnemigas.Push(NuevaNaveAerea);
		}
		for (int i = 0; i < 4; i++) {
			FVector PosicionNaveActual = FVector(UbicacionNaveTerrestre.X, UbicacionNaveTerrestre.Y + i * 1800, UbicacionNaveTerrestre.Z);
			ANaveEnemiga* NuevaNaveTerrestre = ATallerGeneral::FabricarNave("Terrestre", World, PosicionNaveActual, FRotator::ZeroRotator); 
			TANavesEnemigas.Push(NuevaNaveTerrestre); 
		}
	}
	//if (!World)
	//{
	//	return;
	//}

	//// Aplicacion del patron para creacion de naves
	//ANaveEnemiga* NuevaNaveAerea = ATallerGeneral::FabricarNave("Aerea", World, UbicacionNaveAerea, FRotator::ZeroRotator);
	//ANaveEnemiga* NuevaNaveTerrestre = ATallerGeneral::FabricarNave("Terrestre", World, UbicacionNaveTerrestre, FRotator::ZeroRotator);
}

void ALaboratorioGameMode::Tick(float DeltaTime)
{
}

