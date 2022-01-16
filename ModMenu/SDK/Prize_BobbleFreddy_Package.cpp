/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_BobbleFreddy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_BobbleFreddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_BobbleFreddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BobbleFreddy.Prize_BobbleFreddy_C");
		return ptr;
	}

}


