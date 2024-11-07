// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveJugador.h"

// Sets default values
ANaveJugador::ANaveJugador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;
}

// Called when the game starts or when spawned
void ANaveJugador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveJugador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ANaveJugador::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}

	return false;
}

void ANaveJugador::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool ANaveJugador::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString ANaveJugador::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void ANaveJugador::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}

