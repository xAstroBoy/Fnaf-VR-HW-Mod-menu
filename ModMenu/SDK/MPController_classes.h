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

// BlueprintGeneratedClass MPController.MPController_C
// 0x0009 (0x0681 - 0x0678)
class AMPController_C : public APlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsActive;                                                 // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MPController.MPController_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_JoinGame_K2Node_InputActionEvent_2(const struct FKey& Key);
	void Action_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ActivatePlayer();
	void InpAxisEvt_VerticalMovement_K2Node_InputAxisEvent_2(float AxisValue);
	void InpAxisEvt_HorizontalMovement_K2Node_InputAxisEvent_1(float AxisValue);
	void ExecuteUbergraph_MPController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
