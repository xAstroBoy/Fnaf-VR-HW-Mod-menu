﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Instructions_DLC_Office01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_DLC_Office01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_DLC_Office01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_DLC_Office01.Instructions_DLC_Office01_C");
		return ptr;
	}

}


