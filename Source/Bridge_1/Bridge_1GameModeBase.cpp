// Copyright Epic Games, Inc. All Rights Reserved.
#include "Bridge_1GameModeBase.h"
#include "Capsula.h"
#include "NaveEnemiga.h"
#include "NaveJugador.h"
#include "NaveNodriza.h"

ABridge_1GameModeBase::ABridge_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABridge_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//Engendramos la nave enemiga
	Enemiga = GetWorld()->SpawnActor<ANaveEnemiga>(ANaveEnemiga::StaticClass());
	//Engendramos la nave del jugador
	Jugador = GetWorld()->SpawnActor<ANaveJugador>(ANaveJugador::StaticClass());
	//Engendramos la nave nodriza
	Nodriza = GetWorld()->SpawnActor<ANaveNodriza>(ANaveNodriza::StaticClass());

	//Engendramos la capsula
	Capsula = GetWorld()->SpawnActor<ACapsula>(ACapsula::StaticClass());

	//Establecemos para enemiga
	Capsula->EstablecerPersonaje(Enemiga);
	Capsula->VerificarCapsulaConsumida("consumida", 5.0f);
	Capsula->TiposCapsulas("Salto");
	Capsula->EmplearCapsula();

	//Establecemos para jugador
	Capsula->EstablecerPersonaje(Jugador);
	Capsula->VerificarCapsulaConsumida("consumida", 15.0f);
	Capsula->TiposCapsulas("Vida");
	Capsula->EmplearCapsula();

	//Establecemos para nodriza
	Capsula->EstablecerPersonaje(Nodriza);
	Capsula->VerificarCapsulaConsumida("noconsumida", 15.0f);
	Capsula->TiposCapsulas("Fuerza");
	Capsula->EmplearCapsula();
}

void ABridge_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
