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
	 * BlueprintGeneratedClass Flashlight_Battery.Flashlight_Battery_C
	 * Size -> 0x02D0 (FullSize[0x0570] - InheritedSize[0x02A0])
	 */
	class AFlashlight_Battery_C : public APawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     LineTraceStart;                                          // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URadialForceComponent*                               RadialForce;                                             // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MOD_BatteryIndicator_01;                                 // 0x02B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x02C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Flashlight_Cone_Light_VFX;                               // 0x02C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Flashlight_Cone_Collision;                               // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget_Battery;                                          // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_FlashLight;                                           // 0x02E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x02E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      PostprocessTransition_WeightingSetting_4213659F4B9899A8E76F1E9C15107352; // 0x02F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  PostprocessTransition__Direction_4213659F4B9899A8E76F1E9C15107352; // 0x02F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TY0S[0x3];                                   // 0x02F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  PostprocessTransition;                                   // 0x02F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2_NewTrack_0_F5B6EEB042E819E9D40F67A35A7203E5;  // 0x0300(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_2__Direction_F5B6EEB042E819E9D40F67A35A7203E5;  // 0x0304(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BF7M[0x3];                                   // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_NewTrack_0_41093FD74358EC3722B8C58E70C8269D;  // 0x0310(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_1__Direction_41093FD74358EC3722B8C58E70C8269D;  // 0x0314(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_62T2[0x3];                                   // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Flicker01Timeline_NewTrack_0_C833352E4503D32382037EB1A2BC9541; // 0x0320(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Flicker01Timeline__Direction_C833352E4503D32382037EB1A2BC9541; // 0x0324(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9D3Z[0x3];                                   // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Flicker01Timeline;                                       // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Light_Flicker_NewTrack_0_629217CD4B7E6C179FE4339E09596E0F; // 0x0330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Light_Flicker__Direction_629217CD4B7E6C179FE4339E09596E0F; // 0x0334(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RAAC[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Light_Flicker;                                           // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FredHead_LightFlicker_LightFlickerIntensity_7B36C91F4536795E4A9A938088D9EFEE; // 0x0340(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  FredHead_LightFlicker__Direction_7B36C91F4536795E4A9A938088D9EFEE; // 0x0344(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EAG8[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  FredHead_LightFlicker;                                   // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_4DE91EAB4DB2A4BE09023EA8F6F9F01C;  // 0x0350(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Timeline_0__Direction_4DE91EAB4DB2A4BE09023EA8F6F9F01C;  // 0x0354(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NPSC[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dyling_Flashlight_Flicker_NewTrack_0_B4D3D19C4D686236121331827350CC66; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		Engine_ETimelineDirection                                  Dyling_Flashlight_Flicker__Direction_B4D3D19C4D686236121331827350CC66; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D1VJ[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Dyling_Flashlight_Flicker;                               // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFlashLightOn_;                                         // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFlashLightHeld_;                                       // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5FZI[0x2];                                   // 0x0372(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlashlightBattery;                                       // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFlashlightDead_;                                       // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShouldBatteryRecharge_;                                  // 0x0379(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TFEN[0x6];                                   // 0x037A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASaul_MotionControllerPawn_C*                        Motion_Controller;                                       // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Dying_Light_Flicker;                                     // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightDimOverTime;                                        // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Select_Flashlight_mode;                                  // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_21UG[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AOffice_BaseGamemanager_C*                           RefToOfficeManager;                                      // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WaitToFlickerTimer;                                      // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasLightFlickered;                                       // 0x03A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DYMK[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StoredDeltaTime;                                         // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TriggerLightFlicker;                                     // 0x03AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TriggerFredBearHeadLight;                                // 0x03AD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WaitToFlickerHeadTimer;                                  // 0x03AE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TriggerFastFredBear;                                     // 0x03AF(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Set_Min_Light_Intensity;                                 // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Set_Max_Light_Intensity;                                 // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int                                                        Select_Dim_state;                                        // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Brightness_Mult;                                         // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, float>                                   LevelSpecificBrightness;                                 // 0x03C0(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class FName, float>                                   ConeSizeBasedOnLevel;                                    // 0x0410(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       IsFinaleLevel;                                           // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LSAY[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APostProcessVolume*                                  FinaleNightmarePostProcess;                              // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasPlayerTeleportedToAnotherRoom;                        // 0x0470(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseLineTraceInteraction;                                 // 0x0471(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2URL[0x6];                                   // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              FlashlightHoverActor;                                    // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          HitResults;                                              // 0x0480(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		class UFlashLight_Power_C*                                 NonVR_Battery;                                           // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Flashlight_Active;                                       // 0x0510(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<class FName, float>                                   AttenuationSpecificLevel;                                // 0x0520(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
		bool AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void Flashlight_Ref(class UFlashLight_Power_C** Flash_Light_Power);
		void Motion_Controller_Pawn_Ref(class ASaul_MotionControllerPawn_C** AsMotion_Controller_Pawn);
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
		void OnVRInteract(class ASWGVRCharacter* VRCharacter, SWGVR_EVRHandType Hand);
		void OnVRHoverBegin(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand);
		void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, SWGVR_EVRHandType Hand);
		void OnVRHoverEnd(class ASWGVRCharacter* Sender, SWGVR_EVRHandType Hand);
		void OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity);
		void ReceiveTick(float DeltaSeconds);
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
		void Flashlight_Active__DelegateSignature(bool Flashlight_On);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
