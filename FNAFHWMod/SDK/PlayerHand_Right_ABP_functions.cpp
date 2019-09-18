
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

// Function PlayerHand_Right_ABP.PlayerHand_Right_ABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHand_Right_ABP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHand_Right_ABP.PlayerHand_Right_ABP_C.BlueprintUpdateAnimation");

	UPlayerHand_Right_ABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerHand_Right_ABP.PlayerHand_Right_ABP_C.ExecuteUbergraph_PlayerHand_Right_ABP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerHand_Right_ABP_C::ExecuteUbergraph_PlayerHand_Right_ABP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerHand_Right_ABP.PlayerHand_Right_ABP_C.ExecuteUbergraph_PlayerHand_Right_ABP");

	UPlayerHand_Right_ABP_C_ExecuteUbergraph_PlayerHand_Right_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
