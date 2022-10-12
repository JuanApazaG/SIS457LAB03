// Fill out your copyright notice in the Description page of Project Settings.


#include "Paleta.h"

// Sets default values
APaleta::APaleta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APaleta::Desplazarse(float _desplazarse)
{
	desplazarse = _desplazarse;
}
void APaleta::Empujar(float _empujar)
{
	empujar = _empujar;
}
// Called when the game starts or when spawned
void APaleta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaleta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

