#pragma once

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

// Class SignificanceUtilities.CharacterOptimizer
// 0x00B8 (FullSize[0x0170] - InheritedSize[0x00B8])
class UCharacterOptimizer : public UActorComponent
{
public:
	struct FBHVRPerDetailModeFloat                     _distance;                                                 // 0x00B8(0x00A0) (Edit, NativeAccessSpecifierPrivate)
	float                                              _characterMovementTickRateWhenInsignificant;               // 0x0158(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              _skeletalMeshTickRateWhenInsignificant;                    // 0x015C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                              _dependentActorsToCheckSignficance;                        // 0x0160(0x0010) (Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SignificanceUtilities.CharacterOptimizer");
		return ptr;
	}



};

// Class SignificanceUtilities.DistanceBasedTickDisabler
// 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
class UDistanceBasedTickDisabler : public UActorComponent
{
public:
	bool                                               _autoRegisterOwner;                                        // 0x00B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               _autoRegisterTimelines;                                    // 0x00B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_IIGH[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBHVRPerDetailModeFloat                     _tickDisableDistance;                                      // 0x00C0(0x00A0) (Edit, NativeAccessSpecifierPrivate)
	bool                                               _insignificantWhenBehindTheCamera;                         // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_61O1[0x7];                                     // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UActorComponent*>                     _components;                                               // 0x0168(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_20EQ[0x8];                                     // 0x0178(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SignificanceUtilities.DistanceBasedTickDisabler");
		return ptr;
	}



	void UnregisterComponent(class UActorComponent* Component);
	void RegisterComponent(class UActorComponent* Component);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
