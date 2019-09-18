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

// BlueprintGeneratedClass Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C
// 0x00CD (0x080D - 0x0740)
class AFun_With_PlushTrap_BP_C : public AAICharacterBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Hat_Collider;                                             // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Head_Collider;                                            // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BodyCollision;                                            // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             NMBB_Cue;                                                 // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ATimer_BP_Child_FunWith_C*                   TimerBP;                                                  // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TMap<class UClass*, class UPlushTrapState_C*>      StateMap;                                                 // 0x0780(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class UPlushTrapState_C*                           CurrentPlushTrapState;                                    // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlushTrapStateChanged;                                  // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FirstEndOverlap;                                          // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	class AJumpScare_C*                                Jumpscare_Ref;                                            // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               GameWon;                                                  // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	class AWin_Text_C*                                 WIn_Text_Ref;                                             // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TimerRandom;                                              // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GameModePlushtrap;                                        // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C");
		return ptr;
	}


	void FunWithNMBB_ABP(class UFunWithNMBB_ABP_C** FunWithNMBB_ABP);
	void FunWithPlushtrapABP(class UFunWithPlushtrap_ABP_C** FunWithPlushtrapABP);
	void Fun_with_PlushTrap_Anim_BP(class UFun_With_PlushTrap_Anim_BP_C** Fun_With_Plush_Trap_Anim_BP_Ref);
	void GetPlushTrapState(class UPlushTrapState_C** NewParam);
	void SetPlushTrapState(class UClass* NewParam);
	void UserConstructionScript();
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void PlayerKilled();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();
	void SFX_Timer();
	void ExecuteUbergraph_Fun_With_PlushTrap_BP(int EntryPoint);
	void OnPlushTrapStateChanged__DelegateSignature(class UPlushTrapState_C* PlushTrapState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
