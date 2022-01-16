/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "RepairBonnie_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.GetDropHighlightMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADropPoint_C*                                Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         MeshToHighlight                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARepairBonnie_BP_C::GetDropHighlightMesh(class ADropPoint_C* Sender, class UPrimitiveComponent** MeshToHighlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.GetDropHighlightMesh");
		
		ARepairBonnie_BP_C_GetDropHighlightMesh_Params params {};
		params.Sender = Sender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MeshToHighlight != nullptr)
			*MeshToHighlight = params.MeshToHighlight;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.PassGrabbedStateOfTuner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::PassGrabbedStateOfTuner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.PassGrabbedStateOfTuner");
		
		ARepairBonnie_BP_C_PassGrabbedStateOfTuner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.SetupTuners
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::SetupTuners()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.SetupTuners");
		
		ARepairBonnie_BP_C_SetupTuners_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.RepairBonnie_BP_Ref
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBonnie_Repair_Anim_BP_C*                    Bonnie_Repair_Ref                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARepairBonnie_BP_C::RepairBonnie_BP_Ref(class UBonnie_Repair_Anim_BP_C** Bonnie_Repair_Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.RepairBonnie_BP_Ref");
		
		ARepairBonnie_BP_C_RepairBonnie_BP_Ref_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bonnie_Repair_Ref != nullptr)
			*Bonnie_Repair_Ref = params.Bonnie_Repair_Ref;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.Action Completed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARepairBonnie_BP_C::Action_Completed(int ActionID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.Action Completed");
		
		ARepairBonnie_BP_C_Action_Completed_Params params {};
		params.ActionID = ActionID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.ReceiveBeginPlay");
		
		ARepairBonnie_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.JumpScare
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::JumpScare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.JumpScare");
		
		ARepairBonnie_BP_C_JumpScare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.NonVRClick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::NonVRClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.NonVRClick");
		
		ARepairBonnie_BP_C_NonVRClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::CustomEvent_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_5");
		
		ARepairBonnie_BP_C_CustomEvent_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::CustomEvent_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_4");
		
		ARepairBonnie_BP_C_CustomEvent_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::CustomEvent_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_3");
		
		ARepairBonnie_BP_C_CustomEvent_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_2");
		
		ARepairBonnie_BP_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARepairBonnie_BP_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.CustomEvent_1");
		
		ARepairBonnie_BP_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function RepairBonnie_BP.RepairBonnie_BP_C.ExecuteUbergraph_RepairBonnie_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ARepairBonnie_BP_C::ExecuteUbergraph_RepairBonnie_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RepairBonnie_BP.RepairBonnie_BP_C.ExecuteUbergraph_RepairBonnie_BP");
		
		ARepairBonnie_BP_C_ExecuteUbergraph_RepairBonnie_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ARepairBonnie_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARepairBonnie_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RepairBonnie_BP.RepairBonnie_BP_C");
		return ptr;
	}

}


