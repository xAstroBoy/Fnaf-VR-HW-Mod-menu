/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Prize_GrimmFoxy_AF_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APrize_GrimmFoxy_AF_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrize_GrimmFoxy_AF_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prize_GrimmFoxy_AF.Prize_GrimmFoxy_AF_C");
		return ptr;
	}

}


