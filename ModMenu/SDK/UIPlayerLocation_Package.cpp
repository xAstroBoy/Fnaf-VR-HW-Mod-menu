/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "UIPlayerLocation_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function UIPlayerLocation.UIPlayerLocation_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMPFreddyPawnBase_C*                         TrackedCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIPlayerLocation_C::Setup(class AMPFreddyPawnBase_C* TrackedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIPlayerLocation.UIPlayerLocation_C.Setup");
		
		UUIPlayerLocation_C_Setup_Params params {};
		params.TrackedCharacter = TrackedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function UIPlayerLocation.UIPlayerLocation_C.ExecuteUbergraph_UIPlayerLocation
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUIPlayerLocation_C::ExecuteUbergraph_UIPlayerLocation(int EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UIPlayerLocation.UIPlayerLocation_C.ExecuteUbergraph_UIPlayerLocation");
		
		UUIPlayerLocation_C_ExecuteUbergraph_UIPlayerLocation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UUIPlayerLocation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIPlayerLocation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UIPlayerLocation.UIPlayerLocation_C");
		return ptr;
	}

}


