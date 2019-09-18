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

// Function LocPoint_BP.LocPoint_BP_C.IsAvailable
struct ALocPoint_BP_C_IsAvailable_Params
{
	bool                                               IsAvailable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LocPoint_BP.LocPoint_BP_C.GetOwnerOfficeAi
struct ALocPoint_BP_C_GetOwnerOfficeAi_Params
{
	class AOfficeAiBase_Bp_C*                          CharacterAtLocation;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LocPoint_BP.LocPoint_BP_C.SetOwnerOfficeAi
struct ALocPoint_BP_C_SetOwnerOfficeAi_Params
{
	class AOfficeAiBase_Bp_C*                          OwnerAi;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnerSet;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LocPoint_BP.LocPoint_BP_C.UserConstructionScript
struct ALocPoint_BP_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
