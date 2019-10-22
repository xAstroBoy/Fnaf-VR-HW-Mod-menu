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

// Function Drawer.Drawer_C.Initalize
struct ADrawer_C_Initalize_Params
{
};

// Function Drawer.Drawer_C.UserConstructionScript
struct ADrawer_C_UserConstructionScript_Params
{
};

// Function Drawer.Drawer_C.ReceiveBeginPlay
struct ADrawer_C_ReceiveBeginPlay_Params
{
};

// Function Drawer.Drawer_C.ReceiveTick
struct ADrawer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drawer.Drawer_C.ResetHandlePosition
struct ADrawer_C_ResetHandlePosition_Params
{
};

// Function Drawer.Drawer_C.OnHandleHoverChanged
struct ADrawer_C_OnHandleHoverChanged_Params
{
	bool                                               Enter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drawer.Drawer_C.ExecuteUbergraph_Drawer
struct ADrawer_C_ExecuteUbergraph_Drawer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
