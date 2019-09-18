
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

// Function HeadLight.HeadLight_C.Light Intensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Off                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::Light_Intensity(bool Off)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Light Intensity");

	AHeadLight_C_Light_Intensity_Params params;
	params.Off = Off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHeadLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.UserConstructionScript");

	AHeadLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Dyling Flashlight Flicker__FinishedFunc
// (BlueprintEvent)

void AHeadLight_C::Dyling_Flashlight_Flicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Dyling Flashlight Flicker__FinishedFunc");

	AHeadLight_C_Dyling_Flashlight_Flicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Dyling Flashlight Flicker__UpdateFunc
// (BlueprintEvent)

void AHeadLight_C::Dyling_Flashlight_Flicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Dyling Flashlight Flicker__UpdateFunc");

	AHeadLight_C_Dyling_Flashlight_Flicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AHeadLight_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Timeline_0__FinishedFunc");

	AHeadLight_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AHeadLight_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Timeline_0__UpdateFunc");

	AHeadLight_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AHeadLight_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Timeline_1__FinishedFunc");

	AHeadLight_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AHeadLight_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Timeline_1__UpdateFunc");

	AHeadLight_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AHeadLight_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Timeline_2__FinishedFunc");

	AHeadLight_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AHeadLight_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Timeline_2__UpdateFunc");

	AHeadLight_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.OnVRHoverComponentBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::OnVRHoverComponentBegin(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.OnVRHoverComponentBegin");

	AHeadLight_C_OnVRHoverComponentBegin_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.OnVRHoverComponentEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::OnVRHoverComponentEnd(class ASWGVRCharacter* Sender, class UPrimitiveComponent* HoveredComponent, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.OnVRHoverComponentEnd");

	AHeadLight_C_OnVRHoverComponentEnd_Params params;
	params.Sender = Sender;
	params.HoveredComponent = HoveredComponent;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::OnVRHoverEnd(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.OnVRHoverEnd");

	AHeadLight_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::OnVRHoverBegin(class ASWGVRCharacter* Sender, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.OnVRHoverBegin");

	AHeadLight_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Turn Off
// (BlueprintCallable, BlueprintEvent)

void AHeadLight_C::Turn_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Turn Off");

	AHeadLight_C_Turn_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Turn On
// (BlueprintCallable, BlueprintEvent)

void AHeadLight_C::Turn_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Turn On");

	AHeadLight_C_Turn_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.OnVRInteract
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter*         VRCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType                    Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::OnVRInteract(class ASWGVRCharacter* VRCharacter, EVRHandType Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.OnVRInteract");

	AHeadLight_C_OnVRInteract_Params params;
	params.VRCharacter = VRCharacter;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHeadLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.ReceiveBeginPlay");

	AHeadLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void AHeadLight_C::Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Drop");

	AHeadLight_C_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         AttachTo                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AHeadLight_C::Pickup(class USceneComponent* AttachTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Pickup");

	AHeadLight_C_Pickup_Params params;
	params.AttachTo = AttachTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Toggle Flicker Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Collision               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OffAfterFlicker                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::Toggle_Flicker_Test(bool Enable_Collision, bool OffAfterFlicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Toggle Flicker Test");

	AHeadLight_C_Toggle_Flicker_Test_Params params;
	params.Enable_Collision = Enable_Collision;
	params.OffAfterFlicker = OffAfterFlicker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.HeavyFlickerEvent
// (BlueprintCallable, BlueprintEvent)

void AHeadLight_C::HeavyFlickerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.HeavyFlickerEvent");

	AHeadLight_C_HeavyFlickerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.ExecuteUbergraph_HeadLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AHeadLight_C::ExecuteUbergraph_HeadLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.ExecuteUbergraph_HeadLight");

	AHeadLight_C_ExecuteUbergraph_HeadLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Toggle Flicker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AHeadLight_C::Toggle_Flicker__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Toggle Flicker__DelegateSignature");

	AHeadLight_C_Toggle_Flicker__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeadLight.HeadLight_C.Freddy Is Hit by the light__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AHeadLight_C::Freddy_Is_Hit_by_the_light__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeadLight.HeadLight_C.Freddy Is Hit by the light__DelegateSignature");

	AHeadLight_C_Freddy_Is_Hit_by_the_light__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
