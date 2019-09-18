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

// BlueprintGeneratedClass Office01_GameManager.Office01_GameManager_C
// 0x0108 (0x0558 - 0x0450)
class AOffice01_GameManager_C : public AOffice_BaseGamemanager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_FoxySong;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Circus;                                             // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Kitchen_Freddy;                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Kitchen_Chica;                                      // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Ambience;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Fan;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PowerLevel;                                               // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PowerDrainPerUsageSecond;                                 // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentPowerUsage;                                        // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoxyIsRunning;                                            // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EOffice01_Doors>                       DoorStates;                                               // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_0_1;                                               // 0x0496(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0497(0x0001) MISSED OFFSET
	TArray<class AOffice01_Door_Bp_C*>                 OfficeDoors;                                              // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class APowerLVL_C*                                 PowerLevelReference;                                      // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    FreddySongTimer;                                          // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CheckDoorForLightSound;                                   // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DisableDoorInteraction;                                   // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerPowerOutage;                                       // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                FoxyKnockingCount;                                        // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableLogic;                                             // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    CheckDoorLights;                                          // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    KitchenSounds_Chica;                                      // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    KitchenSounds_Freddy;                                     // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RoomSounds_Foxy;                                          // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RoomSounds_Circus;                                        // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class AOffice_MotionControllerPawn_C*              MotionController_REF;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AHiddenCoin_C*                               HiddenCoin_REF_DRAWER;                                    // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office01_GameManager.Office01_GameManager_C");
		return ptr;
	}


	void PlayFoxySound();
	void PlayCircusSound();
	void PlayFreddieKitchenSounds();
	void PlayChicaKitchenSounds();
	void DecremenPowerUsage();
	void IncrementPowerUsage();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void CheckDoorStates(TEnumAsByte<EOffice01_Doors> DoorList);
	void FoxyKnockingAtTheDoor();
	void Player_Looking_at_kitchen(bool False);
	void ExecuteUbergraph_Office01_GameManager(int EntryPoint);
	void RoomSounds_Circus__DelegateSignature();
	void RoomSounds_Foxy__DelegateSignature();
	void KitchenSounds_Freddy__DelegateSignature();
	void KitchenSounds_Chica__DelegateSignature();
	void CheckDoorLights__DelegateSignature();
	void TriggerPowerOutage__DelegateSignature();
	void DisableDoorInteraction__DelegateSignature();
	void CheckDoorForLightSound__DelegateSignature();
	void FreddySongTimer__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
