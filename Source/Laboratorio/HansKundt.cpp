// Fill out your copyright notice in the Description page of Project Settings.


#include "HansKundt.h"
#include "Boqueron.h"

// Sets default values
AHansKundt::AHansKundt()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHansKundt::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHansKundt::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHansKundt::CrearFortin()
{
	if (!Obrero)
	{
		UE_LOG(LogTemp, Error, TEXT("No hay obrero, te sugiero que contrates uno"));
		return;
	}

	Obrero->ConstruirGasolinera();
	//.......
}

void AHansKundt::SetObrero(AActor* obrero)
{
	Obrero=Cast<IObrero>(obrero);
}

ABoqueron* AHansKundt::GetBoqueron()
{
	if (Obrero)
	{
		return Obrero->GetBoqueron();
	}
	return nullptr;
}

