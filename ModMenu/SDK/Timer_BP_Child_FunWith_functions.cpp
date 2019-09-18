
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

// Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATimer_BP_Child_FunWith_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.UserConstructionScript");

	ATimer_BP_Child_FunWith_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATimer_BP_Child_FunWith_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ReceiveBeginPlay");

	ATimer_BP_Child_FunWith_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Timer hit 0
// (BlueprintCallable, BlueprintEvent)

void ATimer_BP_Child_FunWith_C::Timer_hit_0()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.Timer hit 0");

	ATimer_BP_Child_FunWith_C_Timer_hit_0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ExecuteUbergraph_Timer_BP_Child_FunWith
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATimer_BP_Child_FunWith_C::ExecuteUbergraph_Timer_BP_Child_FunWith(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Child_FunWith.Timer_BP_Child_FunWith_C.ExecuteUbergraph_Timer_BP_Child_FunWith");

	ATimer_BP_Child_FunWith_C_ExecuteUbergraph_Timer_BP_Child_FunWith_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
