// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "RPG.h"
#include "MyGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UGAS_GameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	EGASAbilityInputID AbilityInputID = EGASAbilityInputID::None;
};
};
