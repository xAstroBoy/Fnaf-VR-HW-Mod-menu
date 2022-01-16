/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "TargetDistance_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ATargetDistance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATargetDistance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TargetDistance.TargetDistance_C");
		return ptr;
	}

}


