﻿#pragma once

// Name: DBD, Version: 540


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AtlantaBundleFilterRules.AtlantaBundleFilterRulesManager
// 0x0170 (FullSize[0x01A8] - InheritedSize[0x0038])
class UAtlantaBundleFilterRulesManager : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_L01Z[0x170];                                   // 0x0038(0x0170) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AtlantaBundleFilterRules.AtlantaBundleFilterRulesManager");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
