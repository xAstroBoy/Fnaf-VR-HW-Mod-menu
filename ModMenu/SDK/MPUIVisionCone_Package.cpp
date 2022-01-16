/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "MPUIVisionCone_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMPUIVisionCone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMPUIVisionCone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MPUIVisionCone.MPUIVisionCone_C");
		return ptr;
	}

}


