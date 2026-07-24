// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonEscape/CollectableItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCollectableItem() {}

// ********** Begin Cross Module References ********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ACollectableItem();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ACollectableItem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACollectableItem *********************************************************
void ACollectableItem::StaticRegisterNativesACollectableItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACollectableItem;
UClass* ACollectableItem::GetPrivateStaticClass()
{
	using TClass = ACollectableItem;
	if (!Z_Registration_Info_UClass_ACollectableItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CollectableItem"),
			Z_Registration_Info_UClass_ACollectableItem.InnerSingleton,
			StaticRegisterNativesACollectableItem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACollectableItem.InnerSingleton;
}
UClass* Z_Construct_UClass_ACollectableItem_NoRegister()
{
	return ACollectableItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACollectableItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CollectableItem.h" },
		{ "ModuleRelativePath", "CollectableItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "CollectableItem" },
		{ "ModuleRelativePath", "CollectableItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectableItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACollectableItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACollectableItem, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollectableItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollectableItem_Statics::NewProp_ItemName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACollectableItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectableItem_Statics::ClassParams = {
	&ACollectableItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACollectableItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableItem_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectableItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACollectableItem()
{
	if (!Z_Registration_Info_UClass_ACollectableItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectableItem.OuterSingleton, Z_Construct_UClass_ACollectableItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACollectableItem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectableItem);
ACollectableItem::~ACollectableItem() {}
// ********** End Class ACollectableItem ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACollectableItem, ACollectableItem::StaticClass, TEXT("ACollectableItem"), &Z_Registration_Info_UClass_ACollectableItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectableItem), 1517801988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h__Script_DungeonEscape_2382258571(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_CollectableItem_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
