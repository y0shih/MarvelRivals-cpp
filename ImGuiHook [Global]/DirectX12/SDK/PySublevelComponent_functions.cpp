#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PySublevelComponent

#include "Basic.hpp"

#include "PySublevelComponent_classes.hpp"
#include "PySublevelComponent_parameters.hpp"


namespace SDK
{

// PythonFunction PySublevelComponent.PySublevelComponent.ReceiveInitializeComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPySublevelComponent::ReceiveInitializeComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "ReceiveInitializeComponent");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.ReceiveEndPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPySublevelComponent::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "ReceiveEndPlay");

	Params::PySublevelComponent_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.OnRep_SublevelPartList
// (Native, Public, BlueprintCallable)

void UPySublevelComponent::OnRep_SublevelPartList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "OnRep_SublevelPartList");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.OnRep_CurrentLevelPartName
// (Native, Public, BlueprintCallable)

void UPySublevelComponent::OnRep_CurrentLevelPartName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "OnRep_CurrentLevelPartName");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.OnRep_LevelPartRepeat
// (Native, Public, BlueprintCallable)

void UPySublevelComponent::OnRep_LevelPartRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "OnRep_LevelPartRepeat");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.OnRep_ServerFirstMapLoaded
// (Native, Public, BlueprintCallable)

void UPySublevelComponent::OnRep_ServerFirstMapLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "OnRep_ServerFirstMapLoaded");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.OnRep_HidenBattleEnvState
// (Native, Public, BlueprintCallable)

void UPySublevelComponent::OnRep_HidenBattleEnvState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "OnRep_HidenBattleEnvState");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PySublevelComponent.PySublevelComponent.GetLevelInstanceActor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           Instance_name                                          (Parm, ZeroConstructor, HasGetValueTypeHash)
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* UPySublevelComponent::GetLevelInstanceActor(const class FString& Instance_name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PySublevelComponent", "GetLevelInstanceActor");

	Params::PySublevelComponent_GetLevelInstanceActor Parms{};

	Parms.Instance_name = std::move(Instance_name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
