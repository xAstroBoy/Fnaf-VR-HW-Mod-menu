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

// BlueprintGeneratedClass DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C
// 0x0A5E (0x0E58 - 0x03FA)
class ADLC_MonitorBoard_Office01_C : public AMonitorBoard_BP_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x03FA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               ClickCollision;                                           // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_CameraDisplay;                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_0_FlickerIntensity_BF07055E4B61DDB563A58E931BB88593;// 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0_0__Direction_BF07055E4B61DDB563A58E931BB88593; // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               DisableInteractions;                                      // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Disable_Logic_1;                                          // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0432(0x0006) MISSED OFFSET
	TArray<class AMonitorButton_BP_C*>                 MonitorButtons;                                           // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UPostProcessComponent*                       NightmarePostProcess;                                     // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FPostProcessSettings                        PostProcessSettings_Static;                               // 0x0450(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPostProcessSettings                        PostProcessSettings;                                      // 0x0930(0x04E0) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AOffice01_GameManager_C*                     Office01_Game_Manger;                                     // 0x0E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               BTNCanAddTime;                                            // 0x0E18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BTNInteractableIsHeld;                                    // 0x0E19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x0E1A(0x0006) MISSED OFFSET
	class ARoomInfo_Bp_C*                              VisibleRoom;                                              // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PowerRebooting;                                           // 0x0E28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PowerOutage;                                              // 0x0E29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeaconOnCooldown;                                         // 0x0E2A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0E2B(0x0005) MISSED OFFSET
	class ADLC_Office01_FlashBeaconButton_Bp_C*        FlashBeaconButtonRef;                                     // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInterface*                          StoreOldMonitorScreen;                                    // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E41(0x0003) MISSED OFFSET
	float                                              FoxyCameraTimer;                                          // 0x0E44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoxyBeingWatched;                                         // 0x0E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0E49(0x0003) MISSED OFFSET
	float                                              DeltaTimeStored;                                          // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PirateCoveCameraBroke;                                    // 0x0E50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0E51(0x0003) MISSED OFFSET
	float                                              TimeBeforeCameraFixed;                                    // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DLC_MonitorBoard_Office01.DLC_MonitorBoard_Office01_C");
		return ptr;
	}


	void PirateCoveCameraState(bool PirateCoveCameraBroke);
	void SubscribeMonitorBtn(class AMonitorButton_BP_C** ItemToFind, int* BtnID);
	void UserConstructionScript();
	void Timeline_0_0__FinishedFunc();
	void Timeline_0_0__UpdateFunc();
	void Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera);
	void ReceiveBeginPlay();
	void DisableMonitorInteractions(bool Player_Won_Game);
	void ReceiveTick(float* DeltaSeconds);
	void EventBtnInteractableIsHeld(bool IsBeingHeld);
	void Event_Btn_Interactable(bool* IsLightBtn, bool* IsVentBtn, bool* IsAudioBtn, bool* IsMusicBoxBtn, bool* IsRebootBtn, bool* IsHeldDown);
	void RestartPower();
	void PowerOutageHasOccured();
	void PowerRebooted();
	void PowerOutageEvent();
	void SetVisualStatic(bool* EnableStatic);
	void ExecuteUbergraph_DLC_MonitorBoard_Office01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
