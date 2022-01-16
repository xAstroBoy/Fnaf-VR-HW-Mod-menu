/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_BonbonAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_BonbonAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_BonbonAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BonbonAF.Prize_BonbonAF_C");
		return ptr;
	}

}


