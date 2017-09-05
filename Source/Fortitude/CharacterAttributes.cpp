// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterAttributes.h"


// Sets default values for this component's properties
UCharacterAttributes::UCharacterAttributes()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
	elementalResists[ EElementType::Fire ] = 0;
	elementalResists[ EElementType::Ice] = 0;
	elementalResists[ EElementType::Wind ] = 0;
	elementalResists[ EElementType::Earth ] = 0;
	elementalResists[ EElementType::Lightning ] = 0;
	elementalResists[ EElementType::Water ] = 0;
	elementalResists[ EElementType::Dark] = 0;
	elementalResists[ EElementType::Holy ] = 0;
}


// Called when the game starts
void UCharacterAttributes::BeginPlay()
{
	Super::BeginPlay();

	// ...
	bAutoActivate = true;
}


// Called every frame
void UCharacterAttributes::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UCharacterAttributes::SetStrength( int str ) {
	strength = FMath::Clamp<int32>( str, 0, INT_MAX );
}

void UCharacterAttributes::SetDexterity( int dex ) {
	dexterity = FMath::Clamp<int>( dex, 0, INT_MAX );
}

void UCharacterAttributes::SetIntelligence( int intel ) {
	intelligence = FMath::Clamp<int>( intel, 0, INT_MAX );
}

void UCharacterAttributes::SetWillpower( int will ) {
	willpower = FMath::Clamp<int>( will, 0, INT_MAX );
}

void UCharacterAttributes::SetVitality( int vit ) {
	vitality = FMath::Clamp<int>( vit, 0, INT_MAX );
}

void UCharacterAttributes::SetSpeed( int spd ) {
	speed = FMath::Clamp<int>( spd, 0, INT_MAX );
}

void UCharacterAttributes::SetArmor( int arm ) {
	armor = FMath::Clamp<int>( arm, 0, INT_MAX );
}

void UCharacterAttributes::SetDodge( int dod ) {
	dodge = FMath::Clamp<int>( dod, 0, INT_MAX );
}
