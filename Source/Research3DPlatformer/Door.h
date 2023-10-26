// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "Door.generated.h"

UCLASS()
class RESEARCH3DPLATFORMER_API ADoor : public AActor
{
	GENERATED_BODY()
	
public:

	// Create mesh door rotate
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DoorRotate;
	
	// Create mesh door
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* DoorMesh;

	// Create box collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MeshCollsions, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionVolume;

	// Timeline to rotate the open toward open or close
	UPROPERTY(EditAnywhere)
	FTimeline Timeline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* CurveFloat;

	// Sets default values for this actor's properties
	ADoor();

	// is door opened
	bool DoorOpened = false;

	// Is door closed
	bool bIsDoorClosed = true;

	// Initial door rotation angle
	float DoorRotateAngle = 90.0f;

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

	// Create door functions
	UFUNCTION()
	void OpenDoor(float Value);

	// Create activate door function
	UFUNCTION()
	void ActivateDoor();
};
