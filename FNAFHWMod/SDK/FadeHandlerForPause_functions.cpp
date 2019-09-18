
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

// Function FadeHandlerForPause.FadeHandlerForPause_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFadeHandlerForPause_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.UserConstructionScript");

	AFadeHandlerForPause_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeHandlerForPause.FadeHandlerForPause_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFadeHandlerForPause_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.ReceiveTick");

	AFadeHandlerForPause_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeHandlerForPause.FadeHandlerForPause_C.ExecuteUbergraph_FadeHandlerForPause
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFadeHandlerForPause_C::ExecuteUbergraph_FadeHandlerForPause(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.ExecuteUbergraph_FadeHandlerForPause");

	AFadeHandlerForPause_C_ExecuteUbergraph_FadeHandlerForPause_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FadeHandlerForPause.FadeHandlerForPause_C.OnTimerUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AFadeHandlerForPause_C::OnTimerUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FadeHandlerForPause.FadeHandlerForPause_C.OnTimerUp__DelegateSignature");

	AFadeHandlerForPause_C_OnTimerUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
