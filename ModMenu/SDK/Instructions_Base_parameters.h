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

// Function Instructions_Base.Instructions_Base_C.TriggerPullWidget
struct UInstructions_Base_C_TriggerPullWidget_Params
{
};

// Function Instructions_Base.Instructions_Base_C.PreConstruct
struct UInstructions_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Instructions_Base.Instructions_Base_C.ExecuteUbergraph_Instructions_Base
struct UInstructions_Base_C_ExecuteUbergraph_Instructions_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
