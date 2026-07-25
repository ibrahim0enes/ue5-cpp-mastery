// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonEscapeGameMode.h"

#ifdef DUNGEONESCAPE_DungeonEscapeGameMode_generated_h
#error "DungeonEscapeGameMode.generated.h already included, missing '#pragma once' in DungeonEscapeGameMode.h"
#endif
#define DUNGEONESCAPE_DungeonEscapeGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADungeonEscapeGameMode ***************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeGameMode_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonEscapeGameMode(); \
	friend struct Z_Construct_UClass_ADungeonEscapeGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ADungeonEscapeGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_ADungeonEscapeGameMode_NoRegister) \
	DECLARE_SERIALIZER(ADungeonEscapeGameMode)


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADungeonEscapeGameMode(ADungeonEscapeGameMode&&) = delete; \
	ADungeonEscapeGameMode(const ADungeonEscapeGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonEscapeGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonEscapeGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADungeonEscapeGameMode) \
	NO_API virtual ~ADungeonEscapeGameMode();


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h_12_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADungeonEscapeGameMode;

// ********** End Class ADungeonEscapeGameMode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
