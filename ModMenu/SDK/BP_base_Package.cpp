/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "BP_base_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_base.BP_base_C");
		return ptr;
	}

}


