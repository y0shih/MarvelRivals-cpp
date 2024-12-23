#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_CommonPageCutting

#include "Basic.hpp"

#include "PyMarvelUserWidget_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// PythonClass PyWidget_CommonPageCutting.PyWidget_CommonPageCutting
// 0x0038 (0x0620 - 0x05E8)
class UPyWidget_CommonPageCutting : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x3];                                      // 0x05E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentNum;                                        // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MinNum;                                            // 0x05E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNum;                                            // 0x05EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxLength;                                         // 0x05F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsShowInputMode;                                   // 0x05F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EdgeBtnsVisible;                                   // 0x05F5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EnableWheelChangePage;                             // 0x05F6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5F7[0x1];                                      // 0x05F7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChangePageStep;                                    // 0x05F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5FC[0x4];                                      // 0x05FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPageChanged;                                     // 0x0600(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPageReset;                                       // 0x0610(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnPageChanged__DelegateSignature(int32 Page);
	void OnPageReset__DelegateSignature(int32 CurrentNum_0, int32 MaxNum_0);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void OnReceiveInputAction(class FName ActionName, const EInputEvent EventType);
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_CommonPageCutting">();
	}
	static class UPyWidget_CommonPageCutting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_CommonPageCutting>();
	}
};
static_assert(alignof(UPyWidget_CommonPageCutting) == 0x000008, "Wrong alignment on UPyWidget_CommonPageCutting");
static_assert(sizeof(UPyWidget_CommonPageCutting) == 0x000620, "Wrong size on UPyWidget_CommonPageCutting");
static_assert(offsetof(UPyWidget_CommonPageCutting, CurrentNum) == 0x0005E4, "Member 'UPyWidget_CommonPageCutting::CurrentNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, MinNum) == 0x0005E8, "Member 'UPyWidget_CommonPageCutting::MinNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, MaxNum) == 0x0005EC, "Member 'UPyWidget_CommonPageCutting::MaxNum' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, MaxLength) == 0x0005F0, "Member 'UPyWidget_CommonPageCutting::MaxLength' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, IsShowInputMode) == 0x0005F4, "Member 'UPyWidget_CommonPageCutting::IsShowInputMode' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, EdgeBtnsVisible) == 0x0005F5, "Member 'UPyWidget_CommonPageCutting::EdgeBtnsVisible' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, EnableWheelChangePage) == 0x0005F6, "Member 'UPyWidget_CommonPageCutting::EnableWheelChangePage' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, ChangePageStep) == 0x0005F8, "Member 'UPyWidget_CommonPageCutting::ChangePageStep' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, OnPageChanged) == 0x000600, "Member 'UPyWidget_CommonPageCutting::OnPageChanged' has a wrong offset!");
static_assert(offsetof(UPyWidget_CommonPageCutting, OnPageReset) == 0x000610, "Member 'UPyWidget_CommonPageCutting::OnPageReset' has a wrong offset!");

}

