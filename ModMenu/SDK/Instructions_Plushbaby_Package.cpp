﻿/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Instructions_Plushbaby_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_Plushbaby_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_Plushbaby_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_Plushbaby.Instructions_Plushbaby_C");
		return ptr;
	}

}


