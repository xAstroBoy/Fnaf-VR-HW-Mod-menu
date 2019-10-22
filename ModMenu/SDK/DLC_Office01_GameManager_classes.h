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

// BlueprintGeneratedClass DLC_Office01_GameManager.DLC_Office01_GameManager_C
// 0x00ED (0x053D - 0x0450)
class ADLC_Office01_GameManager_C : public AOffice_BaseGamemanager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Whispers;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_RebootHum;                                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Kitchen_Chica;                                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Kitchen_Freddy;                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_LightFlickerIntensity_626117994655E2B7A163238E1C313E2A;// 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_626117994655E2B7A163238E1C313E2A;   // 0x047C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    RebootPower;                                              // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DestroyBoard;                                             // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                PowerLevel;                                               // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    CaughtByFlash;                                            // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MonitorBeaconPressed;                                     // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerPowerOutage;                                       // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    RebootProcess;                                            // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DoorImpact;                                               // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                DoorHealth_LeftSide;                                      // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DoorHealth_RightSide;                                     // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimerAtDoor;                                              // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    AreAiBeingWatched;                                        // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ASpotLight*                                  OfficeSpotLight;                                          // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class AMonitorButton_BP_C*>                 MonitorBtnStored;                                         // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              RandomFloat;                                              // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HardPowerShutdown;                                        // 0x053C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLC_Office01_GameManager.DLC_Office01_GameManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Player_Looking_at_kitchen(bool False);
	void ReceiveBeginPlay();
	void MonitorBeaconWasPressed();
	void RebootPowerLevel();
	void CommencePowerReboot();
	void DoorImpactEvent(TEnumAsByte<EOffice01_Doors> LeftSide);
	void PowerOutageHappened();
	void CountDownClock();
	void RandomAudioWhispers();
	void ExecuteUbergraph_DLC_Office01_GameManager(int EntryPoint);
	void AreAiBeingWatched__DelegateSignature();
	void DoorImpact__DelegateSignature(TEnumAsByte<EOffice01_Doors> LeftSide);
	void RebootProcess__DelegateSignature();
	void TriggerPowerOutage__DelegateSignature();
	void MonitorBeaconPressed__DelegateSignature();
	void CaughtByFlash__DelegateSignature();
	void DestroyBoard__DelegateSignature();
	void RebootPower__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
