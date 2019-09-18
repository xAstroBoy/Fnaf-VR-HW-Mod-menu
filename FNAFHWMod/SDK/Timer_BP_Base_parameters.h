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

// Function Timer_BP_Base.Timer_BP_Base_C.Time Ref
struct ATimer_BP_Base_C_Time_Ref_Params
{
	bool                                               Timer_hit_0;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Timer_BP_Base.Timer_BP_Base_C.UserConstructionScript
struct ATimer_BP_Base_C_UserConstructionScript_Params
{
};

// Function Timer_BP_Base.Timer_BP_Base_C.ReceiveTick
struct ATimer_BP_Base_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Timer_BP_Base.Timer_BP_Base_C.Pause Timer
struct ATimer_BP_Base_C_Pause_Timer_Params
{
};

// Function Timer_BP_Base.Timer_BP_Base_C.Set Timer
struct ATimer_BP_Base_C_Set_Timer_Params
{
	int                                                Set_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Timer_BP_Base.Timer_BP_Base_C.Start Timer
struct ATimer_BP_Base_C_Start_Timer_Params
{
};

// Function Timer_BP_Base.Timer_BP_Base_C.ExecuteUbergraph_Timer_BP_Base
struct ATimer_BP_Base_C_ExecuteUbergraph_Timer_BP_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Timer_BP_Base.Timer_BP_Base_C.Timer Ended__DelegateSignature
struct ATimer_BP_Base_C_Timer_Ended__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
