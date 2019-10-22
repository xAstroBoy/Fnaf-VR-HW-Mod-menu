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

// BlueprintGeneratedClass DLC_Office01_AI_BP.DLC_Office01_AI_BP_C
// 0x0060 (0x04A0 - 0x0440)
class ADLC_Office01_AI_BP_C : public AOfficeAiBase_Bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               IsMoving;                                                 // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFlashable;                                              // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x044A(0x0006) MISSED OFFSET
	class ARoomInfo_Bp_C*                              NextRoomForced;                                           // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>                      ListOfRooms;                                              // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ARoomInfo_Bp_C*                              HiddenRoom;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALocPoint_BP_C*                              HiddenLocation;                                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOffice01_Doors>                       AssignedLeftDoor;                                         // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x047A(0x0002) MISSED OFFSET
	float                                              TimerForAIAtDoor;                                         // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttackingDoor;                                            // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              TimeDeltaStored;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeSinceSeen;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdjustAnimSpeeds;                                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeingWatched;                                             // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0491(0x0003) MISSED OFFSET
	float                                              MinTimeForLastWatched;                                    // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeForLastWatched;                                    // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CapOnAdjustedAnimSpeed;                                   // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLC_Office01_AI_BP.DLC_Office01_AI_BP_C");
		return ptr;
	}


	void FindLowerAssignedRoom(class ARoomInfo_Bp_C** RandomRoom, class ALocPoint_BP_C** RoomLocation);
	void AdjustAnimationSpeed();
	void ResetPosition();
	void SendToHiddenRoom();
	void FindPreviousRoom(class ARoomInfo_Bp_C* RoomToCheck);
	void BeingFlashed(bool AttackingDoor);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void PickNextRoom();
	void ReceiveBeginPlay();
	void ReachedKillZone();
	void CaughtByFlash();
	void CheckBeingWatched();
	void RoomDelayTrigger();
	void ExecuteUbergraph_DLC_Office01_AI_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
