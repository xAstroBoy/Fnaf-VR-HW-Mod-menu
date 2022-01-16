/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "ToxicSymbol_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UToxicSymbol_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToxicSymbol_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToxicSymbol.ToxicSymbol_C");
		return ptr;
	}

}


