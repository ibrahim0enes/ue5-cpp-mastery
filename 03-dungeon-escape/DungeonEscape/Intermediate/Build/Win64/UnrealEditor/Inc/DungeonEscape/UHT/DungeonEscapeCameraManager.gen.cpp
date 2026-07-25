// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonEscapeCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDungeonEscapeCameraManager() {}

// ********** Begin Cross Module References ********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeCameraManager();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADungeonEscapeCameraManager **********************************************
void ADungeonEscapeCameraManager::StaticRegisterNativesADungeonEscapeCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADungeonEscapeCameraManager;
UClass* ADungeonEscapeCameraManager::GetPrivateStaticClass()
{
	using TClass = ADungeonEscapeCameraManager;
	if (!Z_Registration_Info_UClass_ADungeonEscapeCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonEscapeCameraManager"),
			Z_Registration_Info_UClass_ADungeonEscapeCameraManager.InnerSingleton,
			StaticRegisterNativesADungeonEscapeCameraManager,
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
	return Z_Registration_Info_UClass_ADungeonEscapeCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_ADungeonEscapeCameraManager_NoRegister()
{
	return ADungeonEscapeCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADungeonEscapeCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "DungeonEscapeCameraManager.h" },
		{ "ModuleRelativePath", "DungeonEscapeCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonEscapeCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonEscapeCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonEscapeCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonEscapeCameraManager_Statics::ClassParams = {
	&ADungeonEscapeCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonEscapeCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonEscapeCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonEscapeCameraManager()
{
	if (!Z_Registration_Info_UClass_ADungeonEscapeCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonEscapeCameraManager.OuterSingleton, Z_Construct_UClass_ADungeonEscapeCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonEscapeCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonEscapeCameraManager);
ADungeonEscapeCameraManager::~ADungeonEscapeCameraManager() {}
// ********** End Class ADungeonEscapeCameraManager ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonEscapeCameraManager, ADungeonEscapeCameraManager::StaticClass, TEXT("ADungeonEscapeCameraManager"), &Z_Registration_Info_UClass_ADungeonEscapeCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonEscapeCameraManager), 3411308779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h__Script_DungeonEscape_3968879431(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeCameraManager_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
