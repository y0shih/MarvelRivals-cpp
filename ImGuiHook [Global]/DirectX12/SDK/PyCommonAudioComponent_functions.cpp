#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyCommonAudioComponent

#include "Basic.hpp"

#include "PyCommonAudioComponent_classes.hpp"
#include "PyCommonAudioComponent_parameters.hpp"


namespace SDK
{

// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.ReceiveBeginPlay
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyCommonAudioComponent::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "ReceiveBeginPlay");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastPreSelect
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastPreSelect(bool bActive, float TotalTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastPreSelect");

	Params::PyCommonAudioComponent_BroadCastPreSelect Parms{};

	Parms.bActive = bActive;
	Parms.TotalTime = TotalTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastBanPickState
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Play_our_side_audio                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastBanPickState(bool bActive, float TotalTime, bool Play_our_side_audio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastBanPickState");

	Params::PyCommonAudioComponent_BroadCastBanPickState Parms{};

	Parms.bActive = bActive;
	Parms.TotalTime = TotalTime;
	Parms.Play_our_side_audio = Play_our_side_audio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastOurSideStartBanPick
// (Native, Public, BlueprintCallable)

void UPyCommonAudioComponent::BroadCastOurSideStartBanPick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastOurSideStartBanPick");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastEnemySideStartBanPick
// (Native, Public, BlueprintCallable)

void UPyCommonAudioComponent::BroadCastEnemySideStartBanPick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastEnemySideStartBanPick");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastAnnouncementCountDown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bActive                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastAnnouncementCountDown(bool bActive, float TotalTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastAnnouncementCountDown");

	Params::PyCommonAudioComponent_BroadCastAnnouncementCountDown Parms{};

	Parms.bActive = bActive;
	Parms.TotalTime = TotalTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastBanPickSideChange
// (Net, NetReliable, Native, NetMulticast, Public, BlueprintCallable)
// Parameters:
// EBattleSide                             BanPickSide                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastBanPickSideChange(EBattleSide BanPickSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastBanPickSideChange");

	Params::PyCommonAudioComponent_BroadCastBanPickSideChange Parms{};

	Parms.BanPickSide = BanPickSide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastBanPickSideConfirmResult
// (Net, NetReliable, Native, NetMulticast, Public, BlueprintCallable)
// Parameters:
// EBattleSide                             BattleSide                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastBanPickSideConfirmResult(EBattleSide BattleSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastBanPickSideConfirmResult");

	Params::PyCommonAudioComponent_BroadCastBanPickSideConfirmResult Parms{};

	Parms.BattleSide = BattleSide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastPreSelectVoice
// (Native, Public, BlueprintCallable)
// Parameters:
// float                                   ban_pick_preseletct_remainting_time                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastPreSelectVoice(float ban_pick_preseletct_remainting_time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastPreSelectVoice");

	Params::PyCommonAudioComponent_BroadCastPreSelectVoice Parms{};

	Parms.ban_pick_preseletct_remainting_time = ban_pick_preseletct_remainting_time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastBanRoundStartVoice
// (Net, NetReliable, Native, NetMulticast, Public, BlueprintCallable)
// Parameters:
// EBattleSide                             BanPickSide                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastBanRoundStartVoice(EBattleSide BanPickSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastBanRoundStartVoice");

	Params::PyCommonAudioComponent_BroadCastBanRoundStartVoice Parms{};

	Parms.BanPickSide = BanPickSide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyCommonAudioComponent.PyCommonAudioComponent.BroadCastPickRoundStartVoice
// (Net, NetReliable, Native, NetMulticast, Public, BlueprintCallable)
// Parameters:
// EBattleSide                             BanPickSide                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyCommonAudioComponent::BroadCastPickRoundStartVoice(EBattleSide BanPickSide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyCommonAudioComponent", "BroadCastPickRoundStartVoice");

	Params::PyCommonAudioComponent_BroadCastPickRoundStartVoice Parms{};

	Parms.BanPickSide = BanPickSide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
