// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonEscapeCameraManager.h"

#ifdef DUNGEONESCAPE_DungeonEscapeCameraManager_generated_h
#error "DungeonEscapeCameraManager.generated.h already included, missing '#pragma once' in DungeonEscapeCameraManager.h"
#endif
#define DUNGEONESCAPE_DungeonEscapeCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADungeonEscapeCameraManager **********************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeCameraManager_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonEscapeCameraManager(); \
	friend struct Z_Construct_UClass_ADungeonEscapeCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(ADungeonEscapeCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_ADungeonEscapeCameraManager_NoRegister) \
	DECLARE_SERIALIZER(ADungeonEscapeCameraManager)


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADungeonEscapeCameraManager(ADungeonEscapeCameraManager&&) = delete; \
	ADungeonEscapeCameraManager(const ADungeonEscapeCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonEscapeCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonEscapeCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonEscapeCameraManager) \
	NO_API virtual ~ADungeonEscapeCameraManager();


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h_13_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADungeonEscapeCameraManager;

// ********** End Class ADungeonEscapeCameraManager ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
