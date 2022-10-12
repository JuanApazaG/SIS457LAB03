// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Escenario.generated.h"

UCLASS()
class BRICK_BREAKER_API AEscenario : public AActor
{
	GENERATED_BODY()
private:
	//creamos variables
	float cambiarEscena;
	float reiniciar;

public:	
	// Sets default values for this actor's properties
	AEscenario();
	void CambiarEscena(float _cambiarEscena);
	void Reiniciar(float _reiniciar);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float tamano = 30.0f;
	float color;
	float forma = 50.0f;
	float limite = 900.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
