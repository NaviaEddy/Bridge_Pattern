// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bridge_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BRIDGE_1_API ABridge_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABridge_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ACapsula* Capsula;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveEnemiga* Enemiga;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveJugador* Jugador;

	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class ANaveNodriza* Nodriza;

	
};
