// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstacleAssaultCharacter.h"

#ifdef OBSTACLEASSAULT_ObstacleAssaultCharacter_generated_h
#error "ObstacleAssaultCharacter.generated.h already included, missing '#pragma once' in ObstacleAssaultCharacter.h"
#endif
#define OBSTACLEASSAULT_ObstacleAssaultCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstacleAssaultCharacter ************************************************
#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultCharacter_NoRegister();

#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstacleAssaultCharacter(); \
	friend struct Z_Construct_UClass_AObstacleAssaultCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AObstacleAssaultCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstacleAssaultCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstacleAssault"), Z_Construct_UClass_AObstacleAssaultCharacter_NoRegister) \
	DECLARE_SERIALIZER(AObstacleAssaultCharacter)


#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstacleAssaultCharacter(AObstacleAssaultCharacter&&) = delete; \
	AObstacleAssaultCharacter(const AObstacleAssaultCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstacleAssaultCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstacleAssaultCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstacleAssaultCharacter) \
	NO_API virtual ~AObstacleAssaultCharacter();


#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_21_PROLOG
#define FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstacleAssaultCharacter;

// ********** End Class AObstacleAssaultCharacter **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstacleAssault_Source_ObstacleAssault_ObstacleAssaultCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
