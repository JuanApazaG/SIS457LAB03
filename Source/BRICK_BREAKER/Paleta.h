// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paleta.generated.h"

UCLASS()
class BRICK_BREAKER_API APaleta : public AActor
{
	GENERATED_BODY()
private:
	//creamos variables
	float desplazarse;
	float empujar;

public:	
	// Sets default values for this actor's properties
	APaleta();
	void Desplazarse(float _desplazarse);
	void Empujar(float _empujar);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float tamano = 30.0f;
	float color;
	float forma = 50.0f;
	float velocidad = 40.0f;
	float direccion = 10.0f;
	float textura;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
