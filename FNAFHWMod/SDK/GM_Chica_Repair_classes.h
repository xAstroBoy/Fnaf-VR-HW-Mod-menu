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

// BlueprintGeneratedClass GM_Chica_Repair.GM_Chica_Repair_C
// 0x0070 (0x0448 - 0x03D8)
class AGM_Chica_Repair_C : public AGM_RepairGameBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EChica_Repair_State>                   CurrentState;                                             // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                BugsRemovedCount;                                         // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AChicaRepair_RoachManager_New_C*             RoachManager;                                             // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AChica_Plate_Cupcake_C*                      PlateAndCupcake;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AChicaRepairAudioManager_C*                  AudioManager;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDying;                                                  // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	class ALightManager_C*                             Light;                                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberHits;                                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0414(0x0004) MISSED OFFSET
	class ARoach_Zapper_C*                             RefToZapper;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AChicaRepairPizzaEat_C*                      RefToPizzaEat;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AJumpScare_C*                                RefToJumpscare;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                HitsToPass;                                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopTimer;                                                // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	float                                              TimeAllowedToEatPizzaBeforeDeath;                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	class ACupcakeAnimationManager_C*                  RefToCupcakeAnimation;                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GM_Chica_Repair.GM_Chica_Repair_C");
		return ptr;
	}


	void CheckNumberOfHits(bool* Allow);
	void UserConstructionScript();
	void PizzaTossed();
	void ArmFixed();
	void ChicaOpened();
	void BugsRemoved();
	void HandFixed();
	void PlateFixed();
	void CupcakeFixed();
	void KillPlayer(TEnumAsByte<EJumpScareList>* Character);
	void ReceiveBeginPlay();
	void PizzaAte();
	void ExecuteUbergraph_GM_Chica_Repair(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
