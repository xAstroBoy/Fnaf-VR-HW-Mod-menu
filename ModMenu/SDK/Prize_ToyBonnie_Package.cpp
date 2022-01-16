/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_ToyBonnie_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_ToyBonnie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_ToyBonnie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_ToyBonnie.Prize_ToyBonnie_C");
		return ptr;
	}

}


