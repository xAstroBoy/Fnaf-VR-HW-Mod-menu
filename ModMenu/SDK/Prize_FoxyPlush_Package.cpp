/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_FoxyPlush_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_FoxyPlush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_FoxyPlush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_FoxyPlush.Prize_FoxyPlush_C");
		return ptr;
	}

}


