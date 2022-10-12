// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

UCLASS()
class BRICK_BREAKER_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
private:
	//creamos variables
	float reducirVida;
	float desaparecer;

public:	
	// Sets default values for this actor's properties
	ALadrillo();
	//metodos
	void Desaparecer(float _desaparecer);
	void ReducirVida(float _reducirVida);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//propiedades
	int vida = 100.0f;
	float tamano = 20.0f;
	float color ;
	float forma = 500.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
