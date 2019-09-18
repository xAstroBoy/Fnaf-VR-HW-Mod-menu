
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ActionManager.ActionManager_C.SetCurrentlyAvailableActions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    CurrentlyAvailableActions      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AActionManager_C::SetCurrentlyAvailableActions(TArray<int>* CurrentlyAvailableActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.SetCurrentlyAvailableActions");

	AActionManager_C_SetCurrentlyAvailableActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentlyAvailableActions != nullptr)
		*CurrentlyAvailableActions = params.CurrentlyAvailableActions;
}


// Function ActionManager.ActionManager_C.CompleteAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActions_C*              ActionComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Player_dead                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActionManager_C::CompleteAction(class UActions_C* ActionComponent, bool Player_dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.CompleteAction");

	AActionManager_C_CompleteAction_Params params;
	params.ActionComponent = ActionComponent;
	params.Player_dead = Player_dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionManager.ActionManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActionManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.UserConstructionScript");

	AActionManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionManager.ActionManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AActionManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.ReceiveBeginPlay");

	AActionManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionManager.ActionManager_C.ExecuteUbergraph_ActionManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActionManager_C::ExecuteUbergraph_ActionManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.ExecuteUbergraph_ActionManager");

	AActionManager_C_ExecuteUbergraph_ActionManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionManager.ActionManager_C.OnKill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AActionManager_C::OnKill__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.OnKill__DelegateSignature");

	AActionManager_C_OnKill__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionManager.ActionManager_C.OnActionCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActionID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AActionManager_C::OnActionCompleted__DelegateSignature(int ActionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionManager.ActionManager_C.OnActionCompleted__DelegateSignature");

	AActionManager_C_OnActionCompleted__DelegateSignature_Params params;
	params.ActionID = ActionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
