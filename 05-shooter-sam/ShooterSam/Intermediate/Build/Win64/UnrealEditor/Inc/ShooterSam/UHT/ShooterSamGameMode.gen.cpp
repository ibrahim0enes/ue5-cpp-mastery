// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterSamGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterSamGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamGameMode();
SHOOTERSAM_API UClass* Z_Construct_UClass_AShooterSamGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShooterSamGameMode ******************************************************
void AShooterSamGameMode::StaticRegisterNativesAShooterSamGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShooterSamGameMode;
UClass* AShooterSamGameMode::GetPrivateStaticClass()
{
	using TClass = AShooterSamGameMode;
	if (!Z_Registration_Info_UClass_AShooterSamGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShooterSamGameMode"),
			Z_Registration_Info_UClass_AShooterSamGameMode.InnerSingleton,
			StaticRegisterNativesAShooterSamGameMode,
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
	return Z_Registration_Info_UClass_AShooterSamGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AShooterSamGameMode_NoRegister()
{
	return AShooterSamGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShooterSamGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShooterSamGameMode.h" },
		{ "ModuleRelativePath", "ShooterSamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterSamGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShooterSamGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterSamGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterSamGameMode_Statics::ClassParams = {
	&AShooterSamGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterSamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterSamGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShooterSamGameMode()
{
	if (!Z_Registration_Info_UClass_AShooterSamGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterSamGameMode.OuterSingleton, Z_Construct_UClass_AShooterSamGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShooterSamGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterSamGameMode);
AShooterSamGameMode::~AShooterSamGameMode() {}
// ********** End Class AShooterSamGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShooterSamGameMode, AShooterSamGameMode::StaticClass, TEXT("AShooterSamGameMode"), &Z_Registration_Info_UClass_AShooterSamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterSamGameMode), 333484182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h__Script_ShooterSam_571586738(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_ShooterSamGameMode_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
