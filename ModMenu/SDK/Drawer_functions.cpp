
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

// Function Drawer.Drawer_C.Initalize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADrawer_C::Initalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.Initalize");

	ADrawer_C_Initalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drawer.Drawer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADrawer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.UserConstructionScript");

	ADrawer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drawer.Drawer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADrawer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.ReceiveBeginPlay");

	ADrawer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drawer.Drawer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawer_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.ReceiveTick");

	ADrawer_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drawer.Drawer_C.ResetHandlePosition
// (BlueprintCallable, BlueprintEvent)

void ADrawer_C::ResetHandlePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.ResetHandlePosition");

	ADrawer_C_ResetHandlePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drawer.Drawer_C.OnHandleHoverChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enter                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawer_C::OnHandleHoverChanged(bool Enter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.OnHandleHoverChanged");

	ADrawer_C_OnHandleHoverChanged_Params params;
	params.Enter = Enter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Drawer.Drawer_C.ExecuteUbergraph_Drawer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADrawer_C::ExecuteUbergraph_Drawer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Drawer.Drawer_C.ExecuteUbergraph_Drawer");

	ADrawer_C_ExecuteUbergraph_Drawer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
