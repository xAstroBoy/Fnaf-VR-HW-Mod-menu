﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_CakeSlice_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_CakeSlice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_CakeSlice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_CakeSlice.Prize_CakeSlice_C");
		return ptr;
	}

}


