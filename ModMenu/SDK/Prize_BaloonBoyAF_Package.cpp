﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_BaloonBoyAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_BaloonBoyAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_BaloonBoyAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BaloonBoyAF.Prize_BaloonBoyAF_C");
		return ptr;
	}

}


