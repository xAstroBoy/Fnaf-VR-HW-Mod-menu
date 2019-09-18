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

// BlueprintGeneratedClass OfficeAiBase-Bp.OfficeAiBase-Bp_C
// 0x0118 (0x0440 - 0x0328)
class AOfficeAiBase_Bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_CharacterMovements;                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Character_SkeletalMesh;                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ARoomInfo_Bp_C*                              Ref_RoomInfo_BP;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ALocPoint_BP_C*                              Ref_LocPoint_Bp;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitMoveTimer;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FOfficeRoomTransition_Struct                RoomTransition_data;                                      // 0x0360(0x0028) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DeltaTimeStored;                                          // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOffice_BaseGamemanager_C*                   OfficeManager;                                            // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              StartingRoom;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALocPoint_BP_C*                              StartingLocation;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              MinMoveTimer;                                             // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMoveTImer;                                             // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AJumpScare_C*                                Ref_Jumpscare_Bp;                                         // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EJumpScareList>                        AssignedJumpscare;                                        // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	class ALocPoint_BP_C*                              Office02_MaskTransitionLocation;                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              Office02_MaskTransitionRoom;                              // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              MinMoveTimerValue;                                        // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveTimerValue;                                        // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAtFinalDestination;                                     // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              TimeBeforeActivating;                                     // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             MovementAudio;                                            // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AllowActorTeleporting;                                    // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03E9(0x0007) MISSED OFFSET
	class AOffice_BaseGamemanager_C*                   GameManagerReference;                                     // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               UseAnimBasedMovement;                                     // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BackTrackAllowed;                                         // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableAi;                                                // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x03FB(0x0001) MISSED OFFSET
	int                                                OfficeNightNumber;                                        // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FOfficeAIDataStruct                         AIData;                                                   // 0x0400(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFreddyCharacterType>                  CharacterAIType;                                          // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DarkenRoomOnJump;                                         // 0x0422(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChangeBehaviorWhenSeen;                                   // 0x0423(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AllowedSeenTimeCap;                                       // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetTimerCap;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class ARoomInfo_Bp_C*                              StoredRoomInfo;                                           // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationTime_Min;                                       // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationTime_Max;                                       // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OfficeAiBase-Bp.OfficeAiBase-Bp_C");
		return ptr;
	}


	void SetActivationTimeRange();
	void PlayerWatchingAi(float Delta_Time, float WaitMoveTimer, float TimerCap, bool* IsThereTimeCap, float* MoveTimer);
	void CanEnterRoom(class ARoomInfo_Bp_C* RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom);
	void OnAnimJump();
	void FinishMove();
	void StartingMove(class ARoomInfo_Bp_C* PrevRoom, class ALocPoint_BP_C* PrevLoc);
	struct FString GetCurrentLocationName();
	struct FString GetCurrentRoomName();
	void CollectNextRoomInfo(TMap<class ARoomInfo_Bp_C*, int>* AllRoomChances, int* TotalOfRoomChance);
	void ResetMoveTimer();
	void Temp_Office02_MaskTransition();
	void SetJumpScareRef();
	void GetJumpScareRef(class AJumpScare_C** Ref_Jumpscare_Bp);
	void ReachedKillZone();
	void GetRandomLocationForRoom(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C** RoomLocation);
	void GetOfficeManager(class AOffice_BaseGamemanager_C** OfficeManager);
	void PickNextRoom();
	void NotifyLocationOwner();
	void PlayerLookLogic();
	void MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location);
	void UpdateTimer();
	void GetRoomLocationName(const struct FName& RoomType, class ARoomInfo_Bp_C** RoomInfo_Bp, struct FName* WhatIsCurrentRoom);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void EventDisableAi(bool Player_Won_Game);
	void FlickerAssignedLights();
	void ExecuteUbergraph_OfficeAiBase_Bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
