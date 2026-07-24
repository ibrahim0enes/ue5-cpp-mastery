// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CollectableItem.h"

#ifdef DUNGEONESCAPE_CollectableItem_generated_h
#error "CollectableItem.generated.h already included, missing '#pragma once' in CollectableItem.h"
#endif
#define DUNGEONESCAPE_CollectableItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACollectableItem *********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ACollectableItem_NoRegister();

#define FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACollectableItem(); \
	friend struct Z_Construct_UClass_ACollectableItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUNGEONESCAPE_API UClass* Z_Construct_UClass_ACollectableItem_NoRegister(); \
public: \
	DECLARE_CLASS2(ACollectableItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonEscape"), Z_Construct_UClass_ACollectableItem_NoRegister) \
	DECLARE_SERIALIZER(ACollectableItem)


#define FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACollectableItem(ACollectableItem&&) = delete; \
	ACollectableItem(const ACollectableItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACollectableItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACollectableItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACollectableItem) \
	NO_API virtual ~ACollectableItem();


#define FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h_9_PROLOG
#define FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h_12_INCLASS_NO_PURE_DECLS \
	FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACollectableItem;

// ********** End Class ACollectableItem ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
