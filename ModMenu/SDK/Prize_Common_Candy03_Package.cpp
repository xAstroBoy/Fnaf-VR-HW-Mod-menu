﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Common_Candy03_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Common_Candy03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Common_Candy03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Common_Candy03.Prize_Common_Candy03_C");
		return ptr;
	}

}

