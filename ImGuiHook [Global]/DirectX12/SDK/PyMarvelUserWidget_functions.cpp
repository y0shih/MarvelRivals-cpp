#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyMarvelUserWidget

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "PyMarvelUserWidget_parameters.hpp"


namespace SDK
{

// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.WhyIsWidgetInvisible
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          InWidget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::WhyIsWidgetInvisible(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PyMarvelUserWidget", "WhyIsWidgetInvisible");

	Params::PyMarvelUserWidget_WhyIsWidgetInvisible Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnInitialized
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnInitialized");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.Construct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "Construct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.Destruct
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "Destruct");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnBecomeTop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::OnBecomeTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnBecomeTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnBecomeNoneTop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::OnBecomeNoneTop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnBecomeNoneTop");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveInputAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ActionName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputEvent                             EventType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveInputAction(class FName ActionName, const EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveInputAction");

	Params::PyMarvelUserWidget_OnReceiveInputAction Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveEnhancedInputAction
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveEnhancedInputAction(const class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveEnhancedInputAction");

	Params::PyMarvelUserWidget_OnReceiveEnhancedInputAction Parms{};

	Parms.Action = Action;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveEnhancedInputActionWithBoolValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveEnhancedInputActionWithBoolValue(const class UInputAction* Action, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveEnhancedInputActionWithBoolValue");

	Params::PyMarvelUserWidget_OnReceiveEnhancedInputActionWithBoolValue Parms{};

	Parms.Action = Action;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveEnhancedInputActionWithFloatValue
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveEnhancedInputActionWithFloatValue(const class UInputAction* Action, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveEnhancedInputActionWithFloatValue");

	Params::PyMarvelUserWidget_OnReceiveEnhancedInputActionWithFloatValue Parms{};

	Parms.Action = Action;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveEnhancedInputActionWithV2Value
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveEnhancedInputActionWithV2Value(const class UInputAction* Action, const struct FVector2D& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveEnhancedInputActionWithV2Value");

	Params::PyMarvelUserWidget_OnReceiveEnhancedInputActionWithV2Value Parms{};

	Parms.Action = Action;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveEnhancedInputActionWithV3Value
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveEnhancedInputActionWithV3Value(const class UInputAction* Action, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveEnhancedInputActionWithV3Value");

	Params::PyMarvelUserWidget_OnReceiveEnhancedInputActionWithV3Value Parms{};

	Parms.Action = Action;
	Parms.Value = std::move(Value);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveEnhancedInputActionWithTriggerEvent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInputAction*                     Action                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ETriggerEvent                           TriggerEvent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveEnhancedInputActionWithTriggerEvent(const class UInputAction* Action, ETriggerEvent TriggerEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveEnhancedInputActionWithTriggerEvent");

	Params::PyMarvelUserWidget_OnReceiveEnhancedInputActionWithTriggerEvent Parms{};

	Parms.Action = Action;
	Parms.TriggerEvent = TriggerEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveInputAxis
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Axis                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveInputAxis(class FName Axis, float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveInputAxis");

	Params::PyMarvelUserWidget_OnReceiveInputAxis Parms{};

	Parms.Axis = Axis;
	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveInputKey
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             InKey                                                  (Parm, HasGetValueTypeHash)
// EInputEvent                             EventType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveInputKey(const struct FKey& InKey, const EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveInputKey");

	Params::PyMarvelUserWidget_OnReceiveInputKey Parms{};

	Parms.InKey = std::move(InKey);
	Parms.EventType = EventType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnReceiveAxisKey
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             InKey                                                  (Parm, HasGetValueTypeHash)
// float                                   AxisValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnReceiveAxisKey(const struct FKey& InKey, float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnReceiveAxisKey");

	Params::PyMarvelUserWidget_OnReceiveAxisKey Parms{};

	Parms.InKey = std::move(InKey);
	Parms.AxisValue = AxisValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.ShouldEnableInput
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyMarvelUserWidget::ShouldEnableInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "ShouldEnableInput");

	Params::PyMarvelUserWidget_ShouldEnableInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnCascadingVisibleChanged
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnCascadingVisibleChanged(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnCascadingVisibleChanged");

	Params::PyMarvelUserWidget_OnCascadingVisibleChanged Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.MarkGPM
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::MarkGPM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "MarkGPM");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.ShouldBeVisible
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPyMarvelUserWidget::ShouldBeVisible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "ShouldBeVisible");

	Params::PyMarvelUserWidget_ShouldBeVisible Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.MarvelSetVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::MarvelSetVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "MarvelSetVisible");

	Params::PyMarvelUserWidget_MarvelSetVisible Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.MarvelSetVisibleImmediately
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::MarvelSetVisibleImmediately(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "MarvelSetVisibleImmediately");

	Params::PyMarvelUserWidget_MarvelSetVisibleImmediately Parms{};

	Parms.Visible = Visible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.SetAnimationAtTime
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*                 InAnimation                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::SetAnimationAtTime(class UWidgetAnimation* InAnimation, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "SetAnimationAtTime");

	Params::PyMarvelUserWidget_SetAnimationAtTime Parms{};

	Parms.InAnimation = InAnimation;
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.PlayAnimationTimeRangeFixed
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   StartAtTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EndAtTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumLoopsToPlay                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EUMGSequencePlayMode                    PlayMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   PlaybackSpeed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    RestoreState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::PlayAnimationTimeRangeFixed(class UWidgetAnimation* Animation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool RestoreState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "PlayAnimationTimeRangeFixed");

	Params::PyMarvelUserWidget_PlayAnimationTimeRangeFixed Parms{};

	Parms.Animation = Animation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.RestoreState = RestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnAnimationFinished");

	Params::PyMarvelUserWidget_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.SetIsOpenUpdateDefaultFocus
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                                    Is_open                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::SetIsOpenUpdateDefaultFocus(bool Is_open)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "SetIsOpenUpdateDefaultFocus");

	Params::PyMarvelUserWidget_SetIsOpenUpdateDefaultFocus Parms{};

	Parms.Is_open = Is_open;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.SetDefaultFocusWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::SetDefaultFocusWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "SetDefaultFocusWidget");

	Params::PyMarvelUserWidget_SetDefaultFocusWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.SetFocusingWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                          Widget                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPyMarvelUserWidget::SetFocusingWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "SetFocusingWidget");

	Params::PyMarvelUserWidget_SetFocusingWidget Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnAddedToFocusPath
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (Parm, NoDestructor)

void UPyMarvelUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnAddedToFocusPath");

	Params::PyMarvelUserWidget_OnAddedToFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.OnRemovedFromFocusPath
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (Parm, NoDestructor)

void UPyMarvelUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "OnRemovedFromFocusPath");

	Params::PyMarvelUserWidget_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// PythonFunction PyMarvelUserWidget.PyMarvelUserWidget.MarvelOnFocusChanging
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UPyMarvelUserWidget::MarvelOnFocusChanging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PyMarvelUserWidget", "MarvelOnFocusChanging");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}
