#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Team_ClanIcon

#include "Basic.hpp"

#include "PyWidget_Clan_ClanEntry_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Team_ClanIcon.WBP_Team_ClanIcon_C
// 0x0028 (0x0410 - 0x03E8)
class UWBP_Team_ClanIcon_C final : public UPyWidget_Clan_ClanIcon
{
public:
	class UMarvelButton*                          Btn_Click;                                         // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_BaseMap_Vx;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_team_verifiedteam;                             // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelImage*                           Img_team_verifiedteam_small;                       // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0408(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Height;                                            // 0x040C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Team_ClanIcon_C">();
	}
	static class UWBP_Team_ClanIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Team_ClanIcon_C>();
	}
};
static_assert(alignof(UWBP_Team_ClanIcon_C) == 0x000008, "Wrong alignment on UWBP_Team_ClanIcon_C");
static_assert(sizeof(UWBP_Team_ClanIcon_C) == 0x000410, "Wrong size on UWBP_Team_ClanIcon_C");
static_assert(offsetof(UWBP_Team_ClanIcon_C, Btn_Click) == 0x0003E8, "Member 'UWBP_Team_ClanIcon_C::Btn_Click' has a wrong offset!");
static_assert(offsetof(UWBP_Team_ClanIcon_C, Img_BaseMap_Vx) == 0x0003F0, "Member 'UWBP_Team_ClanIcon_C::Img_BaseMap_Vx' has a wrong offset!");
static_assert(offsetof(UWBP_Team_ClanIcon_C, Img_team_verifiedteam) == 0x0003F8, "Member 'UWBP_Team_ClanIcon_C::Img_team_verifiedteam' has a wrong offset!");
static_assert(offsetof(UWBP_Team_ClanIcon_C, Img_team_verifiedteam_small) == 0x000400, "Member 'UWBP_Team_ClanIcon_C::Img_team_verifiedteam_small' has a wrong offset!");
static_assert(offsetof(UWBP_Team_ClanIcon_C, Width) == 0x000408, "Member 'UWBP_Team_ClanIcon_C::Width' has a wrong offset!");
static_assert(offsetof(UWBP_Team_ClanIcon_C, Height) == 0x00040C, "Member 'UWBP_Team_ClanIcon_C::Height' has a wrong offset!");

}
