// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lock.h"

#ifdef DUNGEONESCAPE_Lock_generated_h
#error "Lock.generated.h already included, missing '#pragma once' in Lock.h"
#endif
#define DUNGEONESCAPE_Lock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALock ********************************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ALock_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_Lock_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALock(); \
	friend struct Z_Construct_UClass_ALock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_ALock_NoRegister(); \
public: \
	DECLARE_CLASS2(ALock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_ALock_NoRegister) \
	DECLARE_SERIALIZER(ALock)


#define FID_DungeonEscape_Source_DungeonEscape_Lock_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALock(ALock&&) = delete; \
	ALock(const ALock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALock) \
	NO_API virtual ~ALock();


#define FID_DungeonEscape_Source_DungeonEscape_Lock_h_14_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_Lock_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_Lock_h_17_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_Lock_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALock;

// ********** End Class ALock **********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_Lock_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
