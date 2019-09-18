
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

// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ConnectDoor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FScriptDelegate         Event_OnDoorAngleChanged       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ANightmareBedroomClosetDoors_C::ConnectDoor(class UChildActorComponent* Door, const struct FScriptDelegate& Event_OnDoorAngleChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ConnectDoor");

	ANightmareBedroomClosetDoors_C_ConnectDoor_Params params;
	params.Door = Door;
	params.Event_OnDoorAngleChanged = Event_OnDoorAngleChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANightmareBedroomClosetDoors_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.UserConstructionScript");

	ANightmareBedroomClosetDoors_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANightmareBedroomClosetDoors_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveBeginPlay");

	ANightmareBedroomClosetDoors_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightmareBedroomClosetDoors_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ReceiveTick");

	ANightmareBedroomClosetDoors_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnLeftDoorAngleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABedroomClosetDoor_C*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightmareBedroomClosetDoors_C::OnLeftDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnLeftDoorAngleChanged");

	ANightmareBedroomClosetDoors_C_OnLeftDoorAngleChanged_Params params;
	params.DoorAngle = DoorAngle;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnRightDoorAngleChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABedroomClosetDoor_C*    Door                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightmareBedroomClosetDoors_C::OnRightDoorAngleChanged(float DoorAngle, class ABedroomClosetDoor_C* Door)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnRightDoorAngleChanged");

	ANightmareBedroomClosetDoors_C_OnRightDoorAngleChanged_Params params;
	params.DoorAngle = DoorAngle;
	params.Door = Door;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.Closed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANightmareBedroomClosetDoors_C::Closed(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.Closed");

	ANightmareBedroomClosetDoors_C_Closed_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnComponentEndOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightmareBedroomClosetDoors_C::OnComponentEndOverlap_Event_1(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.OnComponentEndOverlap_Event_1");

	ANightmareBedroomClosetDoors_C_OnComponentEndOverlap_Event_1_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ExecuteUbergraph_NightmareBedroomClosetDoors
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANightmareBedroomClosetDoors_C::ExecuteUbergraph_NightmareBedroomClosetDoors(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.ExecuteUbergraph_NightmareBedroomClosetDoors");

	ANightmareBedroomClosetDoors_C_ExecuteUbergraph_NightmareBedroomClosetDoors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ANightmareBedroomClosetDoors_C::SendDoorsOpen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsOpen__DelegateSignature");

	ANightmareBedroomClosetDoors_C_SendDoorsOpen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ANightmareBedroomClosetDoors_C::SendDoorsClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NightmareBedroomClosetDoors.NightmareBedroomClosetDoors_C.SendDoorsClosed__DelegateSignature");

	ANightmareBedroomClosetDoors_C_SendDoorsClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
