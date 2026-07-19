// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_Combat/Gameplay/CombatDummy.h"

#ifdef OBSTACLEASSAULT_CombatDummy_generated_h
#error "CombatDummy.generated.h already included, missing '#pragma once' in CombatDummy.h"
#endif
#define OBSTACLEASSAULT_CombatDummy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACombatDummy *************************************************************
#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_CALLBACK_WRAPPERS
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ACombatDummy_NoRegister();

#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombatDummy(); \
	friend struct Z_Construct_UClass_ACombatDummy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSAULT_API UClass* Z_Construct_UClass_ACombatDummy_NoRegister(); \
public: \
	DECLARE_CLASS2(ACombatDummy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssault"), Z_Construct_UClass_ACombatDummy_NoRegister) \
	DECLARE_SERIALIZER(ACombatDummy) \
	virtual UObject* _getUObject() const override { return const_cast<ACombatDummy*>(this); }


#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACombatDummy(ACombatDummy&&) = delete; \
	ACombatDummy(const ACombatDummy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombatDummy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombatDummy); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACombatDummy) \
	NO_API virtual ~ACombatDummy();


#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_16_PROLOG
#define FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_CALLBACK_WRAPPERS \
	FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_INCLASS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACombatDummy;

// ********** End Class ACombatDummy ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleAssault_Source_ObstacleAssault_Variant_Combat_Gameplay_CombatDummy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
