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
OBSTACLEASSAULT_API UScriptStruct* Z_Construct_UScriptStruct_FRotations();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun konum (Location) bilgilerini tutan struct\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun konum (Location) bilgilerini tutan struct" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun hareket ba\xef\xbf\xbdlang\xef\xbf\xbd\xef\xbf\xbd noktas\xef\xbf\xbd (BeginPlay'de bir kere set edilir)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun hareket ba\xef\xbf\xbdlang\xef\xbf\xbd\xef\xbf\xbd noktas\xef\xbf\xbd (BeginPlay'de bir kere set edilir)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLocation_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun her frame'deki anl\xef\xbf\xbdk konumu\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun her frame'deki anl\xef\xbf\xbdk konumu" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun gitmesi gereken hedef konum\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun gitmesi gereken hedef konum" },
#endif
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

// ********** Begin ScriptStruct FRotations ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRotations;
class UScriptStruct* FRotations::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRotations.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRotations.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotations, (UObject*)Z_Construct_UPackage__Script_ObstacleAssault(), TEXT("Rotations"));
	}
	return Z_Registration_Info_UScriptStruct_FRotations.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FRotations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun rotasyon bilgilerini tutan struct\n// Not: FRotator yerine FVector (Euler a\xef\xbf\xbd\xef\xbf\xbdlar\xef\xbf\xbd: X=Roll, Y=Pitch, Z=Yaw) kullan\xef\xbf\xbdl\xef\xbf\xbdyor\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun rotasyon bilgilerini tutan struct\nNot: FRotator yerine FVector (Euler a\xef\xbf\xbd\xef\xbf\xbdlar\xef\xbf\xbd: X=Roll, Y=Pitch, Z=Yaw) kullan\xef\xbf\xbdl\xef\xbf\xbdyor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[] = {
		{ "Category", "Rotations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ba\xef\xbf\xbdlang\xef\xbf\xbd\xef\xbf\xbd rotasyonu (Euler format\xef\xbf\xbdnda)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ba\xef\xbf\xbdlang\xef\xbf\xbd\xef\xbf\xbd rotasyonu (Euler format\xef\xbf\xbdnda)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[] = {
		{ "Category", "Rotations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Anl\xef\xbf\xbdk rotasyon (Euler format\xef\xbf\xbdnda)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anl\xef\xbf\xbdk rotasyon (Euler format\xef\xbf\xbdnda)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[] = {
		{ "Category", "Rotations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hedef rotasyon (Euler format\xef\xbf\xbdnda)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hedef rotasyon (Euler format\xef\xbf\xbdnda)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotations>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotations_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotations, StartRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRotation_MetaData), NewProp_StartRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotations_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotations, CurrentRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRotation_MetaData), NewProp_CurrentRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotations_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotations, TargetRotation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetRotation_MetaData), NewProp_TargetRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotations_Statics::NewProp_StartRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotations_Statics::NewProp_CurrentRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotations_Statics::NewProp_TargetRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotations_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	nullptr,
	&NewStructOps,
	"Rotations",
	Z_Construct_UScriptStruct_FRotations_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotations_Statics::PropPointers),
	sizeof(FRotations),
	alignof(FRotations),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotations_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotations_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotations()
{
	if (!Z_Registration_Info_UScriptStruct_FRotations.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRotations.InnerSingleton, Z_Construct_UScriptStruct_FRotations_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FRotations.InnerSingleton;
}
// ********** End ScriptStruct FRotations **********************************************************

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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Konum (Start/Current/Target) verilerini tutan struct \xef\xbf\xbdrne\xef\xbf\xbdi\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Konum (Start/Current/Target) verilerini tutan struct \xef\xbf\xbdrne\xef\xbf\xbdi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyRotations_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotasyon (Start/Current/Target) verilerini tutan struct \xef\xbf\xbdrne\xef\xbf\xbdi\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotasyon (Start/Current/Target) verilerini tutan struct \xef\xbf\xbdrne\xef\xbf\xbdi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeed_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun konum de\xef\xbf\xbdi\xef\xbf\xbdim h\xef\xbf\xbdz\xef\xbf\xbd (cm/saniye) - VInterpConstantTo'nun Speed parametresi\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun konum de\xef\xbf\xbdi\xef\xbf\xbdim h\xef\xbf\xbdz\xef\xbf\xbd (cm/saniye) - VInterpConstantTo'nun Speed parametresi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun rotasyon de\xef\xbf\xbdi\xef\xbf\xbdim h\xef\xbf\xbdz\xef\xbf\xbd (derece/saniye)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun rotasyon de\xef\xbf\xbdi\xef\xbf\xbdim h\xef\xbf\xbdz\xef\xbf\xbd (derece/saniye)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformVelocity_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun hangi y\xef\xbf\xbdnde hareket edece\xef\xbf\xbdini belirleyen vekt\xef\xbf\xbdr (y\xef\xbf\xbdn\xef\xbf\xbd normalize edilerek kullan\xef\xbf\xbdl\xef\xbf\xbdr)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun hangi y\xef\xbf\xbdnde hareket edece\xef\xbf\xbdini belirleyen vekt\xef\xbf\xbdr (y\xef\xbf\xbdn\xef\xbf\xbd normalize edilerek kullan\xef\xbf\xbdl\xef\xbf\xbdr)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun Start ile Target aras\xef\xbf\xbdndaki toplam mesafesi\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun Start ile Target aras\xef\xbf\xbdndaki toplam mesafesi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmount_MetaData[] = {
		{ "Category", "Locations" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Platformun Start rotasyonuna eklenecek d\xef\xbf\xbdn\xef\xbf\xbd\xef\xbf\xbd miktar\xef\xbf\xbd (Euler: X=Roll, Y=Pitch, Z=Yaw)\n" },
#endif
		{ "ModuleRelativePath", "MyActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Platformun Start rotasyonuna eklenecek d\xef\xbf\xbdn\xef\xbf\xbd\xef\xbf\xbd miktar\xef\xbf\xbd (Euler: X=Roll, Y=Pitch, Z=Yaw)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyLocations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MyRotations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_MyLocations = { "MyLocations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, MyLocations), Z_Construct_UScriptStruct_FLocations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyLocations_MetaData), NewProp_MyLocations_MetaData) }; // 734808636
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_MyRotations = { "MyRotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, MyRotations), Z_Construct_UScriptStruct_FRotations, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyRotations_MetaData), NewProp_MyRotations_MetaData) }; // 1831244575
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, InterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpSpeed_MetaData), NewProp_InterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, RotationInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationInterpSpeed_MetaData), NewProp_RotationInterpSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_PlatformVelocity = { "PlatformVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, PlatformVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformVelocity_MetaData), NewProp_PlatformVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDistance_MetaData), NewProp_MoveDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyActor_Statics::NewProp_RotationAmount = { "RotationAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActor, RotationAmount), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAmount_MetaData), NewProp_RotationAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MyLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MyRotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_RotationInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_PlatformVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_MoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActor_Statics::NewProp_RotationAmount,
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
		{ FLocations::StaticStruct, Z_Construct_UScriptStruct_FLocations_Statics::NewStructOps, TEXT("Locations"), &Z_Registration_Info_UScriptStruct_FLocations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocations), 734808636U) },
		{ FRotations::StaticStruct, Z_Construct_UScriptStruct_FRotations_Statics::NewStructOps, TEXT("Rotations"), &Z_Registration_Info_UScriptStruct_FRotations, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotations), 1831244575U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActor, AMyActor::StaticClass, TEXT("AMyActor"), &Z_Registration_Info_UClass_AMyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActor), 2457359945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_1390687016(TEXT("/Script/ObstacleAssault"),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MyActor_h__Script_ObstacleAssault_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
