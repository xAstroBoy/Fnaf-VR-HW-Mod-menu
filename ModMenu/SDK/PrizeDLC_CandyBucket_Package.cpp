/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "PrizeDLC_CandyBucket_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrizeDLC_CandyBucket_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrizeDLC_CandyBucket_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrizeDLC_CandyBucket.PrizeDLC_CandyBucket_C");
		return ptr;
	}

}


