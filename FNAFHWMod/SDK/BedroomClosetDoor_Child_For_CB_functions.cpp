
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

// Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoor_Child_For_CB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.UserConstructionScript");

	ABedroomClosetDoor_Child_For_CB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABedroomClosetDoor_Child_For_CB_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ReceiveBeginPlay");

	ABedroomClosetDoor_Child_For_CB_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ExecuteUbergraph_BedroomClosetDoor_Child_For_CB
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoor_Child_For_CB_C::ExecuteUbergraph_BedroomClosetDoor_Child_For_CB(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoor_Child_For_CB.BedroomClosetDoor_Child_For_CB_C.ExecuteUbergraph_BedroomClosetDoor_Child_For_CB");

	ABedroomClosetDoor_Child_For_CB_C_ExecuteUbergraph_BedroomClosetDoor_Child_For_CB_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
