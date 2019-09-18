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

// BlueprintGeneratedClass Office_SpringTrap.Office_SpringTrap_C
// 0x0029 (0x0469 - 0x0440)
class AOffice_SpringTrap_C : public AOfficeAiBase_Bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_CharacterMovement;                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ARoomInfo_Bp_C*                              NextRoomForced;                                           // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ListOfVentNames;                                          // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BlockPath;                                                // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Office_SpringTrap.Office_SpringTrap_C");
		return ptr;
	}


	void GetBlockedRooms();
	void CanEnterRoom(class ARoomInfo_Bp_C** RoomBP, struct FOfficeRoomTransition_Struct* TransitionInfo, bool* CanEnterRoom);
	void CheckVentDoor(class ARoomInfo_Bp_C* DestinationRoom);
	void FindAdjacentRoom(class ARoomInfo_Bp_C* RoomToCheck);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PickNextRoom();
	void ReceiveTick(float* DeltaSeconds);
	void ReachedKillZone();
	void MoveAi(class ARoomInfo_Bp_C** Room, class ALocPoint_BP_C** Location);
	void SpeedupSpringTrap();
	void ResetSpringtrapSpeed();
	void ExecuteUbergraph_Office_SpringTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
