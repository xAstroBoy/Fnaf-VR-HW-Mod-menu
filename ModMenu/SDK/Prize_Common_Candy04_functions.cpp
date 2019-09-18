
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

// Function Prize_Common_Candy04.Prize_Common_Candy04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APrize_Common_Candy04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_Common_Candy04.Prize_Common_Candy04_C.UserConstructionScript");

	APrize_Common_Candy04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_Common_Candy04.Prize_Common_Candy04_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrize_Common_Candy04_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_Common_Candy04.Prize_Common_Candy04_C.ReceiveBeginPlay");

	APrize_Common_Candy04_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_Common_Candy04.Prize_Common_Candy04_C.OnVRHoverBegin
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_Common_Candy04_C::OnVRHoverBegin(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_Common_Candy04.Prize_Common_Candy04_C.OnVRHoverBegin");

	APrize_Common_Candy04_C_OnVRHoverBegin_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_Common_Candy04.Prize_Common_Candy04_C.OnVRHoverEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASWGVRCharacter**        Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVRHandType*                   Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_Common_Candy04_C::OnVRHoverEnd(class ASWGVRCharacter** Sender, EVRHandType* Hand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_Common_Candy04.Prize_Common_Candy04_C.OnVRHoverEnd");

	APrize_Common_Candy04_C_OnVRHoverEnd_Params params;
	params.Sender = Sender;
	params.Hand = Hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prize_Common_Candy04.Prize_Common_Candy04_C.ExecuteUbergraph_Prize_Common_Candy04
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrize_Common_Candy04_C::ExecuteUbergraph_Prize_Common_Candy04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prize_Common_Candy04.Prize_Common_Candy04_C.ExecuteUbergraph_Prize_Common_Candy04");

	APrize_Common_Candy04_C_ExecuteUbergraph_Prize_Common_Candy04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
