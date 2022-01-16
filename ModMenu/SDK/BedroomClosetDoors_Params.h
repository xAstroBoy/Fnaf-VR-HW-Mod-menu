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
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.ConnectDoor
	 */
	struct ABedroomClosetDoors_C_ConnectDoor_Params
	{
	public:
		class UChildActorComponent*                                Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event_OnDoorAngleChanged;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__FinishedFunc
	 */
	struct ABedroomClosetDoors_C_OpenCloset__FinishedFunc_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__UpdateFunc
	 */
	struct ABedroomClosetDoors_C_OpenCloset__UpdateFunc_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__TriggerDoorSound__EventFunc
	 */
	struct ABedroomClosetDoors_C_OpenCloset__TriggerDoorSound__EventFunc_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__FinishedFunc
	 */
	struct ABedroomClosetDoors_C_Timeline_0__FinishedFunc_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__UpdateFunc
	 */
	struct ABedroomClosetDoors_C_Timeline_0__UpdateFunc_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__TriggerDoorSound__EventFunc
	 */
	struct ABedroomClosetDoors_C_Timeline_0__TriggerDoorSound__EventFunc_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OnNonVRLineTraceInteract
	 */
	struct ABedroomClosetDoors_C_OnNonVRLineTraceInteract_Params
	{
	public:
		class ASaul_MotionControllerPawn_C*                        MotionControllerPawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USceneComponent*                                     HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Hit_Actor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveBeginPlay
	 */
	struct ABedroomClosetDoors_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveTick
	 */
	struct ABedroomClosetDoors_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OnLeftDoorAngleChanged
	 */
	struct ABedroomClosetDoors_C_OnLeftDoorAngleChanged_Params
	{
	public:
		float                                                      DoorAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABedroomClosetDoor_C*                                Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OnRightDoorAngleChanged
	 */
	struct ABedroomClosetDoors_C_OnRightDoorAngleChanged_Params
	{
	public:
		float                                                      DoorAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABedroomClosetDoor_C*                                Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.InitClosetDoor
	 */
	struct ABedroomClosetDoors_C_InitClosetDoor_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.CloseClosetDoors
	 */
	struct ABedroomClosetDoors_C_CloseClosetDoors_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OpenClosetDoors
	 */
	struct ABedroomClosetDoors_C_OpenClosetDoors_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.OpenDoorWide
	 */
	struct ABedroomClosetDoors_C_OpenDoorWide_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.KeepClosetDoorsShut
	 */
	struct ABedroomClosetDoors_C_KeepClosetDoorsShut_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.CloseDoors
	 */
	struct ABedroomClosetDoors_C_CloseDoors_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.ReleaseDoors
	 */
	struct ABedroomClosetDoors_C_ReleaseDoors_Params
	{
	};

	/**
	 * Function BedroomClosetDoors.BedroomClosetDoors_C.ExecuteUbergraph_BedroomClosetDoors
	 */
	struct ABedroomClosetDoors_C_ExecuteUbergraph_BedroomClosetDoors_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
