#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_League_Schedule_Group

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PyWidget_League_Schedule_Group_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_League_Schedule_Group.WBP_League_Schedule_Group_C
// 0x0080 (0x0670 - 0x05F0)
class UWBP_League_Schedule_Group_C final : public UPyWidget_League_Schedule_Group
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarvelImage*                           Img_Normal_Bg;                                     // 0x05F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Switzerland_Bg;                                // 0x0600(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_Team_NameBg;                                   // 0x0608(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Group;                                     // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Result;                                       // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Score;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_Team_Name;                                    // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VBox_EachTeam_List;                                // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Schedule_Team_C*            WBP_League_Schedule_Team;                          // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Schedule_Team_C*            WBP_League_Schedule_Team_1;                        // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Schedule_Team_C*            WBP_League_Schedule_Team_2;                        // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Schedule_Team_C*            WBP_League_Schedule_Team_3;                        // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Schedule_Participate_C*     WBP_Participate_Team_1;                            // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_League_Schedule_Participate_C*     WBP_Participate_Team_2;                            // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                               WrapBox_2By2;                                      // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_League_Schedule_Group(int32 EntryPoint);
	void OnListItemObjectSet(class UObject* ListItemObject);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_League_Schedule_Group_C">();
	}
	static class UWBP_League_Schedule_Group_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_League_Schedule_Group_C>();
	}
};
static_assert(alignof(UWBP_League_Schedule_Group_C) == 0x000008, "Wrong alignment on UWBP_League_Schedule_Group_C");
static_assert(sizeof(UWBP_League_Schedule_Group_C) == 0x000670, "Wrong size on UWBP_League_Schedule_Group_C");
static_assert(offsetof(UWBP_League_Schedule_Group_C, UberGraphFrame) == 0x0005F0, "Member 'UWBP_League_Schedule_Group_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Img_Normal_Bg) == 0x0005F8, "Member 'UWBP_League_Schedule_Group_C::Img_Normal_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Img_Switzerland_Bg) == 0x000600, "Member 'UWBP_League_Schedule_Group_C::Img_Switzerland_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Img_Team_NameBg) == 0x000608, "Member 'UWBP_League_Schedule_Group_C::Img_Team_NameBg' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Overlay_Group) == 0x000610, "Member 'UWBP_League_Schedule_Group_C::Overlay_Group' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Text_Result) == 0x000618, "Member 'UWBP_League_Schedule_Group_C::Text_Result' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Text_Score) == 0x000620, "Member 'UWBP_League_Schedule_Group_C::Text_Score' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, Text_Team_Name) == 0x000628, "Member 'UWBP_League_Schedule_Group_C::Text_Team_Name' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, VBox_EachTeam_List) == 0x000630, "Member 'UWBP_League_Schedule_Group_C::VBox_EachTeam_List' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WBP_League_Schedule_Team) == 0x000638, "Member 'UWBP_League_Schedule_Group_C::WBP_League_Schedule_Team' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WBP_League_Schedule_Team_1) == 0x000640, "Member 'UWBP_League_Schedule_Group_C::WBP_League_Schedule_Team_1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WBP_League_Schedule_Team_2) == 0x000648, "Member 'UWBP_League_Schedule_Group_C::WBP_League_Schedule_Team_2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WBP_League_Schedule_Team_3) == 0x000650, "Member 'UWBP_League_Schedule_Group_C::WBP_League_Schedule_Team_3' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WBP_Participate_Team_1) == 0x000658, "Member 'UWBP_League_Schedule_Group_C::WBP_Participate_Team_1' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WBP_Participate_Team_2) == 0x000660, "Member 'UWBP_League_Schedule_Group_C::WBP_Participate_Team_2' has a wrong offset!");
static_assert(offsetof(UWBP_League_Schedule_Group_C, WrapBox_2By2) == 0x000668, "Member 'UWBP_League_Schedule_Group_C::WrapBox_2By2' has a wrong offset!");

}
