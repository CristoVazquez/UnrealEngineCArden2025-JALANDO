// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/Car.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCar() {}

// Begin Cross Module References
EUCARDEN_API UClass* Z_Construct_UClass_ACar();
EUCARDEN_API UClass* Z_Construct_UClass_ACar_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_AVehicle();
EUCARDEN_API UClass* Z_Construct_UClass_AVehicle_NoRegister();
EUCARDEN_API UEnum* Z_Construct_UEnum_EUCArden_ECarBrand();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Enum ECarBrand
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECarBrand;
static UEnum* ECarBrand_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECarBrand.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECarBrand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EUCArden_ECarBrand, (UObject*)Z_Construct_UPackage__Script_EUCArden(), TEXT("ECarBrand"));
	}
	return Z_Registration_Info_UEnum_ECarBrand.OuterSingleton;
}
template<> EUCARDEN_API UEnum* StaticEnum<ECarBrand>()
{
	return ECarBrand_StaticEnum();
}
struct Z_Construct_UEnum_EUCArden_ECarBrand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Audi.DisplayName", "Audi" },
		{ "Audi.Name", "ECarBrand::Audi" },
		{ "BMW.DisplayName", "BMW" },
		{ "BMW.Name", "ECarBrand::BMW" },
		{ "Chevrolet.DisplayName", "Chevrolet" },
		{ "Chevrolet.Name", "ECarBrand::Chevrolet" },
		{ "Ford.DisplayName", "Ford" },
		{ "Ford.Name", "ECarBrand::Ford" },
		{ "Honda.DisplayName", "Honda" },
		{ "Honda.Name", "ECarBrand::Honda" },
		{ "Hyundai.DisplayName", "Hyundai" },
		{ "Hyundai.Name", "ECarBrand::Hyundai" },
		{ "Mercedes.DisplayName", "Mercedes" },
		{ "Mercedes.Name", "ECarBrand::Mercedes" },
		{ "ModuleRelativePath", "Car.h" },
		{ "Nissan.DisplayName", "Nissan" },
		{ "Nissan.Name", "ECarBrand::Nissan" },
		{ "Tesla.DisplayName", "Tesla" },
		{ "Tesla.Name", "ECarBrand::Tesla" },
		{ "Toyota.DisplayName", "Toyota" },
		{ "Toyota.Name", "ECarBrand::Toyota" },
		{ "Volkswagen.DisplayName", "Volkswagen" },
		{ "Volkswagen.Name", "ECarBrand::Volkswagen" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECarBrand::Toyota", (int64)ECarBrand::Toyota },
		{ "ECarBrand::Ford", (int64)ECarBrand::Ford },
		{ "ECarBrand::Honda", (int64)ECarBrand::Honda },
		{ "ECarBrand::Chevrolet", (int64)ECarBrand::Chevrolet },
		{ "ECarBrand::BMW", (int64)ECarBrand::BMW },
		{ "ECarBrand::Audi", (int64)ECarBrand::Audi },
		{ "ECarBrand::Mercedes", (int64)ECarBrand::Mercedes },
		{ "ECarBrand::Volkswagen", (int64)ECarBrand::Volkswagen },
		{ "ECarBrand::Nissan", (int64)ECarBrand::Nissan },
		{ "ECarBrand::Hyundai", (int64)ECarBrand::Hyundai },
		{ "ECarBrand::Tesla", (int64)ECarBrand::Tesla },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EUCArden_ECarBrand_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EUCArden,
	nullptr,
	"ECarBrand",
	"ECarBrand",
	Z_Construct_UEnum_EUCArden_ECarBrand_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EUCArden_ECarBrand_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EUCArden_ECarBrand_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EUCArden_ECarBrand_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EUCArden_ECarBrand()
{
	if (!Z_Registration_Info_UEnum_ECarBrand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECarBrand.InnerSingleton, Z_Construct_UEnum_EUCArden_ECarBrand_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECarBrand.InnerSingleton;
}
// End Enum ECarBrand

// Begin Class ACar
void ACar::StaticRegisterNativesACar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACar);
UClass* Z_Construct_UClass_ACar_NoRegister()
{
	return ACar::StaticClass();
}
struct Z_Construct_UClass_ACar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Car.h" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarBrand_MetaData[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CarModel_MetaData[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicensePlate_MetaData[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "Car.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camper_MetaData[] = {
		{ "Category", "Car" },
		{ "ModuleRelativePath", "Car.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CarBrand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CarBrand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CarModel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LicensePlate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camper;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarBrand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarBrand = { "CarBrand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, CarBrand), Z_Construct_UEnum_EUCArden_ECarBrand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarBrand_MetaData), NewProp_CarBrand_MetaData) }; // 2234292512
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_CarModel = { "CarModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, CarModel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CarModel_MetaData), NewProp_CarModel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_LicensePlate = { "LicensePlate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, LicensePlate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicensePlate_MetaData), NewProp_LicensePlate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACar_Statics::NewProp_Camper = { "Camper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACar, Camper), Z_Construct_UClass_AVehicle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camper_MetaData), NewProp_Camper_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarBrand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarBrand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_CarModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_LicensePlate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACar_Statics::NewProp_Camper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AVehicle,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACar_Statics::ClassParams = {
	&ACar::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACar()
{
	if (!Z_Registration_Info_UClass_ACar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACar.OuterSingleton, Z_Construct_UClass_ACar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACar.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<ACar>()
{
	return ACar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACar);
ACar::~ACar() {}
// End Class ACar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Car_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECarBrand_StaticEnum, TEXT("ECarBrand"), &Z_Registration_Info_UEnum_ECarBrand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2234292512U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACar, ACar::StaticClass, TEXT("ACar"), &Z_Registration_Info_UClass_ACar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACar), 1693831165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Car_h_947147826(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Car_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Car_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Car_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Car_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
