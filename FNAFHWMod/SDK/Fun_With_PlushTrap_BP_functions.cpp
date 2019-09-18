
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

// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.FunWithNMBB_ABP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFunWithNMBB_ABP_C*      FunWithNMBB_ABP                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::FunWithNMBB_ABP(class UFunWithNMBB_ABP_C** FunWithNMBB_ABP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.FunWithNMBB_ABP");

	AFun_With_PlushTrap_BP_C_FunWithNMBB_ABP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FunWithNMBB_ABP != nullptr)
		*FunWithNMBB_ABP = params.FunWithNMBB_ABP;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.FunWithPlushtrapABP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFunWithPlushtrap_ABP_C* FunWithPlushtrapABP            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::FunWithPlushtrapABP(class UFunWithPlushtrap_ABP_C** FunWithPlushtrapABP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.FunWithPlushtrapABP");

	AFun_With_PlushTrap_BP_C_FunWithPlushtrapABP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FunWithPlushtrapABP != nullptr)
		*FunWithPlushtrapABP = params.FunWithPlushtrapABP;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.Fun with PlushTrap Anim BP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFun_With_PlushTrap_Anim_BP_C* Fun_With_Plush_Trap_Anim_BP_Ref (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::Fun_with_PlushTrap_Anim_BP(class UFun_With_PlushTrap_Anim_BP_C** Fun_With_Plush_Trap_Anim_BP_Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.Fun with PlushTrap Anim BP");

	AFun_With_PlushTrap_BP_C_Fun_with_PlushTrap_Anim_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Fun_With_Plush_Trap_Anim_BP_Ref != nullptr)
		*Fun_With_Plush_Trap_Anim_BP_Ref = params.Fun_With_Plush_Trap_Anim_BP_Ref;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.GetPlushTrapState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlushTrapState_C*       NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::GetPlushTrapState(class UPlushTrapState_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.GetPlushTrapState");

	AFun_With_PlushTrap_BP_C_GetPlushTrapState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.SetPlushTrapState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::SetPlushTrapState(class UClass* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.SetPlushTrapState");

	AFun_With_PlushTrap_BP_C_SetPlushTrapState_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFun_With_PlushTrap_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.UserConstructionScript");

	AFun_With_PlushTrap_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AFun_With_PlushTrap_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AFun_With_PlushTrap_BP_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.PlayerKilled
// (BlueprintCallable, BlueprintEvent)

void AFun_With_PlushTrap_BP_C::PlayerKilled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.PlayerKilled");

	AFun_With_PlushTrap_BP_C_PlayerKilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AFun_With_PlushTrap_BP_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFun_With_PlushTrap_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.ReceiveBeginPlay");

	AFun_With_PlushTrap_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.SFX_Timer
// (BlueprintCallable, BlueprintEvent)

void AFun_With_PlushTrap_BP_C::SFX_Timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.SFX_Timer");

	AFun_With_PlushTrap_BP_C_SFX_Timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.ExecuteUbergraph_Fun_With_PlushTrap_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::ExecuteUbergraph_Fun_With_PlushTrap_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.ExecuteUbergraph_Fun_With_PlushTrap_BP");

	AFun_With_PlushTrap_BP_C_ExecuteUbergraph_Fun_With_PlushTrap_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.OnPlushTrapStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlushTrapState_C*       PlushTrapState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFun_With_PlushTrap_BP_C::OnPlushTrapStateChanged__DelegateSignature(class UPlushTrapState_C* PlushTrapState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fun_With_PlushTrap_BP.Fun_With_PlushTrap_BP_C.OnPlushTrapStateChanged__DelegateSignature");

	AFun_With_PlushTrap_BP_C_OnPlushTrapStateChanged__DelegateSignature_Params params;
	params.PlushTrapState = PlushTrapState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
