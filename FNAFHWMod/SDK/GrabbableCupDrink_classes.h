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

// BlueprintGeneratedClass GrabbableCupDrink.GrabbableCupDrink_C
// 0x0010 (0x0390 - 0x0380)
class AGrabbableCupDrink_C : public AOffice0Grabbable_Master_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GrabbableCupDrink.GrabbableCupDrink_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnVRGrabbed(class ASWGVRCharacter** Grabber, EVRHandType* Hand);
	void OnVRReleased(class ASWGVRCharacter** Grabber, EVRHandType* Hand, struct FVector* ReleaseVelocity);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_GrabbableCupDrink(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
