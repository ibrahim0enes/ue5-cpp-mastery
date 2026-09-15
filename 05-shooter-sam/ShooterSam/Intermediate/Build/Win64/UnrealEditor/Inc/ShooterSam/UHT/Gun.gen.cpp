// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gun.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGun() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
SHOOTERSAM_API UClass* Z_Construct_UClass_AGun();
SHOOTERSAM_API UClass* Z_Construct_UClass_AGun_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGun *********************************************************************
void AGun::StaticRegisterNativesAGun()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGun;
UClass* AGun::GetPrivateStaticClass()
{
	using TClass = AGun;
	if (!Z_Registration_Info_UClass_AGun.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Gun"),
			Z_Registration_Info_UClass_AGun.InnerSingleton,
			StaticRegisterNativesAGun,
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
	return Z_Registration_Info_UClass_AGun.InnerSingleton;
}
UClass* Z_Construct_UClass_AGun_NoRegister()
{
	return AGun::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Gun.h" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPartcileSystem_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletDamage_MetaData[] = {
		{ "Category", "Gun" },
		{ "ModuleRelativePath", "Gun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactPartcileSystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GunMesh_MetaData), NewProp_GunMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, MuzzleFlash), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlash_MetaData), NewProp_MuzzleFlash_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_ImpactPartcileSystem = { "ImpactPartcileSystem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, ImpactPartcileSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPartcileSystem_MetaData), NewProp_ImpactPartcileSystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGun_Statics::NewProp_BulletDamage = { "BulletDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGun, BulletDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletDamage_MetaData), NewProp_BulletDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_GunMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MuzzleFlash,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_ImpactPartcileSystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGun_Statics::NewProp_BulletDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGun_Statics::ClassParams = {
	&AGun::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGun_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGun()
{
	if (!Z_Registration_Info_UClass_AGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGun.OuterSingleton, Z_Construct_UClass_AGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGun.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGun);
AGun::~AGun() {}
// ********** End Class AGun ***********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGun, AGun::StaticClass, TEXT("AGun"), &Z_Registration_Info_UClass_AGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGun), 3217238784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_h__Script_ShooterSam_714462678(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_Gun_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
