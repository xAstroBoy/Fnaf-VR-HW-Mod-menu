/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Office02_Mangle_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_Mangle.Office02_Mangle_C.MoveBackToStarting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOffice02_Mangle_C::MoveBackToStarting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_Mangle.Office02_Mangle_C.MoveBackToStarting");
		
		AOffice02_Mangle_C_MoveBackToStarting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Office02_Mangle.Office02_Mangle_C.ExecuteUbergraph_Office02_Mangle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOffice02_Mangle_C::ExecuteUbergraph_Office02_Mangle(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Office02_Mangle.Office02_Mangle_C.ExecuteUbergraph_Office02_Mangle");
		
		AOffice02_Mangle_C_ExecuteUbergraph_Office02_Mangle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_Mangle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_Mangle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_Mangle.Office02_Mangle_C");
		return ptr;
	}

}


