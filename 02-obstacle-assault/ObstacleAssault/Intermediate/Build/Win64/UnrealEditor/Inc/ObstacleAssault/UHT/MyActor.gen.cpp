// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMyActor();
OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMyActor_NoRegister();
OBSTACLEASSAULT_API UScriptStruct* Z_Construct_UScriptStruct_FLocations();
UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLocations ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLocations;
class UScriptStruct* FLocations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLocations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLocations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocations, (UObject*)Z_Construct_UPackage__Script_ObstacleAssault(), TEXT("Locations"));
	}
	return Z_Registration_Info_UScriptStruct_FLocations.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLocations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLocation_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocations_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocations, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocations_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocations, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLocation_MetaData), NewProp_CurrentLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocations_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocations, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocations_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocations_Statics::NewProp_CurrentLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocations_Statics::NewProp_TargetLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	nullptr,
	&NewStructOps,
	"Locations",
	Z_Construct_UScriptStruct_FLocations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocations_Statics::PropPointers),
	sizeof(FLocations),
	alignof(FLocations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocations()
{
	if (!Z_Registration_Info_UScriptStruct_FLocations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLocations.InnerSingleton, Z_Construct_UScriptStruct_FLocations_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLocations.InnerSingleton;
}
// ********** End ScriptStruct FLocations **********************************************************

// ********** Begin Class AMyActor *****************************************************************
void AMyActor::StaticRegisterNativesAMyActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyActor;
UClass* AMyActor::GetPrivateStaticClass()
{
	using TClass = AMyActor;
	if (!Z_Registration_Info_UClass_AMyActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyActor"),
			Z_Registration_Info_UClass_AMyActor.InnerSingleton,
			StaticRegisterNativesAMyActor,
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
	return Z_Registration_Info_UClass_AMyActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyActor_NoRegister()
{
	return AMyActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor.h" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyLocations_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[] = {
		{ "Category", "Locations" },
		{ "ModuleRelativePath", "MyActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_MyLocations = { "MyLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, MyLocations), Z_Construct_UScriptStruct_FLocations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyLocations_MetaData), NewProp_MyLocations_MetaData) }; // 2428690719
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLocation_MetaData), NewProp_NewLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MyLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_NewLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActor_Statics::ClassParams = {
	&AMyActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActor()
{
	if (!Z_Registration_Info_UClass_AMyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActor.OuterSingleton, Z_Construct_UClass_AMyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor);
AMyActor::~AMyActor() {}
// ********** End Class AMyActor *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLocations::StaticStruct, Z_Construct_UScriptStruct_FLocations_Statics::NewStructOps, TEXT("Locations"), &Z_Registration_Info_UScriptStruct_FLocations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocations), 2428690719U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 2228455465U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_2261443827(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
