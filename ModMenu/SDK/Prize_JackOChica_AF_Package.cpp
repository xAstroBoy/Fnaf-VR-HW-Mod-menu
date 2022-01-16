/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_JackOChica_AF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_JackOChica_AF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_JackOChica_AF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_JackOChica_AF.Prize_JackOChica_AF_C");
		return ptr;
	}

}


