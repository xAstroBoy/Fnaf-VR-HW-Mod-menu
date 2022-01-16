﻿#pragma once

/**
 * Name: Fnaf Help Wanted
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AudioCapture.AudioCapture
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UAudioCapture : public UAudioGenerator
	{
	public:
		unsigned char                                              UnknownData_TH3E[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void StopCapturingAudio();
		void StartCapturingAudio();
		bool IsCapturingAudio();
		bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioCapture.AudioCaptureFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UAudioCapture* STATIC_CreateAudioCapture();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioCapture.AudioCaptureComponent
	 * Size -> 0x00B0 (FullSize[0x06F0] - InheritedSize[0x0640])
	 */
	class UAudioCaptureComponent : public USynthComponent
	{
	public:
		int                                                        JitterLatencyFrames;                                     // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZMI[0xAC];                                  // 0x0644(0x00AC) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
