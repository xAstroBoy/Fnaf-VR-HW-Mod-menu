/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DropPointLerpListener_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpListener.DropPointLerpListener_C.OnLerpEnd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADropPointLerpPosition_C*                    LerpPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPointLerpListener_C::OnLerpEnd(class ADropPointLerpPosition_C* LerpPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpListener.DropPointLerpListener_C.OnLerpEnd");
		
		UDropPointLerpListener_C_OnLerpEnd_Params params {};
		params.LerpPoint = LerpPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointLerpListener.DropPointLerpListener_C.OnLerpStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADropPointLerpPosition_C*                    LerpPoint                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDropPointLerpListener_C::OnLerpStart(class ADropPointLerpPosition_C* LerpPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointLerpListener.DropPointLerpListener_C.OnLerpStart");
		
		UDropPointLerpListener_C_OnLerpStart_Params params {};
		params.LerpPoint = LerpPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDropPointLerpListener_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropPointLerpListener_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DropPointLerpListener.DropPointLerpListener_C");
		return ptr;
	}

}


