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

// Function ConfirmationWidget.ConfirmationWidget_C.Construct
struct UConfirmationWidget_C_Construct_Params
{
};

// Function ConfirmationWidget.ConfirmationWidget_C.Tick
struct UConfirmationWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationWidget.ConfirmationWidget_C.PizzaConfimation
struct UConfirmationWidget_C_PizzaConfimation_Params
{
};

// Function ConfirmationWidget.ConfirmationWidget_C.StopPizza
struct UConfirmationWidget_C_StopPizza_Params
{
};

// Function ConfirmationWidget.ConfirmationWidget_C.StartPizza
struct UConfirmationWidget_C_StartPizza_Params
{
};

// Function ConfirmationWidget.ConfirmationWidget_C.ExecuteUbergraph_ConfirmationWidget
struct UConfirmationWidget_C_ExecuteUbergraph_ConfirmationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
