// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemiga.h"

// Sets default values
ANaveEnemiga::ANaveEnemiga()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;
}

// Called when the game starts or when spawned
void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ANaveEnemiga::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void ANaveEnemiga::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool ANaveEnemiga::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString ANaveEnemiga::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void ANaveEnemiga::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}

