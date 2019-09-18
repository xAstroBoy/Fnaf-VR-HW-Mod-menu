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

// BlueprintGeneratedClass Office02_BalloonBoy.Office02_BalloonBoy_C
// 0x002B (0x046B - 0x0440)
class AOffice02_BalloonBoy_C : public AOfficeAiBase_Bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_CharacterMovement;                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BBHasWon;                                                 // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0451(0x0007) MISSED OFFSET
	struct FName                                       Name_LeftVent;                                            // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Name_StartLocation;                                       // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckForAttachedMask;                                     // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CorrectMaskAttacted;                                      // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAssignedMaskType_Enum>                WhatIsAssignedMaskType;                                   // 0x046A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office02_BalloonBoy.Office02_BalloonBoy_C");
		return ptr;
	}


	void CheckForMaskType();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReachedKillZone();
	void BalloonBoysEndGame();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void ExecuteUbergraph_Office02_BalloonBoy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
