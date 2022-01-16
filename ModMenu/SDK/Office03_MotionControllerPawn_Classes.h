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
	 * BlueprintGeneratedClass Office03_MotionControllerPawn.Office03_MotionControllerPawn_C
	 * Size -> 0x0077 (FullSize[0x10B9] - InheritedSize[0x1042])
	 */
	class AOffice03_MotionControllerPawn_C : public AOffice_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_Q003[0x6];                                   // 0x1042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                PlayerVisionCone;                                        // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       NonVR_CheckIfMaintanceBoardLook;                         // 0x1058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N8V8[0x7];                                   // 0x1059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AMonitorButton_BP_C*>                         Ref_MonitorButtons;                                      // 0x1060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class AMaintenceBoard_BP_C*                                Ref_MaintanceBoard;                                      // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Office03_NonVr_MonitorType_EOffice03_NonVr_MonitorType     MonitorTypeEnum;                                         // 0x1078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8UR6[0x7];                                   // 0x1079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMonitorButton_MaintanceButton_C*                    Ref_MaintanceBoardButton;                                // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMonitorButton_Interactable_BP_C*                    Ref_AudioButton;                                         // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMonitorButton_Interactable_BP_C*                    Ref_VentButton;                                          // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMonitorButton_BP_C*                                 Ref_VentMonitorButton;                                   // 0x1098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DoOnce_OnVentLookAt;                                     // 0x10A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TU0Y[0x7];                                   // 0x10A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice03_MonitorBoard_BP_C*                         Ref_MonitorBoard;                                        // 0x10A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADeskButton_Light_C*                                 Ref_DeskLight;                                           // 0x10B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NonVr_CheckedVent;                                       // 0x10B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InpActEvt_Office3Recharge_NonVR__K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Office3Recharge_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Office3VoiceButton_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Office3VoiceButton_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Office3CloseVent_NonVR__K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Office3CloseVent_NonVR__K2Node_InputActionEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature(class AActor* Actor);
		void NonVr_MonitorScreenInteraction();
		void NonVR_DecideInteraction();
		void ChangeCameraLeft();
		void ChangeCameraRight();
		void ChangeCameraDown();
		void ChangeCameraUp();
		void ExecuteUbergraph_Office03_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
