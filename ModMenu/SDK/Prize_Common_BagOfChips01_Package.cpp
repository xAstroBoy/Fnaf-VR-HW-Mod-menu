/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "Prize_Common_BagOfChips01_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Common_BagOfChips01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Common_BagOfChips01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Common_BagOfChips01.Prize_Common_BagOfChips01_C");
		return ptr;
	}

}


