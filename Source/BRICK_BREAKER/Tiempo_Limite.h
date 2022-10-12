// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tiempo_Limite.generated.h"

UCLASS()
class BRICK_BREAKER_API ATiempo_Limite : public AActor
{
	GENERATED_BODY()
private:
	//creamos variables
	float acabarJuego;

public:	
	// Sets default values for this actor's properties
	ATiempo_Limite();
	void AcabarJuego(float _acabarJuego);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float tamano = 5.0f;
	float forma = 60.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
