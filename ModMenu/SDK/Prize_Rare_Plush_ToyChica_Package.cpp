/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Rare_Plush_ToyChica_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Rare_Plush_ToyChica_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Rare_Plush_ToyChica_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Rare_Plush_ToyChica.Prize_Rare_Plush_ToyChica_C");
		return ptr;
	}

}


