#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyWidget_BattlePass_Recharge

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "PyWidget_BattlePass_Unlock_structs.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "SlateCore_structs.hpp"
#include "PyMarvelUserWidget_classes.hpp"
#include "PyWidget_Common_SecondaryConfirm_Button_classes.hpp"


namespace SDK
{

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_RechargeInfoCard
// 0x0000 (0x05A0 - 0x05A0)
class UPyWidget_BattlePass_RechargeInfoCard : public UMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_RechargeInfoCard">();
	}
	static class UPyWidget_BattlePass_RechargeInfoCard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_RechargeInfoCard>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_RechargeInfoCard) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_RechargeInfoCard");
static_assert(sizeof(UPyWidget_BattlePass_RechargeInfoCard) == 0x0005A0, "Wrong size on UPyWidget_BattlePass_RechargeInfoCard");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_Recharge_InfoCard_BaseItem
// 0x0010 (0x05F8 - 0x05E8)
class UPyWidget_BattlePass_Recharge_InfoCard_BaseItem : public UPyMarvelUserWidget
{
public:
	uint8                                         Pad_5E1[0x7];                                      // 0x05E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Item_ID;                                           // 0x05E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_Recharge_InfoCard_BaseItem">();
	}
	static class UPyWidget_BattlePass_Recharge_InfoCard_BaseItem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_Recharge_InfoCard_BaseItem>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_Recharge_InfoCard_BaseItem) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_Recharge_InfoCard_BaseItem");
static_assert(sizeof(UPyWidget_BattlePass_Recharge_InfoCard_BaseItem) == 0x0005F8, "Wrong size on UPyWidget_BattlePass_Recharge_InfoCard_BaseItem");
static_assert(offsetof(UPyWidget_BattlePass_Recharge_InfoCard_BaseItem, Item_ID) == 0x0005E8, "Member 'UPyWidget_BattlePass_Recharge_InfoCard_BaseItem::Item_ID' has a wrong offset!");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_BuyBtn
// 0x0090 (0x0678 - 0x05E8)
class UPyWidget_BattlePass_BuyBtn : public UPyMarvelUserWidget
{
public:
	bool                                          KeyPromptVisible;                                  // 0x05E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5E2[0x6];                                      // 0x05E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUIActionData                          HotKey;                                            // 0x05E8(0x0058)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            NotEnoughMoneyColor;                               // 0x0640(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateColor                            EnoughMoneyColor;                                  // 0x0654(0x0014)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnClickBuy;                                        // 0x0668(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

public:
	void OnClickBuy__DelegateSignature();
	void OnInitialized();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_BuyBtn">();
	}
	static class UPyWidget_BattlePass_BuyBtn* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_BuyBtn>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_BuyBtn) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_BuyBtn");
static_assert(sizeof(UPyWidget_BattlePass_BuyBtn) == 0x000678, "Wrong size on UPyWidget_BattlePass_BuyBtn");
static_assert(offsetof(UPyWidget_BattlePass_BuyBtn, KeyPromptVisible) == 0x0005E1, "Member 'UPyWidget_BattlePass_BuyBtn::KeyPromptVisible' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_BuyBtn, HotKey) == 0x0005E8, "Member 'UPyWidget_BattlePass_BuyBtn::HotKey' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_BuyBtn, NotEnoughMoneyColor) == 0x000640, "Member 'UPyWidget_BattlePass_BuyBtn::NotEnoughMoneyColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_BuyBtn, EnoughMoneyColor) == 0x000654, "Member 'UPyWidget_BattlePass_BuyBtn::EnoughMoneyColor' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_BuyBtn, OnClickBuy) == 0x000668, "Member 'UPyWidget_BattlePass_BuyBtn::OnClickBuy' has a wrong offset!");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_Recharge
// 0x0030 (0x0640 - 0x0610)
class UPyWidget_BattlePass_Recharge : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPyWidget_BattlePass_RewardItemStruct> Normal_Reward;                                     // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPyWidget_BattlePass_RewardItemStruct> Advance_Reward;                                    // 0x0620(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FPyWidget_BattlePass_RewardItemStruct> Free_To_Advance_Reward;                            // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	void OnBecomeTop();
	void OnBecomeNoneTop();
	void MarvelSetVisible(bool Visible);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_Recharge">();
	}
	static class UPyWidget_BattlePass_Recharge* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_Recharge>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_Recharge) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_Recharge");
static_assert(sizeof(UPyWidget_BattlePass_Recharge) == 0x000640, "Wrong size on UPyWidget_BattlePass_Recharge");
static_assert(offsetof(UPyWidget_BattlePass_Recharge, Normal_Reward) == 0x000610, "Member 'UPyWidget_BattlePass_Recharge::Normal_Reward' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_Recharge, Advance_Reward) == 0x000620, "Member 'UPyWidget_BattlePass_Recharge::Advance_Reward' has a wrong offset!");
static_assert(offsetof(UPyWidget_BattlePass_Recharge, Free_To_Advance_Reward) == 0x000630, "Member 'UPyWidget_BattlePass_Recharge::Free_To_Advance_Reward' has a wrong offset!");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_BuyConfirm
// 0x0000 (0x06C0 - 0x06C0)
class UPyWidget_BattlePass_BuyConfirm : public UPyWidget_Common_SecondaryConfirm_Button
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_BuyConfirm">();
	}
	static class UPyWidget_BattlePass_BuyConfirm* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_BuyConfirm>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_BuyConfirm) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_BuyConfirm");
static_assert(sizeof(UPyWidget_BattlePass_BuyConfirm) == 0x0006C0, "Wrong size on UPyWidget_BattlePass_BuyConfirm");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_Recharge_InfoCard_Item
// 0x0000 (0x05F8 - 0x05F8)
class UPyWidget_BattlePass_Recharge_InfoCard_Item : public UPyWidget_BattlePass_Recharge_InfoCard_BaseItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_Recharge_InfoCard_Item">();
	}
	static class UPyWidget_BattlePass_Recharge_InfoCard_Item* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_Recharge_InfoCard_Item>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_Recharge_InfoCard_Item) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_Recharge_InfoCard_Item");
static_assert(sizeof(UPyWidget_BattlePass_Recharge_InfoCard_Item) == 0x0005F8, "Wrong size on UPyWidget_BattlePass_Recharge_InfoCard_Item");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_RechargeInfoCard2
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_BattlePass_RechargeInfoCard2 final : public UPyMarvelUserWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_RechargeInfoCard2">();
	}
	static class UPyWidget_BattlePass_RechargeInfoCard2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_RechargeInfoCard2>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_RechargeInfoCard2) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_RechargeInfoCard2");
static_assert(sizeof(UPyWidget_BattlePass_RechargeInfoCard2) == 0x0005E8, "Wrong size on UPyWidget_BattlePass_RechargeInfoCard2");

// PythonClass PyWidget_BattlePass_Recharge.PyWidget_BattlePass_RechargeUpgradeCard
// 0x0000 (0x05A0 - 0x05A0)
class UPyWidget_BattlePass_RechargeUpgradeCard : public UMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_BattlePass_RechargeUpgradeCard">();
	}
	static class UPyWidget_BattlePass_RechargeUpgradeCard* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_BattlePass_RechargeUpgradeCard>();
	}
};
static_assert(alignof(UPyWidget_BattlePass_RechargeUpgradeCard) == 0x000008, "Wrong alignment on UPyWidget_BattlePass_RechargeUpgradeCard");
static_assert(sizeof(UPyWidget_BattlePass_RechargeUpgradeCard) == 0x0005A0, "Wrong size on UPyWidget_BattlePass_RechargeUpgradeCard");

}
