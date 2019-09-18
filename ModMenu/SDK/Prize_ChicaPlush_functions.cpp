
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

// Function Prize_ChicaPlush.Prize_ChicaPlush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrize_ChicaPlush_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_ChicaPlush.Prize_ChicaPlush_C.UserConstructionScript");

	APrize_ChicaPlush_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
