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
	 * BlueprintGeneratedClass FlashlightBase.FlashlightBase_C
	 * Size -> 0x0060 (FullSize[0x02A0] - InheritedSize[0x0240])
	 */
	class AFlashlightBase_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFNAFVisionDetector_C*                               FNAFVisionDetector;                                      // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ConeCollider;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Flashlight;                                              // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOn;                                                    // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5UEJ[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HoveredActors[0x10];                                     // 0x0271(0x0010) UNKNOWN PROPERTY: ArrayProperty FlashlightBase.FlashlightBase_C.HoveredActors
		class ASWGVRCharacter*                                     Grabber;                                                 // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnFlashlightStatusChanged;                               // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
		void AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
		bool AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void GetGrabber(class ASWGVRCharacter** Grabber);
		void GetIsOn(bool* IsOn);
		void ToggleFlashlight();
		void OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity);
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionExit__DelegateSignature(class AActor* Actor);
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionEnter__DelegateSignature(class AActor* Actor);
		void OnVRInteract(class ASWGVRCharacter* VRCharacter, SWGVR_EVRHandType Hand);
		void OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void ExecuteUbergraph_FlashlightBase(int EntryPoint);
		void OnFlashlightStatusChanged__DelegateSignature(bool FlashLightOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
