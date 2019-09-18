
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

// Function Player_PointLight_Head.Player_PointLight_Head_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayer_PointLight_Head_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_PointLight_Head.Player_PointLight_Head_C.UserConstructionScript");

	APlayer_PointLight_Head_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_PointLight_Head.Player_PointLight_Head_C.ExecuteUbergraph_Player_PointLight_Head
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_PointLight_Head_C::ExecuteUbergraph_Player_PointLight_Head(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_PointLight_Head.Player_PointLight_Head_C.ExecuteUbergraph_Player_PointLight_Head");

	APlayer_PointLight_Head_C_ExecuteUbergraph_Player_PointLight_Head_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
