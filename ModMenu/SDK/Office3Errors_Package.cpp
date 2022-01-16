/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Office3Errors_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UOffice3Errors_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffice3Errors_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Office3Errors.Office3Errors_C");
		return ptr;
	}

}


