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

// Function ActionManager.ActionManager_C.SetCurrentlyAvailableActions
struct AActionManager_C_SetCurrentlyAvailableActions_Params
{
	TArray<int>                                        CurrentlyAvailableActions;                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ActionManager.ActionManager_C.CompleteAction
struct AActionManager_C_CompleteAction_Params
{
	class UActions_C*                                  ActionComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Player_dead;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionManager.ActionManager_C.UserConstructionScript
struct AActionManager_C_UserConstructionScript_Params
{
};

// Function ActionManager.ActionManager_C.ReceiveBeginPlay
struct AActionManager_C_ReceiveBeginPlay_Params
{
};

// Function ActionManager.ActionManager_C.ExecuteUbergraph_ActionManager
struct AActionManager_C_ExecuteUbergraph_ActionManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActionManager.ActionManager_C.OnKill__DelegateSignature
struct AActionManager_C_OnKill__DelegateSignature_Params
{
};

// Function ActionManager.ActionManager_C.OnActionCompleted__DelegateSignature
struct AActionManager_C_OnActionCompleted__DelegateSignature_Params
{
	int                                                ActionID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
