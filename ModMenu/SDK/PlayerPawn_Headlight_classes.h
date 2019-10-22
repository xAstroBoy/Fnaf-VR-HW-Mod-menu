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

// BlueprintGeneratedClass PlayerPawn_Headlight.PlayerPawn_Headlight_C
// 0x003F (0x0EA8 - 0x0E69)
class APlayerPawn_Headlight_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E69(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            OfficeVictoryWidget_1;                                    // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SpawnHeadlightInThisLevel;                                // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_Line_Trace;                                        // 0x0E81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0E82(0x0006) MISSED OFFSET
	class ATeleportSpot_Door_BP_Child_C*               Bedroom_Door;                                             // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Object_Refrence;                                          // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    LightTriggered;                                           // 0x0E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Headlight.PlayerPawn_Headlight_C");
		return ptr;
	}


	void Flicker_Flashlight(bool Flicker_Light);
	void UserConstructionScript();
	void Toggle_Flicker(bool Enable_Collision, bool TurnOffLightAfterFlicker);
	void Toggle_Light(bool Power_On);
	void ReceiveTick(float* DeltaSeconds);
	void Heavy_Flicker();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PlayerPawn_Headlight(int EntryPoint);
	void LightTriggered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
