#pragma once

#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Office01_Freddy.Office01_Freddy_C.CheckIfGameWonDuringPowerOut
struct AOffice01_Freddy_C_CheckIfGameWonDuringPowerOut_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.CanEnterRoom
struct AOffice01_Freddy_C_CanEnterRoom_Params
{
	struct FOfficeRoomTransition_Struct                TransitionInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class ARoomInfo_Bp_C**                             RoomBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanEnterRoom;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Freddy.Office01_Freddy_C.UserConstructionScript
struct AOffice01_Freddy_C_UserConstructionScript_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__FinishedFunc
struct AOffice01_Freddy_C_Flashing_Eyes__FinishedFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Flashing Eyes__UpdateFunc
struct AOffice01_Freddy_C_Flashing_Eyes__UpdateFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__FinishedFunc
struct AOffice01_Freddy_C_EyeFlickerTimeline__FinishedFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.EyeFlickerTimeline__UpdateFunc
struct AOffice01_Freddy_C_EyeFlickerTimeline__UpdateFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__FinishedFunc
struct AOffice01_Freddy_C_Timeline_1__FinishedFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__UpdateFunc
struct AOffice01_Freddy_C_Timeline_1__UpdateFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__StopTrackHere__EventFunc
struct AOffice01_Freddy_C_Timeline_1__StopTrackHere__EventFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOn__EventFunc
struct AOffice01_Freddy_C_Timeline_1__LightOn__EventFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.Timeline_1__LightOff__EventFunc
struct AOffice01_Freddy_C_Timeline_1__LightOff__EventFunc_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.ReceiveBeginPlay
struct AOffice01_Freddy_C_ReceiveBeginPlay_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.EventDisableAi
struct AOffice01_Freddy_C_EventDisableAi_Params
{
	bool*                                              Player_Won_Game;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Freddy.Office01_Freddy_C.FreddySongSequence
struct AOffice01_Freddy_C_FreddySongSequence_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.FlickerEyes
struct AOffice01_Freddy_C_FlickerEyes_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.StopFlickerEyes
struct AOffice01_Freddy_C_StopFlickerEyes_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.MoveAi
struct AOffice01_Freddy_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Freddy.Office01_Freddy_C.ReceiveTick
struct AOffice01_Freddy_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Freddy.Office01_Freddy_C.DestroyFreddy
struct AOffice01_Freddy_C_DestroyFreddy_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.ReachedKillZone
struct AOffice01_Freddy_C_ReachedKillZone_Params
{
};

// Function Office01_Freddy.Office01_Freddy_C.ExecuteUbergraph_Office01_Freddy
struct AOffice01_Freddy_C_ExecuteUbergraph_Office01_Freddy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
