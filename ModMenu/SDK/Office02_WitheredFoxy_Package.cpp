/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office02_WitheredFoxy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.NotFlashed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::NotFlashed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.NotFlashed");
		
		AOffice02_WitheredFoxy_C_NotFlashed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ResetFoxyValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::ResetFoxyValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ResetFoxyValues");
		
		AOffice02_WitheredFoxy_C_ResetFoxyValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.IncreaseTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::IncreaseTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.IncreaseTimer");
		
		AOffice02_WitheredFoxy_C_IncreaseTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.HasBeenFlashed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::HasBeenFlashed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.HasBeenFlashed");
		
		AOffice02_WitheredFoxy_C_HasBeenFlashed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_WitheredFoxy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReceiveTick");
		
		AOffice02_WitheredFoxy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReachedKillZone");
		
		AOffice02_WitheredFoxy_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.MoveAi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ARoomInfo_Bp_C*                              Room                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ALocPoint_BP_C*                              Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_WitheredFoxy_C::MoveAi(class ARoomInfo_Bp_C* Room, class ALocPoint_BP_C* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.MoveAi");
		
		AOffice02_WitheredFoxy_C_MoveAi_Params params {};
		params.Room = Room;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.UnleashFoxy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::UnleashFoxy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.UnleashFoxy");
		
		AOffice02_WitheredFoxy_C_UnleashFoxy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ReceiveBeginPlay");
		
		AOffice02_WitheredFoxy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.WitheredFoxyForcedToMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_WitheredFoxy_C::WitheredFoxyForcedToMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.WitheredFoxyForcedToMove");
		
		AOffice02_WitheredFoxy_C_WitheredFoxyForcedToMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ExecuteUbergraph_Office02_WitheredFoxy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_WitheredFoxy_C::ExecuteUbergraph_Office02_WitheredFoxy(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_WitheredFoxy.Office02_WitheredFoxy_C.ExecuteUbergraph_Office02_WitheredFoxy");
		
		AOffice02_WitheredFoxy_C_ExecuteUbergraph_Office02_WitheredFoxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_WitheredFoxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_WitheredFoxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_WitheredFoxy.Office02_WitheredFoxy_C");
		return ptr;
	}

}


