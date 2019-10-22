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

// BlueprintGeneratedClass MPFreddyPawnBase.MPFreddyPawnBase_C
// 0x0052 (0x0792 - 0x0740)
class AMPFreddyPawnBase_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                                  TrackerImage;                                             // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // 0x0750(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InFlashLight;                                             // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	class AMPAIController_C*                           AICon;                                                    // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInVision;                                               // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpScare;                                                // 0x0791(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MPFreddyPawnBase.MPFreddyPawnBase_C");
		return ptr;
	}


	void IsInPlayerVis(bool* IsInVis);
	void ChangePlayerVisStatus(bool IsInVision);
	void IsInFlashLight(bool* InFlashLight);
	void ChangeFlashStatus(bool IsInFlashLight);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnFlashLightBeginHover(class AFlashlight_Battery_C* Flashlight);
	void OnFlashLightEndHover(class AFlashlight_Battery_C* Flashlight);
	void ReceivePossessed(class AController** NewController);
	void RestartPlayer();
	void OnPlayerVisionExit(class AFNAFPlayerPawn_C* PlayerPawn);
	void OnPlayerVisionEnter(class AFNAFPlayerPawn_C* PlayerPawn);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_MPFreddyPawnBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
