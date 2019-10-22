
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.CheckCoinsAchievement
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::CheckCoinsAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.CheckCoinsAchievement");

	ASaul_MotionControllerPawn_C_CheckCoinsAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset Player Rotation
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Reset_Player_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset Player Rotation");

	ASaul_MotionControllerPawn_C_Reset_Player_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Player Rotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Subtract_Roation_Value         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::Set_Player_Rotation(float Subtract_Roation_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Player Rotation");

	ASaul_MotionControllerPawn_C_Set_Player_Rotation_Params params;
	params.Subtract_Roation_Value = Subtract_Roation_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleIngameMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::ToggleIngameMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleIngameMenu");

	ASaul_MotionControllerPawn_C_ToggleIngameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GetHeadTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ASaul_MotionControllerPawn_C::GetHeadTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GetHeadTransform");

	ASaul_MotionControllerPawn_C_GetHeadTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RightHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TeleportSpotFound              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TeleportLocation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                TeleportRotation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Set_player_rotation_to_Collision (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::TeleportCheck(bool RightHand, bool* TeleportSpotFound, struct FVector* TeleportLocation, struct FRotator* TeleportRotation, bool* Set_player_rotation_to_Collision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportCheck");

	ASaul_MotionControllerPawn_C_TeleportCheck_Params params;
	params.RightHand = RightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportSpotFound != nullptr)
		*TeleportSpotFound = params.TeleportSpotFound;
	if (TeleportLocation != nullptr)
		*TeleportLocation = params.TeleportLocation;
	if (TeleportRotation != nullptr)
		*TeleportRotation = params.TeleportRotation;
	if (Set_player_rotation_to_Collision != nullptr)
		*Set_player_rotation_to_Collision = params.Set_player_rotation_to_Collision;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::ToggleMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleMenu");

	ASaul_MotionControllerPawn_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Game Mode Ref
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Toggle_Flashlight_State        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::Game_Mode_Ref(bool Toggle_Flashlight_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Game Mode Ref");

	ASaul_MotionControllerPawn_C_Game_Mode_Ref_Params params;
	params.Toggle_Flashlight_State = Toggle_Flashlight_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UserConstructionScript");

	ASaul_MotionControllerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_36
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::Action_K2Node_InputActionEvent_36(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_36");

	ASaul_MotionControllerPawn_C_Action_K2Node_InputActionEvent_36_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_35
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::Action_K2Node_InputActionEvent_35(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_35");

	ASaul_MotionControllerPawn_C_Action_K2Node_InputActionEvent_35_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_34
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_GrabLeft_K2Node_InputActionEvent_34(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_34");

	ASaul_MotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_34_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_33
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_GrabLeft_K2Node_InputActionEvent_33(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_33");

	ASaul_MotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_33_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Toggle Level Menu_K2Node_InputActionEvent_32
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Toggle_Level_Menu_K2Node_InputActionEvent_32(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Toggle Level Menu_K2Node_InputActionEvent_32");

	ASaul_MotionControllerPawn_C_InpActEvt_Toggle_Level_Menu_K2Node_InputActionEvent_32_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_31
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_TeleportRight_K2Node_InputActionEvent_31(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_31");

	ASaul_MotionControllerPawn_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_31_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_30
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_GrabRight_K2Node_InputActionEvent_30(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_30");

	ASaul_MotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_30_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_29
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_GrabRight_K2Node_InputActionEvent_29(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_29");

	ASaul_MotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_29_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_TeleportLeft_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_28");

	ASaul_MotionControllerPawn_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadRight_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_DpadRight_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadRight_K2Node_InputActionEvent_27");

	ASaul_MotionControllerPawn_C_InpActEvt_DpadRight_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadLeft_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_DpadLeft_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadLeft_K2Node_InputActionEvent_26");

	ASaul_MotionControllerPawn_C_InpActEvt_DpadLeft_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Enter_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Enter_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Enter_K2Node_InputActionEvent_25");

	ASaul_MotionControllerPawn_C_InpActEvt_Enter_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadDown_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_DpadDown_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadDown_K2Node_InputActionEvent_24");

	ASaul_MotionControllerPawn_C_InpActEvt_DpadDown_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadUP_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_DpadUP_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadUP_K2Node_InputActionEvent_23");

	ASaul_MotionControllerPawn_C_InpActEvt_DpadUP_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_5");

	ASaul_MotionControllerPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_A3749E2849210D45C3F9C580BD7FB1C1
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::OnFailure_A3749E2849210D45C3F9C580BD7FB1C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_A3749E2849210D45C3F9C580BD7FB1C1");

	ASaul_MotionControllerPawn_C_OnFailure_A3749E2849210D45C3F9C580BD7FB1C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1");

	ASaul_MotionControllerPawn_C_OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_036BF64B4E92FD57AA8116A301BCE7E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::OnFailure_036BF64B4E92FD57AA8116A301BCE7E3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_036BF64B4E92FD57AA8116A301BCE7E3");

	ASaul_MotionControllerPawn_C_OnFailure_036BF64B4E92FD57AA8116A301BCE7E3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WrittenAchievementName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WrittenProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WrittenUserTag                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3");

	ASaul_MotionControllerPawn_C_OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3_Params params;
	params.WrittenAchievementName = WrittenAchievementName;
	params.WrittenProgress = WrittenProgress;
	params.WrittenUserTag = WrittenUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_974E5B2847D8307E45573787BC62BAED
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::OnFailure_974E5B2847D8307E45573787BC62BAED()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_974E5B2847D8307E45573787BC62BAED");

	ASaul_MotionControllerPawn_C_OnFailure_974E5B2847D8307E45573787BC62BAED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_974E5B2847D8307E45573787BC62BAED
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::OnSuccess_974E5B2847D8307E45573787BC62BAED()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_974E5B2847D8307E45573787BC62BAED");

	ASaul_MotionControllerPawn_C_OnSuccess_974E5B2847D8307E45573787BC62BAED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Restart_Level_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_22");

	ASaul_MotionControllerPawn_C_InpActEvt_Restart_Level_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Restart_Level_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_21");

	ASaul_MotionControllerPawn_C_InpActEvt_Restart_Level_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4");

	ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3");

	ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2");

	ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1");

	ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Menu_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_20");

	ASaul_MotionControllerPawn_C_InpActEvt_Menu_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Menu_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_19");

	ASaul_MotionControllerPawn_C_InpActEvt_Menu_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11");

	ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10");

	ASaul_MotionControllerPawn_C_InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Left (TEMP)_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Left (TEMP)_K2Node_InputActionEvent_9");

	ASaul_MotionControllerPawn_C_InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Right (TEMP)_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Right (TEMP)_K2Node_InputActionEvent_8");

	ASaul_MotionControllerPawn_C_InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_7");

	ASaul_MotionControllerPawn_C_InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_6");

	ASaul_MotionControllerPawn_C_InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5");

	ASaul_MotionControllerPawn_C_InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4");

	ASaul_MotionControllerPawn_C_InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3");

	ASaul_MotionControllerPawn_C_InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2");

	ASaul_MotionControllerPawn_C_InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ASaul_MotionControllerPawn_C::InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1");

	ASaul_MotionControllerPawn_C_InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASaul_MotionControllerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveBeginPlay");

	ASaul_MotionControllerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FlashlightDead                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::FlashlightDead(bool FlashlightDead)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightDead");

	ASaul_MotionControllerPawn_C_FlashlightDead_Params params;
	params.FlashlightDead = FlashlightDead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Flashlight Win
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Flashlight_Win()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Flashlight Win");

	ASaul_MotionControllerPawn_C_Flashlight_Win_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           RightHand                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::TeleportPlayer(bool RightHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportPlayer");

	ASaul_MotionControllerPawn_C_TeleportPlayer_Params params;
	params.RightHand = RightHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveTick");

	ASaul_MotionControllerPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceFlashlightTurnoff
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::ForceFlashlightTurnoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceFlashlightTurnoff");

	ASaul_MotionControllerPawn_C_ForceFlashlightTurnoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnGrab
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Grabbable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::OnGrab(class AActor** Grabbable, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnGrab");

	ASaul_MotionControllerPawn_C_OnGrab_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnRelease
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 Grabbable                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::OnRelease(class AActor** Grabbable, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnRelease");

	ASaul_MotionControllerPawn_C_OnRelease_Params params;
	params.Grabbable = Grabbable;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOnHands
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::TurnOnHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOnHands");

	ASaul_MotionControllerPawn_C_TurnOnHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpectatorCam
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::SpectatorCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpectatorCam");

	ASaul_MotionControllerPawn_C_SpectatorCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature
// (BlueprintEvent)

void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.EnableMenu
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::EnableMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.EnableMenu");

	ASaul_MotionControllerPawn_C_EnableMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Give Achievement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   AchievementID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::Give_Achievement(const struct FName& AchievementID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Give Achievement");

	ASaul_MotionControllerPawn_C_Give_Achievement_Params params;
	params.AchievementID = AchievementID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASaul_MotionControllerPawn_C::BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASaul_MotionControllerPawn_C::BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset level
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Reset_level()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset level");

	ASaul_MotionControllerPawn_C_Reset_level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DisableMenu
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::DisableMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DisableMenu");

	ASaul_MotionControllerPawn_C_DisableMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TextUpdate
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::TextUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TextUpdate");

	ASaul_MotionControllerPawn_C_TextUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateSubtitles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              SubtitleTable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::UpdateSubtitles(class UDataTable* SubtitleTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateSubtitles");

	ASaul_MotionControllerPawn_C_UpdateSubtitles_Params params;
	params.SubtitleTable = SubtitleTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllLevels
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::UnlockAllLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllLevels");

	ASaul_MotionControllerPawn_C_UnlockAllLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllGlitches
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::UnlockAllGlitches()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllGlitches");

	ASaul_MotionControllerPawn_C_UnlockAllGlitches_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllPrizes
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::UnlockAllPrizes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllPrizes");

	ASaul_MotionControllerPawn_C_UnlockAllPrizes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ProcessInterpolatedGrab
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform*             AttachmentTransform            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHeldGrabbableInfo      ActorGrabbablePair             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor**                 HeldActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::ProcessInterpolatedGrab(struct FTransform* AttachmentTransform, class AActor** HeldActor, EVRHandType* Hand, struct FHeldGrabbableInfo* ActorGrabbablePair)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ProcessInterpolatedGrab");

	ASaul_MotionControllerPawn_C_ProcessInterpolatedGrab_Params params;
	params.AttachmentTransform = AttachmentTransform;
	params.HeldActor = HeldActor;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorGrabbablePair != nullptr)
		*ActorGrabbablePair = params.ActorGrabbablePair;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InteruptSubtitles
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::InteruptSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InteruptSubtitles");

	ASaul_MotionControllerPawn_C_InteruptSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllCoins
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::UnlockAllCoins()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllCoins");

	ASaul_MotionControllerPawn_C_UnlockAllCoins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnMenuHeld
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::OnMenuHeld()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnMenuHeld");

	ASaul_MotionControllerPawn_C_OnMenuHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature
// (BlueprintEvent)

void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature
// (BlueprintEvent)

void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature
// (BlueprintEvent)

void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature
// (BlueprintEvent)

void ASaul_MotionControllerPawn_C::BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature");

	ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Force Turn Off Flashlight
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Force_Turn_Off_Flashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Force Turn Off Flashlight");

	ASaul_MotionControllerPawn_C_Force_Turn_Off_Flashlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Flashlight
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Turn_On_Flashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Flashlight");

	ASaul_MotionControllerPawn_C_Turn_On_Flashlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOffFLashlight
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::TurnOffFLashlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOffFLashlight");

	ASaul_MotionControllerPawn_C_TurnOffFLashlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.WinCurrentLevel
// (BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::WinCurrentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.WinCurrentLevel");

	ASaul_MotionControllerPawn_C_WinCurrentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ExecuteUbergraph_Saul_MotionControllerPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::ExecuteUbergraph_Saul_MotionControllerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ExecuteUbergraph_Saul_MotionControllerPawn");

	ASaul_MotionControllerPawn_C_ExecuteUbergraph_Saul_MotionControllerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GrabRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::GrabRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GrabRight__DelegateSignature");

	ASaul_MotionControllerPawn_C_GrabRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftTriggerPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::GamepadLeftTriggerPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftTriggerPressed__DelegateSignature");

	ASaul_MotionControllerPawn_C_GamepadLeftTriggerPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftShoulderPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::GamepadLeftShoulderPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftShoulderPressed__DelegateSignature");

	ASaul_MotionControllerPawn_C_GamepadLeftShoulderPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightTriggerPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::GamepadRightTriggerPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightTriggerPressed__DelegateSignature");

	ASaul_MotionControllerPawn_C_GamepadRightTriggerPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightShoulderPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::GamepadRightShoulderPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightShoulderPressed__DelegateSignature");

	ASaul_MotionControllerPawn_C_GamepadRightShoulderPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_Enter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Paused_Enter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_Enter__DelegateSignature");

	ASaul_MotionControllerPawn_C_Paused_Enter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Paused_DpadDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadDown__DelegateSignature");

	ASaul_MotionControllerPawn_C_Paused_DpadDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Paused_DpadUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadUp__DelegateSignature");

	ASaul_MotionControllerPawn_C_Paused_DpadUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Paused_DpadLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadLeft__DelegateSignature");

	ASaul_MotionControllerPawn_C_Paused_DpadLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Paused_DpadRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadRight__DelegateSignature");

	ASaul_MotionControllerPawn_C_Paused_DpadRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Update Player Teleport Location__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Get_player_Location            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::Update_Player_Teleport_Location__DelegateSignature(int Get_player_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Update Player Teleport Location__DelegateSignature");

	ASaul_MotionControllerPawn_C_Update_Player_Teleport_Location__DelegateSignature_Params params;
	params.Get_player_Location = Get_player_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::DpadDown__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadDown__DelegateSignature");

	ASaul_MotionControllerPawn_C_DpadDown__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::DpadUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadUp__DelegateSignature");

	ASaul_MotionControllerPawn_C_DpadUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadLeft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::DpadLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadLeft__DelegateSignature");

	ASaul_MotionControllerPawn_C_DpadLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadRight__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::DpadRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadRight__DelegateSignature");

	ASaul_MotionControllerPawn_C_DpadRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Enter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enter__DelegateSignature");

	ASaul_MotionControllerPawn_C_Enter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Trigger_Mangle_Scare__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Trigger_Mangle_Scare__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Trigger_Mangle_Scare__DelegateSignature");

	ASaul_MotionControllerPawn_C_Trigger_Mangle_Scare__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Menu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_MotionControllerPawn_C::Turn_On_Menu__DelegateSignature(bool TurnOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Menu__DelegateSignature");

	ASaul_MotionControllerPawn_C_Turn_On_Menu__DelegateSignature_Params params;
	params.TurnOn = TurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Player Win__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Player_Win__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Player Win__DelegateSignature");

	ASaul_MotionControllerPawn_C_Player_Win__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::PlayerIsKilled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsKilled__DelegateSignature");

	ASaul_MotionControllerPawn_C_PlayerIsKilled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Light__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_MotionControllerPawn_C::Turn_On_Light__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Light__DelegateSignature");

	ASaul_MotionControllerPawn_C_Turn_On_Light__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
