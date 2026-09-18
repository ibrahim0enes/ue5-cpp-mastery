// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BTService_PlayerLocation.h"

#ifdef SHOOTERSAM_BTService_PlayerLocation_generated_h
#error "BTService_PlayerLocation.generated.h already included, missing '#pragma once' in BTService_PlayerLocation.h"
#endif
#define SHOOTERSAM_BTService_PlayerLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBTService_PlayerLocation ************************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_UBTService_PlayerLocation_NoRegister();

#define FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService_PlayerLocation(); \
	friend struct Z_Construct_UClass_UBTService_PlayerLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERSAM_API UClass* Z_Construct_UClass_UBTService_PlayerLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBTService_PlayerLocation, UBTService_BlackboardBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShooterSam"), Z_Construct_UClass_UBTService_PlayerLocation_NoRegister) \
	DECLARE_SERIALIZER(UBTService_PlayerLocation)


#define FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBTService_PlayerLocation(UBTService_PlayerLocation&&) = delete; \
	UBTService_PlayerLocation(const UBTService_PlayerLocation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService_PlayerLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService_PlayerLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTService_PlayerLocation) \
	NO_API virtual ~UBTService_PlayerLocation();


#define FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h_12_PROLOG
#define FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h_15_INCLASS_NO_PURE_DECLS \
	FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBTService_PlayerLocation;

// ********** End Class UBTService_PlayerLocation **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ShooterSam_Source_ShooterSam_BTService_PlayerLocation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
