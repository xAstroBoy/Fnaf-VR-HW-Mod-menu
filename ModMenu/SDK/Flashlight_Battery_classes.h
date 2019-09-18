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

// BlueprintGeneratedClass Flashlight_Battery.Flashlight_Battery_C
// 0x01C9 (0x0551 - 0x0388)
class AFlashlight_Battery_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                       RadialForce;                                              // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MOD_BatteryIndicator_01;                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Flashlight_Cone_Light_VFX;                                // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Flashlight_Cone_Collision;                                // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget_Battery;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_FlashLight;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PostprocessTransition_WeightingSetting_4213659F4B9899A8E76F1E9C15107352;// 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PostprocessTransition__Direction_4213659F4B9899A8E76F1E9C15107352;// 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PostprocessTransition;                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_F5B6EEB042E819E9D40F67A35A7203E5;   // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_F5B6EEB042E819E9D40F67A35A7203E5;   // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_41093FD74358EC3722B8C58E70C8269D;   // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_41093FD74358EC3722B8C58E70C8269D;   // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Flicker01Timeline_NewTrack_0_C833352E4503D32382037EB1A2BC9541;// 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Flicker01Timeline__Direction_C833352E4503D32382037EB1A2BC9541;// 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Flicker01Timeline;                                        // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Light_Flicker_NewTrack_0_629217CD4B7E6C179FE4339E09596E0F;// 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Light_Flicker__Direction_629217CD4B7E6C179FE4339E09596E0F;// 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Light_Flicker;                                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FredHead_LightFlicker_LightFlickerIntensity_7B36C91F4536795E4A9A938088D9EFEE;// 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FredHead_LightFlicker__Direction_7B36C91F4536795E4A9A938088D9EFEE;// 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FredHead_LightFlicker;                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_4DE91EAB4DB2A4BE09023EA8F6F9F01C;   // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_4DE91EAB4DB2A4BE09023EA8F6F9F01C;   // 0x0434(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Dyling_Flashlight_Flicker_NewTrack_0_B4D3D19C4D686236121331827350CC66;// 0x0440(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Dyling_Flashlight_Flicker__Direction_B4D3D19C4D686236121331827350CC66;// 0x0444(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0445(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Dyling_Flashlight_Flicker;                                // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsFlashLightOn_;                                          // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFlashLightHeld_;                                        // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0452(0x0002) MISSED OFFSET
	float                                              FlashlightBattery;                                        // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFlashlightDead_;                                        // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldBatteryRecharge_;                                   // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x045A(0x0006) MISSED OFFSET
	class ASaul_MotionControllerPawn_C*                Motion_Controller;                                        // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Dying_Light_Flicker;                                      // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LightDimOverTime;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Select_Flashlight_mode;                                   // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0474(0x0004) MISSED OFFSET
	class AOffice_BaseGamemanager_C*                   RefToOfficeManager;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitToFlickerTimer;                                       // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasLightFlickered;                                        // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	float                                              StoredDeltaTime;                                          // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerLightFlicker;                                      // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerFredBearHeadLight;                                 // 0x048D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WaitToFlickerHeadTimer;                                   // 0x048E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TriggerFastFredBear;                                      // 0x048F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Set_Min_Light_Intensity;                                  // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Set_Max_Light_Intensity;                                  // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Select_Dim_state;                                         // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Brightness_Mult;                                          // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, float>                          LevelSpecificBrightness;                                  // 0x04A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FName, float>                          ConeSizeBasedOnLevel;                                     // 0x04F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsFinaleLevel;                                            // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class APostProcessVolume*                          FinaleNightmarePostProcess;                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPlayerTeleportedToAnotherRoom;                         // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flashlight_Battery.Flashlight_Battery_C");
		return ptr;
	}


	void AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
	bool AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void Flashlight_Ref(class UFlashLight_Power_C** Flash_Light_Power);
	void Motion_Controller_Pawn_Ref(class ASaul_MotionControllerPawn_C** AsMotion_Controller_Pawn);
	void UserConstructionScript();
	void Dyling_Flashlight_Flicker__FinishedFunc();
	void Dyling_Flashlight_Flicker__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void FredHead_LightFlicker__FinishedFunc();
	void FredHead_LightFlicker__UpdateFunc();
	void FredHead_LightFlicker__ToggleLight__EventFunc();
	void Light_Flicker__FinishedFunc();
	void Light_Flicker__UpdateFunc();
	void Flicker01Timeline__FinishedFunc();
	void Flicker01Timeline__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void PostprocessTransition__FinishedFunc();
	void PostprocessTransition__UpdateFunc();
	void Pickup(class USceneComponent* AttachTo);
	void Drop();
	void OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand);
	void OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__SM_FlashLight_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Flashlight_On_(bool IsOn_);
	void ReceiveBeginPlay();
	void Can_Win();
	void Fate_is_Sealed__RIP_();
	void FlickerLightOff();
	void FlickerLightOn();
	void FredHead_Flicker();
	void Toggle_Flicker(bool IsPlayerDead);
	void PCBFlicker_01(bool Reverse, bool SetNewTime);
	void FuntimeFreddyFlicker(bool IsPlayerDead);
	void FinaleNightmareWeightTransition();
	void ResetWeightTransition();
	void SetRadialForce();
	void Disable_Collider();
	void ExecuteUbergraph_Flashlight_Battery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
