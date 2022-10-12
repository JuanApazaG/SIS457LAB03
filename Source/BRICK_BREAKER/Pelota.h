// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pelota.generated.h"

UCLASS()
class BRICK_BREAKER_API APelota : public AActor
{
	GENERATED_BODY()
private:
	//creamos variables
	float dano;
	float crecer;
	float multiplicarse;
	float rebotar;
	float destruirse;

public:	
	// Sets default values for this actor's properties
	APelota();
	void Dano(float _dano);
	void Crecer(float _crecer);
	void Multiplicarse(float _multiplicarse);
	void Rebotar(float _rebotar);
	void Destruirse(float _destruirse);

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
