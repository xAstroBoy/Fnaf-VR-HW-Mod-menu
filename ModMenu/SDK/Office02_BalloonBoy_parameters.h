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

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.CheckForMaskType
struct AOffice02_BalloonBoy_C_CheckForMaskType_Params
{
};

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.UserConstructionScript
struct AOffice02_BalloonBoy_C_UserConstructionScript_Params
{
};

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReceiveTick
struct AOffice02_BalloonBoy_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.ReachedKillZone
struct AOffice02_BalloonBoy_C_ReachedKillZone_Params
{
};

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.BalloonBoysEndGame
struct AOffice02_BalloonBoy_C_BalloonBoysEndGame_Params
{
};

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.MoveAi
struct AOffice02_BalloonBoy_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_BalloonBoy.Office02_BalloonBoy_C.ExecuteUbergraph_Office02_BalloonBoy
struct AOffice02_BalloonBoy_C_ExecuteUbergraph_Office02_BalloonBoy_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
