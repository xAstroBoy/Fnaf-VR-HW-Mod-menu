#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Saul_MotionControllerPawn.Saul_MotionControllerPawn_C
	 * Size -> 0x060C (FullSize[0x0FBC] - InheritedSize[0x09B0])
	 */
	class ASaul_MotionControllerPawn_C : public ASWGVRCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Follower;                                                // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ZOffset;                                                 // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetInteractionComponent*                         WidgetInteraction;                                       // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    OfficeVictoryWidget;                                     // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Subtitles;                                               // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Pad_TeleportArrow;                                       // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    EdibleCollider;                                          // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UVRNotificationsComponent*                           VRNotifications;                                         // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Flashlight_Low;                                          // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     SpectatorCamRoot;                                        // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    BalloonCollider;                                         // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcessValues;                                       // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    HeadCollider;                                            // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     VR_View_Locator_Dummy;                                   // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Left_TeleportArrow;                                      // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Right_TeleportArrow;                                     // 0x0A30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Flashlight_High;                                         // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bShowChaperone;                                          // 0x0A40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YYVX[0x7];                                   // 0x0A41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASaul_BP_MotionController_C*                         LeftController;                                          // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASaul_BP_MotionController_C*                         RightController;                                         // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeOutDuration;                                         // 0x0A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInDuration;                                          // 0x0A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsTeleporting;                                           // 0x0A60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A0LW[0x3];                                   // 0x0A61(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        TeleportFadeColor;                                       // 0x0A64(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ThumbDeadzone;                                           // 0x0A74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RightStickDown;                                          // 0x0A78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftStickDown;                                           // 0x0A79(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseControllerRollToRotate;                               // 0x0A7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K1R3[0x5];                                   // 0x0A7B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Turn_On_Light;                                           // 0x0A80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PlayerIsKilled;                                          // 0x0A90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      Flashlight_Pitch;                                        // 0x0AA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0PRO[0x4];                                   // 0x0AA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Player_Win;                                              // 0x0AA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Turn_On_Menu;                                            // 0x0AB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bTeleportDelay;                                          // 0x0AC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F88F[0x3];                                   // 0x0AC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TeleportFadeOutDuration;                                 // 0x0ACC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TeleportFadeInDuration;                                  // 0x0AD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R480[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<Engine_EObjectTypeQuery>                            TeleportArrayList;                                       // 0x0AD8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class ATeleport_Manager_BP_C*                              Teleportmanager;                                         // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSetHandToPointerOnly;                                   // 0x0AF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bAllowTeleportation;                                     // 0x0AF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RightGripDown;                                           // 0x0AF2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftGripDown;                                            // 0x0AF3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTeleportSpotsAlwaysOn;                                  // 0x0AF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       MaskAttached;                                            // 0x0AF5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GSEB[0x2];                                   // 0x0AF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Trigger_Mangle_Scare;                                    // 0x0AF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       HideHandOnGrab;                                          // 0x0B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       TeleportSpotFound;                                       // 0x0B09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DisablePlayerInputs;                                     // 0x0B0A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1BBY[0x5];                                   // 0x0B0B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Enter;                                                   // 0x0B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DpadRight;                                               // 0x0B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DpadLeft;                                                // 0x0B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DpadUP;                                                  // 0x0B40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DpadDown;                                                // 0x0B50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Update_Player_Teleport_Location;                         // 0x0B60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      DeltaSeconds;                                            // 0x0B70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SpectatorCamInterpSpeed;                                 // 0x0B74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          LookAtHitResults;                                        // 0x0B78(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		bool                                                       DisableSpectatorMode;                                    // 0x0C00(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HET4[0x3];                                   // 0x0C01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          FlashlightHitResults;                                    // 0x0C04(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		unsigned char                                              UnknownData_KWFB[0x4];                                   // 0x0C8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Paused_DpadRight;                                        // 0x0C90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Paused_DpadLeft;                                         // 0x0CA0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Paused_DpadUp;                                           // 0x0CB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Paused_DpadDown;                                         // 0x0CC0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Paused_Enter;                                            // 0x0CD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int                                                        Choked;                                                  // 0x0CE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2KVY[0x4];                                   // 0x0CE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        ThingsEaten;                                             // 0x0CE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       GettingAchievement;                                      // 0x0CF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_11TX[0x7];                                   // 0x0CF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Time_Handle;                                             // 0x0D00(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             GamepadRightShoulderPressed;                             // 0x0D08(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GamepadRightTriggerPressed;                              // 0x0D18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GamepadLeftShoulderPressed;                              // 0x0D28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             GamepadLeftTriggerPressed;                               // 0x0D38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       EitherTriggerPulled;                                     // 0x0D48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IngameMenuOpen;                                          // 0x0D49(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRunning;                                               // 0x0D4A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0PBX[0x1];                                   // 0x0D4B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentDisplayTime;                                      // 0x0D4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        RowName;                                                 // 0x0D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DKOP[0x4];                                   // 0x0D54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        SubtitleTimer;                                           // 0x0D58(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       SubtitlesOff;                                            // 0x0D60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Upside_Down_Mode;                                        // 0x0D61(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       World_Meters_set_to_70;                                  // 0x0D62(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N5CY[0x1];                                   // 0x0D63(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Store_Players_Current_Rotation;                          // 0x0D64(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Enable_Roation_Snap;                                     // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTUY[0x7];                                   // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Roation_Time_Handle;                                     // 0x0D78(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             MRComponent;                                             // 0x0D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Enable_Map;                                              // 0x0D88(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HideRightHandAndDualShock;                               // 0x0D89(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B0OK[0x6];                                   // 0x0D8A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASaul_BP_MotionController_C*                         BPMotionController;                                      // 0x0D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DualShockContrillerScale;                                // 0x0D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Hide_Hands;                                              // 0x0D9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       Mangle_Disable_Teleportation;                            // 0x0D9D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F2KS[0x2];                                   // 0x0D9E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapRotationAmount;                                      // 0x0DA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SnapRotationMax;                                         // 0x0DA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SnapRotationCurrentAngle;                                // 0x0DA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DS4ThrowSpeed;                                           // 0x0DAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HeightAdjustAmount;                                      // 0x0DB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        HeightAdjustMax;                                         // 0x0DB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        CurrentHeight;                                           // 0x0DB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanAdjustHeightMotionController;                         // 0x0DBC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AVC0[0x3];                                   // 0x0DBD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Set_Head_Collision_Scale;                                // 0x0DC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanAdjustHeightDS4;                                      // 0x0DC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ConfirmDown;                                             // 0x0DC5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IPXN[0x2];                                   // 0x0DC6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AimedButton;                                             // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              CurrentFlashlightLevelName;                              // 0x0DD0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLightRef;                                            // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlashlight_Battery_Finale_C*                        FlashlightFinaleRef;                                     // 0x0DE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AFlashlight_Battery_C*                               FlashlightRef;                                           // 0x0DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 AimedComponent;                                          // 0x0DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Action_Confirm_Pressed;                                  // 0x0E00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Action_Confirm_Released;                                 // 0x0E10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       NonVRObjectHeld;                                         // 0x0E20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J6EC[0x7];                                   // 0x0E21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              HoverActor;                                              // 0x0E28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 HoverComponent;                                          // 0x0E30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             NonVR_QuickAction;                                       // 0x0E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             NonVR_QuickRelease;                                      // 0x0E48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      NonVR_ThrowSpeed;                                        // 0x0E58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NonVR_OriginalLocation;                                  // 0x0E5C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       CurrentLeanCollision;                                    // 0x0E68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NonVR_LeanLocForward;                                    // 0x0E70(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NonVR_LeanLocRight;                                      // 0x0E7C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NonVR_ForwardLeanDirection;                              // 0x0E88(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NonVR_RightLeanDirection;                                // 0x0E94(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            NonVRRotation;                                           // 0x0EA0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NonVR_IsInMenu;                                          // 0x0EAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockLookControls;                                        // 0x0EAD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UY6Q[0x2];                                   // 0x0EAE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     HoveredZoomComponent;                                    // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UIngameMenu_C*                                       PauseMenu;                                               // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SnapRotationNoLimit;                                     // 0x0EC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanTurnOffFlashlight;                                    // 0x0EC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O9WP[0x2];                                   // 0x0EC2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            NonVR_OriginalRot;                                       // 0x0EC4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraFadeDelay;                                         // 0x0ED0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReturnFinished;                                          // 0x0ED4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HitLookLoc;                                              // 0x0ED5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RYGN[0x2];                                   // 0x0ED6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             NonVRGrabOffset;                                         // 0x0ED8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GPMM[0x4];                                   // 0x0EE4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ZoomedActor;                                             // 0x0EE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            NonVR_LookReturnRot;                                     // 0x0EF0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D703[0x4];                                   // 0x0EFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNonVRCrosshair_C*                                   Crosshair;                                               // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CrosshairEnabled;                                        // 0x0F08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SJXK[0x7];                                   // 0x0F09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Spawned_widget;                                          // 0x0F10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isCameraTethered;                                        // 0x0F18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YEJ3[0x3];                                   // 0x0F19(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            NewCameraRot;                                            // 0x0F1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Gamepad_RightShoulder_pressed;                           // 0x0F28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Gamepad_LeftShoulder_pressed;                            // 0x0F29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X5MA[0x6];                                   // 0x0F2A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      TetheredCameraRots;                                      // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UFlatOverlay_C*                                      FlatOverlay;                                             // 0x0F40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaskOn_VignetteIntensity;                                // 0x0F48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            NonVR_Rotation_Offset;                                   // 0x0F4C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonVR_FreeLook_InterpSpeed;                              // 0x0F58(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_Tethered_Speed;                                    // 0x0F5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_Tethered_HorizontalAngle;                          // 0x0F60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_Tethered_VerticalAngle;                            // 0x0F64(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_FreeLook_SpeedMultiplier;                          // 0x0F68(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_Tethered_FOV;                                      // 0x0F6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            NewVar_1;                                                // 0x0F70(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NonVR_FreeLook_FOV;                                      // 0x0F7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowCameraToggle;                                       // 0x0F80(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2KTB[0x3];                                   // 0x0F81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookVSpeed;                                              // 0x0F84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookRSpeed;                                              // 0x0F88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_Tethered_Snap_Speed;                               // 0x0F8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NonVR_Tethered_Normal_Speed;                             // 0x0F90(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        NewVar_2;                                                // 0x0F94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowMenu;                                               // 0x0F98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NonVR_TeleportCameraFadeTransition;                      // 0x0F99(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DNJV[0x2];                                   // 0x0F9A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxCameraPitch;                                          // 0x0F9C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinCameraPitch;                                          // 0x0FA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        default_cameraID;                                        // 0x0FA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Look_Loc_IsTethered;                                     // 0x0FA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z1H6[0x3];                                   // 0x0FA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Updated_FOV;                                             // 0x0FAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerIsDead;                                            // 0x0FB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9NGM[0x3];                                   // 0x0FB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SavedFLCameraSensitivity;                                // 0x0FB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SavedTetheredCameraSensitivity;                          // 0x0FB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateControllerDevice();
		void SetupWidgetInteraction();
		void NonVR_Set_Camera_Array();
		void NonVR_Update_Camera_Array();
		void AttemptEat(class AActor* ActorToEat);
		void NonVRLook(float Horizontal_Axis, float Vertical_Axis, class UCurveFloat* Speed_curve);
		void PopUpUI_Handler(class UClass** WidgetToSpawn);
		void SetupNonVRAttachPoints();
		void UnPauseGame_NonVR();
		void PauseGame_NonVR();
		bool NonVRLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
		void CheckCoinsAchievement();
		void Reset_Player_Rotation();
		void Set_Player_Rotation(float Subtract_Roation_Value);
		void ToggleIngameMenu();
		struct FTransform GetHeadTransform();
		void TeleportCheck(bool RightHand, bool* TeleportSpotFound, struct FVector* TeleportLocation, struct FRotator* TeleportRotation, bool* Set_player_rotation_to_Collision);
		void ToggleMenu();
		void Game_Mode_Ref(class AFNAFGM_FlashlightGame_C** Game_Mode_Ref);
		void UserConstructionScript();
		void Action_K2Node_InputActionEvent_45(const struct FKey& Key);
		void Action_K2Node_InputActionEvent_44(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_43(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_42(const struct FKey& Key);
		void InpActEvt_CameraToggleNonVR_K2Node_InputActionEvent_41(const struct FKey& Key);
		void InpActEvt_GrabLeft_K2Node_InputActionEvent_40(const struct FKey& Key);
		void InpActEvt_GrabLeft_K2Node_InputActionEvent_39(const struct FKey& Key);
		void InpActEvt_GrabRight_K2Node_InputActionEvent_38(const struct FKey& Key);
		void InpActEvt_GrabRight_K2Node_InputActionEvent_37(const struct FKey& Key);
		void InpActEvt_DS4LaunchGrabbable_K2Node_InputActionEvent_36(const struct FKey& Key);
		void InpActEvt_Eating_NonVR__K2Node_InputActionEvent_35(const struct FKey& Key);
		void InpActEvt_TeleportRight_K2Node_InputActionEvent_34(const struct FKey& Key);
		void InpActEvt_TeleportLeft_K2Node_InputActionEvent_33(const struct FKey& Key);
		void InpActEvt_DpadRight_K2Node_InputActionEvent_32(const struct FKey& Key);
		void InpActEvt_DpadLeft_K2Node_InputActionEvent_31(const struct FKey& Key);
		void InpActEvt_Enter_K2Node_InputActionEvent_30(const struct FKey& Key);
		void InpActEvt_DpadDown_K2Node_InputActionEvent_29(const struct FKey& Key);
		void InpActEvt_DpadUP_K2Node_InputActionEvent_28(const struct FKey& Key);
		void OnFailure_A3749E2849210D45C3F9C580BD7FB1C1();
		void OnSuccess_A3749E2849210D45C3F9C580BD7FB1C1();
		void OnFailure_036BF64B4E92FD57AA8116A301BCE7E3(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
		void OnSuccess_036BF64B4E92FD57AA8116A301BCE7E3(const class FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
		void OnFailure_974E5B2847D8307E45573787BC62BAED();
		void OnSuccess_974E5B2847D8307E45573787BC62BAED();
		void InpActEvt_Restart_Level_K2Node_InputActionEvent_27(const struct FKey& Key);
		void InpActEvt_Restart_Level_K2Node_InputActionEvent_26(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_25(const struct FKey& Key);
		void InpActEvt_Menu_K2Node_InputActionEvent_24(const struct FKey& Key);
		void InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_23(const struct FKey& Key);
		void InpActEvt_PCUnlockAllLevels_K2Node_InputActionEvent_22(const struct FKey& Key);
		void InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_21(const struct FKey& Key);
		void InpActEvt_PCUnlockAllGlitches_K2Node_InputActionEvent_20(const struct FKey& Key);
		void InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_PCUnlockAllPrizes_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_PCUnlockAllCoins_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_MoveControllerMenu_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_VR_Snapping_Left__TEMP__K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_VR_Snapping_Right__TEMP__K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_Press_Left_Grip_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Confirm_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Confirm_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_QuickActionNonVR_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_PCWinCurrentLevel_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_BackToHub_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt__DEBUG_CrosshairToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
		void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_4_VRNotificationsDelegate__DelegateSignature();
		void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_5_VRNotificationsDelegate__DelegateSignature();
		void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_6_VRNotificationsDelegate__DelegateSignature();
		void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_7_VRNotificationsDelegate__DelegateSignature();
		void BndEvt__VRNotifications_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature();
		void FlashlightDead(bool FlashlightDead);
		void Flashlight_Win();
		void ForceFlashlightTurnoff();
		void Turn_On_Flashlight();
		void TurnOffFLashlight();
		void Force_Turn_Off_Flashlight();
		void NonVR_ZoomInScreen(class USceneComponent* ComponentHovered, const struct FVector& ZoomLoc, const struct FRotator& ZoomRot, bool IsMenu, bool IsActiveLoc);
		void ZoomRelease();
		void ForceLeanToStop();
		void InpAxisEvt_LookHorizontal_K2Node_InputAxisEvent_5(float AxisValue);
		void InpAxisEvt_LookVertical_K2Node_InputAxisEvent_4(float AxisValue);
		void SetTetheredMode(bool NewParam);
		void ToggleTetheredMode();
		void Init_NonVR_Camera();
		void Set_Camera_Rotation(const struct FRotator& Rotation);
		void OnGrab(class AActor* Grabbable, SWGVR_EVRHandType Hand);
		void OnRelease(class AActor* Grabbable, SWGVR_EVRHandType Hand);
		void Setup_Held_Info_Display(class UObject* Object);
		void BndEvt__EdibleCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveBeginPlay();
		void TeleportPlayer(bool RightHand);
		void ReceiveTick(float DeltaSeconds);
		void TurnOnHands(bool Turn_On);
		void SpectatorCam();
		void Show_Menu();
		void Give_Achievement(const class FName& AchievementID);
		void BndEvt__HeadCollider_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__HeadCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void Reset_level();
		void Hide_Menu();
		void TextUpdate();
		void UpdateSubtitles(class UDataTable* SubtitleTable);
		void UnlockAllLevels();
		void UnlockAllGlitches();
		void UnlockAllPrizes();
		void ProcessInterpolatedGrab(const struct FTransform& AttachmentTransform, struct FHeldGrabbableInfo* ActorGrabbablePair, class AActor* HeldActor, SWGVR_EVRHandType Hand);
		void InteruptSubtitles();
		void UnlockAllCoins();
		void OnMenuHeld();
		void FlashlightNonVR();
		void Hide_Flashlight_Light(bool flase);
		void Destroy_Flashlight_spawn_Microphone();
		void SpawnDefaultFlashlight();
		void FindButton();
		void PullPushObjectNonVR(float PullPushAmount);
		void InpAxisEvt_PullPushObject_K2Node_InputAxisEvent_3(float AxisValue);
		void NonVR_AxisLean();
		void InpAxisEvt_LeanForward_K2Node_InputAxisEvent_6(float AxisValue);
		void InpAxisEvt_LeanRight_K2Node_InputAxisEvent_7(float AxisValue);
		void ResetForwardNonVR();
		void WinCurrentLevel();
		void DisableCrosshair(bool enable);
		void OnHoverBegin(class AActor* HoveredActor, SWGVR_EVRHandType Hand);
		void OnHoverEnd(class AActor* HoveredActor, SWGVR_EVRHandType Hand);
		void Disable_Main_Menu();
		void Enable_Main_Menu();
		void PlayerIsBeingKilled();
		void NonVR_Feedback(class UForceFeedbackEffect* ForceFeedbackEffect, bool bLooping);
		void ExecuteUbergraph_Saul_MotionControllerPawn(int EntryPoint);
		void NonVR_QuickRelease__DelegateSignature();
		void NonVR_QuickAction__DelegateSignature();
		void Action_Confirm_Released__DelegateSignature();
		void Action_Confirm_Pressed__DelegateSignature();
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
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
