// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Contador.generated.h"

UCLASS()
class BRICK_BREAKER_API AContador : public AActor
{
	GENERATED_BODY()
private:
	//creamos variables
	float contar;

public:	
	// Sets default values for this actor's properties
	AContador();
	void Contar(float _contar);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void BeginPlay() override;
	float tamano = 30.0f;
	float color;
	float forma = 50.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
