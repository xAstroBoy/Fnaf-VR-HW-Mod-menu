/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BigToyMoveState_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UBigToyMoveState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBigToyMoveState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BigToyMoveState.BigToyMoveState_C");
		return ptr;
	}

}


