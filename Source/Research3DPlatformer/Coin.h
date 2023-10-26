// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Coin.generated.h"

UCLASS()
class RESEARCH3DPLATFORMER_API ACoin : public AActor
{
	GENERATED_BODY()
	
public:

	// Create Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Mesh;

	// Create is rotating
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rotations, meta = (AllowPrivateAccess = "true"))
	bool bRotate;

	// Create rotation rate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rotations, meta = (AllowPrivateAccess = "true"))
	float RotationRate;

	// Create sphere collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollisionVolume;

	// Sets default values for this actor's properties
	ACoin();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Create collision functions
	UFUNCTION()
	virtual void OnOverlapBegin(class UPrimitiveComponent* newComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

};
