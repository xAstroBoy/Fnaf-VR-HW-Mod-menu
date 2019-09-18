
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

// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOffice01_MonitorBoard_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.UserConstructionScript");

	AOffice01_MonitorBoard_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AOffice01_MonitorBoard_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__FinishedFunc");

	AOffice01_MonitorBoard_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AOffice01_MonitorBoard_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Timeline_0__UpdateFunc");

	AOffice01_MonitorBoard_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Event Btn Pressed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Pressed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterial**              CameraMaterial                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ARoomInfo_Bp_C*>* Room                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UStaticMesh**            VentLight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFNAFCamera_Blueprint_C** FNAFCamera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_MonitorBoard_BP_C::Event_Btn_Pressed(int* ID, bool* Pressed, class UMaterial** CameraMaterial, TArray<class ARoomInfo_Bp_C*>* Room, class UStaticMesh** VentLight, class AFNAFCamera_Blueprint_C** FNAFCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.Event Btn Pressed");

	AOffice01_MonitorBoard_BP_C_Event_Btn_Pressed_Params params;
	params.ID = ID;
	params.Pressed = Pressed;
	params.CameraMaterial = CameraMaterial;
	params.Room = Room;
	params.VentLight = VentLight;
	params.FNAFCamera = FNAFCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AOffice01_MonitorBoard_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveBeginPlay");

	AOffice01_MonitorBoard_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.DisableMonitorInteractions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player_Won_Game                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_MonitorBoard_BP_C::DisableMonitorInteractions(bool Player_Won_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.DisableMonitorInteractions");

	AOffice01_MonitorBoard_BP_C_DisableMonitorInteractions_Params params;
	params.Player_Won_Game = Player_Won_Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_MonitorBoard_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ReceiveTick");

	AOffice01_MonitorBoard_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ExecuteUbergraph_Office01_MonitorBoard_BP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AOffice01_MonitorBoard_BP_C::ExecuteUbergraph_Office01_MonitorBoard_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Office01_MonitorBoard_BP.Office01_MonitorBoard_BP_C.ExecuteUbergraph_Office01_MonitorBoard_BP");

	AOffice01_MonitorBoard_BP_C_ExecuteUbergraph_Office01_MonitorBoard_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
