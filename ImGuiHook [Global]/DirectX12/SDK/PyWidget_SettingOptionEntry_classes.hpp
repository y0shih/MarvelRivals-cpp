#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_SettingOptionEntry

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntryBase
// 0x0020 (0x0608 - 0x05E8)
class UPyWidget_SettingOptionEntryBase : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x05E8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x05F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnHovered__DelegateSignature(class UWidget* HoveredWidget);
	void OnUnhovered__DelegateSignature();
	void OnInitialized();
	void Construct();
	void Destruct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingOptionEntryBase">();
	}
	static class UPyWidget_SettingOptionEntryBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingOptionEntryBase>();
	}
};
static_assert(alignof(UPyWidget_SettingOptionEntryBase) == 0x000008, "Wrong alignment on UPyWidget_SettingOptionEntryBase");
static_assert(sizeof(UPyWidget_SettingOptionEntryBase) == 0x000608, "Wrong size on UPyWidget_SettingOptionEntryBase");
static_assert(offsetof(UPyWidget_SettingOptionEntryBase, OnHovered) == 0x0005E8, "Member 'UPyWidget_SettingOptionEntryBase::OnHovered' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntryBase, OnUnhovered) == 0x0005F8, "Member 'UPyWidget_SettingOptionEntryBase::OnUnhovered' has a wrong offset!");

// PythonClass PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntryTitle
// 0x0020 (0x0628 - 0x0608)
class UPyWidget_SettingOptionEntryTitle : public UPyWidget_SettingOptionEntryBase
{
public:
	class UWidget*                                Text_Name;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                Spacer_Top;                                        // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                NamedSlot_Tag;                                     // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                UnbindTagWidgetClass;                              // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingOptionEntryTitle">();
	}
	static class UPyWidget_SettingOptionEntryTitle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingOptionEntryTitle>();
	}
};
static_assert(alignof(UPyWidget_SettingOptionEntryTitle) == 0x000008, "Wrong alignment on UPyWidget_SettingOptionEntryTitle");
static_assert(sizeof(UPyWidget_SettingOptionEntryTitle) == 0x000628, "Wrong size on UPyWidget_SettingOptionEntryTitle");
static_assert(offsetof(UPyWidget_SettingOptionEntryTitle, Text_Name) == 0x000608, "Member 'UPyWidget_SettingOptionEntryTitle::Text_Name' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntryTitle, Spacer_Top) == 0x000610, "Member 'UPyWidget_SettingOptionEntryTitle::Spacer_Top' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntryTitle, NamedSlot_Tag) == 0x000618, "Member 'UPyWidget_SettingOptionEntryTitle::NamedSlot_Tag' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntryTitle, UnbindTagWidgetClass) == 0x000620, "Member 'UPyWidget_SettingOptionEntryTitle::UnbindTagWidgetClass' has a wrong offset!");

// PythonClass PyWidget_SettingOptionEntry.PyWidget_SettingOptionEntry
// 0x0140 (0x0748 - 0x0608)
class UPyWidget_SettingOptionEntry : public UPyWidget_SettingOptionEntryBase
{
public:
	class UAkAudioEvent*                          AkEvent_OnItemHovered;                             // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                          AkEvent_OnItemClicked;                             // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NeedBottomLine;                                    // 0x0618(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_619[0x7];                                      // 0x0619(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateFontInfo                         HoverFont;                                         // 0x0620(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                         UnHoverFont;                                       // 0x0688(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                            HoverTextColor;                                    // 0x06F0(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateColor                            UnHoverTextColor;                                  // 0x0704(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                             AddBtnTexture;                                     // 0x0718(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             SubtractBtnTexture;                                // 0x0720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                             RecoverBtnTexture;                                 // 0x0728(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUISettingEntryOptionsGenerator*        Options_generator;                                 // 0x0730(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUISettingEntrySettingHandler*          Setting_handler;                                   // 0x0738(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                ExtraButtonWidgetClass;                            // 0x0740(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void Construct();
	void OnCascadingVisibleChanged(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_SettingOptionEntry">();
	}
	static class UPyWidget_SettingOptionEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_SettingOptionEntry>();
	}
};
static_assert(alignof(UPyWidget_SettingOptionEntry) == 0x000008, "Wrong alignment on UPyWidget_SettingOptionEntry");
static_assert(sizeof(UPyWidget_SettingOptionEntry) == 0x000748, "Wrong size on UPyWidget_SettingOptionEntry");
static_assert(offsetof(UPyWidget_SettingOptionEntry, AkEvent_OnItemHovered) == 0x000608, "Member 'UPyWidget_SettingOptionEntry::AkEvent_OnItemHovered' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, AkEvent_OnItemClicked) == 0x000610, "Member 'UPyWidget_SettingOptionEntry::AkEvent_OnItemClicked' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, NeedBottomLine) == 0x000618, "Member 'UPyWidget_SettingOptionEntry::NeedBottomLine' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, HoverFont) == 0x000620, "Member 'UPyWidget_SettingOptionEntry::HoverFont' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, UnHoverFont) == 0x000688, "Member 'UPyWidget_SettingOptionEntry::UnHoverFont' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, HoverTextColor) == 0x0006F0, "Member 'UPyWidget_SettingOptionEntry::HoverTextColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, UnHoverTextColor) == 0x000704, "Member 'UPyWidget_SettingOptionEntry::UnHoverTextColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, AddBtnTexture) == 0x000718, "Member 'UPyWidget_SettingOptionEntry::AddBtnTexture' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, SubtractBtnTexture) == 0x000720, "Member 'UPyWidget_SettingOptionEntry::SubtractBtnTexture' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, RecoverBtnTexture) == 0x000728, "Member 'UPyWidget_SettingOptionEntry::RecoverBtnTexture' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, Options_generator) == 0x000730, "Member 'UPyWidget_SettingOptionEntry::Options_generator' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, Setting_handler) == 0x000738, "Member 'UPyWidget_SettingOptionEntry::Setting_handler' has a wrong offset!");
static_assert(offsetof(UPyWidget_SettingOptionEntry, ExtraButtonWidgetClass) == 0x000740, "Member 'UPyWidget_SettingOptionEntry::ExtraButtonWidgetClass' has a wrong offset!");

}
