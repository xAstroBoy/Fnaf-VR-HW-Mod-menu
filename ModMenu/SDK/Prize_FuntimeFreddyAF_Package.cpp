﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_FuntimeFreddyAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_FuntimeFreddyAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_FuntimeFreddyAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_FuntimeFreddyAF.Prize_FuntimeFreddyAF_C");
		return ptr;
	}

}


