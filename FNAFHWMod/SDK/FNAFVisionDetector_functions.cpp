
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

// Function FNAFVisionDetector.FNAFVisionDetector_C.CheckLOS
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ActorToCheck                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsInLOS                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::CheckLOS(class AActor* ActorToCheck, bool* IsInLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.CheckLOS");

	UFNAFVisionDetector_C_CheckLOS_Params params;
	params.ActorToCheck = ActorToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInLOS != nullptr)
		*IsInLOS = params.IsInLOS;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.ReceiveTick");

	UFNAFVisionDetector_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionCone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     visioncone                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFNAFVisionDetector_C::SetVisionCone(class UPrimitiveComponent* visioncone)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionCone");

	UFNAFVisionDetector_C_SetVisionCone_Params params;
	params.visioncone = visioncone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.ConeBeginOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UFNAFVisionDetector_C::ConeBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.ConeBeginOverlap");

	UFNAFVisionDetector_C_ConeBeginOverlap_Params params;
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


// Function FNAFVisionDetector.FNAFVisionDetector_C.ConeEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::ConeEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.ConeEndOverlap");

	UFNAFVisionDetector_C_ConeEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionFilter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UIFNAFVisionFilter_C> VisionFilterObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::SetVisionFilter(const TScriptInterface<class UIFNAFVisionFilter_C>& VisionFilterObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionFilter");

	UFNAFVisionDetector_C_SetVisionFilter_Params params;
	params.VisionFilterObject = VisionFilterObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionComponent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         SceneComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFNAFVisionDetector_C::SetVisionComponent(class USceneComponent* SceneComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.SetVisionComponent");

	UFNAFVisionDetector_C_SetVisionComponent_Params params;
	params.SceneComponent = SceneComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.ExecuteUbergraph_FNAFVisionDetector
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::ExecuteUbergraph_FNAFVisionDetector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.ExecuteUbergraph_FNAFVisionDetector");

	UFNAFVisionDetector_C_ExecuteUbergraph_FNAFVisionDetector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.OnVisionEnter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::OnVisionEnter__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.OnVisionEnter__DelegateSignature");

	UFNAFVisionDetector_C_OnVisionEnter__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFVisionDetector.FNAFVisionDetector_C.OnVisionExit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFNAFVisionDetector_C::OnVisionExit__DelegateSignature(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFVisionDetector.FNAFVisionDetector_C.OnVisionExit__DelegateSignature");

	UFNAFVisionDetector_C_OnVisionExit__DelegateSignature_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
