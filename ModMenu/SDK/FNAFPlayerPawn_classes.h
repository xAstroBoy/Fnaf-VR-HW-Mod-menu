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
	 * BlueprintGeneratedClass FNAFPlayerPawn.FNAFPlayerPawn_C
	 * Size -> 0x0040 (FullSize[0x09F0] - InheritedSize[0x09B0])
	 */
	class AFNAFPlayerPawn_C : public ASWGVRCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFNAFVisionDetector_C*                               FNAFVisionDetector;                                      // 0x09B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x09C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                visioncone;                                              // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ASaul_BP_MotionController_C*                         LeftController;                                          // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASaul_BP_MotionController_C*                         RightController;                                         // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVisibilityTracker>                          ActorsInVisionCone;                                      // 0x09E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
		void SetupVisionDetector();
		void SpawnHand(InputCore_EControllerHand HandClass);
		void SpawnBothHands();
		void ReceiveBeginPlay();
		void BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature(class AActor* Actor);
		void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature(class AActor* Actor);
		void ExecuteUbergraph_FNAFPlayerPawn(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
