
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

// Function IFNAFVisionFilter.IFNAFVisionFilter_C.IsValidActorForVisionTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIFNAFVisionFilter_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function IFNAFVisionFilter.IFNAFVisionFilter_C.IsValidActorForVisionTest");

	UIFNAFVisionFilter_C_IsValidActorForVisionTest_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
