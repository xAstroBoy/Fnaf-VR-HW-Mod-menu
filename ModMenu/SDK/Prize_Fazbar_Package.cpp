/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Fazbar_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Fazbar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Fazbar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Fazbar.Prize_Fazbar_C");
		return ptr;
	}

}


