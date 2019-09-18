
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

// Function BedroomClosetDoors.BedroomClosetDoors_C.ConnectDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Event_OnDoorAngleChanged       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABedroomClosetDoors_C::ConnectDoor(class UChildActorComponent* Door, const struct FScriptDelegate& Event_OnDoorAngleChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ConnectDoor");

	ABedroomClosetDoors_C_ConnectDoor_Params params;
	params.Door = Door;
	params.Event_OnDoorAngleChanged = Event_OnDoorAngleChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoors_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.UserConstructionScript");

	ABedroomClosetDoors_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__FinishedFunc
// (BlueprintEvent)

void ABedroomClosetDoors_C::OpenCloset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__FinishedFunc");

	ABedroomClosetDoors_C_OpenCloset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__UpdateFunc
// (BlueprintEvent)

void ABedroomClosetDoors_C::OpenCloset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__UpdateFunc");

	ABedroomClosetDoors_C_OpenCloset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__TriggerDoorSound__EventFunc
// (BlueprintEvent)

void ABedroomClosetDoors_C::OpenCloset__TriggerDoorSound__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenCloset__TriggerDoorSound__EventFunc");

	ABedroomClosetDoors_C_OpenCloset__TriggerDoorSound__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABedroomClosetDoors_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__FinishedFunc");

	ABedroomClosetDoors_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABedroomClosetDoors_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__UpdateFunc");

	ABedroomClosetDoors_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__TriggerDoorSound__EventFunc
// (BlueprintEvent)

void ABedroomClosetDoors_C::Timeline_0__TriggerDoorSound__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.Timeline_0__TriggerDoorSound__EventFunc");

	ABedroomClosetDoors_C_Timeline_0__TriggerDoorSound__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABedroomClosetDoors_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveBeginPlay");

	ABedroomClosetDoors_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoors_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ReceiveTick");

	ABedroomClosetDoors_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OnLeftDoorAngleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABedroomClosetDoor_C*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoors_C::OnLeftDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OnLeftDoorAngleChanged");

	ABedroomClosetDoors_C_OnLeftDoorAngleChanged_Params params;
	params.DoorAngle = DoorAngle;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OnRightDoorAngleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABedroomClosetDoor_C*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoors_C::OnRightDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OnRightDoorAngleChanged");

	ABedroomClosetDoors_C_OnRightDoorAngleChanged_Params params;
	params.DoorAngle = DoorAngle;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.InitClosetDoor
// (BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoors_C::InitClosetDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.InitClosetDoor");

	ABedroomClosetDoors_C_InitClosetDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.CloseClosetDoors
// (BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoors_C::CloseClosetDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.CloseClosetDoors");

	ABedroomClosetDoors_C_CloseClosetDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenClosetDoors
// (BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoors_C::OpenClosetDoors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenClosetDoors");

	ABedroomClosetDoors_C_OpenClosetDoors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.OpenDoorWide
// (BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoors_C::OpenDoorWide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.OpenDoorWide");

	ABedroomClosetDoors_C_OpenDoorWide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.KeepClosetDoorsShut
// (BlueprintCallable, BlueprintEvent)

void ABedroomClosetDoors_C::KeepClosetDoorsShut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.KeepClosetDoorsShut");

	ABedroomClosetDoors_C_KeepClosetDoorsShut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BedroomClosetDoors.BedroomClosetDoors_C.ExecuteUbergraph_BedroomClosetDoors
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABedroomClosetDoors_C::ExecuteUbergraph_BedroomClosetDoors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BedroomClosetDoors.BedroomClosetDoors_C.ExecuteUbergraph_BedroomClosetDoors");

	ABedroomClosetDoors_C_ExecuteUbergraph_BedroomClosetDoors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
