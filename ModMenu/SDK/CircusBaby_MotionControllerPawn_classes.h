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
	 * BlueprintGeneratedClass CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C
	 * Size -> 0x0017 (FullSize[0x0FD3] - InheritedSize[0x0FBC])
	 */
	class ACircusBaby_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
	{
	public:
		unsigned char                                              UnknownData_VZH0[0x4];                                   // 0x0FBC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0FC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    OfficeVictoryWidget_1;                                   // 0x0FC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftClear;                                               // 0x0FD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RightClear;                                              // 0x0FD1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ActivareCounter;                                         // 0x0FD2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_ZoomNonVR_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ForceLeanToStop();
		void ExecuteUbergraph_CircusBaby_MotionControllerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
