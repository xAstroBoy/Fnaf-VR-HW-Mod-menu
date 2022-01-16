/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_CircusBabyAF_V2_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_CircusBabyAF_V2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_CircusBabyAF_V2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_CircusBabyAF_V2.Prize_CircusBabyAF_V2_C");
		return ptr;
	}

}


