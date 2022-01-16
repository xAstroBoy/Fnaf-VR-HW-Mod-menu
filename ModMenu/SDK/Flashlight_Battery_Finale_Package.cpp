/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Flashlight_Battery_Finale_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFlashlight_Battery_Finale_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlashlight_Battery_Finale_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Flashlight_Battery_Finale.Flashlight_Battery_Finale_C");
		return ptr;
	}

}


