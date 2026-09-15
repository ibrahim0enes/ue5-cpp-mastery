// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
SHOOTERSAM_API UClass* Z_Construct_UClass_UHUDWidget();
SHOOTERSAM_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHUDWidget ***************************************************************
void UHUDWidget::StaticRegisterNativesUHUDWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHUDWidget;
UClass* UHUDWidget::GetPrivateStaticClass()
{
	using TClass = UHUDWidget;
	if (!Z_Registration_Info_UClass_UHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HUDWidget"),
			Z_Registration_Info_UClass_UHUDWidget.InnerSingleton,
			StaticRegisterNativesUHUDWidget,
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
	return Z_Registration_Info_UClass_UHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UHUDWidget_NoRegister()
{
	return UHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUDWidget.h" },
		{ "ModuleRelativePath", "HUDWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHUDWidget_Statics::ClassParams = {
	&UHUDWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHUDWidget()
{
	if (!Z_Registration_Info_UClass_UHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHUDWidget.OuterSingleton, Z_Construct_UClass_UHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHUDWidget.OuterSingleton;
}
UHUDWidget::UHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDWidget);
UHUDWidget::~UHUDWidget() {}
// ********** End Class UHUDWidget *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_HUDWidget_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHUDWidget, UHUDWidget::StaticClass, TEXT("UHUDWidget"), &Z_Registration_Info_UClass_UHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHUDWidget), 4100825780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_HUDWidget_h__Script_ShooterSam_3506376403(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_HUDWidget_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_HUDWidget_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
