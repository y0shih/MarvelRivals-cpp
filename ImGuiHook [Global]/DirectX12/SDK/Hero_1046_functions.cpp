#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hero_1046

#include "Basic.hpp"

#include "Hero_1046_classes.hpp"
#include "Hero_1046_parameters.hpp"


namespace SDK
{

// Function Hero_1046.Ability_104621.SetMaxEnergyBallNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                                   InNum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_104621::SetMaxEnergyBallNum(int32 InNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104621", "SetMaxEnergyBallNum");

	Params::Ability_104621_SetMaxEnergyBallNum Parms{};

	Parms.InNum = InNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Ability_104621.OnAbilityActiveFailed
// (Final, Native, Public, HasOutParams, Const)
// Parameters:
// class UGameplayAbility*                 InAbility                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer            Tags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbility_104621::OnAbilityActiveFailed(const class UGameplayAbility* InAbility, const struct FGameplayTagContainer& Tags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104621", "OnAbilityActiveFailed");

	Params::Ability_104621_OnAbilityActiveFailed Parms{};

	Parms.InAbility = InAbility;
	Parms.Tags = std::move(Tags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Scope_10464101.OnRep_FirstTreatTarget
// (Final, Native, Public)

void AScope_10464101::OnRep_FirstTreatTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_10464101", "OnRep_FirstTreatTarget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Scope_10464101.OnRep_NextTreatTarget
// (Final, Native, Public)

void AScope_10464101::OnRep_NextTreatTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Scope_10464101", "OnRep_NextTreatTarget");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Cue_Scope_Loop_10464101.SpawnLinkEffect
// (Final, Native, Public)
// Parameters:
// class ACharacter*                       FromCharacter                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ACharacter*                       ToCharacter                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACue_Scope_Loop_10464101::SpawnLinkEffect(class ACharacter* FromCharacter, class ACharacter* ToCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cue_Scope_Loop_10464101", "SpawnLinkEffect");

	Params::Cue_Scope_Loop_10464101_SpawnLinkEffect Parms{};

	Parms.FromCharacter = FromCharacter;
	Parms.ToCharacter = ToCharacter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Cue_Buff_10465101.OnBuffOwnerDeath
// (Native, Public, HasOutParams)
// Parameters:
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           TargetActor                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAttributeModifierHandle         ModifierParameterHandle                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ACue_Buff_10465101::OnBuffOwnerDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ModifierParameterHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cue_Buff_10465101", "OnBuffOwnerDeath");

	Params::Cue_Buff_10465101_OnBuffOwnerDeath Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.TargetActor = TargetActor;
	Parms.ModifierParameterHandle = std::move(ModifierParameterHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Ability_104651.OnOriginLinkGroupEnd
// (Final, Native, Public)
// Parameters:
// class AActor*                           BuffInstigator                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbility_104651::OnOriginLinkGroupEnd(const class AActor* BuffInstigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104651", "OnOriginLinkGroupEnd");

	Params::Ability_104651_OnOriginLinkGroupEnd Parms{};

	Parms.BuffInstigator = BuffInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Cue_Buff_10466103.OnOwnerRebornReset
// (Final, Native, Public, HasOutParams)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCharacterRebornParam            Param                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ACue_Buff_10466103::OnOwnerRebornReset(class AActor* Target, const struct FCharacterRebornParam& Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cue_Buff_10466103", "OnOwnerRebornReset");

	Params::Cue_Buff_10466103_OnOwnerRebornReset Parms{};

	Parms.Target = Target;
	Parms.Param = std::move(Param);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Cue_Ability_Loop_10465101.SpawnLinkEffects
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<class AActor*>                   LinkTargets                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ACue_Ability_Loop_10465101::SpawnLinkEffects(const TArray<class AActor*>& LinkTargets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Cue_Ability_Loop_10465101", "SpawnLinkEffects");

	Params::Cue_Ability_Loop_10465101_SpawnLinkEffects Parms{};

	Parms.LinkTargets = std::move(LinkTargets);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.Ability_104661.GetTraceTransform
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbility_104661::GetTraceTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104661", "GetTraceTransform");

	Params::Ability_104661_GetTraceTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Hero_1046.Ability_104661.SetResurrectedActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                           InActors                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAbility_104661::SetResurrectedActors(const TArray<int32>& InActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Ability_104661", "SetResurrectedActors");

	Params::Ability_104661_SetResurrectedActors Parms{};

	Parms.InActors = std::move(InActors);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.EffectAbility_104661.StopKillCamImmediately
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bSet                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEffectAbility_104661::StopKillCamImmediately(bool bSet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EffectAbility_104661", "StopKillCamImmediately");

	Params::EffectAbility_104661_StopKillCamImmediately Parms{};

	Parms.bSet = bSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.AdamWarlockCharacter.AssignDeathCueTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     InDeathCue                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAdamWarlockCharacter::AssignDeathCueTag(const struct FGameplayTag& InDeathCue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdamWarlockCharacter", "AssignDeathCueTag");

	Params::AdamWarlockCharacter_AssignDeathCueTag Parms{};

	Parms.InDeathCue = std::move(InDeathCue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Hero_1046.AdamWarlockCharacter.CanResurrectSelf
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAttributeModifierHandle         ModifierParameterHandle                                (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAdamWarlockCharacter::CanResurrectSelf(const struct FAttributeModifierHandle& ModifierParameterHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AdamWarlockCharacter", "CanResurrectSelf");

	Params::AdamWarlockCharacter_CanResurrectSelf Parms{};

	Parms.ModifierParameterHandle = std::move(ModifierParameterHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Hero_1046.EpicMomentAction_1046.OnActorResurrected
// (Final, Native, Public, HasOutParams)
// Parameters:
// class AActor*                           Instigator                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           Target                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAttributeModifierParameter      ModifierParameter                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UEpicMomentAction_1046::OnActorResurrected(class AActor* Instigator, class AActor* Target, const struct FAttributeModifierParameter& ModifierParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EpicMomentAction_1046", "OnActorResurrected");

	Params::EpicMomentAction_1046_OnActorResurrected Parms{};

	Parms.Instigator = Instigator;
	Parms.Target = Target;
	Parms.ModifierParameter = std::move(ModifierParameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
