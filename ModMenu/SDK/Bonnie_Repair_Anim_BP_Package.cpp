/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Bonnie_Repair_Anim_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBonnie_Repair_Anim_BP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.AnimGraph");
		
		UBonnie_Repair_Anim_BP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBonnie_Repair_Anim_BP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3");
		
		UBonnie_Repair_Anim_BP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_A7FCF52D483270B714F32DBF99E421B3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBonnie_Repair_Anim_BP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53");
		
		UBonnie_Repair_Anim_BP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_ModifyBone_7C0F207D4CF2C8FF73392D822240AB53_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBonnie_Repair_Anim_BP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF");
		
		UBonnie_Repair_Anim_BP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Bonnie_Repair_Anim_BP_AnimGraphNode_TransitionResult_E2DDEA0E452D2FFC95085EB556EC7ABF_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.Action Completed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                Action_ID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBonnie_Repair_Anim_BP_C::Action_Completed(int Action_ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.Action Completed");
		
		UBonnie_Repair_Anim_BP_C_Action_Completed_Params params {};
		params.Action_ID = Action_ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.JumpScare_Temp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBonnie_Repair_Anim_BP_C::JumpScare_Temp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.JumpScare_Temp");
		
		UBonnie_Repair_Anim_BP_C_JumpScare_Temp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.ExecuteUbergraph_Bonnie_Repair_Anim_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBonnie_Repair_Anim_BP_C::ExecuteUbergraph_Bonnie_Repair_Anim_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C.ExecuteUbergraph_Bonnie_Repair_Anim_BP");
		
		UBonnie_Repair_Anim_BP_C_ExecuteUbergraph_Bonnie_Repair_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBonnie_Repair_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBonnie_Repair_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bonnie_Repair_Anim_BP.Bonnie_Repair_Anim_BP_C");
		return ptr;
	}

}


