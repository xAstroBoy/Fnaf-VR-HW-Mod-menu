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

// BlueprintGeneratedClass ChicaRepairAudioManager.ChicaRepairAudioManager_C
// 0x001C (0x0344 - 0x0328)
class AChicaRepairAudioManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ActivateFindCupcake;                                      // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActivateEatPizza;                                         // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	int                                                Say_Take_it_first;                                        // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Set_Volume;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChicaRepairAudioManager.ChicaRepairAudioManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void TriggerInstructions(class USoundBase* Sound);
	void ReceiveBeginPlay();
	void FindCupcake();
	void ReceiveTick(float* DeltaSeconds);
	void Eat_pizza();
	void Stop_Audio();
	void ExecuteUbergraph_ChicaRepairAudioManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
