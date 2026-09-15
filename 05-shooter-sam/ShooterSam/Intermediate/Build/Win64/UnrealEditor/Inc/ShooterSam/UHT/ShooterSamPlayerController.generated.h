// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShooterSamPlayerController.h"

#ifdef SHOOTERSAM_ShooterSamPlayerController_generated_h
#error "ShooterSamPlayerController.generated.h already included, missing '#pragma once' in ShooterSamPlayerController.h"
#endif
#define SHOOTERSAM_ShooterSamPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShooterSamPlayerController **********************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamPlayerController_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterSamPlayerController(); \
	friend struct Z_Construct_UClass_AShooterSamPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AShooterSamPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_AShooterSamPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AShooterSamPlayerController)


#define FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterSamPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShooterSamPlayerController(AShooterSamPlayerController&&) = delete; \
	AShooterSamPlayerController(const AShooterSamPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterSamPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterSamPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterSamPlayerController) \
	NO_API virtual ~AShooterSamPlayerController();


#define FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h_16_PROLOG
#define FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShooterSamPlayerController;

// ********** End Class AShooterSamPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_ShooterSamPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
