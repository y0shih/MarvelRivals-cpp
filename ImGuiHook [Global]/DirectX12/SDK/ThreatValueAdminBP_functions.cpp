#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ThreatValueAdminBP

#include "Basic.hpp"

#include "ThreatValueAdminBP_classes.hpp"
#include "ThreatValueAdminBP_parameters.hpp"


namespace SDK
{

// Function ThreatValueAdminBP.ThreatValueAdminBP_C.BindShowDebugPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AThreatValueAdminBP_C::BindShowDebugPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "BindShowDebugPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatValueAdminBP.ThreatValueAdminBP_C.ExecuteUbergraph_ThreatValueAdminBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatValueAdminBP_C::ExecuteUbergraph_ThreatValueAdminBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "ExecuteUbergraph_ThreatValueAdminBP");

	Params::ThreatValueAdminBP_C_ExecuteUbergraph_ThreatValueAdminBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ThreatValueAdminBP.ThreatValueAdminBP_C.HideDebugPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AThreatValueAdminBP_C::HideDebugPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "HideDebugPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatValueAdminBP.ThreatValueAdminBP_C.OnShowDebugPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AThreatValueAdminBP_C::OnShowDebugPanel(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "OnShowDebugPanel");

	Params::ThreatValueAdminBP_C_OnShowDebugPanel Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ThreatValueAdminBP.ThreatValueAdminBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AThreatValueAdminBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatValueAdminBP.ThreatValueAdminBP_C.ShowDebugPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AThreatValueAdminBP_C::ShowDebugPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "ShowDebugPanel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ThreatValueAdminBP.ThreatValueAdminBP_C.TryCreateDebugPanel
// (Public, BlueprintCallable, BlueprintEvent)

void AThreatValueAdminBP_C::TryCreateDebugPanel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ThreatValueAdminBP_C", "TryCreateDebugPanel");

	UObject::ProcessEvent(Func, nullptr);
}

}
