#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C
// 0x00FF (0x0F68 - 0x0E69)
class APlayer_Pawn_Corn_Field_Maze_C : public ASaul_MotionControllerPawn_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E69(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PlayerLight;                                              // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        visioncone;                                               // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Line_Trace_Start;                                         // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            CornRadius;                                               // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ACornFieldHideSpot_Master_C*>         Hiding_Locations_Array;                                   // 0x0E98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UBillboardComponent*                         Set_Hiding_Spot;                                          // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     Set_Closest_Location_Vector;                              // 0x0EB0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Shortest_Location;                                // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Save_Location_before_Hiding;                              // 0x0EC4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Player_found_hiding_spot;                                 // 0x0ED0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0ED1(0x0003) MISSED OFFSET
	float                                              Set_Rotation;                                             // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AHigh_Poly_Corn_Hiding_Spot_C*               High_Poly_Corn_Ref;                                       // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               IsHiding;                                                 // 0x0EE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MovingEnabled;                                            // 0x0EE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0EE2(0x0006) MISSED OFFSET
	class UCurveFloat*                                 MovementCurve;                                            // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TapCounter;                                               // 0x0EF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0EF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSprinting;                                              // 0x0EFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0EFD(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerHide;                                               // 0x0F00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTransform                                  TransformBeforeHiding;                                    // 0x0F10(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SnapRotationBeforeHiding;                                 // 0x0F40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HidingEnabled;                                            // 0x0F44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InHidingRange;                                            // 0x0F45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookingAtHideSpot;                                        // 0x0F46(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0F47(0x0001) MISSED OFFSET
	class ACornFieldHideSpot_Master_C*                 Hovered_Hiding_Location;                                  // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunningToHide;                                            // 0x0F50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0F51(0x0007) MISSED OFFSET
	class ACornFieldHideSpot_Master_C*                 Hiding_Location;                                          // 0x0F58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                FootStepTimerHandle;                                      // 0x0F60(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Player_Pawn_Corn_Field_Maze.Player_Pawn_Corn_Field_Maze_C");
		return ptr;
	}


	void IsValidActorForVisionTest(class AActor* Actor, bool* IsValid);
	struct FVector GetPlayerForward();
	struct FVector GetPlayerPosition();
	void HandleHideSpotAim();
	void Set_Hiding_Corn_Scene(bool Unhide);
	void UserConstructionScript();
	void InpActEvt_GrabRight_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_GrabRight_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_MotionSnapLeft_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_MotionSnapRight_K2Node_InputActionEvent_11(const struct FKey& Key);
	void Action_K2Node_InputActionEvent_10(const struct FKey& Key);
	void Action_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_CornMazeSprint_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_CornMazeSprint_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_HeightAdjustUp_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_HeightAdjustDown_K2Node_InputActionEvent_3(struct FKey* Key);
	void InpActEvt_MotionSnapLeft__PS4_Move__K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_MotionSnapRight__PS4_Move__K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Start_Sprint();
	void Stop_Sprint();
	void PlayerFootFallLoop();
	void ExecuteUbergraph_Player_Pawn_Corn_Field_Maze(int EntryPoint);
	void PlayerHide__DelegateSignature(bool PlayerHidding);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
