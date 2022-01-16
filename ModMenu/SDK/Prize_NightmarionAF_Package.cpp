/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_NightmarionAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_NightmarionAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_NightmarionAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_NightmarionAF.Prize_NightmarionAF_C");
		return ptr;
	}

}


