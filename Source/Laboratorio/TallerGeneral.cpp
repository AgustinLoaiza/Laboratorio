// Fill out your copyright notice in the Description page of Project Settings.


#include "TallerGeneral.h"
#include "NaveAerea.h"
#include "NaveTerrestre.h"

// Sets default values
ATallerGeneral::ATallerGeneral()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATallerGeneral::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATallerGeneral::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ANaveEnemiga* ATallerGeneral::FabricarNave(FString TipoNave, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation)
{
    if (!World)
    {
        return nullptr;
    }
    FVector SpawnLocationAdjusted = SpawnLocation;
    if (TipoNave == "Aerea")
    {
        ANaveAerea* NuevaNave = World->SpawnActor<ANaveAerea>(SpawnLocationAdjusted, SpawnRotation);
        return NuevaNave;
    }
    else if (TipoNave == "Terrestre")
    {
        ANaveTerrestre* NuevaNave = World->SpawnActor<ANaveTerrestre>(SpawnLocationAdjusted, SpawnRotation);
        return NuevaNave;
    }

    return nullptr;
}



