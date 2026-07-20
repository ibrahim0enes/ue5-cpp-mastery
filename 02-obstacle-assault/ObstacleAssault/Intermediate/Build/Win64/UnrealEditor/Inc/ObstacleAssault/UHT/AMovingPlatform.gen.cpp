// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AMovingPlatform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAMovingPlatform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AAMovingPlatform();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AAMovingPlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAMovingPlatform *********************************************************
void AAMovingPlatform::StaticRegisterNativesAAMovingPlatform()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAMovingPlatform;
UClass* AAMovingPlatform::GetPrivateStaticClass()
{
	using TClass = AAMovingPlatform;
	if (!Z_Registration_Info_UClass_AAMovingPlatform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AMovingPlatform"),
			Z_Registration_Info_UClass_AAMovingPlatform.InnerSingleton,
			StaticRegisterNativesAAMovingPlatform,
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
	return Z_Registration_Info_UClass_AAMovingPlatform.InnerSingleton;
}
UClass* Z_Construct_UClass_AAMovingPlatform_NoRegister()
{
	return AAMovingPlatform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AMovingPlatform.h" },
		{ "ModuleRelativePath", "AMovingPlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAMovingPlatform_Statics::ClassParams = {
	&AAMovingPlatform::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AAMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AAMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAMovingPlatform.OuterSingleton, Z_Construct_UClass_AAMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAMovingPlatform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAMovingPlatform);
AAMovingPlatform::~AAMovingPlatform() {}
// ********** End Class AAMovingPlatform ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_AMovingPlatform_h__Script_ObstacleAssault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAMovingPlatform, AAMovingPlatform::StaticClass, TEXT("AAMovingPlatform"), &Z_Registration_Info_UClass_AAMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAMovingPlatform), 3116087359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_AMovingPlatform_h__Script_ObstacleAssault_33526458(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_AMovingPlatform_h__Script_ObstacleAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_AMovingPlatform_h__Script_ObstacleAssault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
