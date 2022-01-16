/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BTTask_MoveTo_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BTTask_MoveTo.BTTask_MoveTo_C.OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		AIModule_EPathFollowingResult                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AAIController*                               AIController                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_MoveTo_C::OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367(AIModule_EPathFollowingResult Result, class AAIController* AIController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367");
		
		UBTTask_MoveTo_C_OnMoveFinished_5A8660014CA7A2B5BE30E496C78E1367_Params params {};
		params.Result = Result;
		params.AIController = AIController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BTTask_MoveTo.BTTask_MoveTo_C.OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBTTask_MoveTo_C::OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367");
		
		UBTTask_MoveTo_C_OnRequestFailed_5A8660014CA7A2B5BE30E496C78E1367_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_MoveTo_C::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveExecute");
		
		UBTTask_MoveTo_C_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_MoveTo_C::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.ReceiveAbort");
		
		UBTTask_MoveTo_C_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function BTTask_MoveTo.BTTask_MoveTo_C.ExecuteUbergraph_BTTask_MoveTo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_MoveTo_C::ExecuteUbergraph_BTTask_MoveTo(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_MoveTo.BTTask_MoveTo_C.ExecuteUbergraph_BTTask_MoveTo");
		
		UBTTask_MoveTo_C_ExecuteUbergraph_BTTask_MoveTo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBTTask_MoveTo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveTo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_MoveTo.BTTask_MoveTo_C");
		return ptr;
	}

}


