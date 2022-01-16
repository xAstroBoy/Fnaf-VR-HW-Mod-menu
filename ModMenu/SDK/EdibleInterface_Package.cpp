/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "EdibleInterface_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function EdibleInterface.EdibleInterface_C.OnActorEaten
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASaul_MotionControllerPawn_C*                Eater                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEdibleInterface_C::OnActorEaten(class ASaul_MotionControllerPawn_C* Eater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EdibleInterface.EdibleInterface_C.OnActorEaten");
		
		UEdibleInterface_C_OnActorEaten_Params params {};
		params.Eater = Eater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function EdibleInterface.EdibleInterface_C.GetEdibleType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EdibleEnum_EdibleEnum                              EdibleType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEdibleInterface_C::GetEdibleType(EdibleEnum_EdibleEnum* EdibleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EdibleInterface.EdibleInterface_C.GetEdibleType");
		
		UEdibleInterface_C_GetEdibleType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EdibleType != nullptr)
			*EdibleType = params.EdibleType;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UEdibleInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEdibleInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EdibleInterface.EdibleInterface_C");
		return ptr;
	}

}


