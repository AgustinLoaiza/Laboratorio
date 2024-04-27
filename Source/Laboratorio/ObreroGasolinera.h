// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "ObreroGasolinera.generated.h"

UCLASS()
class LABORATORIO_API AObreroGasolinera : public AActor, public IObrero 
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObreroGasolinera();

private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Gasolinera Obrero")
	class ABoqueron* Boqueron;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirGasolinera() override;

	virtual class ABoqueron* GetBoqueron(); //override;

};
