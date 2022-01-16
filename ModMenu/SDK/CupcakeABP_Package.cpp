/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "CupcakeABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CupcakeABP.CupcakeABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UCupcakeABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CupcakeABP.CupcakeABP_C.AnimGraph");
		
		UCupcakeABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CupcakeABP.CupcakeABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCupcakeABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CupcakeABP.CupcakeABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34");
		
		UCupcakeABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_SequencePlayer_D147B4104C79901EDCF9DF8A9F6B7D34_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CupcakeABP.CupcakeABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCupcakeABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CupcakeABP.CupcakeABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270");
		
		UCupcakeABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CupcakeABP_AnimGraphNode_TwoWayBlend_9EF5330240E6D4F951259B82245A7270_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function CupcakeABP.CupcakeABP_C.ExecuteUbergraph_CupcakeABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCupcakeABP_C::ExecuteUbergraph_CupcakeABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CupcakeABP.CupcakeABP_C.ExecuteUbergraph_CupcakeABP");
		
		UCupcakeABP_C_ExecuteUbergraph_CupcakeABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UCupcakeABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCupcakeABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass CupcakeABP.CupcakeABP_C");
		return ptr;
	}

}


