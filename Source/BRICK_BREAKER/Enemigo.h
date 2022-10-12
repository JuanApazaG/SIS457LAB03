// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class BRICK_BREAKER_API AEnemigo : public AActor
{
	GENERATED_BODY()
private:
	//creamos variables
	float dano;
	float rebotar;
	float explotar;

public:	
	// Sets default values for this actor's properties
	AEnemigo();
	void Dano(float _dano);
	void Explotar(float _explotar);
	void Rebotar(float _rebotar);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float tamano = 30.0f;
	float color;
	float forma = 50.0f;
	float velocidad = 40.0f;
	float direccion = 10.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
