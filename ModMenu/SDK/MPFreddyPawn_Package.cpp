/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPFreddyPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPFreddyPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPFreddyPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPFreddyPawn.MPFreddyPawn_C");
		return ptr;
	}

}


