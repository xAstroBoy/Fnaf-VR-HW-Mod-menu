/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_BasketBall01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_BasketBall01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_BasketBall01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_BasketBall01.Prize_BasketBall01_C");
		return ptr;
	}

}


