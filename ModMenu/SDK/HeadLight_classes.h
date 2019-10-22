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

// BlueprintGeneratedClass HeadLight.HeadLight_C
// 0x0091 (0x03B9 - 0x0328)
class AHeadLight_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Flashlight_Cone_Light_VFX;                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Flashlight_Cone_Collision;                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Flashlight_Spotlight;                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_40ACD14841B27293205F2A843CB42B6B;   // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_40ACD14841B27293205F2A843CB42B6B;   // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_95AF74854BF312ED6BC05D8A3465AEDF;   // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_95AF74854BF312ED6BC05D8A3465AEDF;   // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_A04F04EB47F3CC97BF7332B4E714F563;   // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_A04F04EB47F3CC97BF7332B4E714F563;   // 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Dyling_Flashlight_Flicker_NewTrack_0_0A7E1AAC47275BB5255A15982E4F7D7A;// 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Dyling_Flashlight_Flicker__Direction_0A7E1AAC47275BB5255A15982E4F7D7A;// 0x0384(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Dyling_Flashlight_Flicker;                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Freddy_Is_Hit_by_the_light;                               // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Power_is_On;                                              // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Toggle_Flicker;                                           // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FlickerAnd_PowerOff;                                      // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeadLight.HeadLight_C");
		return ptr;
	}


	void Light_Intensity(bool Off);
	void UserConstructionScript();
	void Dyling_Flashlight_Flicker__FinishedFunc();
	void Dyling_Flashlight_Flicker__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand);
	void Turn_Off();
	void Turn_On();
	void OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand);
	void ReceiveBeginPlay();
	void Drop();
	void Pickup(class USceneComponent* AttachTo);
	void Toggle_Flicker_Test(bool Enable_Collision, bool OffAfterFlicker);
	void HeavyFlickerEvent();
	void ReceiveTick(float* DeltaSeconds);
	void OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand);
	void ExecuteUbergraph_HeadLight(int EntryPoint);
	void Toggle_Flicker__DelegateSignature();
	void Freddy_Is_Hit_by_the_light__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
