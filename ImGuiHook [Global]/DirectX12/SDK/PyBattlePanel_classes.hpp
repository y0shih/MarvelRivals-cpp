#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PyBattlePanel

#include "Basic.hpp"

#include "PyWidget_ModuleMainPanel_classes.hpp"
#include "Marvel_structs.hpp"
#include "Marvel_classes.hpp"
#include "PyMarvelUserWidget_classes.hpp"


namespace SDK
{

// PythonClass PyBattlePanel.PyWidget_ViewTargetPanel
// 0x0000 (0x05E8 - 0x05E8)
class UPyWidget_ViewTargetPanel final : public UPyMarvelUserWidget
{
public:
	void OnInitialized();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyWidget_ViewTargetPanel">();
	}
	static class UPyWidget_ViewTargetPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyWidget_ViewTargetPanel>();
	}
};
static_assert(alignof(UPyWidget_ViewTargetPanel) == 0x000008, "Wrong alignment on UPyWidget_ViewTargetPanel");
static_assert(sizeof(UPyWidget_ViewTargetPanel) == 0x0005E8, "Wrong size on UPyWidget_ViewTargetPanel");

// PythonClass PyBattlePanel.PyBattlePanel
// 0x0060 (0x0670 - 0x0610)
class UPyBattlePanel final : public UPyWidget_ModuleMainPanel
{
public:
	uint8                                         Pad_609[0x7];                                      // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputAction*                           SelectHeroAction;                                  // 0x0610(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           SelectHeroUITipsAction;                            // 0x0618(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           SelectHeroUITipsActionRealse;                      // 0x0620(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           TrainSettingAction;                                // 0x0628(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           ExitMenuAction;                                    // 0x0630(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           ExitMenuInGameAction;                              // 0x0638(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           ActiveSurrenderPanel_Start_Action;                 // 0x0640(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           ActiveSurrenderPanel_Up_Action;                    // 0x0648(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           ActiveSurrenderPanel_Hold_Action;                  // 0x0650(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>                ScoreboardClass;                                   // 0x0658(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                           TrainOpenExitMenuAction;                           // 0x0660(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TrainOpenExitMenuAction_TapDurationLimit;          // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TrainingShowHoldTipsDelayTime;                     // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void OnInitialized();
	void Construct();
	void Destruct();
	bool ShouldEnableInput();
	void OnBecomeTop();
	void MarvelSetVisible(bool Visible);
	void AddHPWidget_LeftBottom(class UWidget* Content, int32 Priority_0);
	void AddNumWidget_LeftBottom(class UWidget* Content, int32 Priority_0);
	class UWidget_AbilityStatusPanel* GetAbilityStatusPanel();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyBattlePanel">();
	}
	static class UPyBattlePanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyBattlePanel>();
	}
};
static_assert(alignof(UPyBattlePanel) == 0x000008, "Wrong alignment on UPyBattlePanel");
static_assert(sizeof(UPyBattlePanel) == 0x000670, "Wrong size on UPyBattlePanel");
static_assert(offsetof(UPyBattlePanel, SelectHeroAction) == 0x000610, "Member 'UPyBattlePanel::SelectHeroAction' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, SelectHeroUITipsAction) == 0x000618, "Member 'UPyBattlePanel::SelectHeroUITipsAction' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, SelectHeroUITipsActionRealse) == 0x000620, "Member 'UPyBattlePanel::SelectHeroUITipsActionRealse' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, TrainSettingAction) == 0x000628, "Member 'UPyBattlePanel::TrainSettingAction' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, ExitMenuAction) == 0x000630, "Member 'UPyBattlePanel::ExitMenuAction' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, ExitMenuInGameAction) == 0x000638, "Member 'UPyBattlePanel::ExitMenuInGameAction' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, ActiveSurrenderPanel_Start_Action) == 0x000640, "Member 'UPyBattlePanel::ActiveSurrenderPanel_Start_Action' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, ActiveSurrenderPanel_Up_Action) == 0x000648, "Member 'UPyBattlePanel::ActiveSurrenderPanel_Up_Action' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, ActiveSurrenderPanel_Hold_Action) == 0x000650, "Member 'UPyBattlePanel::ActiveSurrenderPanel_Hold_Action' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, ScoreboardClass) == 0x000658, "Member 'UPyBattlePanel::ScoreboardClass' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, TrainOpenExitMenuAction) == 0x000660, "Member 'UPyBattlePanel::TrainOpenExitMenuAction' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, TrainOpenExitMenuAction_TapDurationLimit) == 0x000668, "Member 'UPyBattlePanel::TrainOpenExitMenuAction_TapDurationLimit' has a wrong offset!");
static_assert(offsetof(UPyBattlePanel, TrainingShowHoldTipsDelayTime) == 0x00066C, "Member 'UPyBattlePanel::TrainingShowHoldTipsDelayTime' has a wrong offset!");

// PythonClass PyBattlePanel.PyUIGameFunctionLibraray
// 0x0000 (0x0038 - 0x0038)
class UPyUIGameFunctionLibraray final : public UUIGameFunctionLibraray
{
public:
	class UUserWidget* GetAbilityStatusPanel();
	void AddHitIndicator(const class UMarvelCueNotify_HitImpact* Cue, class AActor* MyTarget, const struct FGameplayCueParameters& Parameter);
	void PlayShakeAnim(EMarvelAbilityUIHudAnim Anim_style);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PyUIGameFunctionLibraray">();
	}
	static class UPyUIGameFunctionLibraray* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPyUIGameFunctionLibraray>();
	}
};
static_assert(alignof(UPyUIGameFunctionLibraray) == 0x000008, "Wrong alignment on UPyUIGameFunctionLibraray");
static_assert(sizeof(UPyUIGameFunctionLibraray) == 0x000038, "Wrong size on UPyUIGameFunctionLibraray");

}
