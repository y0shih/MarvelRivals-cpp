#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Button

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_Button.PyWidget_Button.OnHoverChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_OnHoverChanged__DelegateSignature final
{
public:
	bool                                          IsHover_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_OnHoverChanged__DelegateSignature) == 0x000001, "Wrong alignment on PyWidget_Button_OnHoverChanged__DelegateSignature");
static_assert(sizeof(PyWidget_Button_OnHoverChanged__DelegateSignature) == 0x000001, "Wrong size on PyWidget_Button_OnHoverChanged__DelegateSignature");
static_assert(offsetof(PyWidget_Button_OnHoverChanged__DelegateSignature, IsHover_0) == 0x000000, "Member 'PyWidget_Button_OnHoverChanged__DelegateSignature::IsHover_0' has a wrong offset!");

// DelegateFunction PyWidget_Button.PyWidget_Button.OnPressChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_OnPressChanged__DelegateSignature final
{
public:
	bool                                          IsPress;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_OnPressChanged__DelegateSignature) == 0x000001, "Wrong alignment on PyWidget_Button_OnPressChanged__DelegateSignature");
static_assert(sizeof(PyWidget_Button_OnPressChanged__DelegateSignature) == 0x000001, "Wrong size on PyWidget_Button_OnPressChanged__DelegateSignature");
static_assert(offsetof(PyWidget_Button_OnPressChanged__DelegateSignature, IsPress) == 0x000000, "Member 'PyWidget_Button_OnPressChanged__DelegateSignature::IsPress' has a wrong offset!");

