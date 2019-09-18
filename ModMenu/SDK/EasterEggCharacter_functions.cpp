
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

// Function EasterEggCharacter.EasterEggCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEasterEggCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EasterEggCharacter.EasterEggCharacter_C.UserConstructionScript");

	AEasterEggCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EasterEggCharacter.EasterEggCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEasterEggCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EasterEggCharacter.EasterEggCharacter_C.ReceiveBeginPlay");

	AEasterEggCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EasterEggCharacter.EasterEggCharacter_C.ExecuteUbergraph_EasterEggCharacter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEasterEggCharacter_C::ExecuteUbergraph_EasterEggCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EasterEggCharacter.EasterEggCharacter_C.ExecuteUbergraph_EasterEggCharacter");

	AEasterEggCharacter_C_ExecuteUbergraph_EasterEggCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
