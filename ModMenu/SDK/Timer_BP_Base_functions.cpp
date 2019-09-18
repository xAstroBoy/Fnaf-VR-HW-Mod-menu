
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

// Function Timer_BP_Base.Timer_BP_Base_C.Time Ref
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Timer_hit_0                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATimer_BP_Base_C::Time_Ref(bool* Timer_hit_0)
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Time Ref");

	ATimer_BP_Base_C_Time_Ref_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Timer_hit_0 != nullptr)
		*Timer_hit_0 = params.Timer_hit_0;
}


// Function Timer_BP_Base.Timer_BP_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATimer_BP_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.UserConstructionScript");

	ATimer_BP_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Base.Timer_BP_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATimer_BP_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.ReceiveTick");

	ATimer_BP_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Base.Timer_BP_Base_C.Pause Timer
// (BlueprintCallable, BlueprintEvent)

void ATimer_BP_Base_C::Pause_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Pause Timer");

	ATimer_BP_Base_C_Pause_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Base.Timer_BP_Base_C.Set Timer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Set_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATimer_BP_Base_C::Set_Timer(int Set_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Set Timer");

	ATimer_BP_Base_C_Set_Timer_Params params;
	params.Set_Time = Set_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Base.Timer_BP_Base_C.Start Timer
// (BlueprintCallable, BlueprintEvent)

void ATimer_BP_Base_C::Start_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Start Timer");

	ATimer_BP_Base_C_Start_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Base.Timer_BP_Base_C.ExecuteUbergraph_Timer_BP_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATimer_BP_Base_C::ExecuteUbergraph_Timer_BP_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.ExecuteUbergraph_Timer_BP_Base");

	ATimer_BP_Base_C_ExecuteUbergraph_Timer_BP_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Timer_BP_Base.Timer_BP_Base_C.Timer Ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATimer_BP_Base_C::Timer_Ended__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Timer_BP_Base.Timer_BP_Base_C.Timer Ended__DelegateSignature");

	ATimer_BP_Base_C_Timer_Ended__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
