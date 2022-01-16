/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BigToy_O4_State_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBigToy_O4_State_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBigToy_O4_State_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BigToy_O4_State.BigToy_O4_State_C");
		return ptr;
	}

}


