/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_BobbleBonnie_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_BobbleBonnie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_BobbleBonnie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BobbleBonnie.Prize_BobbleBonnie_C");
		return ptr;
	}

}


