
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

// Function HangingBanner_Bp.HangingBanner_Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHangingBanner_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HangingBanner_Bp.HangingBanner_Bp_C.UserConstructionScript");

	AHangingBanner_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
