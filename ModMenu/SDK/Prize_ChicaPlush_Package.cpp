/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_ChicaPlush_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_ChicaPlush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_ChicaPlush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_ChicaPlush.Prize_ChicaPlush_C");
		return ptr;
	}

}


