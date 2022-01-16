/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_FuntimeFoxyAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_FuntimeFoxyAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_FuntimeFoxyAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_FuntimeFoxyAF.Prize_FuntimeFoxyAF_C");
		return ptr;
	}

}


