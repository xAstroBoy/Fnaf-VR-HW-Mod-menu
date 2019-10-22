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

// BlueprintGeneratedClass FlashlightBase.FlashlightBase_C
// 0x0060 (0x0388 - 0x0328)
class AFlashlightBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFNAFVisionDetector_C*                       FNAFVisionDetector;                                       // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ConeCollider;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Flashlight;                                               // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsOn;                                                     // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	TArray<TScriptInterface<class UIFlashLightInteractible_C>> HoveredActors;                                            // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ASWGVRCharacter*                             Grabber;                                                  // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFlashlightStatusChanged;                                // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlashlightBase.FlashlightBase_C");
		return ptr;
	}


	void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
	void AttemptGrab(class ASWGVRCharacter* Grabber, EVRHandType Hand, bool* canGrab, EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
	bool AttemptRelease(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void GetGrabber(class ASWGVRCharacter** Grabber);
	void GetIsOn(bool* IsOn);
	void ToggleFlashlight();
	void UserConstructionScript();
	void OnVRReleased(class ASWGVRCharacter* Grabber, EVRHandType Hand, const struct FVector& ReleaseVelocity);
	void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature(class AActor* Actor);
	void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature(class AActor* Actor);
	void OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand);
	void OnVRGrabbed(class ASWGVRCharacter* Grabber, EVRHandType Hand);
	void ExecuteUbergraph_FlashlightBase(int EntryPoint);
	void OnFlashlightStatusChanged__DelegateSignature(bool FlashLightOn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
