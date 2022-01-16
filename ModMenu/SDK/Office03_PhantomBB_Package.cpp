/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office03_PhantomBB_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomBB.Office03_PhantomBB_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_PhantomBB_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomBB.Office03_PhantomBB_C.ReceiveTick");
		
		AOffice03_PhantomBB_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomBB.Office03_PhantomBB_C.EnablePhantom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomBB_C::EnablePhantom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomBB.Office03_PhantomBB_C.EnablePhantom");
		
		AOffice03_PhantomBB_C_EnablePhantom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomBB.Office03_PhantomBB_C.DisablePhantom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomBB_C::DisablePhantom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomBB.Office03_PhantomBB_C.DisablePhantom");
		
		AOffice03_PhantomBB_C_DisablePhantom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomBB.Office03_PhantomBB_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice03_PhantomBB_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomBB.Office03_PhantomBB_C.ReceiveBeginPlay");
		
		AOffice03_PhantomBB_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomBB.Office03_PhantomBB_C.ResetAllDoOnce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomBB_C::ResetAllDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomBB.Office03_PhantomBB_C.ResetAllDoOnce");
		
		AOffice03_PhantomBB_C_ResetAllDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomBB.Office03_PhantomBB_C.ExecuteUbergraph_Office03_PhantomBB
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_PhantomBB_C::ExecuteUbergraph_Office03_PhantomBB(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomBB.Office03_PhantomBB_C.ExecuteUbergraph_Office03_PhantomBB");
		
		AOffice03_PhantomBB_C_ExecuteUbergraph_Office03_PhantomBB_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice03_PhantomBB_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice03_PhantomBB_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office03_PhantomBB.Office03_PhantomBB_C");
		return ptr;
	}

}


