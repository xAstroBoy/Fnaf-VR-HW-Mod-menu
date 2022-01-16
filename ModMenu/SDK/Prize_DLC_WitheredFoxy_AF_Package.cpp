/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_DLC_WitheredFoxy_AF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_DLC_WitheredFoxy_AF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_DLC_WitheredFoxy_AF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_DLC_WitheredFoxy_AF.Prize_DLC_WitheredFoxy_AF_C");
		return ptr;
	}

}


