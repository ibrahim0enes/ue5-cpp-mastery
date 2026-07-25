// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonEscapeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDungeonEscapeGameMode() {}

// ********** Begin Cross Module References ********************************************************
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeGameMode();
DUNGEONESCAPE_API UClass* Z_Construct_UClass_ADungeonEscapeGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DungeonEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADungeonEscapeGameMode ***************************************************
void ADungeonEscapeGameMode::StaticRegisterNativesADungeonEscapeGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADungeonEscapeGameMode;
UClass* ADungeonEscapeGameMode::GetPrivateStaticClass()
{
	using TClass = ADungeonEscapeGameMode;
	if (!Z_Registration_Info_UClass_ADungeonEscapeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DungeonEscapeGameMode"),
			Z_Registration_Info_UClass_ADungeonEscapeGameMode.InnerSingleton,
			StaticRegisterNativesADungeonEscapeGameMode,
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
	return Z_Registration_Info_UClass_ADungeonEscapeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ADungeonEscapeGameMode_NoRegister()
{
	return ADungeonEscapeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADungeonEscapeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DungeonEscapeGameMode.h" },
		{ "ModuleRelativePath", "DungeonEscapeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonEscapeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonEscapeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonEscapeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonEscapeGameMode_Statics::ClassParams = {
	&ADungeonEscapeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonEscapeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonEscapeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonEscapeGameMode()
{
	if (!Z_Registration_Info_UClass_ADungeonEscapeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonEscapeGameMode.OuterSingleton, Z_Construct_UClass_ADungeonEscapeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonEscapeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonEscapeGameMode);
ADungeonEscapeGameMode::~ADungeonEscapeGameMode() {}
// ********** End Class ADungeonEscapeGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h__Script_DungeonEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonEscapeGameMode, ADungeonEscapeGameMode::StaticClass, TEXT("ADungeonEscapeGameMode"), &Z_Registration_Info_UClass_ADungeonEscapeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonEscapeGameMode), 1980133800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h__Script_DungeonEscape_1857082363(TEXT("/Script/DungeonEscape"),
	Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h__Script_DungeonEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DungeonEscape_Source_DungeonEscape_DungeonEscapeGameMode_h__Script_DungeonEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
