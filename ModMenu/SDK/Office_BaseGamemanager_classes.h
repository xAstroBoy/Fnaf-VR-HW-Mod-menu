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

// BlueprintGeneratedClass Office_BaseGamemanager.Office_BaseGamemanager_C
// 0x0128 (0x0450 - 0x0328)
class AOffice_BaseGamemanager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  Office_Room_Data_Table;                                   // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ARoomInfo_Bp_C*>                      ListOfRoomBps;                                            // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TMap<struct FName, class ARoomInfo_Bp_C*>          RoomsByName;                                              // 0x0350(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                GameTimer;                                                // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GameWon;                                                  // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GameLost;                                                 // 0x03A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	float                                              GameClock;                                                // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisablePlayerInputs;                                      // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class AMonitorBoard_BP_C*                          MonitorBoard;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ULevelSequence*                              LightFadeSequence;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALevelSequenceActor*                         LFSeqActor;                                               // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ALocPoint_BP_C*>                      FlickerLocations;                                         // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AOfficeAiBase_Bp_C*>                  AIWaitingForLightFade;                                    // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    DisableAi;                                                // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UDataTable*                                  AIDataTable;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USoundWave*>                          PhoneCallTable;                                           // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AAmbientSound*                               AssignedPhoneCall;                                        // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundWave*                                  AssignedPhoneCallFile;                                    // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpScareHappening;                                       // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    FlickerLights;                                            // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DestroyProblemAI;                                         // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Enable_6_AM_animation;                                    // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverrideAiData;                                      // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	int                                                DifficultyAdjustment;                                     // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office_BaseGamemanager.Office_BaseGamemanager_C");
		return ptr;
	}


	void GetTwoPreviousRoomTransitions(const struct FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
	void GetPreviousRoomTransitions(const struct FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
	void GetAIData(TEnumAsByte<EFreddyCharacterType> CharacterType, struct FOfficeAIDataStruct* AIDataStruct, bool* DataWasFound);
	void ClockCountDown();
	void GetRoomInfo(const struct FName& RoomName, class ARoomInfo_Bp_C** Value);
	void GetRoomTransitions(const struct FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
	void GetRooms(TArray<class ARoomInfo_Bp_C*>* ListOfRoomBps);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EventStartClock();
	void CountDownClock();
	void SetStatic(bool EnableStatic);
	void CharacterStartingMove(class AOfficeAiBase_Bp_C* OfficeCharacterAI, class ARoomInfo_Bp_C* PrevRom);
	void StartLightFade(class AOfficeAiBase_Bp_C* AIWaiting);
	void ScreenFaded();
	void ReceiveTick(float* DeltaSeconds);
	void StartupStaticCounter();
	void GameLost_Error_Fix();
	void ExecuteUbergraph_Office_BaseGamemanager(int EntryPoint);
	void DestroyProblemAI__DelegateSignature();
	void FlickerLights__DelegateSignature();
	void DisableAi__DelegateSignature(bool Player_Won_Game);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
