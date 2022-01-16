/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office01_Foxy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.ReachedKillZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::ReachedKillZone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ReachedKillZone");
		
		AOffice01_Foxy_C_ReachedKillZone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ReceiveBeginPlay");
		
		AOffice01_Foxy_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Foxy_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ReceiveTick");
		
		AOffice01_Foxy_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::MoveCurtain_1Cb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cb");
		
		AOffice01_Foxy_C_MoveCurtain_1Cb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::MoveCurtain_1Cc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Cc");
		
		AOffice01_Foxy_C_MoveCurtain_1Cc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1c_Gone
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::MoveCurtain_1c_Gone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1c_Gone");
		
		AOffice01_Foxy_C_MoveCurtain_1c_Gone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Ca
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::MoveCurtain_1Ca()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.MoveCurtain_1Ca");
		
		AOffice01_Foxy_C_MoveCurtain_1Ca_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.CheckBonniePosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice01_Foxy_C::CheckBonniePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.CheckBonniePosition");
		
		AOffice01_Foxy_C_CheckBonniePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office01_Foxy.Office01_Foxy_C.ExecuteUbergraph_Office01_Foxy
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice01_Foxy_C::ExecuteUbergraph_Office01_Foxy(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office01_Foxy.Office01_Foxy_C.ExecuteUbergraph_Office01_Foxy");
		
		AOffice01_Foxy_C_ExecuteUbergraph_Office01_Foxy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice01_Foxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice01_Foxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office01_Foxy.Office01_Foxy_C");
		return ptr;
	}

}


