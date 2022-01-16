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
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.CurrentTeleportSpot
	 */
	struct ATeleport_Manager_BP_C_CurrentTeleportSpot_Params
	{
	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableAttachedComponents
	 */
	struct ATeleport_Manager_BP_C_EnableAttachedComponents_Params
	{
	public:
		class ATeleportSpot_BP_C*                                  TeleportSpots;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.DisableAll
	 */
	struct ATeleport_Manager_BP_C_DisableAll_Params
	{
	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.EnableTeleport
	 */
	struct ATeleport_Manager_BP_C_EnableTeleport_Params
	{
	public:
		int                                                        TeleportID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.UpdateTeleportSpots
	 */
	struct ATeleport_Manager_BP_C_UpdateTeleportSpots_Params
	{
	public:
		class ATeleportSpot_BP_C*                                  TeleportSpotChange;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.Check Location
	 */
	struct ATeleport_Manager_BP_C_Check_Location_Params
	{
	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveBeginPlay
	 */
	struct ATeleport_Manager_BP_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.ReceiveTick
	 */
	struct ATeleport_Manager_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.ExecuteUbergraph_Teleport_Manager_BP
	 */
	struct ATeleport_Manager_BP_C_ExecuteUbergraph_Teleport_Manager_BP_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Teleport_Manager_BP.Teleport_Manager_BP_C.Player Is Teleporting__DelegateSignature
	 */
	struct ATeleport_Manager_BP_C_Player_Is_Teleporting__DelegateSignature_Params
	{
	public:
		int                                                        Player_Location;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
