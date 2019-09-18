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

// BlueprintGeneratedClass BigToy_Office04_BP.BigToy_Office04_BP_C
// 0x00E9 (0x0829 - 0x0740)
class ABigToy_Office04_BP_C : public AAICharacterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Breathing;                                                // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               LightBox_Left;                                            // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Character_Deep_steps;                                     // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               LightBox_Right;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<class UClass*, class UBigToy_O4_State_C*>     StateMap;                                                 // 0x0768(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UBigToy_O4_State_C*                          CurrentBigToyState;                                       // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBigToyStateChanged;                                     // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FirstEndOverlap;                                          // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class AJumpScare_C*                                Jumpscare_Ref;                                            // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               GameWon;                                                  // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class AWin_Text_C*                                 WIn_Text_Ref;                                             // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsHit;                                                    // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class ABedroom_Door_BP_C*                          RightDoorButton;                                          // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnRightDoorClosed;                                        // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABedroom_Door_BP_C*                          LeftDoorButton;                                           // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class UBoxComponent*>                       LightBoxArray;                                            // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               StartTrigger;                                             // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BigToy_Office04_BP.BigToy_Office04_BP_C");
		return ptr;
	}


	void SetLeftDoorState();
	void EnableLightBoxCollision(bool EnableCollision, class UBoxComponent* LightBox);
	void SetRightDoorState();
	void Big_Toy_Anim_BP(class UBigToy_Office04_AnimBP_C** Fun_With_Plush_Trap_Anim_BP_Ref);
	void GetBigToyState(class UBigToy_O4_State_C** BigToy_State);
	void SetBigToyState(class UClass* Big_Toy_Ref);
	void UserConstructionScript();
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PlayerKilled();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__LightBox_Left_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PlayerWonOffice04();
	void StartFredBear();
	void SFX();
	void ExecuteUbergraph_BigToy_Office04_BP(int EntryPoint);
	void OnRightDoorClosed__DelegateSignature(class AButton_Hold_C* ButtonHoldCheck);
	void OnBigToyStateChanged__DelegateSignature(class UBigToy_O4_State_C* BigBoyState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
