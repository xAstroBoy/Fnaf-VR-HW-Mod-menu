
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

// Function Saul_BP_MotionController.Saul_BP_MotionController_C.StartAntennaeGrabber
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::StartAntennaeGrabber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.StartAntennaeGrabber");

	ASaul_BP_MotionController_C_StartAntennaeGrabber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetAntennaeTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform ASaul_BP_MotionController_C::GetAntennaeTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetAntennaeTransform");

	ASaul_BP_MotionController_C_GetAntennaeTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ProcessDS4Antennae
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::ProcessDS4Antennae(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ProcessDS4Antennae");

	ASaul_BP_MotionController_C_ProcessDS4Antennae_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetTeleportDestination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::GetTeleportDestination(struct FVector* Location, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetTeleportDestination");

	ASaul_BP_MotionController_C_GetTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateRoomScaleOutline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::UpdateRoomScaleOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateRoomScaleOutline");

	ASaul_BP_MotionController_C_UpdateRoomScaleOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.SetupRoomScaleOutline
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::SetupRoomScaleOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.SetupRoomScaleOutline");

	ASaul_BP_MotionController_C_SetupRoomScaleOutline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcEndpoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidLocationFound             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::UpdateArcEndpoint(const struct FVector& NewLocation, bool ValidLocationFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcEndpoint");

	ASaul_BP_MotionController_C_UpdateArcEndpoint_Params params;
	params.NewLocation = NewLocation;
	params.ValidLocationFound = ValidLocationFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FoundValidLocation             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         SplinePoints                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ASaul_BP_MotionController_C::UpdateArcSpline(bool FoundValidLocation, TArray<struct FVector>* SplinePoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.UpdateArcSpline");

	ASaul_BP_MotionController_C_UpdateArcSpline_Params params;
	params.FoundValidLocation = FoundValidLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ClearArc
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::ClearArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ClearArc");

	ASaul_BP_MotionController_C_ClearArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.TraceTeleportDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         TracePoints                    (Parm, OutParm, ZeroConstructor)
// struct FVector                 NavMeshLocation                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TraceLocation                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::TraceTeleportDestination(bool* Success, TArray<struct FVector>* TracePoints, struct FVector* NavMeshLocation, struct FVector* TraceLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.TraceTeleportDestination");

	ASaul_BP_MotionController_C_TraceTeleportDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (TracePoints != nullptr)
		*TracePoints = params.TracePoints;
	if (NavMeshLocation != nullptr)
		*NavMeshLocation = params.NavMeshLocation;
	if (TraceLocation != nullptr)
		*TraceLocation = params.TraceLocation;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.DisableTeleporter
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::DisableTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.DisableTeleporter");

	ASaul_BP_MotionController_C_DisableTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ActivateTeleporter
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::ActivateTeleporter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ActivateTeleporter");

	ASaul_BP_MotionController_C_ActivateTeleporter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GrabActor
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::GrabActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.GrabActor");

	ASaul_BP_MotionController_C_GrabActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReleaseActor
// (Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::ReleaseActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReleaseActor");

	ASaul_BP_MotionController_C_ReleaseActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetActorNearHand
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NearestMesh                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::GetActorNearHand(class AActor** NearestMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.GetActorNearHand");

	ASaul_BP_MotionController_C_GetActorNearHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestMesh != nullptr)
		*NearestMesh = params.NearestMesh;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.UserConstructionScript");

	ASaul_BP_MotionController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASaul_BP_MotionController_C::BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ASaul_BP_MotionController_C_BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASaul_BP_MotionController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveBeginPlay");

	ASaul_BP_MotionController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ReceiveTick");

	ASaul_BP_MotionController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.RumbleController
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::RumbleController(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.RumbleController");

	ASaul_BP_MotionController_C_RumbleController_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASaul_BP_MotionController_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ASaul_BP_MotionController_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnTouch
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::OnTouch()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnTouch");

	ASaul_BP_MotionController_C_OnTouch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnRelease
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::OnRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnRelease");

	ASaul_BP_MotionController_C_OnRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ASaul_BP_MotionController_C::BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ASaul_BP_MotionController_C_BndEvt__FingerCollider_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ASaul_BP_MotionController_C_BndEvt__FingerCollider_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.Hide Flashlight Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           flase                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::Hide_Flashlight_Light(bool flase)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.Hide Flashlight Light");

	ASaul_BP_MotionController_C_Hide_Flashlight_Light_Params params;
	params.flase = flase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.EnterPointerMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     WidgetFingerCollider           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASaul_BP_MotionController_C::EnterPointerMode(class UPrimitiveComponent* WidgetFingerCollider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.EnterPointerMode");

	ASaul_BP_MotionController_C_EnterPointerMode_Params params;
	params.WidgetFingerCollider = WidgetFingerCollider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExitPointerMode
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::ExitPointerMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExitPointerMode");

	ASaul_BP_MotionController_C_ExitPointerMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.FreeHandFromBlocker
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::FreeHandFromBlocker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.FreeHandFromBlocker");

	ASaul_BP_MotionController_C_FreeHandFromBlocker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.Destroy Flashlight, spawn Microphone
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::Destroy_Flashlight_spawn_Microphone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.Destroy Flashlight, spawn Microphone");

	ASaul_BP_MotionController_C_Destroy_Flashlight_spawn_Microphone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.Start Confirmation
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::Start_Confirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.Start Confirmation");

	ASaul_BP_MotionController_C_Start_Confirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete_Event
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::ConfirmationComplete_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete_Event");

	ASaul_BP_MotionController_C_ConfirmationComplete_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnPadTrackingChanged
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::OnPadTrackingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.OnPadTrackingChanged");

	ASaul_BP_MotionController_C_OnPadTrackingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.StopConfirmation
// (BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::StopConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.StopConfirmation");

	ASaul_BP_MotionController_C_StopConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExecuteUbergraph_Saul_BP_MotionController
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASaul_BP_MotionController_C::ExecuteUbergraph_Saul_BP_MotionController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ExecuteUbergraph_Saul_BP_MotionController");

	ASaul_BP_MotionController_C_ExecuteUbergraph_Saul_BP_MotionController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ASaul_BP_MotionController_C::ConfirmationComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Saul_BP_MotionController.Saul_BP_MotionController_C.ConfirmationComplete__DelegateSignature");

	ASaul_BP_MotionController_C_ConfirmationComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
