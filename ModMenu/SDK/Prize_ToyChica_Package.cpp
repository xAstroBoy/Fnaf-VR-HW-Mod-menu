/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_ToyChica_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_ToyChica_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_ToyChica_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_ToyChica.Prize_ToyChica_C");
		return ptr;
	}

}


