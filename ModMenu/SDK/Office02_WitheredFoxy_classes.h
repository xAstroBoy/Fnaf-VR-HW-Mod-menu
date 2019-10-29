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

// BlueprintGeneratedClass Office02_WitheredFoxy.Office02_WitheredFoxy_C
// 0x0030 (0x0470 - 0x0440)
class AOffice02_WitheredFoxy_C : public AOfficeAiBase_Bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_CharacterMovement;                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ForcedToMove;                                             // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                FlashCount;                                               // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeingFlashed;                                             // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	float                                              FlashedTimer;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoxyIsRunning;                                            // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	class AFreddieMask_BP_C*                           FreddieMask_Ref;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office02_WitheredFoxy.Office02_WitheredFoxy_C");
		return ptr;
	}


	void NotFlashed();
	void ResetFoxyValues();
	void IncreaseTimer();
	void HasBeenFlashed();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReachedKillZone();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void UnleashFoxy();
	void ReceiveBeginPlay();
	void WitheredFoxyForcedToMove();
	void ExecuteUbergraph_Office02_WitheredFoxy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
