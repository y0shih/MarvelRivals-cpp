#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_HisoryCardUnit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_Clan_LeagueHistoryEntry_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Team_HisoryCardUnit.WBP_Team_HisoryCardUnit_C
// 0x0078 (0x06D8 - 0x0660)
class UWBP_Team_HisoryCardUnit_C final : public UPyWidget_Clan_LeagueHistoryEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0660(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelButton*                          Btn_Main;                                          // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_AttestationClan;                              // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_Cup;                                          // 0x0678(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Icon_CupMask;                                      // 0x0680(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_CupBg;                                         // 0x0688(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_Triange_Vx;                            // 0x0690(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Empty;                                      // 0x0698(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_ClanName;                                     // 0x06A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_CompetitionName;                              // 0x06A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_CompetitionType;                              // 0x06B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_DateTime;                                     // 0x06B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking;                                      // 0x06C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Ranking_Other;                                // 0x06C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Com_Platform_HList_C*              WBP_Platform_HList;                                // 0x06D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_Team_HisoryCardUnit(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Team_HisoryCardUnit_C">();
	}
	static class UWBP_Team_HisoryCardUnit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Team_HisoryCardUnit_C>();
	}
};
static_assert(alignof(UWBP_Team_HisoryCardUnit_C) == 0x000008, "Wrong alignment on UWBP_Team_HisoryCardUnit_C");
static_assert(sizeof(UWBP_Team_HisoryCardUnit_C) == 0x0006D8, "Wrong size on UWBP_Team_HisoryCardUnit_C");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, UberGraphFrame) == 0x000660, "Member 'UWBP_Team_HisoryCardUnit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Btn_Main) == 0x000668, "Member 'UWBP_Team_HisoryCardUnit_C::Btn_Main' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Icon_AttestationClan) == 0x000670, "Member 'UWBP_Team_HisoryCardUnit_C::Icon_AttestationClan' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Icon_Cup) == 0x000678, "Member 'UWBP_Team_HisoryCardUnit_C::Icon_Cup' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Icon_CupMask) == 0x000680, "Member 'UWBP_Team_HisoryCardUnit_C::Icon_CupMask' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Img_CupBg) == 0x000688, "Member 'UWBP_Team_HisoryCardUnit_C::Img_CupBg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, RetainerBox_Triange_Vx) == 0x000690, "Member 'UWBP_Team_HisoryCardUnit_C::RetainerBox_Triange_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Spacer_Empty) == 0x000698, "Member 'UWBP_Team_HisoryCardUnit_C::Spacer_Empty' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Text_ClanName) == 0x0006A0, "Member 'UWBP_Team_HisoryCardUnit_C::Text_ClanName' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Text_CompetitionName) == 0x0006A8, "Member 'UWBP_Team_HisoryCardUnit_C::Text_CompetitionName' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Text_CompetitionType) == 0x0006B0, "Member 'UWBP_Team_HisoryCardUnit_C::Text_CompetitionType' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Text_DateTime) == 0x0006B8, "Member 'UWBP_Team_HisoryCardUnit_C::Text_DateTime' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Text_Ranking) == 0x0006C0, "Member 'UWBP_Team_HisoryCardUnit_C::Text_Ranking' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, Text_Ranking_Other) == 0x0006C8, "Member 'UWBP_Team_HisoryCardUnit_C::Text_Ranking_Other' has a wrong offset!");
static_assert(offsetof(UWBP_Team_HisoryCardUnit_C, WBP_Platform_HList) == 0x0006D0, "Member 'UWBP_Team_HisoryCardUnit_C::WBP_Platform_HList' has a wrong offset!");

}
