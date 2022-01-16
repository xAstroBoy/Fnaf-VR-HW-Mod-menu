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
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ConnectDoor
	 */
	struct ANightmareBedroomClosetDoors_C_ConnectDoor_Params
	{
	public:
		class UChildActorComponent*                                Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event_OnDoorAngleChanged;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveBeginPlay
	 */
	struct ANightmareBedroomClosetDoors_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveTick
	 */
	struct ANightmareBedroomClosetDoors_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnLeftDoorAngleChanged
	 */
	struct ANightmareBedroomClosetDoors_C_OnLeftDoorAngleChanged_Params
	{
	public:
		float                                                      DoorAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABedroomClosetDoor_C*                                Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnRightDoorAngleChanged
	 */
	struct ANightmareBedroomClosetDoors_C_OnRightDoorAngleChanged_Params
	{
	public:
		float                                                      DoorAngle;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABedroomClosetDoor_C*                                Door;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.Closed
	 */
	struct ANightmareBedroomClosetDoors_C_Closed_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnComponentEndOverlap_Event_1
	 */
	struct ANightmareBedroomClosetDoors_C_OnComponentEndOverlap_Event_1_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int                                                        OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.CloseDoors
	 */
	struct ANightmareBedroomClosetDoors_C_CloseDoors_Params
	{
	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReleaseDoors
	 */
	struct ANightmareBedroomClosetDoors_C_ReleaseDoors_Params
	{
	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ExecuteUbergraph_NightmareBedroomClosetDoors
	 */
	struct ANightmareBedroomClosetDoors_C_ExecuteUbergraph_NightmareBedroomClosetDoors_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsOpen__DelegateSignature
	 */
	struct ANightmareBedroomClosetDoors_C_SendDoorsOpen__DelegateSignature_Params
	{
	};

	/**
	 * Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsClosed__DelegateSignature
	 */
	struct ANightmareBedroomClosetDoors_C_SendDoorsClosed__DelegateSignature_Params
	{
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
