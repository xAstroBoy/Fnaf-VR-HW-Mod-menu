﻿#pragma once

// --------------------------------------- \\
//      Sdk Generated By ( CheatGear )     \\
// --------------------------------------- \\
// Name: Fnaf Help Wanted, Version: 1

#include <set>
#include <string>
#include <vector>
#include <locale>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <cstdint>
#include <Windows.h>

#include "SDK/BasicTypes_Package.h"
#include "SDK/CoreUObject_Package.h"
#include "SDK/InputCore_Package.h"
#include "SDK/AudioPlatformConfiguration_Package.h"
#include "SDK/SlateCore_Package.h"
#include "SDK/PacketHandler_Package.h"
#include "SDK/Slate_Package.h"
#include "SDK/PhysicsCore_Package.h"
#include "SDK/Engine_Package.h"
#include "SDK/EdibleEnum_Package.h"
#include "SDK/HeadMountedDisplay_Package.h"
#include "SDK/SWGVR_Package.h"
#include "SDK/PrizeType_Package.h"
#include "SDK/Prize_Item_Struct_Package.h"
#include "SDK/Prize_Parent_Package.h"
#include "SDK/Prize_DLC_NMChica_AF_Package.h"
#include "SDK/Prize_Rare_Plushy03_Package.h"
#include "SDK/PropertyPath_Package.h"
#include "SDK/MovieScene_Package.h"
#include "SDK/MovieSceneTracks_Package.h"
#include "SDK/UMG_Package.h"
#include "SDK/MPLobbyUIPlayerSlot_Package.h"
#include "SDK/Power_Package.h"
#include "SDK/Prize_EnnardAF_Package.h"
#include "SDK/FlashlightBase_Package.h"
#include "SDK/TimeManagement_Package.h"
#include "SDK/PrizeDLC_CandyBucket_Package.h"
#include "SDK/AnimationCore_Package.h"
#include "SDK/GeometryCollectionSimulationCore_Package.h"
#include "SDK/AnimGraphRuntime_Package.h"
#include "SDK/CupcakeABP_Package.h"
#include "SDK/MonitorButton_Interactable_BP_Package.h"
#include "SDK/FreddyCharacterType_Package.h"
#include "SDK/OfficeAIDataStruct_Package.h"
#include "SDK/AssignedMaskType_Enum_Package.h"
#include "SDK/Office02_AiBase_BP_Package.h"
#include "SDK/Office02_WitheredFreddy_Package.h"
#include "SDK/Prize_ChicaLemonAbr_Package.h"
#include "SDK/RoomInfo_Bp_Package.h"
#include "SDK/ClothingSystemRuntimeInterface_Package.h"
#include "SDK/ClothingSystemRuntime_Package.h"
#include "SDK/BigToy_Office04_AnimBP_Package.h"
#include "SDK/UIPlayerLocation_Package.h"
#include "SDK/NightTerrorDoorInstructions_Package.h"
#include "SDK/BaseButtonText_Package.h"
#include "SDK/MPFreddyPawnBase_Package.h"
#include "SDK/MPChicaPawn_Package.h"
#include "SDK/Prize_CakeSlice_Package.h"
#include "SDK/Timer_BP_Base_Package.h"
#include "SDK/FieldSystemCore_Package.h"
#include "SDK/VectorVM_Package.h"
#include "SDK/Instructions_Base_Package.h"
#include "SDK/PrizeDLC_Candy_Bar03_Package.h"
#include "SDK/PrizeDLC_Candy_Twist03_Package.h"
#include "SDK/DropPoint_Package.h"
#include "SDK/LerpPointState_Package.h"
#include "SDK/DropPointLerpPosition_Package.h"
#include "SDK/DropPointLerpActorCondition_Package.h"
#include "SDK/GameTypeEnum_Package.h"
#include "SDK/freddys_Package.h"
#include "SDK/GameTypeEnum_Package.h"
#include "SDK/LevelInfoStruct_Package.h"
#include "SDK/DropPoint_ChicaCupcake_Package.h"
#include "SDK/IFNAFVisionFilter_Package.h"
#include "SDK/OfficeRoomTransition_Struct_Package.h"
#include "SDK/TokenUI_Package.h"
#include "SDK/Office02_WitheredChica_Package.h"
#include "SDK/WmfMediaFactory_Package.h"
#include "SDK/MonitorBoard_BP_Package.h"
#include "SDK/PuppetAIDataStruct_Package.h"
#include "SDK/ControllerButtonsEnum_Package.h"
#include "SDK/Office02_MonitorBoard_BP_Package.h"
#include "SDK/Office03_VentRoomLockOff_struct_Package.h"
#include "SDK/Office_SpringTrap_Package.h"
#include "SDK/MPFoxyPawn_Package.h"
#include "SDK/GameplayTasks_Package.h"
#include "SDK/GameplayTags_Package.h"
#include "SDK/NavigationSystem_Package.h"
#include "SDK/AIModule_Package.h"
#include "SDK/BTService_Randomize_Package.h"
#include "SDK/CursorState_Package.h"
#include "SDK/Chica_FaceButton_Package.h"
#include "SDK/HandToPointerProximity_Package.h"
#include "SDK/Office02_ToyChica_AnimBp_Package.h"
#include "SDK/NonVR_CameraRots_BP_Package.h"
#include "SDK/RepairChica_ABP_Package.h"
#include "SDK/NonVRZoomRelease_Package.h"
#include "SDK/Prize_Rare_Toy02_Package.h"
#include "SDK/DLC_MonitorBoard_Office01_Package.h"
#include "SDK/Office02_ToyFreddie_Package.h"
#include "SDK/Office02_BalloonBoy_Package.h"
#include "SDK/SubtitleData_Package.h"
#include "SDK/Saul_MotionControllerPawn_Package.h"
#include "SDK/Chica_Repair_MotionControllerPawn_Package.h"
#include "SDK/NonVR_InSpaceUI_Package.h"
#include "SDK/NonVR_InSpaceUI_Office02_Package.h"
#include "SDK/BigToy_Office04_BP_Package.h"
#include "SDK/Glitchcountdown_Package.h"
#include "SDK/LookLocControlInstructions_Package.h"
#include "SDK/Prize_BonnieMask_Package.h"
#include "SDK/FNAFCamera_Blueprint_Package.h"
#include "SDK/Office_BaseGamemanager_Package.h"
#include "SDK/Office01_Doors_Package.h"
#include "SDK/DLC_Office01_GameManager_Package.h"
#include "SDK/HangingBanner_Bp_Package.h"
#include "SDK/NiagaraShader_Package.h"
#include "SDK/Office02_WitheredFreddy_AnimBp_Package.h"
#include "SDK/VisibilityTracker_Package.h"
#include "SDK/FNAFVisionDetector_Package.h"
#include "SDK/Prize_CircusBabyAF_V2_Package.h"
#include "SDK/PrizeDLC_Candy_Bag01_Package.h"
#include "SDK/Office01_AiBase_BP_Package.h"
#include "SDK/Office01_Foxy_Package.h"
#include "SDK/FNAF_RichTextDecorator_Package.h"
#include "SDK/Instructions_CornMaze_Package.h"
#include "SDK/BP_PrizeJackInTheBox_Package.h"
#include "SDK/Prize_ToyFreddyAF_Package.h"
#include "SDK/NT_CB_AudioManager_Package.h"
#include "SDK/JumpScareList_Package.h"
#include "SDK/GM_RepairGameBase_Package.h"
#include "SDK/ChaosSolvers_Package.h"
#include "SDK/ChaosSolverEngine_Package.h"
#include "SDK/MaintenenceComputer_Package.h"
#include "SDK/Timer_Package.h"
#include "SDK/NonVRLookLocation_Package.h"
#include "SDK/NightTerrorNVRLoc_Package.h"
#include "SDK/Bedroom_ClockTime_Package.h"
#include "SDK/Instructions_RepairMangle_Package.h"
#include "SDK/PrizeDLC_Candy_Drop04_Package.h"
#include "SDK/IFlashLightInteractible_Package.h"
#include "SDK/Office01FreddyTimes_Package.h"
#include "SDK/Office01_Freddy_Package.h"
#include "SDK/ENiagaraOrientationAxis_Package.h"
#include "SDK/MusicBox_BP_Package.h"
#include "SDK/TimerNonVR_Package.h"
#include "SDK/MPUIDisplayActor_Package.h"
#include "SDK/Prize_BobbleHead_Package.h"
#include "SDK/Prize_BobbleFreddy_Package.h"
#include "SDK/NightTerrorNVRClosetLoc_Package.h"
#include "SDK/NonVR_Office_TurnUI_Package.h"
#include "SDK/Office03_PhantomData_Package.h"
#include "SDK/Office03_PhantomAI_Package.h"
#include "SDK/Office03_PhantomBB_Package.h"
#include "SDK/Prize_BonnieMask_Package.h"
#include "SDK/HiddenGlitchTrigger_02_Package.h"
#include "SDK/Prize_Rare_Toy03_Package.h"
#include "SDK/FlatOverlay_Package.h"
#include "SDK/Instructions_Office2_Package.h"
#include "SDK/Prize_WitheredBonnie_AF_Package.h"
#include "SDK/VariantManagerContent_Package.h"
#include "SDK/MPController_Package.h"
#include "SDK/Freddy_Honk_Sound_Package.h"
#include "SDK/Instructions_fUNTIMEfOXY_Package.h"
#include "SDK/Prize_ChicaPlush_Package.h"
#include "SDK/ConfirmationWidget_Package.h"
#include "SDK/Instructions_Office3_Package.h"
#include "SDK/MonitorButton_MusicInteractable_BP_Package.h"
#include "SDK/Office02_ToyBonnie_Package.h"
#include "SDK/Instructions_Plushtrap_Package.h"
#include "SDK/CircusBaby_NightmareBedroom_ABP_Package.h"
#include "SDK/Prize_Common_Cup01_Package.h"
#include "SDK/Office02_Puppet_AnimBp_Package.h"
#include "SDK/BedroomClock_Package.h"
#include "SDK/Prize_Common_Candy04_Package.h"
#include "SDK/GrabbablePizzaSlice_Package.h"
#include "SDK/TeleportSpot_BP_Package.h"
#include "SDK/TeleportSpot_Door_BP_Child_Package.h"
#include "SDK/NightGuard_Office02_Package.h"
#include "SDK/MPLobbyUIActor_Package.h"
#include "SDK/Prize_temp_Package.h"
#include "SDK/Prize_PlushtrapAF_Package.h"
#include "SDK/EngineMessages_Package.h"
#include "SDK/GripEnum_Package.h"
#include "SDK/RightHand_AnimBP_Package.h"
#include "SDK/MonitorButton_MaintanceButton_Package.h"
#include "SDK/FNAFGM_FlashlightGame_Package.h"
#include "SDK/MPGMPlayerTracking_Package.h"
#include "SDK/Office4_Locations_Package.h"
#include "SDK/Office04_RoomInfo_BP_Package.h"
#include "SDK/Prize_Common_BagOfChips04_Package.h"
#include "SDK/ENiagaraCoordinateSpace_Package.h"
#include "SDK/OculusHMD_Package.h"
#include "SDK/Prize_Rare_Plushy02_Package.h"
#include "SDK/ENiagaraBooleanLogicOps_Package.h"
#include "SDK/MPFreddyPawn_Package.h"
#include "SDK/JsonUtilities_Package.h"
#include "SDK/Prize_Common_8Ball_Package.h"
#include "SDK/Instructions_FoxyDarkRide_Package.h"
#include "SDK/Spotlight_Flicker_Package.h"
#include "SDK/EdibleInterface_Package.h"
#include "SDK/AssetRegistry_Package.h"
#include "SDK/PrizeDLC_Candy_Twist03_Package.h"
#include "SDK/BlackoutManager_Package.h"
#include "SDK/BigToy_Office04_BP_Package.h"
#include "SDK/Office_NonVr_CameratetheredLook_Package.h"
#include "SDK/Office02_NonVrHoverChecks_Package.h"
#include "SDK/Office02_WitheredBonnie_AnimBp_Package.h"
#include "SDK/Instructions_TrickOrTreat_Package.h"
#include "SDK/AudioMixer_Package.h"
#include "SDK/GameplayTasks_Package.h"
#include "SDK/BP_FNAFGameState_Package.h"
#include "SDK/Office_MotionControllerPawn_Package.h"
#include "SDK/DLC_office_MotionControllerPawn_Package.h"
#include "SDK/PlayerPawn_Headlight_Package.h"
#include "SDK/BedroomClosetDoor_Package.h"
#include "SDK/NightTerror_PlayerPawn_Headlight_Package.h"
#include "SDK/MPUIVisionCone_Package.h"
#include "SDK/OfficeType_Enum_Package.h"
#include "SDK/CinematicCamera_Package.h"
#include "SDK/DatasmithContent_Package.h"
#include "SDK/PrizeDLC_Candy_Bag02_Package.h"
#include "SDK/Prize_BonniePlush_Package.h"
#include "SDK/Prize_Common_Candy03_Package.h"
#include "SDK/Instructions_Funtime_Package.h"
#include "SDK/BedroomClosetDoors_Package.h"
#include "SDK/Instructions_cIRCUSbABY_Package.h"
#include "SDK/Prize_DLC_NMBonnie_AF_Package.h"
#include "SDK/OfficeAiBase_Bp_Package.h"
#include "SDK/UIPlayerInfo_Package.h"
#include "SDK/Renderer_Package.h"
#include "SDK/Office01_MotionControllerPawn_Package.h"
#include "SDK/NVRCBabyLOc_Package.h"
#include "SDK/Office2NVRLoc_Package.h"
#include "SDK/Prize_Common_Candy02_Package.h"
#include "SDK/Office3Errors_Package.h"
#include "SDK/OnlineSubsystem_Package.h"
#include "SDK/OnlineSubsystemUtils_Package.h"
#include "SDK/Loading_NonVR_Package.h"
#include "SDK/Instructions_Base_Package.h"
#include "SDK/MonitorBoard_BP_Package.h"
#include "SDK/Timer_BP_Base_Package.h"
#include "SDK/PrizeDLC_Candy_Bag02_Package.h"
#include "SDK/CharacterInfo_Package.h"
#include "SDK/MPLobbyGameMode_Package.h"
#include "SDK/Prize_MangleAF_Package.h"
#include "SDK/SaveGame_LevelInfo_Package.h"
#include "SDK/BTTask_StopMove_Package.h"
#include "SDK/ChicaRepairAudioManager_Package.h"
#include "SDK/Office01_LightManager_Bp_Package.h"
#include "SDK/Prize_Rare_Plush_FuntimeFoxy_Package.h"
#include "SDK/PrizeDLC_Candy_Bag04_Package.h"
#include "SDK/FunWithWinText_NonVR_Package.h"
#include "SDK/Prize_Rare_Plush_ToyFreddy_Package.h"
#include "SDK/ENiagaraCoordinateSpace_Package.h"
#include "SDK/PrizeDLC_Candy_Bar04_Package.h"
#include "SDK/IFlashLightInteractible_Package.h"
#include "SDK/MaintenceBoard_BP_Package.h"
#include "SDK/Instructions_DLC_Office01_Package.h"
#include "SDK/Bonnie_Repair_Anim_BP_Package.h"
#include "SDK/Fun_With_PlushTrap_BP_Package.h"
#include "SDK/Prize_FreddyMask_Package.h"
#include "SDK/BuildPatchServices_Package.h"
#include "SDK/Instructions_BaloonBoy_Package.h"
#include "SDK/Prize_ToyBonnie_Package.h"
#include "SDK/AnimatronicsState_Package.h"
#include "SDK/BigToy_O4_State_Package.h"
#include "SDK/BigToyIdleState_Package.h"
#include "SDK/MPLobbyPawn_Package.h"
#include "SDK/BonnieRepairTuner_Package.h"
#include "SDK/CableComponent_Package.h"
#include "SDK/Office01_Bonnie_Package.h"
#include "SDK/Bonnie_BTN_Sound_Package.h"
#include "SDK/ENiagaraExpansionMode_Package.h"
#include "SDK/Prize_DLC_WitheredChica_AF_Package.h"
#include "SDK/Office03_ResourceManagement_struct_Package.h"
#include "SDK/Instructions_Office1_Package.h"
#include "SDK/Prize_Fazbar_Package.h"
#include "SDK/Office03_VentRoomLockOff_struct_Package.h"
#include "SDK/Office03_MonitorBoard_BP_Package.h"
#include "SDK/FacialAnimation_Package.h"
#include "SDK/Instructions_SpringBonnie_Package.h"
#include "SDK/Prize_Common_BagOfChips03_Package.h"
#include "SDK/SaveGame_LevelInfo_Package.h"
#include "SDK/HiddenCoin_Package.h"
#include "SDK/VirusCountdown_Package.h"
#include "SDK/MobilePatchingUtils_Package.h"
#include "SDK/ActionData_Package.h"
#include "SDK/ActionManager_Package.h"
#include "SDK/Prize_Rare_AF_04_Package.h"
#include "SDK/Cupcake_Runner_State_Package.h"
#include "SDK/ChicaRepair_Cupcake_Runner_Package.h"
#include "SDK/UdpMessaging_Package.h"
#include "SDK/Left_Bonnie_Eye_Jumpscare_Package.h"
#include "SDK/Prize_Rare_Plush_ToyBonnie_Package.h"
#include "SDK/Grabbable_Sock_Package.h"
#include "SDK/SpringTrap_AnimBP_Package.h"
#include "SDK/Widget_WarningIcon_Package.h"
#include "SDK/Office01_MonitorBoard_BP_Package.h"
#include "SDK/IPlayerVisionInteractible_Package.h"
#include "SDK/FNAFPlayerPawn_Package.h"
#include "SDK/Button_Hold_Package.h"
#include "SDK/MPVRPlayer_Package.h"
#include "SDK/PlushTrapKillState_Package.h"
#include "SDK/Prize_DLC_WitheredFreddy_AF_Package.h"
#include "SDK/Teleport_Manager_BP_Package.h"
#include "SDK/MPAIController_Package.h"
#include "SDK/ChicaRepairEatPizza_Package.h"
#include "SDK/AugmentedReality_Package.h"
#include "SDK/KillOnFloorHit_Package.h"
#include "SDK/BP_ArcadeCab_05a_Package.h"
#include "SDK/Prize_Common_Choco02_Package.h"
#include "SDK/NonVRTraceInteractible_Package.h"
#include "SDK/GrabbableBowtie_Package.h"
#include "SDK/Prize_PuppetAF_Package.h"
#include "SDK/MPGMPlayerTracking_Package.h"
#include "SDK/Office02_Withered_Chica_AnimBp_Package.h"
#include "SDK/PrizeDLC_Candy_Drop03_Package.h"
#include "SDK/PrizeDLC_Candy_Bar01_Package.h"
#include "SDK/MasterButton_Package.h"
#include "SDK/BedroomClosetDoor_Package.h"
#include "SDK/GeometryCollectionCore_Package.h"
#include "SDK/Office02_BalloonBoy_AnimBp_Package.h"
#include "SDK/EasterEggCharacterEnum_Package.h"
#include "SDK/Office02_Puppet_Bp_Package.h"
#include "SDK/Office02_ToyChica_Package.h"
#include "SDK/Prize_Rare_Toy01_Package.h"
#include "SDK/Prize_Common_BagOfChips02_Package.h"
#include "SDK/FieldSystemEngine_Package.h"
#include "SDK/AudioCapture_Package.h"
#include "SDK/Office02_WitheredFoxy_Package.h"
#include "SDK/Office0Grabbable_Master_Package.h"
#include "SDK/GrabbablePhone_Package.h"
#include "SDK/SteamVRController_Package.h"
#include "SDK/Fun_With_PlushTrap_Anim_BP_Package.h"
#include "SDK/ENiagaraBooleanLogicOps_Package.h"
#include "SDK/Instructions_Office1_Package.h"
#include "SDK/OfficeVictory_Package.h"
#include "SDK/CursorProvider_Package.h"
#include "SDK/MediaAssets_Package.h"
#include "SDK/FunWithPlushtrap_ABP_Package.h"
#include "SDK/SessionMessages_Package.h"
#include "SDK/LevelSequence_Package.h"
#include "SDK/Prize_BobbleBonnie_Package.h"
#include "SDK/DropPointLerpListener_Package.h"
#include "SDK/Office01_GameManager_Package.h"
#include "SDK/Bonnie_Office01_AnimBp_Package.h"
#include "SDK/Prize_FoxyMask_Package.h"
#include "SDK/Chica_Plate_Cupcake_Package.h"
#include "SDK/ENiagaraRandomnessMode_Package.h"
#include "SDK/Chica_Repair_State_Package.h"
#include "SDK/MPLobbyUIPlayerSlot_Package.h"
#include "SDK/Instructions_Repair_Package.h"
#include "SDK/Prize_ToyChica_Package.h"
#include "SDK/BP_FNAFGameState_Package.h"
#include "SDK/PrizeDLC_Candy_Twist02_Package.h"
#include "SDK/DropPointHighlightProvider_Package.h"
#include "SDK/Left_EyeBall_Washer_Package.h"
#include "SDK/Office03_PhantomFoxy_AnimBp_Package.h"
#include "SDK/MPPlayerLobbyInfo_Package.h"
#include "SDK/SWGPlatformUtil_Package.h"
#include "SDK/BP_FNAF_GameInstance_Package.h"
#include "SDK/Prize_BonbonAF_Package.h"
#include "SDK/Office_BaseGamemanager_Package.h"
#include "SDK/LobbyPlayerController_Package.h"
#include "SDK/Office02_Mangle_Package.h"
#include "SDK/OnlineSubsystemUtils_Package.h"
#include "SDK/FreddyRepairAudioManager_Package.h"
#include "SDK/Prize_GrimmFoxy_AF_Package.h"
#include "SDK/Baloons_Package.h"
#include "SDK/LocPoint_BP_Package.h"
#include "SDK/PuppetAIDataStruct_Package.h"
#include "SDK/Office04_LightCollider_Package.h"
#include "SDK/Office02_Puppet_Bp_Package.h"
#include "SDK/Prize_Common_BagOfChips04_Package.h"
#include "SDK/FreddyRepairEventHandler_Package.h"
#include "SDK/Button_Hold_Package.h"
#include "SDK/Office03_PhantomAi_enum_Package.h"
#include "SDK/Office03_PhantomData_Package.h"
#include "SDK/Subtitles_Package.h"
#include "SDK/Prize_Common_Candy02_Package.h"
#include "SDK/Prize_FoxyPlush_Package.h"
#include "SDK/Office01_Bonnie_Package.h"
#include "SDK/MasterButtonWidget_Package.h"
#include "SDK/TimeManagement_Package.h"
#include "SDK/AudioCapture_Package.h"
#include "SDK/PrizeDLC_Candy_Bar04_Package.h"
#include "SDK/Prize_Baloon_Package.h"
#include "SDK/ToxicSymbol_Package.h"
#include "SDK/ImgMediaFactory_Package.h"
#include "SDK/OculusHMD_Package.h"
#include "SDK/PlushTrapState_Package.h"
#include "SDK/CoinCounterForHiddenCoin_Package.h"
#include "SDK/PlushTrapMoveState_Package.h"
#include "SDK/IngameMenu_Package.h"
#include "SDK/UIPipConstruction_Package.h"
#include "SDK/Office01_GameManager_Package.h"
#include "SDK/Prize_Rare_AF_01_Package.h"
#include "SDK/BTTask_StopMove_Package.h"
#include "SDK/PrizeDLC_Pumpkin_Chica_Package.h"
#include "SDK/Prize_Common_BagOfChips01_Package.h"
#include "SDK/Left_Bonnie_Eye_Package.h"
#include "SDK/BuildPatchServices_Package.h"
#include "SDK/GrabbableToken_Package.h"
#include "SDK/LoadingGraphic_Package.h"
#include "SDK/AvfMediaFactory_Package.h"
#include "SDK/Instructions_PlushkinPatch_Package.h"
#include "SDK/Prize_BBMask_Package.h"
#include "SDK/MPLobbyUI_Package.h"
#include "SDK/Prize_Common_BagOfChips03_Package.h"
#include "SDK/PrizeDLC_Candy_Twist04_Package.h"
#include "SDK/MaterialShaderQualitySettings_Package.h"
#include "SDK/ChicaRepairPizzaEat_Package.h"
#include "SDK/Timer_BP_Child_FunWith_Package.h"
#include "SDK/PrizeDLC_Pumpkin_Bonnie_Package.h"
#include "SDK/GeometryCollectionEngine_Package.h"
#include "SDK/RepairBonnie_BP_Package.h"
#include "SDK/NonVR_Office_TurnUI_Package.h"
#include "SDK/Prize_Roach_Package.h"
#include "SDK/Fan_Package.h"
#include "SDK/Floor_Flashlight_Package.h"
#include "SDK/Prize_BobbleChica_Package.h"
#include "SDK/PrizeBoxInstructions_Package.h"
#include "SDK/NonVRCrosshair_Package.h"
#include "SDK/Overlay_Package.h"
#include "SDK/Chica_Office01_AnimBp_Package.h"
#include "SDK/VariantManagerContent_Package.h"
#include "SDK/Paper2D_Package.h"
#include "SDK/LightManager_Package.h"
#include "SDK/PhysXVehicles_Package.h"
#include "SDK/MPGameMode_Package.h"
#include "SDK/LightSlider_Package.h"
#include "SDK/Office02_MotionControllerPawn_Package.h"
#include "SDK/Office02_Foxy_AnimBp_Package.h"
#include "SDK/EngineSettings_Package.h"
#include "SDK/NightTerror_CB_GM_Package.h"
#include "SDK/Instructions_Plushbaby_Package.h"
#include "SDK/Prize_Common_Choco03_Package.h"
#include "SDK/DLC_Office01_Door_Bp_Package.h"
#include "SDK/BP_FNAFGameMode_Package.h"
#include "SDK/Prize_DLC_NMFreddy_AF_Package.h"
#include "SDK/Repair_Freddy_Package.h"
#include "SDK/Fun_With_PlushTrap_Anim_BP_Package.h"
#include "SDK/ShowtimeLights_Package.h"
#include "SDK/FlashLight_Power_Package.h"
#include "SDK/BonnieRepairTuner_Package.h"
#include "SDK/MPLobbyGameMode_Package.h"
#include "SDK/DLC_Office01_RebootLever_Package.h"
#include "SDK/DLC_Office01_FlashBeaconButton_Bp_Package.h"
#include "SDK/Prize_Common_Soda06_Package.h"
#include "SDK/BTTask_MoveTo_Package.h"
#include "SDK/IFNAFVisionFilter_Package.h"
#include "SDK/MediaCompositing_Package.h"
#include "SDK/ImageWriteQueue_Package.h"
#include "SDK/MovieSceneCapture_Package.h"
#include "SDK/Prize_Rare_Cupcake01_Package.h"
#include "SDK/AutomationUtils_Package.h"
#include "SDK/ControllerButton_Struct_Package.h"
#include "SDK/ButtonIcon_Package.h"
#include "SDK/Office01FreddyTimes_Package.h"
#include "SDK/ArcadeLevelsUnlocked_Package.h"
#include "SDK/Prize_Common_DirtyPaper02_Package.h"
#include "SDK/Office03_ResourceManagement_struct_Package.h"
#include "SDK/BP_ArcadeCab_07a_Package.h"
#include "SDK/Office03_Gamemanager_Package.h"
#include "SDK/MPAIController_Package.h"
#include "SDK/ChicaRepair_Blueprint_Package.h"
#include "SDK/FieldSystemCore_Package.h"
#include "SDK/Prize_Common_Soda04_Package.h"
#include "SDK/FreddieMask_BP_Package.h"
#include "SDK/JumpScareList_Package.h"
#include "SDK/Office01_MotionControllerPawn_Package.h"
#include "SDK/PrizeDLC_Candy_Drop03_Package.h"
#include "SDK/LoadingGraphic_Package.h"
#include "SDK/PrizeDLC_Candy_Drop04_Package.h"
#include "SDK/MRMesh_Package.h"
#include "SDK/MonitorButton_BP_Package.h"
#include "SDK/Prize_DLC_WitheredFoxy_AF_Package.h"
#include "SDK/Office02_Mangle_AnimBP_Package.h"
#include "SDK/Prize_Common_BagOfChips01_Package.h"
#include "SDK/LightPropagationVolumeRuntime_Package.h"
#include "SDK/MainMenuPlayer_Package.h"
#include "SDK/SteamVR_Package.h"
#include "SDK/NightmareBox_Package.h"
#include "SDK/GrabbableRoach_NoEatKill_Package.h"
#include "SDK/CustomMeshComponent_Package.h"
#include "SDK/EasterEggCharacter_Package.h"
#include "SDK/Landscape_Package.h"
#include "SDK/Office01_Chica_Package.h"
#include "SDK/Monitor_ClockTime_Package.h"
#include "SDK/PrizeDLC_Candy_Drop01_Package.h"
#include "SDK/MainMenu_GameType_Button_Package.h"
#include "SDK/Guitar_Tune_Package.h"
#include "SDK/Office02_WitheredBonnie_Package.h"
#include "SDK/FunWithWinText_Package.h"
#include "SDK/OculusMR_Package.h"
#include "SDK/ChicaRepair_RoachManager_New_Package.h"
#include "SDK/Office01_NonVrHoverChecks_Package.h"
#include "SDK/Chica_Repair_NM_Cupcake_Placement_Package.h"
#include "SDK/Prize_ToyChica_Package.h"
#include "SDK/Prize_Rare_AF_03_Package.h"
#include "SDK/GrabbableCupDrink_Package.h"
#include "SDK/Prize_Helpy_Package.h"
#include "SDK/CircusBaby_MotionControllerPawn_Package.h"
#include "SDK/PrizeDLC_Pumpkin_Freddy_Package.h"
#include "SDK/LightBlocker_Package.h"
#include "SDK/Instructions_Text_Package.h"
#include "SDK/Bedroom_ClockTime_Package.h"
#include "SDK/DropPointComponent_Package.h"
#include "SDK/OnlineSubsystemSteam_Package.h"
#include "SDK/ENiagaraExpansionMode_Package.h"
#include "SDK/ActorSequence_Package.h"
#include "SDK/ArchVisCharacter_Package.h"
#include "SDK/Prize_MangleMask_Package.h"
#include "SDK/DropPointActorCondition_Package.h"
#include "SDK/OnlineSubsystemOculus_Package.h"
#include "SDK/ENiagaraOrientationAxis_Package.h"
#include "SDK/Office04_GameManager_Package.h"
#include "SDK/MediaUtils_Package.h"
#include "SDK/MediaAssets_Package.h"
#include "SDK/ImgMedia_Package.h"
#include "SDK/GameTypeEnumNameMaping_Package.h"
#include "SDK/ImageWrapper_Package.h"
#include "SDK/Prize_Fan_Package.h"
#include "SDK/Main_Menu_Selector_Package.h"
#include "SDK/followDistance_Package.h"
#include "SDK/LocationServicesBPLibrary_Package.h"
#include "SDK/FadeHandlerForPause_Package.h"
#include "SDK/CoinCounterForHiddenCoin_Package.h"
#include "SDK/Vent_Repair_Power_Package.h"
#include "SDK/PrizeDLC_Candy_Bar02_Package.h"
#include "SDK/TargetDistance_Package.h"
#include "SDK/Prize_Rare_AF_02_Package.h"
#include "SDK/DeskButton_Light_Package.h"
#include "SDK/Saul_BP_MotionController_Package.h"
#include "SDK/PowerLVL_Package.h"
#include "SDK/Prize_Common_Choco02_Package.h"
#include "SDK/OfficePhone_Bp_Package.h"
#include "SDK/NMHands_BP_Package.h"
#include "SDK/Floor_Trigger_Package.h"
#include "SDK/Office01_Door_Bp_Package.h"
#include "SDK/Office03_MonitorBoard_BP_Package.h"
#include "SDK/Prize_GrimmFoxy_AF_Package.h"
#include "SDK/Instructions_Freddy_02_Package.h"
#include "SDK/AppleImageUtils_Package.h"
#include "SDK/FallingRoach_Package.h"
#include "SDK/SecretManager_Package.h"
#include "SDK/Prize_Puppet_Plush_Package.h"
#include "SDK/PickupActorInterface_Package.h"
#include "SDK/Prize_Common_Choco05_Package.h"
#include "SDK/LightBlockerDoubleFaced_Package.h"
#include "SDK/CircusBabyAnimationManager_Package.h"
#include "SDK/BP_FNAF_GameInstance_Package.h"
#include "SDK/DLC_Office01_RebootLever_Package.h"
#include "SDK/Bedroom_Door_BP_Package.h"
#include "SDK/Prize_BaloonBoyAF_Package.h"
#include "SDK/PrizeDLC_Candy_Drop02_Package.h"
#include "SDK/ProceduralMeshComponent_Package.h"
#include "SDK/Prize_WitheredBonnie_AF_Package.h"
#include "SDK/BigToyMoveState_Package.h"
#include "SDK/NMHands_ABP_Package.h"
#include "SDK/GeometryCacheTracks_Package.h"
#include "SDK/Repair_Freddy_Package.h"
#include "SDK/Office02_ToyFreddy_AnimBp_Package.h"
#include "SDK/Main_Menu_Package.h"
#include "SDK/FreddyRepairAudioManager_Package.h"
#include "SDK/HeadLight_Package.h"
#include "SDK/DLC_Office01_AI_BP_Package.h"
#include "SDK/Office04_NightmareFredBear_Package.h"
#include "SDK/Prize_Common_Soda05_Package.h"
#include "SDK/PlushTrapIdleState_Package.h"
#include "SDK/Song_Button_Package.h"
#include "SDK/DLC_Office01_FlashBeaconButton_Bp_Package.h"
#include "SDK/ChicaRepair_Cupcake_Location_Package.h"
#include "SDK/Prize_Common_Choco01_Package.h"
#include "SDK/BTTask_MoveTo_Package.h"
#include "SDK/FNAFGM_FlashlightGame_Package.h"
#include "SDK/PrizeDLC_Pumpkin_Chica_Package.h"
#include "SDK/MPUIGame_Package.h"
#include "SDK/Prize_NightmareFredbearAF_Package.h"
#include "SDK/MainMenu_LevelButton_Package.h"
#include "SDK/TcpMessaging_Package.h"
#include "SDK/MusicBox_BP_Package.h"
#include "SDK/Instructions_HallwayCrawl_Package.h"
#include "SDK/NiagaraCore_Package.h"
#include "SDK/FlatOverlay_Package.h"
#include "SDK/Prize_JackOChica_AF_Package.h"
#include "SDK/DLC_MonitorBoard_Office01_Package.h"
#include "SDK/Serialization_Package.h"
#include "SDK/Office04_LightCollider_Package.h"
#include "SDK/Left_Bonnie_Eye_Package.h"
#include "SDK/CupcakeAnimationManager_Package.h"
#include "SDK/PrizeDLC_Candy_Twist02_Package.h"
#include "SDK/MRMesh_Package.h"
#include "SDK/SignificanceManager_Package.h"
#include "SDK/PrizeDLC_Pumpkin_Foxy_Package.h"
#include "SDK/MPUIVisionCone_Package.h"
#include "SDK/Bonnie_Office01_AnimBp_Package.h"
#include "SDK/AnimationSharing_Package.h"
#include "SDK/Office02_GameManager_Package.h"
#include "SDK/OnlineSubsystemSteam_Package.h"
#include "SDK/NVRCBabyLOc_Package.h"
#include "SDK/Office02_ToyBonnie_AnimBp_Package.h"
#include "SDK/Prize_Rare_Plush_FuntimeFreddy_Package.h"
#include "SDK/BedroomClosetDoor_Child_For_CB_Package.h"
#include "SDK/AngryFreddyForRepair_Package.h"
#include "SDK/NMHands_ABP_Package.h"
#include "SDK/Prize_BobbleChica_Package.h"
#include "SDK/Timer_Package.h"
#include "SDK/LightSlider_Package.h"
#include "SDK/Prize_Rare_Plushy01_Package.h"
#include "SDK/NMFredbear_ABP_Package.h"
#include "SDK/PlayerHand_Right_ABP_Package.h"
#include "SDK/PhoneCable_Package.h"
#include "SDK/Win_Text_Package.h"
#include "SDK/Prize_BasketBall01_Package.h"
#include "SDK/MasterButtonWidget_Package.h"
#include "SDK/FNAFSaveGame_Package.h"
#include "SDK/Flashlight_Battery_Package.h"
#include "SDK/Flashlight_Battery_Finale_Package.h"
#include "SDK/HTML5Networking_Package.h"
#include "SDK/MoviePlayer_Package.h"
#include "SDK/PlushTrapKillState_Package.h"
#include "SDK/MPBonnie_Package.h"
#include "SDK/Actions_Package.h"
#include "SDK/Freddy_Office01_AnimBp_Package.h"
#include "SDK/MeshDescription_Package.h"
#include "SDK/EditableMesh_Package.h"
#include "SDK/NightmareBedroomClosetDoors_Package.h"
#include "SDK/Prize_JackOBonnie_AF1_Package.h"
#include "SDK/HeldActionInfoProvider_Package.h"
#include "SDK/Part2_Bowtie_Package.h"
#include "SDK/ContinueButton_Package.h"
#include "SDK/DmgTypeBP_Environmental_Package.h"
#include "SDK/Chica_Repair_Cupcake_Placement_Package.h"
#include "SDK/HandToPointerProximitySquare_Package.h"
#include "SDK/Prize_DLC_Dreadbear_AF_Package.h"
#include "SDK/AndroidPermission_Package.h"
#include "SDK/FunWithNMBB_ABP_Package.h"
#include "SDK/Roach_Zapper_Package.h"
#include "SDK/PrizeDLC_Candy_Twist01_Package.h"
#include "SDK/GrabbableNewspaperBall_Main_Package.h"
#include "SDK/NonVRZoom_Package.h"
#include "SDK/Prize_ChicaMask_Package.h"
#include "SDK/JumpScare_Package.h"
#include "SDK/GeometryCache_Package.h"
#include "SDK/Niagara_Package.h"
#include "SDK/GM_Chica_Repair_Package.h"
#include "SDK/EyeTracker_Package.h"
#include "SDK/NiagaraAnimNotifies_Package.h"
#include "SDK/Player_PointLight_Head_Package.h"
#include "SDK/Prize_NightmarionAF_Package.h"
#include "SDK/Foliage_Package.h"
#include "SDK/Prize_Rare_Plush_ToyChica_Package.h"
#include "SDK/PrizeDLC_Candy_Bag03_Package.h"
#include "SDK/Prize_DLC_NMFoxy_AF_Package.h"
#include "SDK/Finale_Microphone_Package.h"
#include "SDK/GrabbableToken_InitiallyFrozen_Package.h"
#include "SDK/ChicaRepairSpray_Package.h"
#include "SDK/Prize_Common_Candy01_Package.h"
#include "SDK/ArcadeLevelsUnlocked_Package.h"
#include "SDK/GameTypeMapper_Package.h"
#include "SDK/Prize_FuntimeFreddyAF_Package.h"
#include "SDK/Prize_FuntimeFoxyAF_Package.h"
#include "SDK/Prize_Nightmarionne_Plush_Package.h"
#include "SDK/NightTerrorNVRClosetLoc_Package.h"
#include "SDK/Office01_MonitorBoard_BP_Package.h"
