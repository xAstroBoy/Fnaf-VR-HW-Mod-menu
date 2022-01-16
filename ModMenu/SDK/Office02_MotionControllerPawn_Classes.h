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
	 * BlueprintGeneratedClass Office02_MotionControllerPawn.Office02_MotionControllerPawn_C
	 * Size -> 0x009F (FullSize[0x10E1] - InheritedSize[0x1042])
	 */
	class AOffice02_MotionControllerPawn_C : public AOffice_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_3U7C[0x6];                                   // 0x1042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AFreddieMask_BP_C*                                   Ref_FreddieMask;                                         // 0x1050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADeskButton_Light_C*                                 Ref_DeskLight_Left;                                      // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADeskButton_Light_C*                                 Ref_DeskLight_Center;                                    // 0x1060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADeskButton_Light_C*                                 Ref_DeskLight_Right;                                     // 0x1068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMonitorButton_MusicInteractable_BP_C*               Ref_MusicButton;                                         // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMonitorButton_Interactable_BP_C*                    Ref_MonitorLightButton;                                  // 0x1078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ADeskButton_Light_C*>                         Ref_LightArray;                                          // 0x1080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AMonitorButton_BP_C*>                         Ref_MonitorButtons;                                      // 0x1090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AOffice02_MonitorBoard_BP_C*                         Ref_MonitorBoard;                                        // 0x10A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Office_NonVr_CameratetheredLook_EOffice_NonVr_CameratetheredLook Office02_DirectionEnum;                                  // 0x10A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Office_NonVr_CameratetheredLook_EOffice_NonVr_CameratetheredLook LastStoredEnum;                                          // 0x10A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HW31[0x6];                                   // 0x10AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANonVR_InSpaceUI_C*                                  MaskIcon;                                                // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NonVR_AllowZoom;                                         // 0x10B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9EX6[0x7];                                   // 0x10B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice2NVRLoc_C*                                    REF_NVRLoc;                                              // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            CurrentRotation;                                         // 0x10C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NonVR_LerpCheck;                                         // 0x10D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NonVR_RememberTethered;                                  // 0x10D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HZDE[0x2];                                   // 0x10D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice_MotionControllerPawn_C*                      NewVar_3;                                                // 0x10D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NonVR_PreventMaskMovement;                               // 0x10E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void CheckIfLightIsOn(bool* WasActive);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Office2MaskGrab_NonVR__K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Office2MaskGrab_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Office2MusicBox_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Office2MusicBox_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Office2BoardLight_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Office2BoardLight_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void CheckForGamePad();
		void NonVR_MaskZoomFocus(bool SetFocus);
		void ZoomInteractOverrideEngage();
		void ForceLeanToStop();
		void ZoomInteractOverideRelease();
		void NonVR_OnPlayerJumpscare(bool Player_Won_Game);
		void ExecuteUbergraph_Office02_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
