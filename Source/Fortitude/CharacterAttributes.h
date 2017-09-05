// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <map>
#include "CharacterAttributes.generated.h"

enum class EElementType : uint8 {
	Fire = 0,
	Ice = 1,
	Wind = 2,
	Earth = 3, // rock and stone
	Lightning = 4,
	Water = 5,
	Dark = 6,
	Holy = 7
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FORTITUDE_API UCharacterAttributes : public UActorComponent
{
	GENERATED_BODY()
public:

protected:
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int strength;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int dexterity;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int intelligence;

	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int willpower;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int vitality;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int speed;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int armor;
	
	UPROPERTY( EditAnywhere, BlueprintReadWrite, Category = "Stats" )
	int dodge;
	
	UPROPERTY( VisibleAnywhere, Category = "Stats" )
	int64 experience;
	
	UPROPERTY( VisibleAnywhere, BlueprintReadOnly, Category = "Stats" )
	int level;

	std::map<EElementType, int> elementalResists;

private:

public:	
	// Sets default values for this component's properties
	UCharacterAttributes();

	/// Accessors
	int GetStrength() { return strength; }
	int GetDexterity() { return dexterity; }
	int GetIntelligence() { return intelligence; }
	int GetWillpower() { return willpower; }
	int GetVitality() { return vitality; }
	int GetSpeed() { return speed; }
	int GetArmor() { return armor; }
	int GetDodge() { return dodge; }
	int GetLevel() { return level; }

	/// Setters
	void SetStrength( int str );
	void SetDexterity( int dex );
	void SetIntelligence( int intel );
	void SetWillpower( int will );
	void SetVitality( int vit );
	void SetSpeed( int spd );
	void SetArmor( int arm );
	void SetDodge( int dod );

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
