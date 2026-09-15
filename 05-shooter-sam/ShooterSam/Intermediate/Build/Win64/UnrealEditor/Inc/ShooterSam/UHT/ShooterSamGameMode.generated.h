// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterSamGameMode.h"

#ifdef SHOOTERSAM_ShooterSamGameMode_generated_h
#error "ShooterSamGameMode.generated.h already included, missing '#pragma once' in ShooterSamGameMode.h"
#endif
#define SHOOTERSAM_ShooterSamGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShooterSamGameMode ******************************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamGameMode_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterSamGameMode(); \
	friend struct Z_Construct_UClass_AShooterSamGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterSamGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_AShooterSamGameMode_NoRegister) \
	DECLARE_SERIALIZER(AShooterSamGameMode)


#define FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterSamGameMode(AShooterSamGameMode&&) = delete; \
	AShooterSamGameMode(const AShooterSamGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterSamGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterSamGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterSamGameMode) \
	NO_API virtual ~AShooterSamGameMode();


#define FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h_12_PROLOG
#define FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterSamGameMode;

// ********** End Class AShooterSamGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
