/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "NonVR_CameraRots_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ANonVR_CameraRots_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANonVR_CameraRots_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NonVR_CameraRots_BP.NonVR_CameraRots_BP_C");
		return ptr;
	}

}


