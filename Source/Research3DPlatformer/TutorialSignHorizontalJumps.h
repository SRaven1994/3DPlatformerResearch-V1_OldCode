// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TutorialSignHorizontalJumps.generated.h"

UCLASS()
class RESEARCH3DPLATFORMER_API ATutorialSignHorizontalJumps : public AActor
{
	GENERATED_BODY()
	
public:

	// Create mesh sign
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Sign;

	// Create mesh post
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* Post;

	// Create box collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollisionVolume;

	// Sets default values for this actor's properties
	ATutorialSignHorizontalJumps();

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
