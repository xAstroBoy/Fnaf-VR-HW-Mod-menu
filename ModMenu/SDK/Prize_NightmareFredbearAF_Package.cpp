/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_NightmareFredbearAF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_NightmareFredbearAF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_NightmareFredbearAF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_NightmareFredbearAF.Prize_NightmareFredbearAF_C");
		return ptr;
	}

}


