
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

// Function Office04_GameManager.Office04_GameManager_C.CheckLightBoxCollision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOffice04_LightCollider_C* LightCollider                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOffice04_GameManager_C::CheckLightBoxCollision(class AOffice04_LightCollider_C* LightCollider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.CheckLightBoxCollision");

	AOffice04_GameManager_C_CheckLightBoxCollision_Params params;
	params.LightCollider = LightCollider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Office04_GameManager.Office04_GameManager_C.EnableLightBoxCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Collision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AOffice04_LightCollider_C* Light_Collider                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_GameManager_C::EnableLightBoxCollision(bool Enable_Collision, class AOffice04_LightCollider_C* Light_Collider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.EnableLightBoxCollision");

	AOffice04_GameManager_C_EnableLightBoxCollision_Params params;
	params.Enable_Collision = Enable_Collision;
	params.Light_Collider = Light_Collider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.GetRoomTransitions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName*                  Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FOfficeRoomTransition_Struct> RoomTransitions                (Parm, OutParm, ZeroConstructor)

void AOffice04_GameManager_C::GetRoomTransitions(struct FName* Room, TArray<struct FOfficeRoomTransition_Struct>* RoomTransitions)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.GetRoomTransitions");

	AOffice04_GameManager_C_GetRoomTransitions_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RoomTransitions != nullptr)
		*RoomTransitions = params.RoomTransitions;
}


// Function Office04_GameManager.Office04_GameManager_C.PlayerAtDoor
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_GameManager_C::PlayerAtDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.PlayerAtDoor");

	AOffice04_GameManager_C_PlayerAtDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.StartGame
// (Public, BlueprintCallable, BlueprintEvent)

void AOffice04_GameManager_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.StartGame");

	AOffice04_GameManager_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice04_GameManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.UserConstructionScript");

	AOffice04_GameManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_GameManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.ReceiveTick");

	AOffice04_GameManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.FlashlightHit
// (BlueprintCallable, BlueprintEvent)

void AOffice04_GameManager_C::FlashlightHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.FlashlightHit");

	AOffice04_GameManager_C_FlashlightHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.EventStartClock
// (BlueprintCallable, BlueprintEvent)

void AOffice04_GameManager_C::EventStartClock()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.EventStartClock");

	AOffice04_GameManager_C_EventStartClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.ExecuteUbergraph_Office04_GameManager
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_GameManager_C::ExecuteUbergraph_Office04_GameManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.ExecuteUbergraph_Office04_GameManager");

	AOffice04_GameManager_C_ExecuteUbergraph_Office04_GameManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office04_GameManager.Office04_GameManager_C.OnFlashlightHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARoomInfo_Bp_C*          Room                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice04_GameManager_C::OnFlashlightHit__DelegateSignature(class ARoomInfo_Bp_C* Room)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office04_GameManager.Office04_GameManager_C.OnFlashlightHit__DelegateSignature");

	AOffice04_GameManager_C_OnFlashlightHit__DelegateSignature_Params params;
	params.Room = Room;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
