// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

#include "Slash/DebugMacros.h"





AItem::AItem() : RunningTime(0.f), Amplitude(0.25f), TimeConstant(5.f)
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}


void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;
	AddActorWorldOffset(FVector(0.f, 0.f, TransformedSin()));
	AddActorWorldRotation(FRotator(0.f, 0.f, TransformedSin()));
}

float AItem::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItem::TransformedCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}
 