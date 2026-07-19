// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleAssaultPlayerController.h"

#ifdef OBSTACLEASSAULT_ObstacleAssaultPlayerController_generated_h
#error "ObstacleAssaultPlayerController.generated.h already included, missing '#pragma once' in ObstacleAssaultPlayerController.h"
#endif
#define OBSTACLEASSAULT_ObstacleAssaultPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleAssaultPlayerController *****************************************
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultPlayerController_NoRegister();

#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleAssaultPlayerController(); \
	friend struct Z_Construct_UClass_AObstacleAssaultPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleAssaultPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssault"), Z_Construct_UClass_AObstacleAssaultPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AObstacleAssaultPlayerController)


#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstacleAssaultPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleAssaultPlayerController(AObstacleAssaultPlayerController&&) = delete; \
	AObstacleAssaultPlayerController(const AObstacleAssaultPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleAssaultPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleAssaultPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstacleAssaultPlayerController) \
	NO_API virtual ~AObstacleAssaultPlayerController();


#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h_16_PROLOG
#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleAssaultPlayerController;

// ********** End Class AObstacleAssaultPlayerController *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
