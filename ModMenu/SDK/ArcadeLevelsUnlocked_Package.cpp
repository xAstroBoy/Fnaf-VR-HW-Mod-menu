/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#include "../pch.h"
#include "ArcadeLevelsUnlocked_Package.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		Offset -> 0x0093BC20
	 * 		Name   -> Function ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C.GetInitialUnlockedLevels
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                UnlockedLevelIDs                                           (Parm, OutParm, ZeroConstructor)
	 */
	void UArcadeLevelsUnlocked_C::STATIC_GetInitialUnlockedLevels(class UObject* __WorldContext, TArray<class FName>* UnlockedLevelIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C.GetInitialUnlockedLevels");
		
		UArcadeLevelsUnlocked_C_GetInitialUnlockedLevels_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockedLevelIDs != nullptr)
			*UnlockedLevelIDs = params.UnlockedLevelIDs;
	}

	/**
	 * Function:
	 * 		Offset -> 0x00000000
	 * 		Name   -> PredefindFunction UArcadeLevelsUnlocked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArcadeLevelsUnlocked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C");
		return ptr;
	}

}


