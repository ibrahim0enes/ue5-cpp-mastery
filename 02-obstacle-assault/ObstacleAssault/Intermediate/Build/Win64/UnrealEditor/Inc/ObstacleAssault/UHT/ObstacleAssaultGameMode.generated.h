// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleAssaultGameMode.h"

#ifdef OBSTACLEASSAULT_ObstacleAssaultGameMode_generated_h
#error "ObstacleAssaultGameMode.generated.h already included, missing '#pragma once' in ObstacleAssaultGameMode.h"
#endif
#define OBSTACLEASSAULT_ObstacleAssaultGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleAssaultGameMode *************************************************
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultGameMode_NoRegister();

#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleAssaultGameMode(); \
	friend struct Z_Construct_UClass_AObstacleAssaultGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleAssaultGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssault"), Z_Construct_UClass_AObstacleAssaultGameMode_NoRegister) \
	DECLARE_SERIALIZER(AObstacleAssaultGameMode)


#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleAssaultGameMode(AObstacleAssaultGameMode&&) = delete; \
	AObstacleAssaultGameMode(const AObstacleAssaultGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleAssaultGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleAssaultGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstacleAssaultGameMode) \
	NO_API virtual ~AObstacleAssaultGameMode();


#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_12_PROLOG
#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleAssaultGameMode;

// ********** End Class AObstacleAssaultGameMode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
