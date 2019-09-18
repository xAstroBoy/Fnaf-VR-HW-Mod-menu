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

// Class StereoPanorama.SceneCapturer
// 0x0148 (0x0170 - 0x0028)
class USceneCapturer : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET
	class USceneComponent*                             CaptureSceneComponent;                                    // 0x00C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x00D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StereoPanorama.SceneCapturer");
		return ptr;
	}

};


// Class StereoPanorama.StereoCapturePawn
// 0x0018 (0x03C8 - 0x03B0)
class AStereoCapturePawn : public ADefaultPawn
{
public:
	class UTexture2D*                                  LeftEyeAtlas;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UTexture2D*                                  RightEyeAtlas;                                            // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StereoPanorama.StereoCapturePawn");
		return ptr;
	}


	void UpdateStereoAtlas(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
};


// Class StereoPanorama.StereoStaticMeshComponent
// 0x0000 (0x05F0 - 0x05F0)
class UStereoStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StereoPanorama.StereoStaticMeshComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
