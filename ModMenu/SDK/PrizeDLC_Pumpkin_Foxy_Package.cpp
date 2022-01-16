/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PrizeDLC_Pumpkin_Foxy_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrizeDLC_Pumpkin_Foxy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeDLC_Pumpkin_Foxy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrizeDLC_Pumpkin_Foxy.PrizeDLC_Pumpkin_Foxy_C");
		return ptr;
	}

}


