#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Office_SpringTrap.Office_SpringTrap_C
	 * Size -> 0x0029 (FullSize[0x0381] - InheritedSize[0x0358])
	 */
	class AOffice_SpringTrap_C : public AOfficeAiBase_Bp_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_CharacterMovement;                                 // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class ARoomInfo_Bp_C*                                      NextRoomForced;                                          // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ListOfVentNames;                                         // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       BlockPath;                                               // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetBlockedRooms();
		void CanEnterRoom(struct FOfficeRoomTransition_Struct* TransitionInfo, class ARoomInfo_Bp_C* RoomBP, bool* CanEnterRoom);
		void CheckVentDoor(class ARoomInfo_Bp_C* DestinationRoom);
		void FindAdjacentRoom(class ARoomInfo_Bp_C* RoomToCheck);
		void ReceiveBeginPlay();
		void PickNextRoom();
		void ReceiveTick(float DeltaSeconds);
		void ReachedKillZone();
		void MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location);
		void SpeedupSpringTrap();
		void ResetSpringtrapSpeed();
		void ExecuteUbergraph_Office_SpringTrap(int EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
