/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_temp_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_temp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_temp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_temp.Prize_temp_C");
		return ptr;
	}

}


