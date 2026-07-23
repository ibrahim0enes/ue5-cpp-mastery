// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerComponent.h"

#ifdef DUNGEONESCAPE_TriggerComponent_generated_h
#error "TriggerComponent.generated.h already included, missing '#pragma once' in TriggerComponent.h"
#endif
#define DUNGEONESCAPE_TriggerComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UTriggerComponent ********************************************************
#define FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


DUNGEONESCAPE_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerComponent(); \
	friend struct Z_Construct_UClass_UTriggerComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UTriggerComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_UTriggerComponent_NoRegister) \
	DECLARE_SERIALIZER(UTriggerComponent)


#define FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTriggerComponent(UTriggerComponent&&) = delete; \
	UTriggerComponent(const UTriggerComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTriggerComponent) \
	NO_API virtual ~UTriggerComponent();


#define FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_15_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTriggerComponent;

// ********** End Class UTriggerComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_TriggerComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
