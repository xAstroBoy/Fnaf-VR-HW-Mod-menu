/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_BobbleChica_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_BobbleChica_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_BobbleChica_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BobbleChica.Prize_BobbleChica_C");
		return ptr;
	}

}


