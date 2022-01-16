/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Chica_Repair_NM_Cupcake_Placement_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChica_Repair_NM_Cupcake_Placement_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChica_Repair_NM_Cupcake_Placement_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Chica_Repair_NM_Cupcake_Placement.Chica_Repair_NM_Cupcake_Placement_C");
		return ptr;
	}

}


