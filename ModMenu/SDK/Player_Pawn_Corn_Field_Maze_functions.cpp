
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

// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.IsValidActorForVisionTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayer_Pawn_Corn_Field_Maze_C::IsValidActorForVisionTest(class AActor* Actor, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.IsValidActorForVisionTest");

	APlayer_Pawn_Corn_Field_Maze_C_IsValidActorForVisionTest_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.GetPlayerForward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APlayer_Pawn_Corn_Field_Maze_C::GetPlayerForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.GetPlayerForward");

	APlayer_Pawn_Corn_Field_Maze_C_GetPlayerForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.GetPlayerPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector APlayer_Pawn_Corn_Field_Maze_C::GetPlayerPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.GetPlayerPosition");

	APlayer_Pawn_Corn_Field_Maze_C_GetPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.HandleHideSpotAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APlayer_Pawn_Corn_Field_Maze_C::HandleHideSpotAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.HandleHideSpotAim");

	APlayer_Pawn_Corn_Field_Maze_C_HandleHideSpotAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Set Hiding Corn Scene
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unhide                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_Pawn_Corn_Field_Maze_C::Set_Hiding_Corn_Scene(bool Unhide)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Set Hiding Corn Scene");

	APlayer_Pawn_Corn_Field_Maze_C_Set_Hiding_Corn_Scene_Params params;
	params.Unhide = Unhide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayer_Pawn_Corn_Field_Maze_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.UserConstructionScript");

	APlayer_Pawn_Corn_Field_Maze_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_GrabRight_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_GrabRight_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_GrabRight_K2Node_InputActionEvent_14");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_GrabRight_K2Node_InputActionEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_GrabRight_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_GrabRight_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_GrabRight_K2Node_InputActionEvent_13");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_GrabRight_K2Node_InputActionEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapLeft_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_MotionSnapLeft_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapLeft_K2Node_InputActionEvent_12");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_MotionSnapLeft_K2Node_InputActionEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapRight_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_MotionSnapRight_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapRight_K2Node_InputActionEvent_11");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_MotionSnapRight_K2Node_InputActionEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Action_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::Action_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Action_K2Node_InputActionEvent_10");

	APlayer_Pawn_Corn_Field_Maze_C_Action_K2Node_InputActionEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Action_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::Action_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Action_K2Node_InputActionEvent_9");

	APlayer_Pawn_Corn_Field_Maze_C_Action_K2Node_InputActionEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_CornMazeSprint_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_CornMazeSprint_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_CornMazeSprint_K2Node_InputActionEvent_8");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_CornMazeSprint_K2Node_InputActionEvent_8_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_CornMazeSprint_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_CornMazeSprint_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_CornMazeSprint_K2Node_InputActionEvent_7");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_CornMazeSprint_K2Node_InputActionEvent_7_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_6");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_5");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_4");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapLeft (PS4 Move)_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_MotionSnapLeft__PS4_Move__K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapLeft (PS4 Move)_K2Node_InputActionEvent_2");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_MotionSnapLeft__PS4_Move__K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapRight (PS4 Move)_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayer_Pawn_Corn_Field_Maze_C::InpActEvt_MotionSnapRight__PS4_Move__K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.InpActEvt_MotionSnapRight (PS4 Move)_K2Node_InputActionEvent_1");

	APlayer_Pawn_Corn_Field_Maze_C_InpActEvt_MotionSnapRight__PS4_Move__K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayer_Pawn_Corn_Field_Maze_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.ReceiveBeginPlay");

	APlayer_Pawn_Corn_Field_Maze_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_Pawn_Corn_Field_Maze_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.ReceiveTick");

	APlayer_Pawn_Corn_Field_Maze_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Start Sprint
// (BlueprintCallable, BlueprintEvent)

void APlayer_Pawn_Corn_Field_Maze_C::Start_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Start Sprint");

	APlayer_Pawn_Corn_Field_Maze_C_Start_Sprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Stop Sprint
// (BlueprintCallable, BlueprintEvent)

void APlayer_Pawn_Corn_Field_Maze_C::Stop_Sprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.Stop Sprint");

	APlayer_Pawn_Corn_Field_Maze_C_Stop_Sprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.PlayerFootFallLoop
// (BlueprintCallable, BlueprintEvent)

void APlayer_Pawn_Corn_Field_Maze_C::PlayerFootFallLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.PlayerFootFallLoop");

	APlayer_Pawn_Corn_Field_Maze_C_PlayerFootFallLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.ExecuteUbergraph_Player_Pawn_Corn_Field_Maze
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_Pawn_Corn_Field_Maze_C::ExecuteUbergraph_Player_Pawn_Corn_Field_Maze(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.ExecuteUbergraph_Player_Pawn_Corn_Field_Maze");

	APlayer_Pawn_Corn_Field_Maze_C_ExecuteUbergraph_Player_Pawn_Corn_Field_Maze_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.PlayerHide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHidding                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayer_Pawn_Corn_Field_Maze_C::PlayerHide__DelegateSignature(bool PlayerHidding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C.PlayerHide__DelegateSignature");

	APlayer_Pawn_Corn_Field_Maze_C_PlayerHide__DelegateSignature_Params params;
	params.PlayerHidding = PlayerHidding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
