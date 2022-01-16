/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office03_PhantomFreddy_AnimBp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UOffice03_PhantomFreddy_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.AnimGraph");
		
		UOffice03_PhantomFreddy_AnimBp_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_43F7B9184C730652DD04B3BBEFFC4C7F
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOffice03_PhantomFreddy_AnimBp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_43F7B9184C730652DD04B3BBEFFC4C7F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_43F7B9184C730652DD04B3BBEFFC4C7F");
		
		UOffice03_PhantomFreddy_AnimBp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_43F7B9184C730652DD04B3BBEFFC4C7F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_79CC0C8A42D9B7788472CB80D6CEC6FA
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UOffice03_PhantomFreddy_AnimBp_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_79CC0C8A42D9B7788472CB80D6CEC6FA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_79CC0C8A42D9B7788472CB80D6CEC6FA");
		
		UOffice03_PhantomFreddy_AnimBp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_AnimGraphNode_TransitionResult_79CC0C8A42D9B7788472CB80D6CEC6FA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UOffice03_PhantomFreddy_AnimBp_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.BlueprintBeginPlay");
		
		UOffice03_PhantomFreddy_AnimBp_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.AnimNotify_StopFreddy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UOffice03_PhantomFreddy_AnimBp_C::AnimNotify_StopFreddy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.AnimNotify_StopFreddy");
		
		UOffice03_PhantomFreddy_AnimBp_C_AnimNotify_StopFreddy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.ExecuteUbergraph_Office03_PhantomFreddy_AnimBp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOffice03_PhantomFreddy_AnimBp_C::ExecuteUbergraph_Office03_PhantomFreddy_AnimBp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C.ExecuteUbergraph_Office03_PhantomFreddy_AnimBp");
		
		UOffice03_PhantomFreddy_AnimBp_C_ExecuteUbergraph_Office03_PhantomFreddy_AnimBp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOffice03_PhantomFreddy_AnimBp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffice03_PhantomFreddy_AnimBp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Office03_PhantomFreddy_AnimBp.Office03_PhantomFreddy_AnimBp_C");
		return ptr;
	}

}


