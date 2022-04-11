// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_VictoryLocation.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ST_Spaceship.h"

// Sets default values
AST_VictoryLocation::AST_VictoryLocation()
{
	LocationMeshComponentForAnchor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LocationMeshComponentForAnchor"));
	RootComponent = LocationMeshComponentForAnchor;
	
	//LocationParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LocationParticleSystem"));
	//LocationParticleSystem->SetupAttachment(RootComponent);

	LocationCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("LocationCollider"));
	LocationCollider->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AST_VictoryLocation::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(LocationCollider))
	{
		LocationCollider->OnComponentBeginOverlap.AddDynamic(this, &AST_VictoryLocation::DetectSpaceshipLanding);
	}
	
}

void AST_VictoryLocation::DetectSpaceshipLanding(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (IsValid(OtherActor))
	{
		AST_Spaceship* PossibleSpaceship = Cast<AST_Spaceship>(OtherActor);

		if (IsValid(PossibleSpaceship))
		{
			PossibleSpaceship->SetbDidShipLandCorrectly(true);
		}
	}
}


