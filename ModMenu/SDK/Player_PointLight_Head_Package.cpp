/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Player_PointLight_Head_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Player_PointLight_Head.Player_PointLight_Head_C.ExecuteUbergraph_Player_PointLight_Head
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayer_PointLight_Head_C::ExecuteUbergraph_Player_PointLight_Head(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Player_PointLight_Head.Player_PointLight_Head_C.ExecuteUbergraph_Player_PointLight_Head");
		
		APlayer_PointLight_Head_C_ExecuteUbergraph_Player_PointLight_Head_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction APlayer_PointLight_Head_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayer_PointLight_Head_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Player_PointLight_Head.Player_PointLight_Head_C");
		return ptr;
	}

}


