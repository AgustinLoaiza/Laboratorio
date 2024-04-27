// Fill out your copyright notice in the Description page of Project Settings.


#include "Boqueron.h"

// Sets default values
ABoqueron::ABoqueron()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoqueron::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoqueron::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoqueron::SetGasolinera(AActor* _Gasolinera)
{
	Gasolinera=_Gasolinera;
}

void ABoqueron::SetAmeria(AActor* _Ameria)
{
	Ameria=_Ameria;
}

void ABoqueron::SetEscudo(AActor* _Escudo)
{
	Escudo=_Escudo;
}

void ABoqueron::SetMotor(AActor* _Motor)
{
	Motor=_Motor;
}

void ABoqueron::SetComponenteChino(AActor* _ComponenteChino)
{
	ComponenteChino=_ComponenteChino;
}

