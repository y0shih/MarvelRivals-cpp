#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattleCommunication

#include "Basic.hpp"

#include "PyWidget_BattleCommunication_classes.hpp"
#include "PyWidget_BattleCommunication_parameters.hpp"


namespace SDK
{

// DelegateFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.OnCommIDChangedDispatcher__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Idx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::OnCommIDChangedDispatcher__DelegateSignature(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "OnCommIDChangedDispatcher__DelegateSignature");

	Params::PyWidget_BattleCommunicationPanel_OnCommIDChangedDispatcher__DelegateSignature Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.OnPersonaliseIDChangedDispatcher__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Idx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::OnPersonaliseIDChangedDispatcher__DelegateSignature(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "OnPersonaliseIDChangedDispatcher__DelegateSignature");

	Params::PyWidget_BattleCommunicationPanel_OnPersonaliseIDChangedDispatcher__DelegateSignature Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.OnSignalTagChangedDispatcher__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayTag                     Tag                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::OnSignalTagChangedDispatcher__DelegateSignature(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "OnSignalTagChangedDispatcher__DelegateSignature");

	Params::PyWidget_BattleCommunicationPanel_OnSignalTagChangedDispatcher__DelegateSignature Parms{};

	Parms.Tag = std::move(Tag);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.OnClickBtnListen__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                                   Idx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::OnClickBtnListen__DelegateSignature(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "OnClickBtnListen__DelegateSignature");

	Params::PyWidget_BattleCommunicationPanel_OnClickBtnListen__DelegateSignature Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.OnSignalPanelVisibleChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                                    IsVisible_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::OnSignalPanelVisibleChanged__DelegateSignature(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "OnSignalPanelVisibleChanged__DelegateSignature");

	Params::PyWidget_BattleCommunicationPanel_OnSignalPanelVisibleChanged__DelegateSignature Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "MarvelSetVisible");

	Params::PyWidget_BattleCommunicationPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_BattleCommunicationPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::SetVisible(bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "SetVisible");

	Params::PyWidget_BattleCommunicationPanel_SetVisible Parms{};

	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.SetEnable
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    InEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::SetEnable(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "SetEnable");

	Params::PyWidget_BattleCommunicationPanel_SetEnable Parms{};

	Parms.InEnabled = InEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.SetHoveringIdx
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   Idx                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::SetHoveringIdx(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "SetHoveringIdx");

	Params::PyWidget_BattleCommunicationPanel_SetHoveringIdx Parms{};

	Parms.Idx = Idx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.SetIsBattleMode
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bIsBattleMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::SetIsBattleMode(bool bIsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "SetIsBattleMode");

	Params::PyWidget_BattleCommunicationPanel_SetIsBattleMode Parms{};

	Parms.bIsBattleMode = bIsBattleMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_BattleCommunicationPanel.Tick
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_BattleCommunicationPanel::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_BattleCommunicationPanel", "Tick");

	Params::PyWidget_BattleCommunicationPanel_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_SignalResponsePanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_SignalResponsePanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SignalResponsePanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_SignalResponsePanel.SetVisible
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Invisible                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SignalResponsePanel::SetVisible(bool Invisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SignalResponsePanel", "SetVisible");

	Params::PyWidget_SignalResponsePanel_SetVisible Parms{};

	Parms.Invisible = Invisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_SignalResponsePanel.SetState
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                                   State                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_SignalResponsePanel::SetState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_SignalResponsePanel", "SetState");

	Params::PyWidget_SignalResponsePanel_SetState Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_CommunicationMenuItem.PreConstruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_CommunicationMenuItem::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommunicationMenuItem", "PreConstruct");

	Params::PyWidget_CommunicationMenuItem_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_BattleCommunication.PyWidget_CommunicationMenuItem.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_CommunicationMenuItem::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_CommunicationMenuItem", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
