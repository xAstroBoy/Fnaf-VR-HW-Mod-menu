#pragma once

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
	 * BlueprintGeneratedClass DropPointLerpListener.DropPointLerpListener_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDropPointLerpListener_C : public UInterface
	{
	public:
		void OnLerpEnd(class ADropPointLerpPosition_C* LerpPoint);
		void OnLerpStart(class ADropPointLerpPosition_C* LerpPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
