/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Chica_Repair_MotionControllerPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.IsValidActorForVisionTest
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AChica_Repair_MotionControllerPawn_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.IsValidActorForVisionTest");
		
		AChica_Repair_MotionControllerPawn_C_IsValidActorForVisionTest_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChica_Repair_MotionControllerPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ReceiveBeginPlay");
		
		AChica_Repair_MotionControllerPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChica_Repair_MotionControllerPawn_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature");
		
		AChica_Repair_MotionControllerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_0_OnVisionEnter__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChica_Repair_MotionControllerPawn_C::BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature");
		
		AChica_Repair_MotionControllerPawn_C_BndEvt__FNAFVisionDetector_K2Node_ComponentBoundEvent_1_OnVisionExit__DelegateSignature_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ExecuteUbergraph_Chica_Repair_MotionControllerPawn
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChica_Repair_MotionControllerPawn_C::ExecuteUbergraph_Chica_Repair_MotionControllerPawn(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C.ExecuteUbergraph_Chica_Repair_MotionControllerPawn");
		
		AChica_Repair_MotionControllerPawn_C_ExecuteUbergraph_Chica_Repair_MotionControllerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChica_Repair_MotionControllerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChica_Repair_MotionControllerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Chica_Repair_MotionControllerPawn.Chica_Repair_MotionControllerPawn_C");
		return ptr;
	}

}


