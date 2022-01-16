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
	 * BlueprintGeneratedClass Office01_GameManager.Office01_GameManager_C
	 * Size -> 0x0128 (FullSize[0x0490] - InheritedSize[0x0368])
	 */
	class AOffice01_GameManager_C : public AOffice_BaseGamemanager_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_FoxySong;                                          // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Circus;                                            // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Kitchen_Freddy;                                    // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Kitchen_Chica;                                     // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Ambience;                                          // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Fan;                                               // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PowerLevel;                                              // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PowerDrainPerUsageSecond;                                // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        CurrentPowerUsage;                                       // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FoxyIsRunning;                                           // 0x03AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		Office01_Doors_EOffice01_Doors                             DoorStates;                                              // 0x03AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NewVar_0_1;                                              // 0x03AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E110[0x1];                                   // 0x03AF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOffice01_Door_Bp_C*>                         OfficeDoors;                                             // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		class APowerLVL_C*                                         PowerLevelReference;                                     // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             FreddySongTimer;                                         // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CheckDoorForLightSound;                                  // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DisableDoorInteraction;                                  // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             TriggerPowerOutage;                                      // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int                                                        FoxyKnockingCount;                                       // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableLogic;                                            // 0x040C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QCKJ[0x3];                                   // 0x040D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             CheckDoorLights;                                         // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             KitchenSounds_Chica;                                     // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             KitchenSounds_Freddy;                                    // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RoomSounds_Foxy;                                         // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RoomSounds_Circus;                                       // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AOffice_MotionControllerPawn_C*                      MotionController_REF;                                    // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHiddenCoin_C*                                       HiddenCoin_REF_DRAWER;                                   // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AOffice01_NonVrHoverChecks_C*>                NonVr_Overlaps;                                          // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             NonVR_DoorTraceBlock;                                    // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PlayFoxySound();
		void PlayCircusSound();
		void PlayFreddieKitchenSounds();
		void PlayChicaKitchenSounds();
		void DecremenPowerUsage();
		void IncrementPowerUsage();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void CheckDoorStates(Office01_Doors_EOffice01_Doors DoorList);
		void FoxyKnockingAtTheDoor();
		void Player_Looking_at_kitchen(bool False);
		void CheckCollisionsOnHoverBlocks();
		void ExecuteUbergraph_Office01_GameManager(int EntryPoint);
		void NonVR_DoorTraceBlock__DelegateSignature();
		void RoomSounds_Circus__DelegateSignature();
		void RoomSounds_Foxy__DelegateSignature();
		void KitchenSounds_Freddy__DelegateSignature();
		void KitchenSounds_Chica__DelegateSignature();
		void CheckDoorLights__DelegateSignature();
		void TriggerPowerOutage__DelegateSignature();
		void DisableDoorInteraction__DelegateSignature();
		void CheckDoorForLightSound__DelegateSignature();
		void FreddySongTimer__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
