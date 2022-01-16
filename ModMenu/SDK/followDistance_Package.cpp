/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "followDistance_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AfollowDistance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AfollowDistance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass followDistance.followDistance_C");
		return ptr;
	}

}


