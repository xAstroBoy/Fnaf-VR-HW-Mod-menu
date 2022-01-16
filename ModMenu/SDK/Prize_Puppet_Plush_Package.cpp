/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_Puppet_Plush_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_Puppet_Plush_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_Puppet_Plush_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_Puppet_Plush.Prize_Puppet_Plush_C");
		return ptr;
	}

}


