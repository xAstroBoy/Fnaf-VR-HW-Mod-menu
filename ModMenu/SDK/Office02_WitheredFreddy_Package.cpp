/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office02_WitheredFreddy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AOffice02_WitheredFreddy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOffice02_WitheredFreddy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Office02_WitheredFreddy.Office02_WitheredFreddy_C");
		return ptr;
	}

}


