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
	 * BlueprintGeneratedClass DLC_office_MotionControllerPawn.DLC_office_MotionControllerPawn_C
	 * Size -> 0x004E (FullSize[0x1090] - InheritedSize[0x1042])
	 */
	class ADLC_office_MotionControllerPawn_C : public AOffice_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_V6KB[0x6];                                   // 0x1042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AOffice_BaseGamemanager_C*                           GameManagerRef;                                          // 0x1050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AMonitorButton_BP_C*>                         Ref_MonitorButtons;                                      // 0x1058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class ADLC_Office01_FlashBeaconButton_Bp_C*                Ref_MonitorLight;                                        // 0x1068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADLC_Office01_RebootLever_C*                         Ref_PowerLever;                                          // 0x1070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Office_NonVr_CameratetheredLook_EOffice_NonVr_CameratetheredLook DLCOffice_DirectionEnum;                                 // 0x1078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RYCO[0x7];                                   // 0x1079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADLC_Office01_Door_Bp_C*                             Ref_DoorLeft;                                            // 0x1080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADLC_Office01_Door_Bp_C*                             Ref_DoorRight;                                           // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void CheckForGamePad();
		void ExecuteUbergraph_DLC_office_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
