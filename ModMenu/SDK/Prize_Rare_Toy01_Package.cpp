﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_Rare_Toy01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Rare_Toy01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Rare_Toy01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Rare_Toy01.Prize_Rare_Toy01_C");
		return ptr;
	}

}


