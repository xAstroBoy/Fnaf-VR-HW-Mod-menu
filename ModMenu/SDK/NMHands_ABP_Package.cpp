/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "NMHands_ABP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UNMHands_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.AnimGraph");
		
		UNMHands_ABP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_F275DFAA49B7D55216DB049443BF18B9
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNMHands_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_F275DFAA49B7D55216DB049443BF18B9()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_F275DFAA49B7D55216DB049443BF18B9");
		
		UNMHands_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_F275DFAA49B7D55216DB049443BF18B9_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B44EC7244D450FF5C27B4E9702B0A454
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNMHands_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B44EC7244D450FF5C27B4E9702B0A454()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B44EC7244D450FF5C27B4E9702B0A454");
		
		UNMHands_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B44EC7244D450FF5C27B4E9702B0A454_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_3B65C099461694382F13108DB42F1FF8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNMHands_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_3B65C099461694382F13108DB42F1FF8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_3B65C099461694382F13108DB42F1FF8");
		
		UNMHands_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_3B65C099461694382F13108DB42F1FF8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNMHands_ABP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.BlueprintUpdateAnimation");
		
		UNMHands_ABP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UNMHands_ABP_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.BlueprintBeginPlay");
		
		UNMHands_ABP_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.AnimNotify_IsFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNMHands_ABP_C::AnimNotify_IsFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.AnimNotify_IsFinished");
		
		UNMHands_ABP_C_AnimNotify_IsFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.AnimNotify_IsNotFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNMHands_ABP_C::AnimNotify_IsNotFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.AnimNotify_IsNotFinished");
		
		UNMHands_ABP_C_AnimNotify_IsNotFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.AnimNotify_IsInvis
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNMHands_ABP_C::AnimNotify_IsInvis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.AnimNotify_IsInvis");
		
		UNMHands_ABP_C_AnimNotify_IsInvis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.AnimNotify_HandsGone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNMHands_ABP_C::AnimNotify_HandsGone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.AnimNotify_HandsGone");
		
		UNMHands_ABP_C_AnimNotify_HandsGone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_DF9041394C8EF8E3FD61BBBC3A7762B1
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNMHands_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_DF9041394C8EF8E3FD61BBBC3A7762B1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_DF9041394C8EF8E3FD61BBBC3A7762B1");
		
		UNMHands_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_DF9041394C8EF8E3FD61BBBC3A7762B1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B42A21DC448E32457EFB8CB2105703C0
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNMHands_ABP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B42A21DC448E32457EFB8CB2105703C0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B42A21DC448E32457EFB8CB2105703C0");
		
		UNMHands_ABP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_NMHands_ABP_AnimGraphNode_TransitionResult_B42A21DC448E32457EFB8CB2105703C0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function NMHands_ABP.NMHands_ABP_C.ExecuteUbergraph_NMHands_ABP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNMHands_ABP_C::ExecuteUbergraph_NMHands_ABP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NMHands_ABP.NMHands_ABP_C.ExecuteUbergraph_NMHands_ABP");
		
		UNMHands_ABP_C_ExecuteUbergraph_NMHands_ABP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UNMHands_ABP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNMHands_ABP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass NMHands_ABP.NMHands_ABP_C");
		return ptr;
	}

}


