#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_DebugAudio

#include "Basic.hpp"

#include "WBP_DebugAudio_classes.hpp"
#include "WBP_DebugAudio_parameters.hpp"


namespace SDK
{

// Function WBP_DebugAudio.WBP_DebugAudio_C.Append
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           Ori                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Append_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Out                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::Append(const class FString& Ori, const class FString& Append_0, class FString* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "Append");

	Params::WBP_DebugAudio_C_Append Parms{};

	Parms.Ori = std::move(Ori);
	Parms.Append_0 = std::move(Append_0);

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BndEvt__LockThreatButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAudio_C::BndEvt__LockThreatButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BndEvt__LockThreatButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BndEvt__UnlockAllThreatButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAudio_C::BndEvt__UnlockAllThreatButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BndEvt__UnlockAllThreatButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BndEvt__UnlockThreatButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAudio_C::BndEvt__UnlockThreatButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BndEvt__UnlockThreatButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BndEvt__WBP_DebugAudio_Btn_Expression_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAudio_C::BndEvt__WBP_DebugAudio_Btn_Expression_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BndEvt__WBP_DebugAudio_Btn_Expression_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BndEvt__WBP_DebugAudio_Btn_SwitchAbility_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAudio_C::BndEvt__WBP_DebugAudio_Btn_SwitchAbility_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BndEvt__WBP_DebugAudio_Btn_SwitchAbility_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BndEvt__WBP_DebugAudio_Btn_SwitchProcedure_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_DebugAudio_C::BndEvt__WBP_DebugAudio_Btn_SwitchProcedure_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BndEvt__WBP_DebugAudio_Btn_SwitchProcedure_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.BoolStr
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Bool                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Pass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Str                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::BoolStr(bool Bool, bool Pass, class FString* Str)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "BoolStr");

	Params::WBP_DebugAudio_C_BoolStr Parms{};

	Parms.Bool = Bool;
	Parms.Pass = Pass;

	UObject::ProcessEvent(Func, &Parms);

	if (Str != nullptr)
		*Str = std::move(Parms.Str);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.Build Threat Value Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarvelGameStateBP_C*             MGS                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::Build_Threat_Value_Text(class AMarvelGameStateBP_C* MGS)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "Build Threat Value Text");

	Params::WBP_DebugAudio_C_Build_Threat_Value_Text Parms{};

	Parms.MGS = MGS;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_DebugAudio_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.ExecuteUbergraph_WBP_DebugAudio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::ExecuteUbergraph_WBP_DebugAudio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "ExecuteUbergraph_WBP_DebugAudio");

	Params::WBP_DebugAudio_C_ExecuteUbergraph_WBP_DebugAudio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.GetFormatedStr
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>                   StrArr                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           PerPrefix                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           PerSuffix                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           OutStr                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::GetFormatedStr(TArray<class FString>& StrArr, const class FString& PerPrefix, const class FString& PerSuffix, class FString* OutStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "GetFormatedStr");

	Params::WBP_DebugAudio_C_GetFormatedStr Parms{};

	Parms.StrArr = std::move(StrArr);
	Parms.PerPrefix = std::move(PerPrefix);
	Parms.PerSuffix = std::move(PerSuffix);

	UObject::ProcessEvent(Func, &Parms);

	StrArr = std::move(Parms.StrArr);

	if (OutStr != nullptr)
		*OutStr = std::move(Parms.OutStr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.GetFrontedCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarvelBaseCharacter*             FrontCharacter                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::GetFrontedCharacter(class AMarvelBaseCharacter** FrontCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "GetFrontedCharacter");

	Params::WBP_DebugAudio_C_GetFrontedCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FrontCharacter != nullptr)
		*FrontCharacter = Parms.FrontCharacter;
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.GetHeroName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarvelBaseCharacter*             Char                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           TName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::GetHeroName(class AMarvelBaseCharacter* Char, class FString* TName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "GetHeroName");

	Params::WBP_DebugAudio_C_GetHeroName Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

	if (TName != nullptr)
		*TName = std::move(Parms.TName);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.GetStateStrings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutStr                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::GetStateStrings(class FString* OutStr)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "GetStateStrings");

	Params::WBP_DebugAudio_C_GetStateStrings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutStr != nullptr)
		*OutStr = std::move(Parms.OutStr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.OnHighFrequency
// (BlueprintCallable, BlueprintEvent)

void UWBP_DebugAudio_C::OnHighFrequency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "OnHighFrequency");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.OnLowFrequency
// (BlueprintCallable, BlueprintEvent)

void UWBP_DebugAudio_C::OnLowFrequency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "OnLowFrequency");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.OnMiddleFrequency
// (BlueprintCallable, BlueprintEvent)

void UWBP_DebugAudio_C::OnMiddleFrequency()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "OnMiddleFrequency");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "PreConstruct");

	Params::WBP_DebugAudio_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebugAudio.WBP_DebugAudio_C.SwitchDynamicPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SWITCH                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebugAudio_C::SwitchDynamicPanel(int32 SWITCH)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebugAudio_C", "SwitchDynamicPanel");

	Params::WBP_DebugAudio_C_SwitchDynamicPanel Parms{};

	Parms.SWITCH = SWITCH;

	UObject::ProcessEvent(Func, &Parms);
}

}
