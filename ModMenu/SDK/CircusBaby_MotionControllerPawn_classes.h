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

// BlueprintGeneratedClass CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C
// 0x001A (0x0E83 - 0x0E69)
class ACircusBaby_MotionControllerPawn_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E69(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            OfficeVictoryWidget_1;                                    // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               LeftClear;                                                // 0x0E80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightClear;                                               // 0x0E81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ActivareCounter;                                          // 0x0E82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CircusBaby_MotionControllerPawn.CircusBaby_MotionControllerPawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_CircusBaby_MotionControllerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
