// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Gameplay/CombatActivationVolume.h"

#ifdef OBSTACLEASSAULT_CombatActivationVolume_generated_h
#error "CombatActivationVolume.generated.h already included, missing '#pragma once' in CombatActivationVolume.h"
#endif
#define OBSTACLEASSAULT_CombatActivationVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ACombatActivationVolume **************************************************
#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlap);


OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ACombatActivationVolume_NoRegister();

#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatActivationVolume(); \
	friend struct Z_Construct_UClass_ACombatActivationVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ACombatActivationVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatActivationVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssault"), Z_Construct_UClass_ACombatActivationVolume_NoRegister) \
	DECLARE_SERIALIZER(ACombatActivationVolume)


#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatActivationVolume(ACombatActivationVolume&&) = delete; \
	ACombatActivationVolume(const ACombatActivationVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatActivationVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatActivationVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombatActivationVolume) \
	NO_API virtual ~ACombatActivationVolume();


#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_14_PROLOG
#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_INCLASS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatActivationVolume;

// ********** End Class ACombatActivationVolume ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatActivationVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
