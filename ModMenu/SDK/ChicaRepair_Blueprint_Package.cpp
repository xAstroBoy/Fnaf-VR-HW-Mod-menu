/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "ChicaRepair_Blueprint_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChicaRepair_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveBeginPlay");
		
		AChicaRepair_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.KillPlayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepair_Blueprint_C::KillPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.KillPlayer");
		
		AChicaRepair_Blueprint_C_KillPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Blueprint_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ReceiveTick");
		
		AChicaRepair_Blueprint_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepair_Blueprint_C::ButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ButtonPressed");
		
		AChicaRepair_Blueprint_C_ButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Left
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepair_Blueprint_C::Left()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Left");
		
		AChicaRepair_Blueprint_C_Left_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Right
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AChicaRepair_Blueprint_C::Right()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.Right");
		
		AChicaRepair_Blueprint_C_Right_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ExecuteUbergraph_ChicaRepair_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChicaRepair_Blueprint_C::ExecuteUbergraph_ChicaRepair_Blueprint(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChicaRepair_Blueprint.ChicaRepair_Blueprint_C.ExecuteUbergraph_ChicaRepair_Blueprint");
		
		AChicaRepair_Blueprint_C_ExecuteUbergraph_ChicaRepair_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaRepair_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaRepair_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaRepair_Blueprint.ChicaRepair_Blueprint_C");
		return ptr;
	}

}


