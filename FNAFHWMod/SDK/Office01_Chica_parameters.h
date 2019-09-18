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

// Function Office01_Chica.Office01_Chica_C.UserConstructionScript
struct AOffice01_Chica_C_UserConstructionScript_Params
{
};

// Function Office01_Chica.Office01_Chica_C.ReceiveBeginPlay
struct AOffice01_Chica_C_ReceiveBeginPlay_Params
{
};

// Function Office01_Chica.Office01_Chica_C.MoveAi
struct AOffice01_Chica_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica.Office01_Chica_C.ReceiveTick
struct AOffice01_Chica_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office01_Chica.Office01_Chica_C.Chica_SpecialDoorMove
struct AOffice01_Chica_C_Chica_SpecialDoorMove_Params
{
};

// Function Office01_Chica.Office01_Chica_C.ExecuteUbergraph_Office01_Chica
struct AOffice01_Chica_C_ExecuteUbergraph_Office01_Chica_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
