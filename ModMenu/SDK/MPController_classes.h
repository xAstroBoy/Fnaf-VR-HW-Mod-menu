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
	 * BlueprintGeneratedClass MPController.MPController_C
	 * Size -> 0x0009 (FullSize[0x0599] - InheritedSize[0x0590])
	 */
	class AMPController_C : public APlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0590(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsActive;                                                // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key);
		void Action_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ActivatePlayer();
		void InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue);
		void ExecuteUbergraph_MPController(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
