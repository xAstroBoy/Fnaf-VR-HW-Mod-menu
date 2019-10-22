#pragma once

// Name: Freddys, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum StereoPanorama.ESPStereoCameraLayer
enum class ESPStereoCameraLayer : uint8_t
{
	ESPStereoCameraLayer__LeftEye  = 0,
	ESPStereoCameraLayer__RightEye = 1,
	ESPStereoCameraLayer__BothEyes = 2,
	ESPStereoCameraLayer__ESPStereoCameraLayer_MAX = 3
};


// Enum StereoPanorama.ECaptureStep
enum class ECaptureStep : uint8_t
{
	ECaptureStep__Reset            = 0,
	ECaptureStep__SetStartPosition = 1,
	ECaptureStep__SetPosition      = 2,
	ECaptureStep__Read             = 3,
	ECaptureStep__Pause            = 4,
	ECaptureStep__Unpause          = 5,
	ECaptureStep__ECaptureStep_MAX = 6
};



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
