// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DungeonEscapePlayerController.h"

#ifdef DUNGEONESCAPE_DungeonEscapePlayerController_generated_h
#error "DungeonEscapePlayerController.generated.h already included, missing '#pragma once' in DungeonEscapePlayerController.h"
#endif
#define DUNGEONESCAPE_DungeonEscapePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADungeonEscapePlayerController *******************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapePlayerController_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonEscapePlayerController(); \
	friend struct Z_Construct_UClass_ADungeonEscapePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ADungeonEscapePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_ADungeonEscapePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ADungeonEscapePlayerController)


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADungeonEscapePlayerController(ADungeonEscapePlayerController&&) = delete; \
	ADungeonEscapePlayerController(const ADungeonEscapePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonEscapePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonEscapePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADungeonEscapePlayerController) \
	NO_API virtual ~ADungeonEscapePlayerController();


#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h_17_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADungeonEscapePlayerController;

// ********** End Class ADungeonEscapePlayerController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_DungeonEscapePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
