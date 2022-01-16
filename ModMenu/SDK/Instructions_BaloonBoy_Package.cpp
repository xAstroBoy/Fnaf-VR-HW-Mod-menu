/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Instructions_BaloonBoy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UInstructions_BaloonBoy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInstructions_BaloonBoy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Instructions_BaloonBoy.Instructions_BaloonBoy_C");
		return ptr;
	}

}


