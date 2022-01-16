/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPBonnie_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPBonnie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPBonnie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPBonnie.MPBonnie_C");
		return ptr;
	}

}


