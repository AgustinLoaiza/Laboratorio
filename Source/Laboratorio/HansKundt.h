// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obrero.h"
#include "HansKundt.generated.h"

UCLASS()
class LABORATORIO_API AHansKundt : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHansKundt();

private:

	//El obrero que se va a mover
	IObrero* Obrero;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void CrearFortin();
	void SetObrero(AActor* obrero);

	class ABoqueron* GetBoqueron();
};
