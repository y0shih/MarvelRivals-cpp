#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_Common_SliderNumber

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_Common_SliderNumber.PyWidget_Common_SliderNumber
// 0x0040 (0x0628 - 0x05E8)
class UPyWidget_Common_SliderNumber : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxRangeNum;                                       // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MinRangeNum;                                       // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ClickNumber;                                       // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          NeedPercent;                                       // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5F1[0x3];                                      // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HoldThreshold;                                     // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         HoldResponseIntervel;                              // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5FC[0x4];                                      // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AKEvent_OnValueChanged;                            // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0608(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0618(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnInitialized();
	void Destruct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_Common_SliderNumber">();
	}
	static class UPyWidget_Common_SliderNumber* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_Common_SliderNumber>();
	}
};
static_assert(alignof(UPyWidget_Common_SliderNumber) == 0x000008, "Wrong alignment on UPyWidget_Common_SliderNumber");
static_assert(sizeof(UPyWidget_Common_SliderNumber) == 0x000628, "Wrong size on UPyWidget_Common_SliderNumber");
static_assert(offsetof(UPyWidget_Common_SliderNumber, MaxRangeNum) == 0x0005E4, "Member 'UPyWidget_Common_SliderNumber::MaxRangeNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, MinRangeNum) == 0x0005E8, "Member 'UPyWidget_Common_SliderNumber::MinRangeNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, ClickNumber) == 0x0005EC, "Member 'UPyWidget_Common_SliderNumber::ClickNumber' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, NeedPercent) == 0x0005F0, "Member 'UPyWidget_Common_SliderNumber::NeedPercent' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, HoldThreshold) == 0x0005F4, "Member 'UPyWidget_Common_SliderNumber::HoldThreshold' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, HoldResponseIntervel) == 0x0005F8, "Member 'UPyWidget_Common_SliderNumber::HoldResponseIntervel' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, AKEvent_OnValueChanged) == 0x000600, "Member 'UPyWidget_Common_SliderNumber::AKEvent_OnValueChanged' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, OnHovered) == 0x000608, "Member 'UPyWidget_Common_SliderNumber::OnHovered' has a wrong offset!");
static_assert(offsetof(UPyWidget_Common_SliderNumber, OnUnhovered) == 0x000618, "Member 'UPyWidget_Common_SliderNumber::OnUnhovered' has a wrong offset!");

}
