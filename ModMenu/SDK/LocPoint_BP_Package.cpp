/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "LocPoint_BP_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LocPoint_BP.LocPoint_BP_C.IsAvailable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               IsAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALocPoint_BP_C::IsAvailable(bool* IsAvailable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.IsAvailable");
		
		ALocPoint_BP_C_IsAvailable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAvailable != nullptr)
			*IsAvailable = params.IsAvailable;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LocPoint_BP.LocPoint_BP_C.GetOwnerOfficeAi
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AOfficeAiBase_Bp_C*                          CharacterAtLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALocPoint_BP_C::GetOwnerOfficeAi(class AOfficeAiBase_Bp_C** CharacterAtLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.GetOwnerOfficeAi");
		
		ALocPoint_BP_C_GetOwnerOfficeAi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterAtLocation != nullptr)
			*CharacterAtLocation = params.CharacterAtLocation;
	}

	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function LocPoint_BP.LocPoint_BP_C.SetOwnerOfficeAi
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AOfficeAiBase_Bp_C*                          OwnerAi                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OwnerSet                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALocPoint_BP_C::SetOwnerOfficeAi(class AOfficeAiBase_Bp_C* OwnerAi, bool* OwnerSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LocPoint_BP.LocPoint_BP_C.SetOwnerOfficeAi");
		
		ALocPoint_BP_C_SetOwnerOfficeAi_Params params {};
		params.OwnerAi = OwnerAi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OwnerSet != nullptr)
			*OwnerSet = params.OwnerSet;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction ALocPoint_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALocPoint_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LocPoint_BP.LocPoint_BP_C");
		return ptr;
	}

}


