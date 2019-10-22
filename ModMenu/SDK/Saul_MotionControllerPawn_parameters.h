#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.CheckCoinsAchievement
struct ASaul_MotionControllerPawn_C_CheckCoinsAchievement_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset Player Rotation
struct ASaul_MotionControllerPawn_C_Reset_Player_Rotation_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Set Player Rotation
struct ASaul_MotionControllerPawn_C_Set_Player_Rotation_Params
{
	float                                              Subtract_Roation_Value;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleIngameMenu
struct ASaul_MotionControllerPawn_C_ToggleIngameMenu_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GetHeadTransform
struct ASaul_MotionControllerPawn_C_GetHeadTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportCheck
struct ASaul_MotionControllerPawn_C_TeleportCheck_Params
{
	bool                                               RightHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportSpotFound;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TeleportLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_player_rotation_to_Collision;                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ToggleMenu
struct ASaul_MotionControllerPawn_C_ToggleMenu_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Game Mode Ref
struct ASaul_MotionControllerPawn_C_Game_Mode_Ref_Params
{
	bool                                               Toggle_Flashlight_State;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UserConstructionScript
struct ASaul_MotionControllerPawn_C_UserConstructionScript_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_36
struct ASaul_MotionControllerPawn_C_Action_K2Node_InputActionEvent_36_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Action_K2Node_InputActionEvent_35
struct ASaul_MotionControllerPawn_C_Action_K2Node_InputActionEvent_35_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_34
struct ASaul_MotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_34_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabLeft_K2Node_InputActionEvent_33
struct ASaul_MotionControllerPawn_C_InpActEvt_GrabLeft_K2Node_InputActionEvent_33_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Toggle Level Menu_K2Node_InputActionEvent_32
struct ASaul_MotionControllerPawn_C_InpActEvt_Toggle_Level_Menu_K2Node_InputActionEvent_32_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportRight_K2Node_InputActionEvent_31
struct ASaul_MotionControllerPawn_C_InpActEvt_TeleportRight_K2Node_InputActionEvent_31_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_30
struct ASaul_MotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_30_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_GrabRight_K2Node_InputActionEvent_29
struct ASaul_MotionControllerPawn_C_InpActEvt_GrabRight_K2Node_InputActionEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_TeleportLeft_K2Node_InputActionEvent_28
struct ASaul_MotionControllerPawn_C_InpActEvt_TeleportLeft_K2Node_InputActionEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadRight_K2Node_InputActionEvent_27
struct ASaul_MotionControllerPawn_C_InpActEvt_DpadRight_K2Node_InputActionEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadLeft_K2Node_InputActionEvent_26
struct ASaul_MotionControllerPawn_C_InpActEvt_DpadLeft_K2Node_InputActionEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Enter_K2Node_InputActionEvent_25
struct ASaul_MotionControllerPawn_C_InpActEvt_Enter_K2Node_InputActionEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadDown_K2Node_InputActionEvent_24
struct ASaul_MotionControllerPawn_C_InpActEvt_DpadDown_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DpadUP_K2Node_InputActionEvent_23
struct ASaul_MotionControllerPawn_C_InpActEvt_DpadUP_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_5
struct ASaul_MotionControllerPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_A3749E2849210D45C3F9C580BD7FB1C1
struct ASaul_MotionControllerPawn_C_OnFailure_A3749E2849210D45C3F9C580BD7FB1C1_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1
struct ASaul_MotionControllerPawn_C_OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_036BF64B4E92FD57AA8116A301BCE7E3
struct ASaul_MotionControllerPawn_C_OnFailure_036BF64B4E92FD57AA8116A301BCE7E3_Params
{
	struct FName                                       WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3
struct ASaul_MotionControllerPawn_C_OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3_Params
{
	struct FName                                       WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnFailure_974E5B2847D8307E45573787BC62BAED
struct ASaul_MotionControllerPawn_C_OnFailure_974E5B2847D8307E45573787BC62BAED_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnSuccess_974E5B2847D8307E45573787BC62BAED
struct ASaul_MotionControllerPawn_C_OnSuccess_974E5B2847D8307E45573787BC62BAED_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_22
struct ASaul_MotionControllerPawn_C_InpActEvt_Restart_Level_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Restart Level_K2Node_InputActionEvent_21
struct ASaul_MotionControllerPawn_C_InpActEvt_Restart_Level_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4
struct ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3
struct ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2
struct ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1
struct ASaul_MotionControllerPawn_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_20
struct ASaul_MotionControllerPawn_C_InpActEvt_Menu_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Menu_K2Node_InputActionEvent_19
struct ASaul_MotionControllerPawn_C_InpActEvt_Menu_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11
struct ASaul_MotionControllerPawn_C_InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10
struct ASaul_MotionControllerPawn_C_InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Left (TEMP)_K2Node_InputActionEvent_9
struct ASaul_MotionControllerPawn_C_InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_VR Snapping Right (TEMP)_K2Node_InputActionEvent_8
struct ASaul_MotionControllerPawn_C_InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_7
struct ASaul_MotionControllerPawn_C_InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_Press Left Grip_K2Node_InputActionEvent_6
struct ASaul_MotionControllerPawn_C_InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5
struct ASaul_MotionControllerPawn_C_InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4
struct ASaul_MotionControllerPawn_C_InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3
struct ASaul_MotionControllerPawn_C_InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2
struct ASaul_MotionControllerPawn_C_InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1
struct ASaul_MotionControllerPawn_C_InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveBeginPlay
struct ASaul_MotionControllerPawn_C_ReceiveBeginPlay_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.FlashlightDead
struct ASaul_MotionControllerPawn_C_FlashlightDead_Params
{
	bool                                               FlashlightDead;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Flashlight Win
struct ASaul_MotionControllerPawn_C_Flashlight_Win_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TeleportPlayer
struct ASaul_MotionControllerPawn_C_TeleportPlayer_Params
{
	bool                                               RightHand;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ReceiveTick
struct ASaul_MotionControllerPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ForceFlashlightTurnoff
struct ASaul_MotionControllerPawn_C_ForceFlashlightTurnoff_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnGrab
struct ASaul_MotionControllerPawn_C_OnGrab_Params
{
	class AActor**                                     Grabbable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnRelease
struct ASaul_MotionControllerPawn_C_OnRelease_Params
{
	class AActor**                                     Grabbable;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOnHands
struct ASaul_MotionControllerPawn_C_TurnOnHands_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.SpectatorCam
struct ASaul_MotionControllerPawn_C_SpectatorCam_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.EnableMenu
struct ASaul_MotionControllerPawn_C_EnableMenu_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Give Achievement
struct ASaul_MotionControllerPawn_C_Give_Achievement_Params
{
	struct FName                                       AchievementID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Reset level
struct ASaul_MotionControllerPawn_C_Reset_level_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DisableMenu
struct ASaul_MotionControllerPawn_C_DisableMenu_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TextUpdate
struct ASaul_MotionControllerPawn_C_TextUpdate_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UpdateSubtitles
struct ASaul_MotionControllerPawn_C_UpdateSubtitles_Params
{
	class UDataTable*                                  SubtitleTable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllLevels
struct ASaul_MotionControllerPawn_C_UnlockAllLevels_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllGlitches
struct ASaul_MotionControllerPawn_C_UnlockAllGlitches_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllPrizes
struct ASaul_MotionControllerPawn_C_UnlockAllPrizes_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ProcessInterpolatedGrab
struct ASaul_MotionControllerPawn_C_ProcessInterpolatedGrab_Params
{
	struct FTransform*                                 AttachmentTransform;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHeldGrabbableInfo                          ActorGrabbablePair;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor**                                     HeldActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EVRHandType*                                       Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.InteruptSubtitles
struct ASaul_MotionControllerPawn_C_InteruptSubtitles_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.UnlockAllCoins
struct ASaul_MotionControllerPawn_C_UnlockAllCoins_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.OnMenuHeld
struct ASaul_MotionControllerPawn_C_OnMenuHeld_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature
struct ASaul_MotionControllerPawn_C_BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Force Turn Off Flashlight
struct ASaul_MotionControllerPawn_C_Force_Turn_Off_Flashlight_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Flashlight
struct ASaul_MotionControllerPawn_C_Turn_On_Flashlight_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.TurnOffFLashlight
struct ASaul_MotionControllerPawn_C_TurnOffFLashlight_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.WinCurrentLevel
struct ASaul_MotionControllerPawn_C_WinCurrentLevel_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.ExecuteUbergraph_Saul_MotionControllerPawn
struct ASaul_MotionControllerPawn_C_ExecuteUbergraph_Saul_MotionControllerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GrabRight__DelegateSignature
struct ASaul_MotionControllerPawn_C_GrabRight__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftTriggerPressed__DelegateSignature
struct ASaul_MotionControllerPawn_C_GamepadLeftTriggerPressed__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadLeftShoulderPressed__DelegateSignature
struct ASaul_MotionControllerPawn_C_GamepadLeftShoulderPressed__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightTriggerPressed__DelegateSignature
struct ASaul_MotionControllerPawn_C_GamepadRightTriggerPressed__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.GamepadRightShoulderPressed__DelegateSignature
struct ASaul_MotionControllerPawn_C_GamepadRightShoulderPressed__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_Enter__DelegateSignature
struct ASaul_MotionControllerPawn_C_Paused_Enter__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadDown__DelegateSignature
struct ASaul_MotionControllerPawn_C_Paused_DpadDown__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadUp__DelegateSignature
struct ASaul_MotionControllerPawn_C_Paused_DpadUp__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadLeft__DelegateSignature
struct ASaul_MotionControllerPawn_C_Paused_DpadLeft__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Paused_DpadRight__DelegateSignature
struct ASaul_MotionControllerPawn_C_Paused_DpadRight__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Update Player Teleport Location__DelegateSignature
struct ASaul_MotionControllerPawn_C_Update_Player_Teleport_Location__DelegateSignature_Params
{
	int                                                Get_player_Location;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadDown__DelegateSignature
struct ASaul_MotionControllerPawn_C_DpadDown__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadUp__DelegateSignature
struct ASaul_MotionControllerPawn_C_DpadUp__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadLeft__DelegateSignature
struct ASaul_MotionControllerPawn_C_DpadLeft__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.DpadRight__DelegateSignature
struct ASaul_MotionControllerPawn_C_DpadRight__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Enter__DelegateSignature
struct ASaul_MotionControllerPawn_C_Enter__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Trigger_Mangle_Scare__DelegateSignature
struct ASaul_MotionControllerPawn_C_Trigger_Mangle_Scare__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Menu__DelegateSignature
struct ASaul_MotionControllerPawn_C_Turn_On_Menu__DelegateSignature_Params
{
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Player Win__DelegateSignature
struct ASaul_MotionControllerPawn_C_Player_Win__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.PlayerIsKilled__DelegateSignature
struct ASaul_MotionControllerPawn_C_PlayerIsKilled__DelegateSignature_Params
{
};

// Function Saul_MotionControllerPawn.Saul_MotionControllerPawn_C.Turn On Light__DelegateSignature
struct ASaul_MotionControllerPawn_C_Turn_On_Light__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
