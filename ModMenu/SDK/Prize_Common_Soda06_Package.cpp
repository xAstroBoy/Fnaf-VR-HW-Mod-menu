/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Common_Soda06_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Common_Soda06_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Common_Soda06_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Common_Soda06.Prize_Common_Soda06_C");
		return ptr;
	}

}


