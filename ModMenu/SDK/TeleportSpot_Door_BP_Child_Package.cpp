/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "TeleportSpot_Door_BP_Child_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATeleportSpot_Door_BP_Child_C::Timeline_0_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0_0__FinishedFunc");
		
		ATeleportSpot_Door_BP_Child_C_Timeline_0_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATeleportSpot_Door_BP_Child_C::Timeline_0_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0_0__UpdateFunc");
		
		ATeleportSpot_Door_BP_Child_C_Timeline_0_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Close Door
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_Door_BP_Child_C::Close_Door()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Close Door");
		
		ATeleportSpot_Door_BP_Child_C_Close_Door_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ATeleportSpot_Door_BP_Child_C::BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");
		
		ATeleportSpot_Door_BP_Child_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpot_Door_BP_Child_C::BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");
		
		ATeleportSpot_Door_BP_Child_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.TeleportSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_Door_BP_Child_C::TeleportSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.TeleportSelected");
		
		ATeleportSpot_Door_BP_Child_C_TeleportSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.ExecuteUbergraph_TeleportSpot_Door_BP_Child
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpot_Door_BP_Child_C::ExecuteUbergraph_TeleportSpot_Door_BP_Child(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.ExecuteUbergraph_TeleportSpot_Door_BP_Child");
		
		ATeleportSpot_Door_BP_Child_C_ExecuteUbergraph_TeleportSpot_Door_BP_Child_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATeleportSpot_Door_BP_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportSpot_Door_BP_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C");
		return ptr;
	}

}


