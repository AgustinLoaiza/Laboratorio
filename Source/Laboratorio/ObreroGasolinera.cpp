// Fill out your copyright notice in the Description page of Project Settings.


#include "ObreroGasolinera.h"
#include "Boqueron.h"

// Sets default values
AObreroGasolinera::AObreroGasolinera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObreroGasolinera::BeginPlay()
{
	Super::BeginPlay();

	// Crear Boqueron
	Boqueron = GetWorld()->SpawnActor<ABoqueron>(ABoqueron::StaticClass());

	//Adjuntar Boqueron al Obrero
	Boqueron->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	
}

// Called every frame
void AObreroGasolinera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObreroGasolinera::ConstruirGasolinera()
{
	if (!Boqueron)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha creado la Gasolinera"));
		return;
	}
	//Boqueron->SetGasolinera(); 
}

void AObreroGasolinera::ConstruirArmeria()
{
	if (!Boqueron)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha creado la Armeria"));
		return;
	}
}

void AObreroGasolinera::ConstruirEscudo()
{
	if (!Boqueron)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha creado el escudo"));
		return;
	}
}

void AObreroGasolinera::ConstruirMotor()
{
	if (!Boqueron)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha creado el motor"));
		return;
	}
}

void AObreroGasolinera::ConstruirComponenteChino()
{
	if (!Boqueron)
	{
		UE_LOG(LogTemp, Warning, TEXT("No se ha creado el componente chino"));
		return;
	}
}

ABoqueron* AObreroGasolinera::GetBoqueron()
{
	return Boqueron;
}

