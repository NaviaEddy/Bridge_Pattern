// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"
#include "IImplementacion.h"

// Sets default values
ACapsula::ACapsula()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACapsula::EstablecerPersonaje(AActor* _Personaje)
{
	personaje = Cast<IIImplementacion>(_Personaje);
}

void ACapsula::VerificarCapsulaConsumida(FString _consumida, float _tiempo)
{
	if (personaje->CapsulaConsumida(_consumida))
	{
		personaje->HabilitarCapsula(_tiempo);
	}
	else
	{
		personaje->DesHabilitarCapsula();
	}
}

void ACapsula::TiposCapsulas(FString _capsulas)
{
	if (personaje->DesHabilitarCapsula())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("La capsula no fue consumida")));
	}
	else {
		if (_capsulas.Equals("Salto"))
		{
			personaje->EstablecerTipoPoder("Salto");
		}
		if (_capsulas.Equals("Vida"))
		{
			personaje->EstablecerTipoPoder("Vida");
		}
		if (_capsulas.Equals("Velocidad"))
		{
			personaje->EstablecerTipoPoder("Velocidad");
		}
		if (_capsulas.Equals("Fuerza"))
		{
			personaje->EstablecerTipoPoder("Fuerza");
		}
	}
}

void ACapsula::EmplearCapsula()
{
	if (personaje->DesHabilitarCapsula())
	{
		return;
	}
	else {
		FString poder = personaje->ObtenerTipoPoder();
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("El poder es: %s"), *poder));
	}
	
}

