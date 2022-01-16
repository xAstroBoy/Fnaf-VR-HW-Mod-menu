/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "FNAF_RichTextDecorator_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UFNAF_RichTextDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFNAF_RichTextDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FNAF_RichTextDecorator.FNAF_RichTextDecorator_C");
		return ptr;
	}

}


