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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.GetBlockedRooms
	 */
	struct AOffice_SpringTrap_C_GetBlockedRooms_Params
	{
	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.CanEnterRoom
	 */
	struct AOffice_SpringTrap_C_CanEnterRoom_Params
	{
	public:
		struct FOfficeRoomTransition_Struct                        TransitionInfo;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      RoomBP;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEnterRoom;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.CheckVentDoor
	 */
	struct AOffice_SpringTrap_C_CheckVentDoor_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      DestinationRoom;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.FindAdjacentRoom
	 */
	struct AOffice_SpringTrap_C_FindAdjacentRoom_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      RoomToCheck;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.ReceiveBeginPlay
	 */
	struct AOffice_SpringTrap_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.PickNextRoom
	 */
	struct AOffice_SpringTrap_C_PickNextRoom_Params
	{
	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.ReceiveTick
	 */
	struct AOffice_SpringTrap_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.ReachedKillZone
	 */
	struct AOffice_SpringTrap_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.MoveAi
	 */
	struct AOffice_SpringTrap_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.SpeedupSpringTrap
	 */
	struct AOffice_SpringTrap_C_SpeedupSpringTrap_Params
	{
	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.ResetSpringtrapSpeed
	 */
	struct AOffice_SpringTrap_C_ResetSpringtrapSpeed_Params
	{
	};

	/**
	 * Function Office_SpringTrap.Office_SpringTrap_C.ExecuteUbergraph_Office_SpringTrap
	 */
	struct AOffice_SpringTrap_C_ExecuteUbergraph_Office_SpringTrap_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
