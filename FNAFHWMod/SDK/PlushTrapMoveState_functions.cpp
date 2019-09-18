
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

// Function PlushTrapMoveState.PlushTrapMoveState_C.GetMovementDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlushTrapMoveState_C::GetMovementDirection(int* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlushTrapMoveState.PlushTrapMoveState_C.GetMovementDirection");

	UPlushTrapMoveState_C_GetMovementDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