// DelegateFunction PyWidget_Button.PyWidget_Button.OnDoubleClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_Button_OnDoubleClicked__DelegateSignature final
{
public:
	class UObject*                                Widget;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_OnDoubleClicked__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_Button_OnDoubleClicked__DelegateSignature");
static_assert(sizeof(PyWidget_Button_OnDoubleClicked__DelegateSignature) == 0x000008, "Wrong size on PyWidget_Button_OnDoubleClicked__DelegateSignature");
static_assert(offsetof(PyWidget_Button_OnDoubleClicked__DelegateSignature, Widget) == 0x000000, "Member 'PyWidget_Button_OnDoubleClicked__DelegateSignature::Widget' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_Button_PreConstruct");
static_assert(sizeof(PyWidget_Button_PreConstruct) == 0x000001, "Wrong size on PyWidget_Button_PreConstruct");
static_assert(offsetof(PyWidget_Button_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_Button_PreConstruct::IsDesignTime' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.OnCascadingVisibleChanged
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_OnCascadingVisibleChanged final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_OnCascadingVisibleChanged) == 0x000001, "Wrong alignment on PyWidget_Button_OnCascadingVisibleChanged");
static_assert(sizeof(PyWidget_Button_OnCascadingVisibleChanged) == 0x000001, "Wrong size on PyWidget_Button_OnCascadingVisibleChanged");
static_assert(offsetof(PyWidget_Button_OnCascadingVisibleChanged, Visible) == 0x000000, "Member 'PyWidget_Button_OnCascadingVisibleChanged::Visible' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_Button_MarvelSetVisible");
static_assert(sizeof(PyWidget_Button_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_Button_MarvelSetVisible");
static_assert(offsetof(PyWidget_Button_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_Button_MarvelSetVisible::Visible' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.MarvelSetVisibleImmediately
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_MarvelSetVisibleImmediately final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_MarvelSetVisibleImmediately) == 0x000001, "Wrong alignment on PyWidget_Button_MarvelSetVisibleImmediately");
static_assert(sizeof(PyWidget_Button_MarvelSetVisibleImmediately) == 0x000001, "Wrong size on PyWidget_Button_MarvelSetVisibleImmediately");
static_assert(offsetof(PyWidget_Button_MarvelSetVisibleImmediately, Visible) == 0x000000, "Member 'PyWidget_Button_MarvelSetVisibleImmediately::Visible' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.SetBtnIsEnabled
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_SetBtnIsEnabled final
{
public:
	bool                                          Enabled;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_SetBtnIsEnabled) == 0x000001, "Wrong alignment on PyWidget_Button_SetBtnIsEnabled");
static_assert(sizeof(PyWidget_Button_SetBtnIsEnabled) == 0x000001, "Wrong size on PyWidget_Button_SetBtnIsEnabled");
static_assert(offsetof(PyWidget_Button_SetBtnIsEnabled, Enabled) == 0x000000, "Member 'PyWidget_Button_SetBtnIsEnabled::Enabled' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.SetIsPlaySound
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_SetIsPlaySound final
{
public:
	bool                                          IsPlaySound_0;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_SetIsPlaySound) == 0x000001, "Wrong alignment on PyWidget_Button_SetIsPlaySound");
static_assert(sizeof(PyWidget_Button_SetIsPlaySound) == 0x000001, "Wrong size on PyWidget_Button_SetIsPlaySound");
static_assert(offsetof(PyWidget_Button_SetIsPlaySound, IsPlaySound_0) == 0x000000, "Member 'PyWidget_Button_SetIsPlaySound::IsPlaySound_0' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.SetBtnIsPressed
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_SetBtnIsPressed final
{
public:
	bool                                          IsBtnPressed_0;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_SetBtnIsPressed) == 0x000001, "Wrong alignment on PyWidget_Button_SetBtnIsPressed");
static_assert(sizeof(PyWidget_Button_SetBtnIsPressed) == 0x000001, "Wrong size on PyWidget_Button_SetBtnIsPressed");
static_assert(offsetof(PyWidget_Button_SetBtnIsPressed, IsBtnPressed_0) == 0x000000, "Member 'PyWidget_Button_SetBtnIsPressed::IsBtnPressed_0' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.SetIsHover
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_SetIsHover final
{
public:
	bool                                          IsHover_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_SetIsHover) == 0x000001, "Wrong alignment on PyWidget_Button_SetIsHover");
static_assert(sizeof(PyWidget_Button_SetIsHover) == 0x000001, "Wrong size on PyWidget_Button_SetIsHover");
static_assert(offsetof(PyWidget_Button_SetIsHover, IsHover_0) == 0x000000, "Member 'PyWidget_Button_SetIsHover::IsHover_0' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.SetBtnText
// 0x0018 (0x0018 - 0x0000)
struct PyWidget_Button_SetBtnText final
{
public:
	class FText                                   BtnText_0;                                         // 0x0000(0x0018)(Parm)
};
static_assert(alignof(PyWidget_Button_SetBtnText) == 0x000008, "Wrong alignment on PyWidget_Button_SetBtnText");
static_assert(sizeof(PyWidget_Button_SetBtnText) == 0x000018, "Wrong size on PyWidget_Button_SetBtnText");
static_assert(offsetof(PyWidget_Button_SetBtnText, BtnText_0) == 0x000000, "Member 'PyWidget_Button_SetBtnText::BtnText_0' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.SetEnableRightClick
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_Button_SetEnableRightClick final
{
public:
	bool                                          IsEnableRightClick_0;                              // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_SetEnableRightClick) == 0x000001, "Wrong alignment on PyWidget_Button_SetEnableRightClick");
static_assert(sizeof(PyWidget_Button_SetEnableRightClick) == 0x000001, "Wrong size on PyWidget_Button_SetEnableRightClick");
static_assert(offsetof(PyWidget_Button_SetEnableRightClick, IsEnableRightClick_0) == 0x000000, "Member 'PyWidget_Button_SetEnableRightClick::IsEnableRightClick_0' has a wrong offset!");

// PythonFunction PyWidget_Button.PyWidget_Button.OnReceiveInputKey
// 0x0028 (0x0028 - 0x0000)
struct PyWidget_Button_OnReceiveInputKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0020)(Parm, HasGetValueTypeHash)
	EInputEvent                                   EventType;                                         // 0x0020(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_Button_OnReceiveInputKey) == 0x000008, "Wrong alignment on PyWidget_Button_OnReceiveInputKey");
static_assert(sizeof(PyWidget_Button_OnReceiveInputKey) == 0x000028, "Wrong size on PyWidget_Button_OnReceiveInputKey");
static_assert(offsetof(PyWidget_Button_OnReceiveInputKey, Key) == 0x000000, "Member 'PyWidget_Button_OnReceiveInputKey::Key' has a wrong offset!");
static_assert(offsetof(PyWidget_Button_OnReceiveInputKey, EventType) == 0x000020, "Member 'PyWidget_Button_OnReceiveInputKey::EventType' has a wrong offset!");

}

