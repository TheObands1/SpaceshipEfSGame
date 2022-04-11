// Fill out your copyright notice in the Description page of Project Settings.


#include "ST_Planet.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "ST_Spaceship.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "../SpaceTravelGameModeBase.h"

// Sets default values
AST_Planet::AST_Planet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlanetMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpaceshipMeshComponent"));

	SpaceshipDetectorComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SpaceshipDetectorComponent"));
	SpaceshipDetectorComponent->SetSphereRadius(200);

	GravityAcceleration = 200;
}

// Called when the game starts or when spawned
void AST_Planet::BeginPlay()
{
	Super::BeginPlay();

	if (IsValid(PlanetMeshComponent))
	{
		PlanetMeshComponent->OnComponentHit.AddDynamic(this, &AST_Planet::DetectShipCompleteLanding);
	}

	if (IsValid(SpaceshipDetectorComponent))
	{
		SpaceshipDetectorComponent->OnComponentEndOverlap.AddDynamic(this, &AST_Planet::DetectShipTakeOff);
	}
}

void AST_Planet::DetectShipTakeOff(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//exit overlap
	if (IsValid(OtherActor))
	{
		AST_Spaceship* PossibleSpaceship = Cast<AST_Spaceship>(OtherActor);

		if (IsValid(PossibleSpaceship))
		{
			PossibleSpaceship->SetbIsThisTheFirstTakeOff(false);
		}
	}
}

void AST_Planet::DetectShipCompleteLanding(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (IsValid(OtherActor))
	{
		AST_Spaceship* PossibleSpaceship = Cast<AST_Spaceship>(OtherActor);

		if (IsValid(PossibleSpaceship))
		{
			if (!PossibleSpaceship->GetbIsThisTheFirstTakeOff())
			{
				PossibleSpaceship->SetbDidShipLand(true);
				ASpaceTravelGameModeBase* CurrentGameMode = Cast<ASpaceTravelGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

				if (PossibleSpaceship->GetDidShipLandedCorrectly())
				{
					if (IsValid(CurrentGameMode))
					{
						CurrentGameMode->Win();
					}
				}
				else
				{
					if (IsValid(CurrentGameMode))
					{
						CurrentGameMode->GameOver();
					}
				}
			}
		}
	}
}

// Called every frame
void AST_Planet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

