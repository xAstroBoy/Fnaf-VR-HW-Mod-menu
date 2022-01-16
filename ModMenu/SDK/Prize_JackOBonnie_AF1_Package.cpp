/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_JackOBonnie_AF1_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_JackOBonnie_AF1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_JackOBonnie_AF1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_JackOBonnie_AF1.Prize_JackOBonnie_AF1_C");
		return ptr;
	}

}


