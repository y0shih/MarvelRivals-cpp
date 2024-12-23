#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_MissionPanel_New

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.MarvelSetVisible
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_MissionPanel_MarvelSetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MissionPanel_MarvelSetVisible) == 0x000001, "Wrong alignment on PyWidget_MissionPanel_MarvelSetVisible");
static_assert(sizeof(PyWidget_MissionPanel_MarvelSetVisible) == 0x000001, "Wrong size on PyWidget_MissionPanel_MarvelSetVisible");
static_assert(offsetof(PyWidget_MissionPanel_MarvelSetVisible, Visible) == 0x000000, "Member 'PyWidget_MissionPanel_MarvelSetVisible::Visible' has a wrong offset!");

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.UpdatePanelFocus
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_MissionPanel_UpdatePanelFocus final
{
public:
	bool                                          Is_active;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MissionPanel_UpdatePanelFocus) == 0x000001, "Wrong alignment on PyWidget_MissionPanel_UpdatePanelFocus");
static_assert(sizeof(PyWidget_MissionPanel_UpdatePanelFocus) == 0x000001, "Wrong size on PyWidget_MissionPanel_UpdatePanelFocus");
static_assert(offsetof(PyWidget_MissionPanel_UpdatePanelFocus, Is_active) == 0x000000, "Member 'PyWidget_MissionPanel_UpdatePanelFocus::Is_active' has a wrong offset!");

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnBtnRuleNavLeft
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnBtnRuleNavLeft final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MissionPanel_OnBtnRuleNavLeft) == 0x000008, "Wrong alignment on PyWidget_MissionPanel_OnBtnRuleNavLeft");
static_assert(sizeof(PyWidget_MissionPanel_OnBtnRuleNavLeft) == 0x000010, "Wrong size on PyWidget_MissionPanel_OnBtnRuleNavLeft");
static_assert(offsetof(PyWidget_MissionPanel_OnBtnRuleNavLeft, Navigation_0) == 0x000000, "Member 'PyWidget_MissionPanel_OnBtnRuleNavLeft::Navigation_0' has a wrong offset!");
static_assert(offsetof(PyWidget_MissionPanel_OnBtnRuleNavLeft, ReturnValue) == 0x000008, "Member 'PyWidget_MissionPanel_OnBtnRuleNavLeft::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnBtnRuleNavRight
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnBtnRuleNavRight final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MissionPanel_OnBtnRuleNavRight) == 0x000008, "Wrong alignment on PyWidget_MissionPanel_OnBtnRuleNavRight");
static_assert(sizeof(PyWidget_MissionPanel_OnBtnRuleNavRight) == 0x000010, "Wrong size on PyWidget_MissionPanel_OnBtnRuleNavRight");
static_assert(offsetof(PyWidget_MissionPanel_OnBtnRuleNavRight, Navigation_0) == 0x000000, "Member 'PyWidget_MissionPanel_OnBtnRuleNavRight::Navigation_0' has a wrong offset!");
static_assert(offsetof(PyWidget_MissionPanel_OnBtnRuleNavRight, ReturnValue) == 0x000008, "Member 'PyWidget_MissionPanel_OnBtnRuleNavRight::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnBtnRuleNavDown
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnBtnRuleNavDown final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MissionPanel_OnBtnRuleNavDown) == 0x000008, "Wrong alignment on PyWidget_MissionPanel_OnBtnRuleNavDown");
static_assert(sizeof(PyWidget_MissionPanel_OnBtnRuleNavDown) == 0x000010, "Wrong size on PyWidget_MissionPanel_OnBtnRuleNavDown");
static_assert(offsetof(PyWidget_MissionPanel_OnBtnRuleNavDown, Navigation_0) == 0x000000, "Member 'PyWidget_MissionPanel_OnBtnRuleNavDown::Navigation_0' has a wrong offset!");
static_assert(offsetof(PyWidget_MissionPanel_OnBtnRuleNavDown, ReturnValue) == 0x000008, "Member 'PyWidget_MissionPanel_OnBtnRuleNavDown::ReturnValue' has a wrong offset!");

// PythonFunction PyWidget_MissionPanel_New.PyWidget_MissionPanel.OnListViewNavigationLeft
// 0x0010 (0x0010 - 0x0000)
struct PyWidget_MissionPanel_OnListViewNavigationLeft final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_MissionPanel_OnListViewNavigationLeft) == 0x000008, "Wrong alignment on PyWidget_MissionPanel_OnListViewNavigationLeft");
static_assert(sizeof(PyWidget_MissionPanel_OnListViewNavigationLeft) == 0x000010, "Wrong size on PyWidget_MissionPanel_OnListViewNavigationLeft");
static_assert(offsetof(PyWidget_MissionPanel_OnListViewNavigationLeft, Navigation_0) == 0x000000, "Member 'PyWidget_MissionPanel_OnListViewNavigationLeft::Navigation_0' has a wrong offset!");
static_assert(offsetof(PyWidget_MissionPanel_OnListViewNavigationLeft, ReturnValue) == 0x000008, "Member 'PyWidget_MissionPanel_OnListViewNavigationLeft::ReturnValue' has a wrong offset!");

}

