/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPFoxyPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPFoxyPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPFoxyPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPFoxyPawn.MPFoxyPawn_C");
		return ptr;
	}

}


