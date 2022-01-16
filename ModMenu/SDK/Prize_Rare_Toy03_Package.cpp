/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Rare_Toy03_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Rare_Toy03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Rare_Toy03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Rare_Toy03.Prize_Rare_Toy03_C");
		return ptr;
	}

}


