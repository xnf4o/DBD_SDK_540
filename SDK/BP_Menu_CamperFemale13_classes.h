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

// BlueprintGeneratedClass BP_Menu_CamperFemale13.BP_Menu_CamperFemale13_C
// 0x000F (FullSize[0x0678] - InheritedSize[0x0669])
class ABP_Menu_CamperFemale13_C : public ABP_Menu_Base_Camper_C
{
public:
	unsigned char                                      UnknownData_UMQP[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu_CamperFemale13.BP_Menu_CamperFemale13_C");
		return ptr;
	}



	void ExecuteUbergraph_BP_Menu_CamperFemale13(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
