
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

// Function AnimatronicsState.AnimatronicsState_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimatronicsState_C::Init(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimatronicsState.AnimatronicsState_C.Init");

	UAnimatronicsState_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
