/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Instructions_PlushkinPatch_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_PlushkinPatch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_PlushkinPatch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_PlushkinPatch.Instructions_PlushkinPatch_C");
		return ptr;
	}

}


