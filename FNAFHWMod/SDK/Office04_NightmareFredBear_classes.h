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

// BlueprintGeneratedClass Office04_NightmareFredBear.Office04_NightmareFredBear_C
// 0x0080 (0x04C0 - 0x0440)
class AOffice04_NightmareFredBear_C : public AOfficeAiBase_Bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_CharacterBreathing;                                 // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_EyeEmissiveIntensity_EEC2CAA94714332BB28CD383ED253502;// 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_EEC2CAA94714332BB28CD383ED253502;   // 0x0454(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ARoomInfo_Bp_C*                              NextRoomForced;                                           // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               InstantJump;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	int                                                Counter;                                                  // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ALocPoint_BP_C*                              Bedroom_Loc;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              BedRoom_Room;                                             // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ALocPoint_BP_C*                              Closet_Loc;                                               // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ARoomInfo_Bp_C*                              Closet_Room;                                              // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              AdjustedMinValue;                                         // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdjustedMaxValue;                                         // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MechanichasChanged;                                       // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              FlashedWaitTimer;                                         // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomCountValue;                                         // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ScriptedDeathActive;                                      // 0x04A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class AFlashlight_Battery_C*                       FlashLightRef;                                            // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              GriefWaitTimer;                                           // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04B4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    EyeEmissive;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office04_NightmareFredBear.Office04_NightmareFredBear_C");
		return ptr;
	}


	void FredBear_ResetWaitTimer();
	void Fredbear_MoveReset();
	void Fredbear_Breathing();
	void FredbearInteractionTimer();
	void FredBearMechanicReset();
	void FredBearMechanicChange();
	void CountBeforeSwitchUp();
	void GetRoomLocationName(struct FName* RoomType, class ARoomInfo_Bp_C** RoomInfo_Bp, struct FName* WhatIsCurrentRoom);
	void FindAdjacentRoom(class ARoomInfo_Bp_C* Room_to_Check);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void PickNextRoom();
	void ResetLightJump();
	void TurnOnEyeEmissive();
	void ResetClosetDoOnce();
	void ExecuteUbergraph_Office04_NightmareFredBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
