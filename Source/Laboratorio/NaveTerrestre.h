// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveTerrestre.generated.h"

/**
 * 
 */
UCLASS()
class LABORATORIO_API ANaveTerrestre : public ANaveEnemiga
{
	GENERATED_BODY()

public:
	ANaveTerrestre();

	FString NaveaFabricar = "Terrestre";
	
};
