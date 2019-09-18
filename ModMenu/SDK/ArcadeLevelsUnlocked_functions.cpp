
#include "../SDK.h"

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C.GetInitialUnlockedLevels
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           UnlockedLevelIDs               (Parm, OutParm, ZeroConstructor)

void UArcadeLevelsUnlocked_C::STATIC_GetInitialUnlockedLevels(class UObject* __WorldContext, TArray<struct FName>* UnlockedLevelIDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcadeLevelsUnlocked.ArcadeLevelsUnlocked_C.GetInitialUnlockedLevels");

	UArcadeLevelsUnlocked_C_GetInitialUnlockedLevels_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnlockedLevelIDs != nullptr)
		*UnlockedLevelIDs = params.UnlockedLevelIDs;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
