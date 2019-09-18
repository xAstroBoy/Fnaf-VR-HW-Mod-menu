#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Saul_MotionControllerPawn.Saul_MotionControllerPawn_C
// 0x0405 (0x0E55 - 0x0A50)
class ASaul_MotionControllerPawn_C : public ASWGVRCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            OfficeVictoryWidget;                                      // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Subtitles;                                                // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Pad_TeleportArrow;                                        // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            EdibleCollider;                                           // 0x0A70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRNotificationsComponent*                   VRNotifications;                                          // 0x0A78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Flashlight_Low;                                           // 0x0A80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SpectatorCamRoot;                                         // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BalloonCollider;                                          // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessValues;                                        // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HeadCollider;                                             // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VR_View_Locator_Dummy;                                    // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Left_TeleportArrow;                                       // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Right_TeleportArrow;                                      // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Flashlight_High;                                          // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShowChaperone;                                           // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	class ASaul_BP_MotionController_C*                 LeftController;                                           // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASaul_BP_MotionController_C*                 RightController;                                          // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeInDuration;                                           // 0x0AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTeleporting;                                            // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0AF1(0x0003) MISSED OFFSET
	struct FLinearColor                                TeleportFadeColor;                                        // 0x0AF4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThumbDeadzone;                                            // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightStickDown;                                           // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftStickDown;                                            // 0x0B09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseControllerRollToRotate;                                // 0x0B0A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0B0B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    Turn_On_Light;                                            // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerIsKilled;                                           // 0x0B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Flashlight_Pitch;                                         // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Player_Win;                                               // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Turn_On_Menu;                                             // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bTeleportDelay;                                           // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B59(0x0003) MISSED OFFSET
	float                                              TeleportFadeOutDuration;                                  // 0x0B5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportFadeInDuration;                                   // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0B64(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              TeleportArrayList;                                        // 0x0B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ATeleport_Manager_BP_C*                      Teleportmanager;                                          // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bSetHandToPointerOnly;                                    // 0x0B80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowTeleportation;                                      // 0x0B81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RightGripDown;                                            // 0x0B82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftGripDown;                                             // 0x0B83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTeleportSpotsAlwaysOn;                                   // 0x0B84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MaskAttached;                                             // 0x0B85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0B86(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    Trigger_Mangle_Scare;                                     // 0x0B88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               HideHandOnGrab;                                           // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportSpotFound;                                        // 0x0B99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisablePlayerInputs;                                      // 0x0B9A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0B9B(0x0005) MISSED OFFSET
	struct FScriptMulticastDelegate                    Enter;                                                    // 0x0BA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadRight;                                                // 0x0BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadLeft;                                                 // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadUP;                                                   // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DpadDown;                                                 // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Update_Player_Teleport_Location;                          // 0x0BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DeltaSeconds;                                             // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpectatorCamInterpSpeed;                                  // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  LookAtHitResults;                                         // 0x0C08(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableSpectatorMode;                                     // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0C91(0x0007) MISSED OFFSET
	struct FHitResult                                  FlashlightHitResults;                                     // 0x0C98(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Paused_DpadRight;                                         // 0x0D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_DpadLeft;                                          // 0x0D30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_DpadUp;                                            // 0x0D40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_DpadDown;                                          // 0x0D50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Paused_Enter;                                             // 0x0D60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Choked;                                                   // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0D74(0x0004) MISSED OFFSET
	TArray<struct FText>                               ThingsEaten;                                              // 0x0D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GettingAchievement;                                       // 0x0D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0D89(0x0007) MISSED OFFSET
	struct FTimerHandle                                Time_Handle;                                              // 0x0D90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    GamepadRightShoulderPressed;                              // 0x0D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamepadRightTriggerPressed;                               // 0x0DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamepadLeftShoulderPressed;                               // 0x0DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GamepadLeftTriggerPressed;                                // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EitherTriggerPulled;                                      // 0x0DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IngameMenuOpen;                                           // 0x0DD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x0DDA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0DDB(0x0001) MISSED OFFSET
	float                                              CurrentDisplayTime;                                       // 0x0DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RowName;                                                  // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0DE4(0x0004) MISSED OFFSET
	struct FTimerHandle                                SubtitleTimer;                                            // 0x0DE8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SubtitlesOff;                                             // 0x0DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Upside_Down_Mode;                                         // 0x0DF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               World_Meters_set_to_70;                                   // 0x0DF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0DF3(0x0001) MISSED OFFSET
	struct FRotator                                    Store_Player_s_Current_Rotation;                          // 0x0DF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Roation_Snap;                                      // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0E01(0x0007) MISSED OFFSET
	struct FTimerHandle                                Roation_Time_Handle;                                      // 0x0E08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     MRComponent;                                              // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Map;                                               // 0x0E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HideRightHandAndDualShock;                                // 0x0E19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x0E1A(0x0006) MISSED OFFSET
	class ASaul_BP_MotionController_C*                 BPMotionController;                                       // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DualShockContrillerScale;                                 // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Hide_Hands;                                               // 0x0E2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Mangle_Disable_Teleportation;                             // 0x0E2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x0E2E(0x0002) MISSED OFFSET
	float                                              SnapRotationAmount;                                       // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapRotationMax;                                          // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapRotationCurrentAngle;                                 // 0x0E38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DS4ThrowSpeed;                                            // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightAdjustAmount;                                       // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HeightAdjustMax;                                          // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentHeight;                                            // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAdjustHeightMotionController;                          // 0x0E4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0E4D(0x0003) MISSED OFFSET
	float                                              Set_Head_Collision_Scale;                                 // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanAdjustHeightDS4;                                       // 0x0E54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Saul_MotionControllerPawn.Saul_MotionControllerPawn_C");
		return ptr;
	}


	void CheckCoinsAchievement();
	void Reset_Player_Rotation();
	void Set_Player_Rotation(float Subtract_Roation_Value);
	void ToggleIngameMenu();
	struct FTransform GetHeadTransform();
	void TeleportCheck(bool RightHand, bool* TeleportSpotFound, struct FVector* TeleportLocation, struct FRotator* TeleportRotation, bool* Set_player_rotation_to_Collision);
	void ToggleMenu();
	void Game_Mode_Ref(class AFNAFGM_FlashlightGame_C** Game_Mode_Ref);
	void UserConstructionScript();
	void Action_K2Node_InputActionEvent_36(const struct FKey& Key);
	void Action_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_GrabLeft_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_GrabLeft_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_Toggle_Level_Menu_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_TeleportRight_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_TeleportLeft_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_DpadRight_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_DpadLeft_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_Enter_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_DpadDown_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_DpadUP_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void OnFailure_A3749E2849210D45C3F9C580BD7FB1C1();
	void OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1();
	void OnFailure_036BF64B4E92FD57AA8116A301BCE7E3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnFailure_974E5B2847D8307E45573787BC62BAED();
	void OnSuccess_974E5B2847D8307E45573787BC62BAED();
	void InpActEvt_Restart_Level_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Restart_Level_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Menu_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void FlashlightDead(bool FlashlightDead);
	void Flashlight_Win();
	void TeleportPlayer(bool RightHand);
	void ReceiveTick(float* DeltaSeconds);
	void ForceFlashlightTurnoff();
	void OnGrab(class AActor** Grabbable, EVRHandType* Hand);
	void OnRelease(class AActor** Grabbable, EVRHandType* Hand);
	void TurnOnHands();
	void SpectatorCam();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature();
	void EnableMenu();
	void Give_Achievement(const struct FName& AchievementID);
	void BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Reset_level();
	void DisableMenu();
	void TextUpdate();
	void UpdateSubtitles(class UDataTable* SubtitleTable);
	void UnlockAllLevels();
	void UnlockAllGlitches();
	void UnlockAllPrizes();
	void ProcessInterpolatedGrab(struct FTransform* AttachmentTransform, class AActor** HeldActor, EVRHandType* Hand, struct FHeldGrabbableInfo* ActorGrabbablePair);
	void InteruptSubtitles();
	void UnlockAllCoins();
	void OnMenuHeld();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature();
	void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature();
	void WinCurrentLevel();
	void ExecuteUbergraph_Saul_MotionControllerPawn(int EntryPoint);
	void GamepadLeftTriggerPressed__DelegateSignature();
	void GamepadLeftShoulderPressed__DelegateSignature();
	void GamepadRightTriggerPressed__DelegateSignature();
	void GamepadRightShoulderPressed__DelegateSignature();
	void Paused_Enter__DelegateSignature();
	void Paused_DpadDown__DelegateSignature();
	void Paused_DpadUp__DelegateSignature();
	void Paused_DpadLeft__DelegateSignature();
	void Paused_DpadRight__DelegateSignature();
	void Update_Player_Teleport_Location__DelegateSignature(int Get_player_Location);
	void DpadDown__DelegateSignature();
	void DpadUp__DelegateSignature();
	void DpadLeft__DelegateSignature();
	void DpadRight__DelegateSignature();
	void Enter__DelegateSignature();
	void Trigger_Mangle_Scare__DelegateSignature();
	void Turn_On_Menu__DelegateSignature(bool TurnOn);
	void Player_Win__DelegateSignature();
	void PlayerIsKilled__DelegateSignature();
	void Turn_On_Light__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
