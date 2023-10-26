// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeathPlane.generated.h"

UCLASS()
class RESEARCH3DPLATFORMER_API ADeathPlane : public AActor
{
	GENERATED_BODY()
	
public:

	// Create Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	// Create sphere collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionVolume;

	// Sets default values for this actor's properties
	ADeathPlane();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Create Collision Functions
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* newComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
