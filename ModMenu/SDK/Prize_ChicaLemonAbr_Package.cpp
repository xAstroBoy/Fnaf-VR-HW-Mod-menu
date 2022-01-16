/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_ChicaLemonAbr_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_ChicaLemonAbr_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_ChicaLemonAbr_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_ChicaLemonAbr.Prize_ChicaLemonAbr_C");
		return ptr;
	}

}


