
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

// Function PrizeDLC_Candy_Drop01.PrizeDLC_Candy_Drop01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrizeDLC_Candy_Drop01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizeDLC_Candy_Drop01.PrizeDLC_Candy_Drop01_C.UserConstructionScript");

	APrizeDLC_Candy_Drop01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
