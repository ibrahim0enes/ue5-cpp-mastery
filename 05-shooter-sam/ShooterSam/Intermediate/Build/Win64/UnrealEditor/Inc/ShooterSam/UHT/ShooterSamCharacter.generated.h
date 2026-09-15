// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterSamCharacter.h"

#ifdef SHOOTERSAM_ShooterSamCharacter_generated_h
#error "ShooterSamCharacter.generated.h already included, missing '#pragma once' in ShooterSamCharacter.h"
#endif
#define SHOOTERSAM_ShooterSamCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShooterSamCharacter *****************************************************
#define FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamCharacter_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterSamCharacter(); \
	friend struct Z_Construct_UClass_AShooterSamCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterSamCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_AShooterSamCharacter_NoRegister) \
	DECLARE_SERIALIZER(AShooterSamCharacter)


#define FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterSamCharacter(AShooterSamCharacter&&) = delete; \
	AShooterSamCharacter(const AShooterSamCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterSamCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterSamCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AShooterSamCharacter) \
	NO_API virtual ~AShooterSamCharacter();


#define FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_21_PROLOG
#define FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterSamCharacter;

// ********** End Class AShooterSamCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_ShooterSamCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
