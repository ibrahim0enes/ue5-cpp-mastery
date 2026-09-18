// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTTaskNode_Shoot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBTTaskNode_Shoot() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
SHOOTERSAM_API UClass* Z_Construct_UClass_UBTTaskNode_Shoot();
SHOOTERSAM_API UClass* Z_Construct_UClass_UBTTaskNode_Shoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBTTaskNode_Shoot ********************************************************
void UBTTaskNode_Shoot::StaticRegisterNativesUBTTaskNode_Shoot()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBTTaskNode_Shoot;
UClass* UBTTaskNode_Shoot::GetPrivateStaticClass()
{
	using TClass = UBTTaskNode_Shoot;
	if (!Z_Registration_Info_UClass_UBTTaskNode_Shoot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BTTaskNode_Shoot"),
			Z_Registration_Info_UClass_UBTTaskNode_Shoot.InnerSingleton,
			StaticRegisterNativesUBTTaskNode_Shoot,
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
	return Z_Registration_Info_UClass_UBTTaskNode_Shoot.InnerSingleton;
}
UClass* Z_Construct_UClass_UBTTaskNode_Shoot_NoRegister()
{
	return UBTTaskNode_Shoot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBTTaskNode_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTaskNode_Shoot.h" },
		{ "ModuleRelativePath", "BTTaskNode_Shoot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTaskNode_Shoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTaskNode_Shoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Shoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTaskNode_Shoot_Statics::ClassParams = {
	&UBTTaskNode_Shoot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTaskNode_Shoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTaskNode_Shoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTaskNode_Shoot()
{
	if (!Z_Registration_Info_UClass_UBTTaskNode_Shoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTaskNode_Shoot.OuterSingleton, Z_Construct_UClass_UBTTaskNode_Shoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTaskNode_Shoot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTaskNode_Shoot);
UBTTaskNode_Shoot::~UBTTaskNode_Shoot() {}
// ********** End Class UBTTaskNode_Shoot **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTaskNode_Shoot_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTaskNode_Shoot, UBTTaskNode_Shoot::StaticClass, TEXT("UBTTaskNode_Shoot"), &Z_Registration_Info_UClass_UBTTaskNode_Shoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTaskNode_Shoot), 3198637809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTaskNode_Shoot_h__Script_ShooterSam_1416337166(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTaskNode_Shoot_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_BTTaskNode_Shoot_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
