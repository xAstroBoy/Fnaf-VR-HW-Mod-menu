
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

// Function BTTask_MoveTo.BTTask_MoveTo_C.OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AAIController*           AIController                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_MoveTo_C::OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367(TEnumAsByte<EPathFollowingResult> Result, class AAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367");

	UBTTask_MoveTo_C_OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367_Params params;
	params.Result = Result;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_MoveTo.BTTask_MoveTo_C.OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367
// (BlueprintCallable, BlueprintEvent)

void UBTTask_MoveTo_C::OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367");

	UBTTask_MoveTo_C_OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_MoveTo_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveExecute");

	UBTTask_MoveTo_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_MoveTo_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveAbort");

	UBTTask_MoveTo_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_MoveTo.BTTask_MoveTo_C.ExecuteUbergraph_BTTask_MoveTo
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_MoveTo_C::ExecuteUbergraph_BTTask_MoveTo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.ExecuteUbergraph_BTTask_MoveTo");

	UBTTask_MoveTo_C_ExecuteUbergraph_BTTask_MoveTo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
