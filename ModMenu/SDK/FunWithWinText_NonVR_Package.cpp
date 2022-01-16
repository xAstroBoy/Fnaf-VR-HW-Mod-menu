/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "FunWithWinText_NonVR_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFunWithWinText_NonVR_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFunWithWinText_NonVR_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FunWithWinText_NonVR.FunWithWinText_NonVR_C");
		return ptr;
	}

}


