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
	 * BlueprintGeneratedClass MPFreddyPawnBase.MPFreddyPawnBase_C
	 * Size -> 0x0052 (FullSize[0x06B2] - InheritedSize[0x0660])
	 */
	class AMPFreddyPawnBase_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTexture2D*                                          TrackerImage;                                            // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          SpawnTransform;                                          // 0x0670(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InFlashLight;                                            // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29KM[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMPAIController_C*                                   AICon;                                                   // 0x06A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsInVision;                                              // 0x06B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       JumpScare;                                               // 0x06B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void IsInPlayerVis(bool* IsInVis);
		void ChangePlayerVisStatus(bool IsInVision);
		void IsInFlashlight(bool* InFlashLight);
		void ChangeFlashStatus(bool IsInFlashlight);
		void ReceiveBeginPlay();
		void OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight);
		void OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight);
		void ReceivePossessed(class AController* NewController);
		void RestartPlayer();
		void OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn);
		void OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn);
		void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_MPFreddyPawnBase(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
