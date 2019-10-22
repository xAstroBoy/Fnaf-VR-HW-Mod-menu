
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

// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForChar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOfficeAiBase_Bp_C*      CharacterInstance              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ALocPoint_BP_C*>  ListOfLocations                (Parm, OutParm, ZeroConstructor)

void ARoomInfo_Bp_C::GetAvailableLocationsForChar(class AOfficeAiBase_Bp_C* CharacterInstance, TArray<class ALocPoint_BP_C*>* ListOfLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForChar");

	ARoomInfo_Bp_C_GetAvailableLocationsForChar_Params params;
	params.CharacterInstance = CharacterInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListOfLocations != nullptr)
		*ListOfLocations = params.ListOfLocations;
}


// Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForCharType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                  CharacterType                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// TArray<class ALocPoint_BP_C*>  ListOfLocations                (Parm, OutParm, ZeroConstructor)

void ARoomInfo_Bp_C::GetAvailableLocationsForCharType(class UClass* CharacterType, TArray<class ALocPoint_BP_C*>* ListOfLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.GetAvailableLocationsForCharType");

	ARoomInfo_Bp_C_GetAvailableLocationsForCharType_Params params;
	params.CharacterType = CharacterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListOfLocations != nullptr)
		*ListOfLocations = params.ListOfLocations;
}


// Function RoomInfo_Bp.RoomInfo_Bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARoomInfo_Bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.UserConstructionScript");

	ARoomInfo_Bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomInfo_Bp.RoomInfo_Bp_C.BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ARoomInfo_Bp_C::BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ARoomInfo_Bp_C_BndEvt__RoomCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function RoomInfo_Bp.RoomInfo_Bp_C.BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoomInfo_Bp_C::BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ARoomInfo_Bp_C_BndEvt__RoomCollider_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoomInfo_Bp.RoomInfo_Bp_C.ExecuteUbergraph_RoomInfo_Bp
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARoomInfo_Bp_C::ExecuteUbergraph_RoomInfo_Bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoomInfo_Bp.RoomInfo_Bp_C.ExecuteUbergraph_RoomInfo_Bp");

	ARoomInfo_Bp_C_ExecuteUbergraph_RoomInfo_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
