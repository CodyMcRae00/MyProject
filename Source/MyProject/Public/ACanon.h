// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ACanon.generated.h"

UCLASS()
class MYPROJECT_API AACanon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AACanon();
    UPROPERTY(EditAnywhere, Category = "Mesh")
    UStaticMesh* MeshAsset = nullptr;
	UStaticMeshComponent* MeshComponent = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
    // called when a value is changed
	virtual void OnConstruction(const FTransform& Transform) override; 
    
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
