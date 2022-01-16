/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MusicBox_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMusicBox_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMusicBox_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MusicBox_BP.MusicBox_BP_C");
		return ptr;
	}

}


