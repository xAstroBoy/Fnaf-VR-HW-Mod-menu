/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "ChicaRepair_Cupcake_Location_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AChicaRepair_Cupcake_Location_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChicaRepair_Cupcake_Location_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ChicaRepair_Cupcake_Location.ChicaRepair_Cupcake_Location_C");
		return ptr;
	}

}


