
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

// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHandToPointerProximitySquare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.UserConstructionScript");

	AHandToPointerProximitySquare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHandToPointerProximitySquare_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorBeginOverlap");

	AHandToPointerProximitySquare_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHandToPointerProximitySquare_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ReceiveActorEndOverlap");

	AHandToPointerProximitySquare_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ExecuteUbergraph_HandToPointerProximitySquare
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHandToPointerProximitySquare_C::ExecuteUbergraph_HandToPointerProximitySquare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximitySquare.HandToPointerProximitySquare_C.ExecuteUbergraph_HandToPointerProximitySquare");

	AHandToPointerProximitySquare_C_ExecuteUbergraph_HandToPointerProximitySquare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
