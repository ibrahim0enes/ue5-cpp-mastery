// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseClass.h"

#ifdef BATTLEBLASTER_BaseClass_generated_h
#error "BaseClass.generated.h already included, missing '#pragma once' in BaseClass.h"
#endif
#define BATTLEBLASTER_BaseClass_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABaseClass ***************************************************************
BATTLEBLASTER_API UClass* Z_Construct_UClass_ABaseClass_NoRegister();

#define FID_BattleBlaster_Source_BattleBlaster_BaseClass_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseClass(); \
	friend struct Z_Construct_UClass_ABaseClass_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BATTLEBLASTER_API UClass* Z_Construct_UClass_ABaseClass_NoRegister(); \
public: \
	DECLARE_CLASS2(ABaseClass, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattleBlaster"), Z_Construct_UClass_ABaseClass_NoRegister) \
	DECLARE_SERIALIZER(ABaseClass)


#define FID_BattleBlaster_Source_BattleBlaster_BaseClass_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABaseClass(ABaseClass&&) = delete; \
	ABaseClass(const ABaseClass&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseClass) \
	NO_API virtual ~ABaseClass();


#define FID_BattleBlaster_Source_BattleBlaster_BaseClass_h_17_PROLOG
#define FID_BattleBlaster_Source_BattleBlaster_BaseClass_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BattleBlaster_Source_BattleBlaster_BaseClass_h_20_INCLASS_NO_PURE_DECLS \
	FID_BattleBlaster_Source_BattleBlaster_BaseClass_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABaseClass;

// ********** End Class ABaseClass *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BattleBlaster_Source_BattleBlaster_BaseClass_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
