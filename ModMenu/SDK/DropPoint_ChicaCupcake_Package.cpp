/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DropPoint_ChicaCupcake_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPoint_ChicaCupcake.DropPoint_ChicaCupcake_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADropPoint_ChicaCupcake_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPoint_ChicaCupcake.DropPoint_ChicaCupcake_C.ReceiveBeginPlay");
		
		ADropPoint_ChicaCupcake_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPoint_ChicaCupcake.DropPoint_ChicaCupcake_C.ExecuteUbergraph_DropPoint_ChicaCupcake
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADropPoint_ChicaCupcake_C::ExecuteUbergraph_DropPoint_ChicaCupcake(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPoint_ChicaCupcake.DropPoint_ChicaCupcake_C.ExecuteUbergraph_DropPoint_ChicaCupcake");
		
		ADropPoint_ChicaCupcake_C_ExecuteUbergraph_DropPoint_ChicaCupcake_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ADropPoint_ChicaCupcake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADropPoint_ChicaCupcake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DropPoint_ChicaCupcake.DropPoint_ChicaCupcake_C");
		return ptr;
	}

}


