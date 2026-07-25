// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonEscapeCharacter.h"

#ifdef DUNGEONESCAPE_DungeonEscapeCharacter_generated_h
#error "DungeonEscapeCharacter.generated.h already included, missing '#pragma once' in DungeonEscapeCharacter.h"
#endif
#define DUNGEONESCAPE_DungeonEscapeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADungeonEscapeCharacter **************************************************
#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeCharacter_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonEscapeCharacter(); \
	friend struct Z_Construct_UClass_ADungeonEscapeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADungeonEscapeCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_ADungeonEscapeCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADungeonEscapeCharacter)


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADungeonEscapeCharacter(ADungeonEscapeCharacter&&) = delete; \
	ADungeonEscapeCharacter(const ADungeonEscapeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonEscapeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonEscapeCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADungeonEscapeCharacter) \
	NO_API virtual ~ADungeonEscapeCharacter();


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_21_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADungeonEscapeCharacter;

// ********** End Class ADungeonEscapeCharacter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
