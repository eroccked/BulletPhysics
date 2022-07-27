// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "destructible/DestructibleActor.h"
#include "DrawDebugHelpers.h"


// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	FHitResult HitResult;

	FVector StartTrace = this->GetActorLocation();
	FVector EndTrace = (Velocity * DeltaTime) + StartTrace;
	EndTrace.Z += this->GetActorRotation().Pitch;

	FCollisionQueryParams CollisionParams;
	CollisionParams.AddIgnoredActor(this);

	if(GetWorld()->LineTraceSingleByChannel(HitResult, StartTrace, EndTrace, ECC_Destructible, CollisionParams))
	{
		if (HitResult.GetActor())
		{
			DrawDebugSolidBox(GetWorld(), HitResult.ImpactPoint, FVector(10.f), FColor::Blue, true);
			DestructibleActor* Mesh = Cast<DestructibleActor>(HitResult.GetActor());

			Mesh->GetDestructibleComponent()->

		}
	}
	else
	{
		
	}
}

