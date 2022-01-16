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
	 * BlueprintGeneratedClass MonitorButton_MaintanceButton.MonitorButton_MaintanceButton_C
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class AMonitorButton_MaintanceButton_C : public AMonitorButton_Interactable_BP_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void BndEvt__BoxCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ResetBtnPosition();
		void AdjustBtnPosition();
		void ReceiveTick(float DeltaSeconds);
		void BndEvt__BoxCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
		void ReceiveBeginPlay();
		void NonVRReleaseChild();
		void OnNonVRLineTraceInteract(class ASaul_MotionControllerPawn_C* MotionControllerPawn, class USceneComponent* HitComponent, class AActor* Hit_Actor);
		void NonVR_GamepadInteraction();
		void NONVR_MaintainceButton_Reset();
		void ExecuteUbergraph_MonitorButton_MaintanceButton(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
