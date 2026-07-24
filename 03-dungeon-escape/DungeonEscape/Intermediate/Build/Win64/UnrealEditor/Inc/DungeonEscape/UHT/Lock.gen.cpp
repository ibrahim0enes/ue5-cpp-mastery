// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonEscape/Lock.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLock() {}

// ********** Begin Cross Module References ********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ALock();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ALock_NoRegister();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_UTriggerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALock ********************************************************************
void ALock::StaticRegisterNativesALock()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALock;
UClass* ALock::GetPrivateStaticClass()
{
	using TClass = ALock;
	if (!Z_Registration_Info_UClass_ALock.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Lock"),
			Z_Registration_Info_UClass_ALock.InnerSingleton,
			StaticRegisterNativesALock,
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
	return Z_Registration_Info_UClass_ALock.InnerSingleton;
}
UClass* Z_Construct_UClass_ALock_NoRegister()
{
	return ALock::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lock.h" },
		{ "ModuleRelativePath", "Lock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[] = {
		{ "Category", "Lock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerComp_MetaData[] = {
		{ "Category", "Lock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyItemMesh_MetaData[] = {
		{ "Category", "Lock" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyItemMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALock_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALock, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootComp_MetaData), NewProp_RootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALock_Statics::NewProp_TriggerComp = { "TriggerComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALock, TriggerComp), Z_Construct_UClass_UTriggerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerComp_MetaData), NewProp_TriggerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALock_Statics::NewProp_KeyItemMesh = { "KeyItemMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALock, KeyItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyItemMesh_MetaData), NewProp_KeyItemMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALock_Statics::NewProp_RootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALock_Statics::NewProp_TriggerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALock_Statics::NewProp_KeyItemMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALock_Statics::ClassParams = {
	&ALock::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALock_Statics::Class_MetaDataParams), Z_Construct_UClass_ALock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALock()
{
	if (!Z_Registration_Info_UClass_ALock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALock.OuterSingleton, Z_Construct_UClass_ALock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALock.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALock);
ALock::~ALock() {}
// ********** End Class ALock **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_Lock_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALock, ALock::StaticClass, TEXT("ALock"), &Z_Registration_Info_UClass_ALock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALock), 3731315827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_Lock_h__Script_DungeonEscape_1502511161(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_Lock_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_Lock_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
