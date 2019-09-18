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

// BlueprintGeneratedClass Office02_GameManager.Office02_GameManager_C
// 0x00F3 (0x0543 - 0x0450)
class AOffice02_GameManager_C : public AOffice_BaseGamemanager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_Ambience;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GameStaticAudio;                                          // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_CameraFadeIntensity_1CCDC8614A3E199BE490E7B3631806A9;// 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_1CCDC8614A3E199BE490E7B3631806A9;   // 0x046C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_StaticField_196495784D2499799FF75FBF7BECB1F2;  // 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_196495784D2499799FF75FBF7BECB1F2;   // 0x047C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_StaticField_F4CD75CE418DAB7FC3E9C4B0D57E25F3;  // 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_F4CD75CE418DAB7FC3E9C4B0D57E25F3;   // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_A202154B4A278C7E2403BFB399B35779;   // 0x0498(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A202154B4A278C7E2403BFB399B35779;   // 0x049C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x049D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightFlicker_CameraFadeIntensity_C556BB3A4B5D8C3A000AD088F4733314;// 0x04A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFlicker__Direction_C556BB3A4B5D8C3A000AD088F4733314; // 0x04AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFlicker;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AFreddieMask_BP_C*>                   FreddieMask;                                              // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               BBHasTriggeredEndGame;                                    // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	float                                              LightBateryLife;                                          // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Get;                                                      // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PuppetTypeTouse;                                          // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x04D2(0x0006) MISSED OFFSET
	class UDataTable*                                  PuppetAiData;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PuppetDataFound;                                          // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    PuppetIsAwake;                                            // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ASpotLight*                                  OverHeadSpotLight;                                        // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APointLight*                                 OverHeadPointLight;                                       // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class APointLight*                                 OverHeadPointLight02;                                     // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AFNAFCamera_Blueprint_C*                     PuppetCamera;                                             // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               EnablePuppetWalk;                                         // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0519(0x0007) MISSED OFFSET
	class AHiddenCoin_C*                               HiddenCoin;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ASpotLight*                                  OverHeadSpotLight_Nightmare;                              // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Disable_Puppet;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class UDataTable*                                  WitheredAIData;                                           // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowWithered;                                            // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WitheredAttackHappening;                                  // 0x0541(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ToyAttackHappening;                                       // 0x0542(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office02_GameManager.Office02_GameManager_C");
		return ptr;
	}


	void PuppetLightFlickerOff();
	void PuppetLightFlickerOn();
	void GetPuppetData(bool* PuppetDataFound, struct FPuppetAIDataStruct* PuppetStructToUse1);
	void EnableLigtTransition();
	void SetFreddieMask();
	void GetFreddieMask(TArray<class AFreddieMask_BP_C*>* FreddieMask);
	void UserConstructionScript();
	void LightFlicker__FinishedFunc();
	void LightFlicker__UpdateFunc();
	void LightFlicker__TeleportAi__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__Flip_Camera__EventFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_2__Flip_Camera__EventFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_3__TeleportAi__EventFunc();
	void ReceiveBeginPlay();
	void TriggerCameraFlicker();
	void TurnOffStaticScreen();
	void TurnOnStaticScreen();
	void PuppetLightFlicker();
	void PuppetExecutionSequence();
	void Disable_Puppet_Animation(bool Player_Won_Game);
	void TriggerCameraLightFlicker();
	void ExecuteUbergraph_Office02_GameManager(int EntryPoint);
	void PuppetIsAwake__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
