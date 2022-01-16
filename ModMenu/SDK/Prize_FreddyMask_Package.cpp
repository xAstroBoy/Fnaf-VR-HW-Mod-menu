/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_FreddyMask_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_FreddyMask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_FreddyMask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_FreddyMask.Prize_FreddyMask_C");
		return ptr;
	}

}


