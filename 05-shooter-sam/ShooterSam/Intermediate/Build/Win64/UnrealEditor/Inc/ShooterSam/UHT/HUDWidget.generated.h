// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUDWidget.h"

#ifdef SHOOTERSAM_HUDWidget_generated_h
#error "HUDWidget.generated.h already included, missing '#pragma once' in HUDWidget.h"
#endif
#define SHOOTERSAM_HUDWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UHUDWidget ***************************************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_HUDWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_UHUDWidget_NoRegister) \
	DECLARE_SERIALIZER(UHUDWidget)


#define FID_ShooterSam_Source_ShooterSam_HUDWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHUDWidget(UHUDWidget&&) = delete; \
	UHUDWidget(const UHUDWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget) \
	NO_API virtual ~UHUDWidget();


#define FID_ShooterSam_Source_ShooterSam_HUDWidget_h_12_PROLOG
#define FID_ShooterSam_Source_ShooterSam_HUDWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_HUDWidget_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_HUDWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHUDWidget;

// ********** End Class UHUDWidget *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_HUDWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
