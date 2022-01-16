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
	 * BlueprintGeneratedClass Office_BaseGamemanager.Office_BaseGamemanager_C
	 * Size -> 0x0128 (FullSize[0x0368] - InheritedSize[0x0240])
	 */
	class AOffice_BaseGamemanager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          Office_Room_Data_Table;                                  // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ARoomInfo_Bp_C*>                              ListOfRoomBps;                                           // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TMap<class FName, class ARoomInfo_Bp_C*>                   RoomsByName;                                             // 0x0268(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int                                                        GameTimer;                                               // 0x02B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GameWon;                                                 // 0x02BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       GameLost;                                                // 0x02BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2AAP[0x2];                                   // 0x02BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GameClock;                                               // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisablePlayerInputs;                                     // 0x02C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DE4O[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMonitorBoard_BP_C*                                  MonitorBoard;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULevelSequence*                                      LightFadeSequence;                                       // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ALevelSequenceActor*                                 LFSeqActor;                                              // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ALocPoint_BP_C*>                              FlickerLocations;                                        // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		TArray<class AOfficeAiBase_Bp_C*>                          AIWaitingForLightFade;                                   // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             DisableAi;                                               // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UDataTable*                                          AIDataTable;                                             // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class USoundWave*>                                  PhoneCallTable;                                          // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class AAmbientSound*                                       AssignedPhoneCall;                                       // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundWave*                                          AssignedPhoneCallFile;                                   // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       JumpScareHappening;                                      // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z2GG[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FlickerLights;                                           // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DestroyProblemAI;                                        // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Enable_6_AM_animation;                                   // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AllowOverrideAiData;                                     // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CN63[0x2];                                   // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int                                                        DifficultyAdjustment;                                    // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTwoPreviousRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
		void GetPreviousRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
		void GetAIData(FreddyCharacterType_EFreddyCharacterType CharacterType, struct FOfficeAIDataStruct* AIDataStruct, bool* DataWasFound);
		void ClockCountDown();
		void GetRoomInfo(const class FName& RoomName, class ARoomInfo_Bp_C** Value);
		void GetRoomTransitions(const class FName& Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions);
		void GetRooms(TArray<class ARoomInfo_Bp_C*>* ListOfRoomBps);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void EventStartClock();
		void CountDownClock();
		void SetStatic(bool EnableStatic);
		void CharacterStartingMove(class AOfficeAiBase_Bp_C* OfficeCharacterAI, class ARoomInfo_Bp_C* PrevRom);
		void StartLightFade(class AOfficeAiBase_Bp_C* AIWaiting);
		void ScreenFaded();
		void ReceiveTick(float DeltaSeconds);
		void StartupStaticCounter();
		void GameLost_Error_Fix();
		void ExecuteUbergraph_Office_BaseGamemanager(int EntryPoint);
		void DestroyProblemAI__DelegateSignature();
		void FlickerLights__DelegateSignature();
		void DisableAi__DelegateSignature(bool Player_Won_Game);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
