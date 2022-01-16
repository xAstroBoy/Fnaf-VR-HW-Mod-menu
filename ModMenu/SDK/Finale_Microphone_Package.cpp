/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Finale_Microphone_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AFinale_Microphone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFinale_Microphone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Finale_Microphone.Finale_Microphone_C");
		return ptr;
	}

}


