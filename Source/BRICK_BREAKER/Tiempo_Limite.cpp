// Fill out your copyright notice in the Description page of Project Settings.


#include "Tiempo_Limite.h"

// Sets default values
ATiempo_Limite::ATiempo_Limite()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void ATiempo_Limite::AcabarJuego(float _acabarJuego)
{
	acabarJuego = _acabarJuego;
}
// Called when the game starts or when spawned
void ATiempo_Limite::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATiempo_Limite::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

