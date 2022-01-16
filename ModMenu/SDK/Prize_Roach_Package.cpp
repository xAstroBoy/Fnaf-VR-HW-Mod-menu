/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Roach_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Roach_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Roach_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Roach.Prize_Roach_C");
		return ptr;
	}

}


