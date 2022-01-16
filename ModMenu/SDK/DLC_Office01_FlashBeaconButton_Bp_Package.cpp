/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DLC_Office01_FlashBeaconButton_Bp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.NonVR_WidgetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHidden_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::NonVR_WidgetVisibility(bool IsHidden_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.NonVR_WidgetVisibility");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_NonVR_WidgetVisibility_Params params {};
		params.IsHidden_ = IsHidden_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.Timeline_0__FinishedFunc");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.Timeline_0__UpdateFunc");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.PowerOutageEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::PowerOutageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.PowerOutageEvent");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_PowerOutageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.PowerRebootEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::PowerRebootEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.PowerRebootEvent");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_PowerRebootEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.OnCooldown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::OnCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.OnCooldown");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_OnCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.OffCooldown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::OffCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.OffCooldown");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_OffCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ReceiveTick");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ReceiveBeginPlay");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ResetBtnPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::ResetBtnPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ResetBtnPosition");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_ResetBtnPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ExecuteUbergraph_DLC_Office01_FlashBeaconButton_Bp
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADLC_Office01_FlashBeaconButton_Bp_C::ExecuteUbergraph_DLC_Office01_FlashBeaconButton_Bp(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C.ExecuteUbergraph_DLC_Office01_FlashBeaconButton_Bp");
		
		ADLC_Office01_FlashBeaconButton_Bp_C_ExecuteUbergraph_DLC_Office01_FlashBeaconButton_Bp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADLC_Office01_FlashBeaconButton_Bp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADLC_Office01_FlashBeaconButton_Bp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DLC_Office01_FlashBeaconButton_Bp.DLC_Office01_FlashBeaconButton_Bp_C");
		return ptr;
	}

}


