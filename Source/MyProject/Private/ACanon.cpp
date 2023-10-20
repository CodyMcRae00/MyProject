// Fill out your copyright notice in the Description page of Project Settings.


#include "ACanon.h"

// Sets default values
AACanon::AACanon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent->SetupAttachment(RootComponent);
}


void AACanon::OnConstruction(const FTransform&)
{
	if (MeshAsset != nullptr) MeshComponent->SetStaticMesh(MeshAsset);
}



// Called when the game starts or when spawned
void AACanon::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AACanon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

