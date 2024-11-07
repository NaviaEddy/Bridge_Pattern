// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveNodriza.h"

// Sets default values
ANaveNodriza::ANaveNodriza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TiempoCapsula = 0.0f;
	TipoPoder = "";
	VerificarCapsula = true;
}

// Called when the game starts or when spawned
void ANaveNodriza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANaveNodriza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool ANaveNodriza::CapsulaConsumida(FString _consumida)
{
	if (_consumida.Equals("consumida"))
	{
		return true;
	}
	return false;
}

void ANaveNodriza::HabilitarCapsula(float _tiempo)
{
	TiempoCapsula = _tiempo;
	VerificarCapsula = false;
}

bool ANaveNodriza::DesHabilitarCapsula()
{
	return VerificarCapsula;
}

FString ANaveNodriza::ObtenerTipoPoder()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Duracion: %f"), TiempoCapsula));
	return TipoPoder;
}

void ANaveNodriza::EstablecerTipoPoder(FString _Poder)
{
	TipoPoder = _Poder;
}

