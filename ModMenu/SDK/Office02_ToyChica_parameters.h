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

// Function Office02_ToyChica.Office02_ToyChica_C.UserConstructionScript
struct AOffice02_ToyChica_C_UserConstructionScript_Params
{
};

// Function Office02_ToyChica.Office02_ToyChica_C.ReceiveBeginPlay
struct AOffice02_ToyChica_C_ReceiveBeginPlay_Params
{
};

// Function Office02_ToyChica.Office02_ToyChica_C.MoveAi
struct AOffice02_ToyChica_C_MoveAi_Params
{
	class ARoomInfo_Bp_C**                             Room;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ALocPoint_BP_C**                             Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Office02_ToyChica.Office02_ToyChica_C.ExecuteUbergraph_Office02_ToyChica
struct AOffice02_ToyChica_C_ExecuteUbergraph_Office02_ToyChica_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
