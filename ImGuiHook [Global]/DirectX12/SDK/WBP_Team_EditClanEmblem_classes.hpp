#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_EditClanEmblem

#include "Basic.hpp"

#include "PyWidget_Clan_ClanEdit_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Team_EditClanEmblem.WBP_Team_EditClanEmblem_C
// 0x0068 (0x0678 - 0x0610)
class UWBP_Team_EditClanEmblem_C final : public UPyWidget_Clan_ClanEdit
{
public:
	class UMarvelImage*                           Img_bg;                                            // 0x0610(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_TipsBg;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Left;                                      // 0x0620(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelOverlay*                         Overlay_Tips;                                      // 0x0628(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelRichTextBlock*                   RText_TipsContent;                                 // 0x0630(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTextBlock*                       Text_UploadTips;                                   // 0x0638(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelTileView*                        TileView_IconList;                                 // 0x0640(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_Y_C*                WBP_Btn_Save;                                      // 0x0648(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Btn_Lv1_W_C*                WBP_Btn_Upload;                                    // 0x0650(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Team_ClanIcon_C*                   WBP_ClanIcon;                                      // 0x0658(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_BgAngle_V2_C*               WBP_Common_BgAngle_V2;                             // 0x0660(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_NavigationBar_LV2_C*        WBP_NavigationBar_Lv2;                             // 0x0668(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Setting_Title_C*                   WBP_Title_ClanIcon;                                // 0x0670(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Team_EditClanEmblem_C">();
	}
	static class UWBP_Team_EditClanEmblem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Team_EditClanEmblem_C>();
	}
};
static_assert(alignof(UWBP_Team_EditClanEmblem_C) == 0x000008, "Wrong alignment on UWBP_Team_EditClanEmblem_C");
static_assert(sizeof(UWBP_Team_EditClanEmblem_C) == 0x000678, "Wrong size on UWBP_Team_EditClanEmblem_C");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, Img_bg) == 0x000610, "Member 'UWBP_Team_EditClanEmblem_C::Img_bg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, Img_TipsBg) == 0x000618, "Member 'UWBP_Team_EditClanEmblem_C::Img_TipsBg' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, Overlay_Left) == 0x000620, "Member 'UWBP_Team_EditClanEmblem_C::Overlay_Left' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, Overlay_Tips) == 0x000628, "Member 'UWBP_Team_EditClanEmblem_C::Overlay_Tips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, RText_TipsContent) == 0x000630, "Member 'UWBP_Team_EditClanEmblem_C::RText_TipsContent' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, Text_UploadTips) == 0x000638, "Member 'UWBP_Team_EditClanEmblem_C::Text_UploadTips' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, TileView_IconList) == 0x000640, "Member 'UWBP_Team_EditClanEmblem_C::TileView_IconList' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, WBP_Btn_Save) == 0x000648, "Member 'UWBP_Team_EditClanEmblem_C::WBP_Btn_Save' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, WBP_Btn_Upload) == 0x000650, "Member 'UWBP_Team_EditClanEmblem_C::WBP_Btn_Upload' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, WBP_ClanIcon) == 0x000658, "Member 'UWBP_Team_EditClanEmblem_C::WBP_ClanIcon' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, WBP_Common_BgAngle_V2) == 0x000660, "Member 'UWBP_Team_EditClanEmblem_C::WBP_Common_BgAngle_V2' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, WBP_NavigationBar_Lv2) == 0x000668, "Member 'UWBP_Team_EditClanEmblem_C::WBP_NavigationBar_Lv2' has a wrong offset!");
static_assert(offsetof(UWBP_Team_EditClanEmblem_C, WBP_Title_ClanIcon) == 0x000670, "Member 'UWBP_Team_EditClanEmblem_C::WBP_Title_ClanIcon' has a wrong offset!");

}
