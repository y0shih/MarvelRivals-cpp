#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_GMCmdPanel

#include "Basic.hpp"

#include "PyWidget_GMCmdPanel_classes.hpp"
#include "PyWidget_GMCmdPanel_parameters.hpp"


namespace SDK
{

// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_GMCmdPanel::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_GMCmdPanel::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyWidget_GMCmdPanel::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.OnCommand
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Cmd                                                    (Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CmdName                                                (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyWidget_GMCmdPanel::OnCommand(const class FString& Cmd, const class FString& CmdName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "OnCommand");

	Params::PyWidget_GMCmdPanel_OnCommand Parms{};

	Parms.Cmd = std::move(Cmd);
	Parms.CmdName = std::move(CmdName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.OnBroadcastCommand
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Command                                                (Parm, ZeroConstructor, HasGetValueTypeHash)

void UPyWidget_GMCmdPanel::OnBroadcastCommand(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "OnBroadcastCommand");

	Params::PyWidget_GMCmdPanel_OnBroadcastCommand Parms{};

	Parms.Command = std::move(Command);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.LaunchKMURL
// (Native, Public, BlueprintCallable)

void UPyWidget_GMCmdPanel::LaunchKMURL()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "LaunchKMURL");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyWidget_GMCmdPanel.PyWidget_GMCmdPanel.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyWidget_GMCmdPanel::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyWidget_GMCmdPanel", "MarvelSetVisible");

	Params::PyWidget_GMCmdPanel_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
