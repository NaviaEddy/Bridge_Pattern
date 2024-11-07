// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IImplementacion.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIImplementacion : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class BRIDGE_1_API IIImplementacion
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual bool CapsulaConsumida(FString _consumida) = 0;
	virtual void HabilitarCapsula(float _tiempo) = 0;
	virtual bool DesHabilitarCapsula() = 0;
	virtual FString ObtenerTipoPoder() = 0;
	virtual void EstablecerTipoPoder(FString _Poder) = 0;
};
