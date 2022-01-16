/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MeshDescription_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UMeshDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshDescription::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		return ptr;
	}

}


