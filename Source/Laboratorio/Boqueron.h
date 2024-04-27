// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlanosDeAsedio.h"
#include "Boqueron.generated.h"

UCLASS()
class LABORATORIO_API ABoqueron : public AActor, public IPlanosDeAsedio
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoqueron();

private:
	AActor* Gasolinera;
	AActor* Ameria;
	AActor* Escudo;
	AActor* Motor;
	AActor* ComponenteChino;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGasolinera(AActor* _Gasolinera);
	void SetAmeria(AActor* _Ameria);
	void SetEscudo(AActor* _Escudo);
	void SetMotor(AActor* _Motor);
	void SetComponenteChino(AActor* _ComponenteChino);
};
