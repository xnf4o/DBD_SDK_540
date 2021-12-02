// Name: DBD, Version: 540

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x03F26710
//		Name   -> Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOwningPlayerInSpiritHuskRange::OnKillerSet(class ASlasherPlayer* killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet");

	UOwningPlayerInSpiritHuskRange_OnKillerSet_Params params {};
	params.killer = killer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation
//		Flags  -> (Event, Protected, BlueprintEvent)
void URancor::SpawnBubbleAtSurvivorsLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation");

	URancor_SpawnBubbleAtSurvivorsLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F269D0
//		Name   -> Function TheSpirit.Rancor.GetSurvivorRevealDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float URancor::GetSurvivorRevealDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.Rancor.GetSurvivorRevealDuration");

	URancor_GetSurvivorRevealDuration_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03F27210
//		Name   -> Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
//		Flags  -> (Final, Native, Private)
// Parameters:
//		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpiritHuskOutlineUpdateStrategy::OnSlasherSet(class ASlasherPlayer* Slasher)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet");

	USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params params {};
	params.Slasher = Slasher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F276C0
//		Name   -> Function TheSpirit.SpiritPassivePhaseWalkHusk.SetScalarParameterOnAllChildrenMeshes
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpiritPassivePhaseWalkHusk::SetScalarParameterOnAllChildrenMeshes(const struct FName& ParameterName, float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritPassivePhaseWalkHusk.SetScalarParameterOnAllChildrenMeshes");

	ASpiritPassivePhaseWalkHusk_SetScalarParameterOnAllChildrenMeshes_Params params {};
	params.ParameterName = ParameterName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F27630
//		Name   -> Function TheSpirit.SpiritPassivePhaseWalkHusk.SetPassivePhaseWalkHuskVisibility
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpiritPassivePhaseWalkHusk::SetPassivePhaseWalkHuskVisibility(bool visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritPassivePhaseWalkHusk.SetPassivePhaseWalkHuskVisibility");

	ASpiritPassivePhaseWalkHusk_SetPassivePhaseWalkHuskVisibility_Params params {};
	params.visible = visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F275B0
//		Name   -> Function TheSpirit.SpiritPassivePhaseWalkHusk.InitializeSpiritPassivePhaseWalkHusk
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UCustomizedSkeletalMesh*                     customizedSkeletalMeshToCopy                               (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ASpiritPassivePhaseWalkHusk::InitializeSpiritPassivePhaseWalkHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritPassivePhaseWalkHusk.InitializeSpiritPassivePhaseWalkHusk");

	ASpiritPassivePhaseWalkHusk_InitializeSpiritPassivePhaseWalkHusk_Params params {};
	params.customizedSkeletalMeshToCopy = customizedSkeletalMeshToCopy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function TheSpirit.SpiritPassivePhaseWalkHusk.Cosmetic_StartFadeOutPassivePhaseWalkHusk
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ASpiritPassivePhaseWalkHusk::Cosmetic_StartFadeOutPassivePhaseWalkHusk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritPassivePhaseWalkHusk.Cosmetic_StartFadeOutPassivePhaseWalkHusk");

	ASpiritPassivePhaseWalkHusk_Cosmetic_StartFadeOutPassivePhaseWalkHusk_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x042CD2C0
//		Name   -> Function TheSpirit.SpiritPassivePhaseWalkHusk.Cosmetic_InitializeSpiritPassivePhaseWalkHusk
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void ASpiritPassivePhaseWalkHusk::Cosmetic_InitializeSpiritPassivePhaseWalkHusk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritPassivePhaseWalkHusk.Cosmetic_InitializeSpiritPassivePhaseWalkHusk");

	ASpiritPassivePhaseWalkHusk_Cosmetic_InitializeSpiritPassivePhaseWalkHusk_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03F27590
//		Name   -> Function TheSpirit.SpiritPassivePhaseWalkHusk.CaptureSpiritPose
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void ASpiritPassivePhaseWalkHusk::CaptureSpiritPose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TheSpirit.SpiritPassivePhaseWalkHusk.CaptureSpiritPose");

	ASpiritPassivePhaseWalkHusk_CaptureSpiritPose_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
