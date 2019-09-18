
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

// Function HandToPointerProximity.HandToPointerProximity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHandToPointerProximity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximity.HandToPointerProximity_C.UserConstructionScript");

	AHandToPointerProximity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandToPointerProximity.HandToPointerProximity_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHandToPointerProximity_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximity.HandToPointerProximity_C.ReceiveActorBeginOverlap");

	AHandToPointerProximity_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandToPointerProximity.HandToPointerProximity_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHandToPointerProximity_C::ReceiveActorEndOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximity.HandToPointerProximity_C.ReceiveActorEndOverlap");

	AHandToPointerProximity_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandToPointerProximity.HandToPointerProximity_C.ExecuteUbergraph_HandToPointerProximity
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHandToPointerProximity_C::ExecuteUbergraph_HandToPointerProximity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HandToPointerProximity.HandToPointerProximity_C.ExecuteUbergraph_HandToPointerProximity");

	AHandToPointerProximity_C_ExecuteUbergraph_HandToPointerProximity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
