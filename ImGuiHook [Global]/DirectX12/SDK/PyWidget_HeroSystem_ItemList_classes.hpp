#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_HeroSystem_ItemList

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_HeroSystem_ItemList.PyWidget_HeroSystem_ItemList
// 0x0030 (0x0618 - 0x05E8)
class UPyWidget_HeroSystem_ItemList : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UUserWidget>                HeroSystem_ItemUnit;                               // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ItemCount;                                         // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5F4[0x4];                                      // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemSelected;                                    // 0x05F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnItemHovered;                                     // 0x0608(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnItemSelected__DelegateSignature(const class FString& ItemId);
	void OnItemHovered__DelegateSignature(bool IsHover, int32 HoverID);
	void OnInitialized();
	void Construct();
	void Destruct();
	void MarvelSetVisible(bool Visible);
	class UButton* OnWrapBoxScrolled(int32 NextFocusableChildIndex, int32 FocusedChildDirection, int32 NumItemsLine);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_HeroSystem_ItemList">();
	}
	static class UPyWidget_HeroSystem_ItemList* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_HeroSystem_ItemList>();
	}
};
static_assert(alignof(UPyWidget_HeroSystem_ItemList) == 0x000008, "Wrong alignment on UPyWidget_HeroSystem_ItemList");
static_assert(sizeof(UPyWidget_HeroSystem_ItemList) == 0x000618, "Wrong size on UPyWidget_HeroSystem_ItemList");
static_assert(offsetof(UPyWidget_HeroSystem_ItemList, HeroSystem_ItemUnit) == 0x0005E8, "Member 'UPyWidget_HeroSystem_ItemList::HeroSystem_ItemUnit' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_ItemList, ItemCount) == 0x0005F0, "Member 'UPyWidget_HeroSystem_ItemList::ItemCount' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_ItemList, OnItemSelected) == 0x0005F8, "Member 'UPyWidget_HeroSystem_ItemList::OnItemSelected' has a wrong offset!");
static_assert(offsetof(UPyWidget_HeroSystem_ItemList, OnItemHovered) == 0x000608, "Member 'UPyWidget_HeroSystem_ItemList::OnItemHovered' has a wrong offset!");

}
