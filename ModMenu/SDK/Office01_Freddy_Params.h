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
	 * Function Office01_Freddy.Office01_Freddy_C.CheckIfGameWonDuringPowerOut
	 */
	struct AOffice01_Freddy_C_CheckIfGameWonDuringPowerOut_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.CanEnterRoom
	 */
	struct AOffice01_Freddy_C_CanEnterRoom_Params
	{
	public:
		struct FOfficeRoomTransition_Struct                        TransitionInfo;                                          // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class ARoomInfo_Bp_C*                                      RoomBP;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanEnterRoom;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__FinishedFunc
	 */
	struct AOffice01_Freddy_C_Flashing_Eyes__FinishedFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__UpdateFunc
	 */
	struct AOffice01_Freddy_C_Flashing_Eyes__UpdateFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__FinishedFunc
	 */
	struct AOffice01_Freddy_C_EyeFlickerTimeline__FinishedFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__UpdateFunc
	 */
	struct AOffice01_Freddy_C_EyeFlickerTimeline__UpdateFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Timeline_1__FinishedFunc
	 */
	struct AOffice01_Freddy_C_Timeline_1__FinishedFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Timeline_1__UpdateFunc
	 */
	struct AOffice01_Freddy_C_Timeline_1__UpdateFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Timeline_1__StopTrackHere__EventFunc
	 */
	struct AOffice01_Freddy_C_Timeline_1__StopTrackHere__EventFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOn__EventFunc
	 */
	struct AOffice01_Freddy_C_Timeline_1__LightOn__EventFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOff__EventFunc
	 */
	struct AOffice01_Freddy_C_Timeline_1__LightOff__EventFunc_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.ReceiveBeginPlay
	 */
	struct AOffice01_Freddy_C_ReceiveBeginPlay_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.EventDisableAi
	 */
	struct AOffice01_Freddy_C_EventDisableAi_Params
	{
	public:
		bool                                                       Player_Won_Game;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.FreddySongSequence
	 */
	struct AOffice01_Freddy_C_FreddySongSequence_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.FlickerEyes
	 */
	struct AOffice01_Freddy_C_FlickerEyes_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.StopFlickerEyes
	 */
	struct AOffice01_Freddy_C_StopFlickerEyes_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.MoveAi
	 */
	struct AOffice01_Freddy_C_MoveAi_Params
	{
	public:
		class ARoomInfo_Bp_C*                                      Room;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ALocPoint_BP_C*                                      Location;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.ReceiveTick
	 */
	struct AOffice01_Freddy_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.DestroyFreddy
	 */
	struct AOffice01_Freddy_C_DestroyFreddy_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.ReachedKillZone
	 */
	struct AOffice01_Freddy_C_ReachedKillZone_Params
	{
	};

	/**
	 * Function Office01_Freddy.Office01_Freddy_C.ExecuteUbergraph_Office01_Freddy
	 */
	struct AOffice01_Freddy_C_ExecuteUbergraph_Office01_Freddy_Params
	{
	public:
		int                                                        EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
