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
	 * BlueprintGeneratedClass NightTerror_PlayerPawn_Headlight.NightTerror_PlayerPawn_Headlight_C
	 * Size -> 0x00D8 (FullSize[0x10C8] - InheritedSize[0x0FF0])
	 */
	class ANightTerror_PlayerPawn_Headlight_C : public APlayerPawn_Headlight_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FF0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int                                                        StartingCamera_GroupID;                                  // 0x0FF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        default_cameraID_1;                                      // 0x0FFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        NonVR_Camera_Index;                                      // 0x1000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SF0Y[0x4];                                   // 0x1004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int, int>                                             default_camera_mappings;                                 // 0x1008(0x0050) Edit, BlueprintVisible, ZeroConstructor
		class UNonVR_Office_TurnUI_C*                              TurnUI;                                                  // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RightBumperHit;                                          // 0x1060(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LeftBumperHit;                                           // 0x1061(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GIRT[0x6];                                   // 0x1062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int, bool>                                            is_camera_cyclic_mappings;                               // 0x1068(0x0050) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       is_camera_cyclic;                                        // 0x10B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LockCamera;                                              // 0x10B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3KQO[0x6];                                   // 0x10BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice_BaseGamemanager_C*                           Ref_GameManager;                                         // 0x10C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_MenuPageLeft_NonVR__K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_MenuPageRight_NonVR__K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void DestroyTurnUI(bool Player_Won_Game);
		void ReceiveTick(float DeltaSeconds);
		void NonVR_Update_Camera_Array();
		void NonVR_Set_Camera_Array();
		void ForceLeanToStop();
		void ExecuteUbergraph_NightTerror_PlayerPawn_Headlight(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
