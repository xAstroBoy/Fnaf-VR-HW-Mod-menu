
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

// Function UIPlayerLocation.UIPlayerLocation_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMPFreddyPawnBase_C*     TrackedCharacter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIPlayerLocation_C::Setup(class AMPFreddyPawnBase_C* TrackedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPlayerLocation.UIPlayerLocation_C.Setup");

	UUIPlayerLocation_C_Setup_Params params;
	params.TrackedCharacter = TrackedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UIPlayerLocation.UIPlayerLocation_C.ExecuteUbergraph_UIPlayerLocation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUIPlayerLocation_C::ExecuteUbergraph_UIPlayerLocation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UIPlayerLocation.UIPlayerLocation_C.ExecuteUbergraph_UIPlayerLocation");

	UUIPlayerLocation_C_ExecuteUbergraph_UIPlayerLocation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
