// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class BRICK_BREAKER_API ACapsula : public AActor
{
	GENERATED_BODY()
	
private:
	float desplazarse;
	float desaparecer;

public:	
	// Sets default values for this actor's properties
	ACapsula();
	void Desaparecer(float _desaparecer);
	void Desplazarse(float _desplazarse);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float tamano = 5.0f;
	float color;
	float forma = 10.0f;
	float velocidad = 5.0f;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
