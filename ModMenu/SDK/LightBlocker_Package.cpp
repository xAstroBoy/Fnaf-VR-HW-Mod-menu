/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "LightBlocker_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALightBlocker_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightBlocker_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBlocker.LightBlocker_C");
		return ptr;
	}

}


