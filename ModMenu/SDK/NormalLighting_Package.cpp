/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "NormalLighting_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANormalLighting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANormalLighting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NormalLighting.NormalLighting_C");
		return ptr;
	}

}


