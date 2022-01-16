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
	 * BlueprintGeneratedClass GrabbableToken.GrabbableToken_C
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class AGrabbableToken_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                TokenMesh;                                               // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  Material;                                                // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AttemptGrab(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, bool* canGrab, SWGVR_EGrabSnapType* SnapType, bool* snapLocation, bool* snapRotation, struct FVector* AttachmentOffsetLocation, struct FRotator* AttachmentOffsetRotation);
		bool AttemptRelease(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void UserConstructionScript();
		void OnVRInteract(class ASWGVRCharacter* VRCharacter, SWGVR_EVRHandType Hand);
		void OnVRGrabbed(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand);
		void OnVRReleased(class ASWGVRCharacter* Grabber, SWGVR_EVRHandType Hand, const struct FVector& ReleaseVelocity);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GrabbableToken(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
