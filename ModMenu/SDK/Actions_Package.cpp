/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Actions_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UActions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Actions.Actions_C");
		return ptr;
	}

}


