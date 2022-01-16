/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "BP_ArcadeCab_02a_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ArcadeCab_02a_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ArcadeCab_02a_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArcadeCab_02a.BP_ArcadeCab_02a_C");
		return ptr;
	}

}


