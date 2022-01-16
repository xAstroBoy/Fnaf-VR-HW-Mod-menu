/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "DropPointActorCondition_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function DropPointActorCondition.DropPointActorCondition_C.IsGrabbableValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      GrabbableActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDropPointActorCondition_C::IsGrabbableValid(class AActor* GrabbableActor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DropPointActorCondition.DropPointActorCondition_C.IsGrabbableValid");
		
		UDropPointActorCondition_C_IsGrabbableValid_Params params {};
		params.GrabbableActor = GrabbableActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UDropPointActorCondition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropPointActorCondition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DropPointActorCondition.DropPointActorCondition_C");
		return ptr;
	}

}


