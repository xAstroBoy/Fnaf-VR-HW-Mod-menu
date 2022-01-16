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
	 * BlueprintGeneratedClass Office_MotionControllerPawn.Office_MotionControllerPawn_C
	 * Size -> 0x0086 (FullSize[0x1042] - InheritedSize[0x0FBC])
	 */
	class AOffice_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_VERV[0x4];                                   // 0x0FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_NewTrack_0_543A8DE14AF85162E15C8E904FBCECBA;  // 0x0FC8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_543A8DE14AF85162E15C8E904FBCECBA;  // 0x0FCC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CHA6[0x3];                                   // 0x0FCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0FD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice01_Door_Bp_C*                                 RefToDoorBP;                                             // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice01_Door_Bp_C*                                 RefToDoorBP_1;                                           // 0x0FE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Counter;                                                 // 0x0FE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UI9S[0x4];                                   // 0x0FEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice01_Foxy_C*                                    RefTOFoxy;                                               // 0x0FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice01_Freddy_C*                                  RefTOFreddy;                                             // 0x0FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice01_Bonnie_C*                                  RefToBonnie;                                             // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice01_Chica_C*                                   RefToChica;                                              // 0x1008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AnimCheck_BonnieL;                                       // 0x1010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Chica_Notify;                                            // 0x1011(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Bonnie_Notify;                                           // 0x1012(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K67I[0x5];                                   // 0x1013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice_BaseGamemanager_C*                           RefToManager;                                            // 0x1018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNonVR_Office_TurnUI_C*                              TurnUI;                                                  // 0x1020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftBumperHit;                                           // 0x1028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightBumperHit;                                          // 0x1029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GRHA[0x2];                                   // 0x102A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThumbstickCameraThresholdVal;                            // 0x102C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AMonitorButton_BP_C*>                         RefMonitorButtons;                                       // 0x1030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       DisableThumbstickCameraChange;                           // 0x1040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsUsingRThumbstick;                                      // 0x1041(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void TriggerNightmareScareSequence();
		void DestroyTurnUI(bool Player_Won_Game);
		void Setup_Controller_Device();
		void InpAxisEvt_CameraNavigationHoriz_NonVR__K2Node_InputAxisEvent_1(float AxisValue);
		void ResetHorizCameraSwitch();
		void ResetVertCameraSwitch();
		void InpAxisEvt_CameraNavigationVert_NonVR__K2Node_InputAxisEvent_2(float AxisValue);
		void ChangeCameraLeft();
		void ChangeCameraRight();
		void ChangeCameraDown();
		void ChangeCameraUp();
		void Disable_RThumbstickCameras();
		void Enable_RThumbstickCameras();
		void ExecuteUbergraph_Office_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
