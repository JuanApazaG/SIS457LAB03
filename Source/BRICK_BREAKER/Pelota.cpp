// Fill out your copyright notice in the Description page of Project Settings.


#include "Pelota.h"

// Sets default values
APelota::APelota()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void APelota::Dano(float _dano)
{
	dano = _dano;
}
void APelota::Crecer(float _crecer)
{
	crecer = _crecer;
}
void APelota::Multiplicarse(float _multiplicarse)
{
	multiplicarse = _multiplicarse;
}
void APelota::Rebotar(float _rebotar)
{
	rebotar = _rebotar;
}
void APelota::Destruirse(float _destruirse)
{
	destruirse = _destruirse;
}
// Called when the game starts or when spawned
void APelota::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APelota::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

