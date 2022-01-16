/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PlushTrapKillState_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UPlushTrapKillState_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlushTrapKillState_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlushTrapKillState.PlushTrapKillState_C");
		return ptr;
	}

}


