/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PlushTrapState_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlushTrapState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlushTrapState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlushTrapState.PlushTrapState_C");
		return ptr;
	}

}


