// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IImplementacion.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveJugador.generated.h"

UCLASS()
class BRIDGE_1_API ANaveJugador : public AActor, public IIImplementacion
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANaveJugador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	bool CapsulaConsumida(FString _consumida) override;
	void HabilitarCapsula(float _tiempo) override;
	bool DesHabilitarCapsula() override;
	FString ObtenerTipoPoder() override;
	void EstablecerTipoPoder(FString _Poder) override;

protected:
	float TiempoCapsula;
	FString TipoPoder;
	bool VerificarCapsula;

};
