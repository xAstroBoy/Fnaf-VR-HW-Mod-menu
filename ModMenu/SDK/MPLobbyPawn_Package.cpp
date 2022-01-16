/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "MPLobbyPawn_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction AMPLobbyPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMPLobbyPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MPLobbyPawn.MPLobbyPawn_C");
		return ptr;
	}

}


