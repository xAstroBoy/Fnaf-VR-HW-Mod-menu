/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Instructions_HallwayCrawl_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_HallwayCrawl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_HallwayCrawl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_HallwayCrawl.Instructions_HallwayCrawl_C");
		return ptr;
	}

}


