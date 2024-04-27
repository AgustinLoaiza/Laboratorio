// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.h"
#include "TallerGeneral.generated.h"

UCLASS()
class LABORATORIO_API ATallerGeneral : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATallerGeneral();

	UFUNCTION(BlueprintCallable, Category = "TallerGeneral")
	static ANaveEnemiga* FabricarNave(FString NaveaFabricar, UWorld* World, FVector SpawnLocation, FRotator SpawnRotation);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
