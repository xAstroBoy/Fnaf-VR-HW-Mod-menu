
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

// Function KillOnFloorHit.KillOnFloorHit_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UKillOnFloorHit_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOnFloorHit.KillOnFloorHit_C.ReceiveBeginPlay");

	UKillOnFloorHit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOnFloorHit.KillOnFloorHit_C.OnActorOverlapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOnFloorHit_C::OnActorOverlapped(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOnFloorHit.KillOnFloorHit_C.OnActorOverlapped");

	UKillOnFloorHit_C_OnActorOverlapped_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillOnFloorHit.KillOnFloorHit_C.ExecuteUbergraph_KillOnFloorHit
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillOnFloorHit_C::ExecuteUbergraph_KillOnFloorHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillOnFloorHit.KillOnFloorHit_C.ExecuteUbergraph_KillOnFloorHit");

	UKillOnFloorHit_C_ExecuteUbergraph_KillOnFloorHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
