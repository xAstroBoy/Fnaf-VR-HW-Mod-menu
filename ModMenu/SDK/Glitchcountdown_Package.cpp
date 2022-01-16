/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Glitchcountdown_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AGlitchcountdown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGlitchcountdown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Glitchcountdown.Glitchcountdown_C");
		return ptr;
	}

}


