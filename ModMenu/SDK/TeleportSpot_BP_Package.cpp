/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "TeleportSpot_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.DisableCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATeleportSpot_BP_C::DisableCollision(bool Disable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.DisableCollision");
		
		ATeleportSpot_BP_C_DisableCollision_Params params {};
		params.Disable = Disable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.SetRecentlyTeleportedFalse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::SetRecentlyTeleportedFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.SetRecentlyTeleportedFalse");
		
		ATeleportSpot_BP_C_SetRecentlyTeleportedFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::TeleportSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportSelected");
		
		ATeleportSpot_BP_C_TeleportSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.EnableCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATeleportSpot_BP_C::EnableCollision(bool enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.EnableCollision");
		
		ATeleportSpot_BP_C_EnableCollision_Params params {};
		params.enable = enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.UserConstructionScript");
		
		ATeleportSpot_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::TeleportGlow__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__FinishedFunc");
		
		ATeleportSpot_BP_C_TeleportGlow__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::TeleportGlow__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TeleportGlow__UpdateFunc");
		
		ATeleportSpot_BP_C_TeleportGlow__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.Timeline_0__FinishedFunc");
		
		ATeleportSpot_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.Timeline_0__UpdateFunc");
		
		ATeleportSpot_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.ReceiveBeginPlay");
		
		ATeleportSpot_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportGlow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::TriggerTeleportGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportGlow");
		
		ATeleportSpot_BP_C_TriggerTeleportGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportFade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATeleportSpot_BP_C::TriggerTeleportFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.TriggerTeleportFade");
		
		ATeleportSpot_BP_C_TriggerTeleportFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpot_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.ReceiveTick");
		
		ATeleportSpot_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function TeleportSpot_BP.TeleportSpot_BP_C.ExecuteUbergraph_TeleportSpot_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportSpot_BP_C::ExecuteUbergraph_TeleportSpot_BP(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportSpot_BP.TeleportSpot_BP_C.ExecuteUbergraph_TeleportSpot_BP");
		
		ATeleportSpot_BP_C_ExecuteUbergraph_TeleportSpot_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATeleportSpot_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportSpot_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TeleportSpot_BP.TeleportSpot_BP_C");
		return ptr;
	}

}


