/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office03_PhantomMangle_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_PhantomMangle_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.ReceiveTick");
		
		AOffice03_PhantomMangle_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOffice03_PhantomMangle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.ReceiveBeginPlay");
		
		AOffice03_PhantomMangle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.ResetAllDoOnce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomMangle_C::ResetAllDoOnce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.ResetAllDoOnce");
		
		AOffice03_PhantomMangle_C_ResetAllDoOnce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.EnablePhantom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomMangle_C::EnablePhantom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.EnablePhantom");
		
		AOffice03_PhantomMangle_C_EnablePhantom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.DisablePhantom
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomMangle_C::DisablePhantom()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.DisablePhantom");
		
		AOffice03_PhantomMangle_C_DisablePhantom_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.MangleRun
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOffice03_PhantomMangle_C::MangleRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.MangleRun");
		
		AOffice03_PhantomMangle_C_MangleRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office03_PhantomMangle.Office03_PhantomMangle_C.ExecuteUbergraph_Office03_PhantomMangle
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice03_PhantomMangle_C::ExecuteUbergraph_Office03_PhantomMangle(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office03_PhantomMangle.Office03_PhantomMangle_C.ExecuteUbergraph_Office03_PhantomMangle");
		
		AOffice03_PhantomMangle_C_ExecuteUbergraph_Office03_PhantomMangle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice03_PhantomMangle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice03_PhantomMangle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office03_PhantomMangle.Office03_PhantomMangle_C");
		return ptr;
	}

}


