#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyAbility_101171

#include "Basic.hpp"

#include "PyAbility_101171_classes.hpp"
#include "PyAbility_101171_parameters.hpp"


namespace SDK
{

// PythonFunction PyAbility_101171.PyWidget_AbilityTarget_101171.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_AbilityTarget_101171::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_AbilityTarget_101171", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyCue_Buff_10117101::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "WhileActive");

	Params::PyCue_Buff_10117101_WhileActive Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnMarvelSculptChanged
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InOwner                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void APyCue_Buff_10117101::OnMarvelSculptChanged(class AActor* InOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "OnMarvelSculptChanged");

	Params::PyCue_Buff_10117101_OnMarvelSculptChanged Parms{};

	Parms.InOwner = InOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnMontageEnded
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*                     InMontage                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInterrupted                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Buff_10117101::OnMontageEnded(class UAnimMontage* InMontage, bool IsInterrupted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "OnMontageEnded");

	Params::PyCue_Buff_10117101_OnMontageEnded Parms{};

	Parms.InMontage = InMontage;
	Parms.IsInterrupted = IsInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool APyCue_Buff_10117101::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "OnRemove");

	Params::PyCue_Buff_10117101_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.K2_OnRecycle
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void APyCue_Buff_10117101::K2_OnRecycle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "K2_OnRecycle");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnRecoverBuffTagUpdate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Buff_10117101::OnRecoverBuffTagUpdate(const struct FGameplayTag& Tag, bool Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "OnRecoverBuffTagUpdate");

	Params::PyCue_Buff_10117101_OnRecoverBuffTagUpdate Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Exist = Exist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnTagUpdate
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    Exist                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APyCue_Buff_10117101::OnTagUpdate(const struct FGameplayTag& Tag, bool Exist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "OnTagUpdate");

	Params::PyCue_Buff_10117101_OnTagUpdate Parms{};

	Parms.Tag = std::move(Tag);
	Parms.Exist = Exist;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyCue_Buff_10117101.OnRecoverBuffApplyFailed
// (Native, Public, BlueprintCallable)

void APyCue_Buff_10117101::OnRecoverBuffApplyFailed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCue_Buff_10117101", "OnRecoverBuffApplyFailed");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.BeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_101171::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "BeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.CanActivate
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_101171::CanActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "CanActivate");

	Params::PyAbility_101171_CanActivate Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyAbility_101171.PyAbility_101171.K2_ActivateAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyAbility_101171::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "K2_ActivateAbility");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.OnMontagePlay
// (Native, Public, BlueprintCallable)

void UPyAbility_101171::OnMontagePlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "OnMontagePlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.OnTargetDeath
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAttributeModifierHandle         ModifierParameter                                      (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UPyAbility_101171::OnTargetDeath(class AActor* DamageCauser, class AActor* TargetActor, const struct FAttributeModifierHandle& ModifierParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "OnTargetDeath");

	Params::PyAbility_101171_OnTargetDeath Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.TargetActor = TargetActor;
	Parms.ModifierParameter = std::move(ModifierParameter);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.OnTargetEndPlay
// (Native, Public, BlueprintCallable)

void UPyAbility_101171::OnTargetEndPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "OnTargetEndPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.OnTargetEndTask
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Summoned                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyAbility_101171::OnTargetEndTask(class AActor* Summoned)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "OnTargetEndTask");

	Params::PyAbility_101171_OnTargetEndTask Parms{};

	Parms.Summoned = Summoned;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.K2_OnEndAbility
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCancelled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyAbility_101171::K2_OnEndAbility(bool bCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "K2_OnEndAbility");

	Params::PyAbility_101171_K2_OnEndAbility Parms{};

	Parms.bCancelled = bCancelled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageCompleted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101171::NativeOnMontageCompleted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "NativeOnMontageCompleted");

	Params::PyAbility_101171_NativeOnMontageCompleted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageBlendOut
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101171::NativeOnMontageBlendOut(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "NativeOnMontageBlendOut");

	Params::PyAbility_101171_NativeOnMontageBlendOut Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageInterrupted
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101171::NativeOnMontageInterrupted(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "NativeOnMontageInterrupted");

	Params::PyAbility_101171_NativeOnMontageInterrupted Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageCancelled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101171::NativeOnMontageCancelled(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "NativeOnMontageCancelled");

	Params::PyAbility_101171_NativeOnMontageCancelled Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.NativeOnMontageEvent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyAbility_101171::NativeOnMontageEvent(const class FString& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "NativeOnMontageEvent");

	Params::PyAbility_101171_NativeOnMontageEvent Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyAbility_101171.PyAbility_101171.IsPrimaryAbility
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyAbility_101171::IsPrimaryAbility() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyAbility_101171", "IsPrimaryAbility");

	Params::PyAbility_101171_IsPrimaryAbility Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
