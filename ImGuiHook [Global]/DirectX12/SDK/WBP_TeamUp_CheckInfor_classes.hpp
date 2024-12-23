#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TeamUp_CheckInfor

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TeamUp_CheckInfor.WBP_TeamUp_CheckInfor_C
// 0x0040 (0x03F8 - 0x03B8)
class UWBP_TeamUp_CheckInfor_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TeamUp_CheckInfor_Btn_C*           Btn_AddFriend;                                     // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TeamUp_CheckInfor_Btn_C*           Btn_JoinTeam;                                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TeamUp_CheckInfor_Btn_C*           Btn_PrivateChat;                                   // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TeamUp_CheckInfor_Btn_C*           Btn_ViewCareer;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarvelVerticalBox*                     VerBox_Select;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_TeamUp_CheckInfor(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TeamUp_CheckInfor_C">();
	}
	static class UWBP_TeamUp_CheckInfor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TeamUp_CheckInfor_C>();
	}
};
static_assert(alignof(UWBP_TeamUp_CheckInfor_C) == 0x000008, "Wrong alignment on UWBP_TeamUp_CheckInfor_C");
static_assert(sizeof(UWBP_TeamUp_CheckInfor_C) == 0x0003F8, "Wrong size on UWBP_TeamUp_CheckInfor_C");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, UberGraphFrame) == 0x0003B8, "Member 'UWBP_TeamUp_CheckInfor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, Btn_AddFriend) == 0x0003C0, "Member 'UWBP_TeamUp_CheckInfor_C::Btn_AddFriend' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, Btn_JoinTeam) == 0x0003C8, "Member 'UWBP_TeamUp_CheckInfor_C::Btn_JoinTeam' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, Btn_PrivateChat) == 0x0003D0, "Member 'UWBP_TeamUp_CheckInfor_C::Btn_PrivateChat' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, Btn_ViewCareer) == 0x0003D8, "Member 'UWBP_TeamUp_CheckInfor_C::Btn_ViewCareer' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, Image_Bg) == 0x0003E0, "Member 'UWBP_TeamUp_CheckInfor_C::Image_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, VerBox_Select) == 0x0003E8, "Member 'UWBP_TeamUp_CheckInfor_C::VerBox_Select' has a wrong offset!");
static_assert(offsetof(UWBP_TeamUp_CheckInfor_C, Visible) == 0x0003F0, "Member 'UWBP_TeamUp_CheckInfor_C::Visible' has a wrong offset!");

}

