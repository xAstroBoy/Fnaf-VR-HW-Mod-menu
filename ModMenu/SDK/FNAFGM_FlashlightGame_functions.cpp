
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

// Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFNAFGM_FlashlightGame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.UserConstructionScript");

	AFNAFGM_FlashlightGame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.Flashlight State
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFGM_FlashlightGame_C::Flashlight_State(bool Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.Flashlight State");

	AFNAFGM_FlashlightGame_C_Flashlight_State_Params params;
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFNAFGM_FlashlightGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ReceiveBeginPlay");

	AFNAFGM_FlashlightGame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ExecuteUbergraph_FNAFGM_FlashlightGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFNAFGM_FlashlightGame_C::ExecuteUbergraph_FNAFGM_FlashlightGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FNAFGM_FlashlightGame.FNAFGM_FlashlightGame_C.ExecuteUbergraph_FNAFGM_FlashlightGame");

	AFNAFGM_FlashlightGame_C_ExecuteUbergraph_FNAFGM_FlashlightGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
