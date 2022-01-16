/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PrizeDLC_Candy_Drop04_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrizeDLC_Candy_Drop04_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeDLC_Candy_Drop04_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrizeDLC_Candy_Drop04.PrizeDLC_Candy_Drop04_C");
		return ptr;
	}

}


