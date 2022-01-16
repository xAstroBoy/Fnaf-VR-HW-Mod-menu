/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "BP_BurgerBungleArcade_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_BurgerBungleArcade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BurgerBungleArcade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BurgerBungleArcade.BP_BurgerBungleArcade_C");
		return ptr;
	}

}


