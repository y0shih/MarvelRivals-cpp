#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_DropDownList_ListView_Item

#include "Basic.hpp"


namespace SDK::Params
{

// DelegateFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature final
{
public:
	class UObject*                                ItemData;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature, ItemData) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_OnItemClicked__DelegateSignature::ItemData' has a wrong offset!");

// DelegateFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.OnItemHovered__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature final
{
public:
	bool                                          IsHover_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ItemId;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature) == 0x000008, "Wrong size on PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature, IsHover_0) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature::IsHover_0' has a wrong offset!");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature, ItemId) == 0x000004, "Member 'PyWidget_DropDownList_ListView_Item_OnItemHovered__DelegateSignature::ItemId' has a wrong offset!");

// DelegateFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.OnItemPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature final
{
public:
	bool                                          IsPressed;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ItemId;                                            // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature) == 0x000004, "Wrong alignment on PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature) == 0x000008, "Wrong size on PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature, IsPressed) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature::IsPressed' has a wrong offset!");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature, ItemId) == 0x000004, "Member 'PyWidget_DropDownList_ListView_Item_OnItemPressed__DelegateSignature::ItemId' has a wrong offset!");

// PythonFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_PreConstruct) == 0x000001, "Wrong alignment on PyWidget_DropDownList_ListView_Item_PreConstruct");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_PreConstruct) == 0x000001, "Wrong size on PyWidget_DropDownList_ListView_Item_PreConstruct");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_PreConstruct, IsDesignTime) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_PreConstruct::IsDesignTime' has a wrong offset!");

// PythonFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.SetBtnIsPressed
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_SetBtnIsPressed final
{
public:
	bool                                          IsBtnPressed_0;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_SetBtnIsPressed) == 0x000001, "Wrong alignment on PyWidget_DropDownList_ListView_Item_SetBtnIsPressed");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_SetBtnIsPressed) == 0x000001, "Wrong size on PyWidget_DropDownList_ListView_Item_SetBtnIsPressed");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_SetBtnIsPressed, IsBtnPressed_0) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_SetBtnIsPressed::IsBtnPressed_0' has a wrong offset!");

// PythonFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.SetIsHover
// 0x0001 (0x0001 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_SetIsHover final
{
public:
	bool                                          IsHover_0;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_SetIsHover) == 0x000001, "Wrong alignment on PyWidget_DropDownList_ListView_Item_SetIsHover");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_SetIsHover) == 0x000001, "Wrong size on PyWidget_DropDownList_ListView_Item_SetIsHover");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_SetIsHover, IsHover_0) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_SetIsHover::IsHover_0' has a wrong offset!");

// PythonFunction PyWidget_DropDownList_ListView_Item.PyWidget_DropDownList_ListView_Item.SetItemData
// 0x0008 (0x0008 - 0x0000)
struct PyWidget_DropDownList_ListView_Item_SetItemData final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PyWidget_DropDownList_ListView_Item_SetItemData) == 0x000008, "Wrong alignment on PyWidget_DropDownList_ListView_Item_SetItemData");
static_assert(sizeof(PyWidget_DropDownList_ListView_Item_SetItemData) == 0x000008, "Wrong size on PyWidget_DropDownList_ListView_Item_SetItemData");
static_assert(offsetof(PyWidget_DropDownList_ListView_Item_SetItemData, ListItemObject) == 0x000000, "Member 'PyWidget_DropDownList_ListView_Item_SetItemData::ListItemObject' has a wrong offset!");

}
