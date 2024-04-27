// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Obrero.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UObrero : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class LABORATORIO_API IObrero
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirGasolinera() = 0;
	virtual void ConstruirArmeria() = 0;
	virtual void ConstruirEscudo() = 0;
	virtual void ConstruirMotor() = 0;
	virtual void ConstruirComponenteChino() = 0;
};
