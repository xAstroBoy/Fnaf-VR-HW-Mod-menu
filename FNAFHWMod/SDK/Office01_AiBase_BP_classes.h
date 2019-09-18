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

// BlueprintGeneratedClass Office01_AiBase_BP.Office01_AiBase_BP_C
// 0x0034 (0x0474 - 0x0440)
class AOffice01_AiBase_BP_C : public AOfficeAiBase_Bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Moan;                                               // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CameraFadeFlicker_CameraFade_Value_A0B490B141FB8A7688B9039268A77A14;// 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraFadeFlicker__Direction_A0B490B141FB8A7688B9039268A77A14;// 0x0454(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraFadeFlicker;                                        // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ALocPoint_BP_C*                              HiddenLocation;                                           // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              HiddenRoom;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EOffice01_Doors>                       AssignedDoor;                                             // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMoveAwayFromDoor;                                    // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAtDoorWaiting;                                          // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KillDelay;                                                // 0x0473(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_AiBase_BP.Office01_AiBase_BP_C");
		return ptr;
	}


	void ResetPosition();
	void UserConstructionScript();
	void CameraFadeFlicker__FinishedFunc();
	void CameraFadeFlicker__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReachedKillZone();
	void ReceiveBeginPlay();
	void TriggerLightSound();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void ResetAudioTriggerForDoor();
	void TESTINGONLY_ForceJumpscare();
	void ExecuteUbergraph_Office01_AiBase_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
