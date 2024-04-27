// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NaveEnemiga.h"
#include "NaveAerea.generated.h"

/**
 * 
 */
UCLASS()
class LABORATORIO_API ANaveAerea : public ANaveEnemiga
{
	GENERATED_BODY()
	

public:
	ANaveAerea();
	FString NaveaFabricar = "Aerea";
};
