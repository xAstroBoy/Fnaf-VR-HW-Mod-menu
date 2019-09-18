
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

// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeleportSpot_Door_BP_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.UserConstructionScript");

	ATeleportSpot_Door_BP_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ATeleportSpot_Door_BP_Child_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0__FinishedFunc");

	ATeleportSpot_Door_BP_Child_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ATeleportSpot_Door_BP_Child_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Timeline_0__UpdateFunc");

	ATeleportSpot_Door_BP_Child_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Close Door
// (BlueprintCallable, BlueprintEvent)

void ATeleportSpot_Door_BP_Child_C::Close_Door()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.Close Door");

	ATeleportSpot_Door_BP_Child_C_Close_Door_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATeleportSpot_Door_BP_Child_C::BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ATeleportSpot_Door_BP_Child_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportSpot_Door_BP_Child_C::BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature");

	ATeleportSpot_Door_BP_Child_C_BndEvt__Door_Collision_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.TeleportSelected
// (Public, BlueprintCallable, BlueprintEvent)

void ATeleportSpot_Door_BP_Child_C::TeleportSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.TeleportSelected");

	ATeleportSpot_Door_BP_Child_C_TeleportSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.ExecuteUbergraph_TeleportSpot_Door_BP_Child
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeleportSpot_Door_BP_Child_C::ExecuteUbergraph_TeleportSpot_Door_BP_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeleportSpot_Door_BP_Child.TeleportSpot_Door_BP_Child_C.ExecuteUbergraph_TeleportSpot_Door_BP_Child");

	ATeleportSpot_Door_BP_Child_C_ExecuteUbergraph_TeleportSpot_Door_BP_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
