#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Projectile_10251101

#include "Basic.hpp"

#include "Projectile_10251101_classes.hpp"
#include "Projectile_10251101_parameters.hpp"


namespace SDK
{

// Function Projectile_10251101.Projectile_10251101_C.ExecuteUbergraph_Projectile_10251101
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_10251101_C::ExecuteUbergraph_Projectile_10251101(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_10251101_C", "ExecuteUbergraph_Projectile_10251101");

	Params::Projectile_10251101_C_ExecuteUbergraph_Projectile_10251101 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Projectile_10251101.Projectile_10251101_C.K2_OnBeginAgentTask_GraphAbility
// (Event, Public, BlueprintEvent)

void AProjectile_10251101_C::K2_OnBeginAgentTask_GraphAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_10251101_C", "K2_OnBeginAgentTask_GraphAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Projectile_10251101.Projectile_10251101_C.K2_OnBounce
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_10251101_C::K2_OnBounce(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_10251101_C", "K2_OnBounce");

	Params::Projectile_10251101_C_K2_OnBounce Parms{};

	Parms.ImpactResult = std::move(ImpactResult);
	Parms.ImpactVelocity = std::move(ImpactVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Projectile_10251101.Projectile_10251101_C.K2_OnProcessHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       ImpactResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProjectile_10251101_C::K2_OnProcessHit(const struct FHitResult& ImpactResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_10251101_C", "K2_OnProcessHit");

	Params::Projectile_10251101_C_K2_OnProcessHit Parms{};

	Parms.ImpactResult = std::move(ImpactResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Projectile_10251101.Projectile_10251101_C.OnFinished_0D091C2E468C9A372E3E349E5C8ACDF7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarvelAbilityTargetActor_Projectile*OnProjectileEventDelegate__DelegateSignature_Projectile(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AProjectile_10251101_C::OnFinished_0D091C2E468C9A372E3E349E5C8ACDF7(class AMarvelAbilityTargetActor_Projectile* OnProjectileEventDelegate__DelegateSignature_Projectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_10251101_C", "OnFinished_0D091C2E468C9A372E3E349E5C8ACDF7");

	Params::Projectile_10251101_C_OnFinished_0D091C2E468C9A372E3E349E5C8ACDF7 Parms{};

	Parms.OnProjectileEventDelegate__DelegateSignature_Projectile = OnProjectileEventDelegate__DelegateSignature_Projectile;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Projectile_10251101.Projectile_10251101_C.OnHit_6685D1E644E830DE9BF6FE913937B6C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarvelAbilityTargetActor_Scope*  OnTargetEventDelegate__DelegateSignature_ScopeActor    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OnTargetEventDelegate__DelegateSignature_Target        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OnTargetEventDelegate__DelegateSignature_Location      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProjectile_10251101_C::OnHit_6685D1E644E830DE9BF6FE913937B6C8(class AMarvelAbilityTargetActor_Scope* OnTargetEventDelegate__DelegateSignature_ScopeActor, class AActor* OnTargetEventDelegate__DelegateSignature_Target, const struct FVector& OnTargetEventDelegate__DelegateSignature_Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Projectile_10251101_C", "OnHit_6685D1E644E830DE9BF6FE913937B6C8");

	Params::Projectile_10251101_C_OnHit_6685D1E644E830DE9BF6FE913937B6C8 Parms{};

	Parms.OnTargetEventDelegate__DelegateSignature_ScopeActor = OnTargetEventDelegate__DelegateSignature_ScopeActor;
	Parms.OnTargetEventDelegate__DelegateSignature_Target = OnTargetEventDelegate__DelegateSignature_Target;
	Parms.OnTargetEventDelegate__DelegateSignature_Location = std::move(OnTargetEventDelegate__DelegateSignature_Location);

	UObject::ProcessEvent(Func, &Parms);
}

}
