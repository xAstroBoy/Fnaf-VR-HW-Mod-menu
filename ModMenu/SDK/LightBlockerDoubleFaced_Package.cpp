/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "LightBlockerDoubleFaced_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALightBlockerDoubleFaced_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALightBlockerDoubleFaced_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LightBlockerDoubleFaced.LightBlockerDoubleFaced_C");
		return ptr;
	}

}


