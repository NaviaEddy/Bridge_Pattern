// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class BRIDGE_1_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void EstablecerPersonaje(AActor* _Personaje);
	void VerificarCapsulaConsumida(FString _consumida, float _tiempo);
	void TiposCapsulas(FString _capsulas);
	void EmplearCapsula();

protected:
	class IIImplementacion* personaje;
};
