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
	 * BlueprintGeneratedClass Office01_MotionControllerPawn.Office01_MotionControllerPawn_C
	 * Size -> 0x001F (FullSize[0x1061] - InheritedSize[0x1042])
	 */
	class AOffice01_MotionControllerPawn_C : public AOffice_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_U8IE[0x6];                                   // 0x1042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1048(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AOffice01_Door_Bp_C*                                 Ref_DoorLeft;                                            // 0x1050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AOffice01_Door_Bp_C*                                 Ref_DoorRight;                                           // 0x1058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Office_NonVr_CameratetheredLook_EOffice_NonVr_CameratetheredLook Office01_DirectionEnum;                                  // 0x1060(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void CheckForGamePad();
		void ExecuteUbergraph_Office01_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
