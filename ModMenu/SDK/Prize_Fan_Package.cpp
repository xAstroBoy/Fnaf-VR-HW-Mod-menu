/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Fan_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Fan_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Fan_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Fan.Prize_Fan_C");
		return ptr;
	}

}


