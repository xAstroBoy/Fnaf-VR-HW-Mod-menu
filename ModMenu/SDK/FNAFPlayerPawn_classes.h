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

// BlueprintGeneratedClass FNAFPlayerPawn.FNAFPlayerPawn_C
// 0x0040 (0x0A90 - 0x0A50)
class AFNAFPlayerPawn_C : public ASWGVRCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFNAFVisionDetector_C*                       FNAFVisionDetector;                                       // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        visioncone;                                               // 0x0A68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASaul_BP_MotionController_C*                 LeftController;                                           // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASaul_BP_MotionController_C*                 RightController;                                          // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVisibilityTracker>                  ActorsInVisionCone;                                       // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FNAFPlayerPawn.FNAFPlayerPawn_C");
		return ptr;
	}


	void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
	void SetupVisionDetector();
	void SpawnHand(EControllerHand HandClass);
	void SpawnBothHands();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__VisionCone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VisionCone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_2_OnVisionEnter__DelegateSignature(class AActor* Actor);
	void BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_3_OnVisionExit__DelegateSignature(class AActor* Actor);
	void ExecuteUbergraph_FNAFPlayerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
