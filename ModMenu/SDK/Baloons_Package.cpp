/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "Baloons_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Baloons.Baloons_C.PickRandomBaloonColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int                                                BaloonID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaloons_C::PickRandomBaloonColor(int BaloonID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.PickRandomBaloonColor");
		
		ABaloons_C_PickRandomBaloonColor_Params params {};
		params.BaloonID = BaloonID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Baloons.Baloons_C.nightmare mode triggered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaloons_C::nightmare_mode_triggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.nightmare mode triggered");
		
		ABaloons_C_nightmare_mode_triggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Baloons.Baloons_C.Nightmare Mode Disabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABaloons_C::Nightmare_Mode_Disabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.Nightmare Mode Disabled");
		
		ABaloons_C_Nightmare_Mode_Disabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function Baloons.Baloons_C.ExecuteUbergraph_Baloons
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaloons_C::ExecuteUbergraph_Baloons(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Baloons.Baloons_C.ExecuteUbergraph_Baloons");
		
		ABaloons_C_ExecuteUbergraph_Baloons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ABaloons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaloons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Baloons.Baloons_C");
		return ptr;
	}

}


