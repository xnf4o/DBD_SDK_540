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

// Class Penalty.PenaltyTracker
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UPenaltyTracker : public UObject
{
public:
	unsigned char                                      UnknownData_0O5T[0x80];                                    // 0x0030(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Penalty.PenaltyTracker");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
