// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterAI.h"

#ifdef SHOOTERSAM_ShooterAI_generated_h
#error "ShooterAI.generated.h already included, missing '#pragma once' in ShooterAI.h"
#endif
#define SHOOTERSAM_ShooterAI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShooterAI ***************************************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterAI_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_ShooterAI_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterAI(); \
	friend struct Z_Construct_UClass_AShooterAI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterAI_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterAI, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_AShooterAI_NoRegister) \
	DECLARE_SERIALIZER(AShooterAI)


#define FID_ShooterSam_Source_ShooterSam_ShooterAI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterAI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterAI(AShooterAI&&) = delete; \
	AShooterAI(const AShooterAI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterAI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterAI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterAI) \
	NO_API virtual ~AShooterAI();


#define FID_ShooterSam_Source_ShooterSam_ShooterAI_h_15_PROLOG
#define FID_ShooterSam_Source_ShooterSam_ShooterAI_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_ShooterAI_h_18_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_ShooterAI_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterAI;

// ********** End Class AShooterAI *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_ShooterAI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
