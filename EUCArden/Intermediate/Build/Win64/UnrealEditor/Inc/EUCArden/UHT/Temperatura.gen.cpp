// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/Temperatura.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemperatura() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
EUCARDEN_API UClass* Z_Construct_UClass_ATemperatura();
EUCARDEN_API UClass* Z_Construct_UClass_ATemperatura_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class ATemperatura Function CalculateAvarageTemperature
struct Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics
{
	struct Temperatura_eventCalculateAvarageTemperature_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateAvarageTemperature_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateAvarageTemperature_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateAvarageTemperature_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "CalculateAvarageTemperature", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::Temperatura_eventCalculateAvarageTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::Temperatura_eventCalculateAvarageTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execCalculateAvarageTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperatura::CalculateAvarageTemperature(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperatura Function CalculateAvarageTemperature

// Begin Class ATemperatura Function CalculateStaticTemperatureDifference
struct Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics
{
	struct Temperatura_eventCalculateStaticTemperatureDifference_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateStaticTemperatureDifference_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateStaticTemperatureDifference_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateStaticTemperatureDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "CalculateStaticTemperatureDifference", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::Temperatura_eventCalculateStaticTemperatureDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::Temperatura_eventCalculateStaticTemperatureDifference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execCalculateStaticTemperatureDifference)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperatura::CalculateStaticTemperatureDifference(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperatura Function CalculateStaticTemperatureDifference

// Begin Class ATemperatura Function CalculateTemperatureDifference
struct Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics
{
	struct Temperatura_eventCalculateTemperatureDifference_Parms
	{
		float Temp1;
		float Temp2;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temp2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp1 = { "Temp1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateTemperatureDifference_Parms, Temp1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp2 = { "Temp2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateTemperatureDifference_Parms, Temp2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventCalculateTemperatureDifference_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_Temp2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "CalculateTemperatureDifference", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Temperatura_eventCalculateTemperatureDifference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::Temperatura_eventCalculateTemperatureDifference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execCalculateTemperatureDifference)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp1);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Temp2);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateTemperatureDifference(Z_Param_Temp1,Z_Param_Temp2);
	P_NATIVE_END;
}
// End Class ATemperatura Function CalculateTemperatureDifference

// Begin Class ATemperatura Function ConvertKelvinToCelsius
struct Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics
{
	struct Temperatura_eventConvertKelvinToCelsius_Parms
	{
		float Kelvin;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Kelvin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_Kelvin = { "Kelvin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertKelvinToCelsius_Parms, Kelvin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventConvertKelvinToCelsius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_Kelvin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "ConvertKelvinToCelsius", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Temperatura_eventConvertKelvinToCelsius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::Temperatura_eventConvertKelvinToCelsius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execConvertKelvinToCelsius)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Kelvin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=ATemperatura::ConvertKelvinToCelsius(Z_Param_Kelvin);
	P_NATIVE_END;
}
// End Class ATemperatura Function ConvertKelvinToCelsius

// Begin Class ATemperatura Function GetTemperatureFarenheit
struct Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics
{
	struct Temperatura_eventGetTemperatureFarenheit_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Metodo para obtener la temperatura en Farenheit\n" },
#endif
		{ "ModuleRelativePath", "Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Metodo para obtener la temperatura en Farenheit" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventGetTemperatureFarenheit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "GetTemperatureFarenheit", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::Temperatura_eventGetTemperatureFarenheit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::Temperatura_eventGetTemperatureFarenheit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATemperatura::execGetTemperatureFarenheit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTemperatureFarenheit();
	P_NATIVE_END;
}
// End Class ATemperatura Function GetTemperatureFarenheit

// Begin Class ATemperatura Function OnTemperatureChecked
struct Temperatura_eventOnTemperatureChecked_Parms
{
	float CurrentTemperature;
};
static const FName NAME_ATemperatura_OnTemperatureChecked = FName(TEXT("OnTemperatureChecked"));
void ATemperatura::OnTemperatureChecked(float CurrentTemperature)
{
	Temperatura_eventOnTemperatureChecked_Parms Parms;
	Parms.CurrentTemperature=CurrentTemperature;
	UFunction* Func = FindFunctionChecked(NAME_ATemperatura_OnTemperatureChecked);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Evento para checar temperatura\n" },
#endif
		{ "ModuleRelativePath", "Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evento para checar temperatura" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTemperature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::NewProp_CurrentTemperature = { "CurrentTemperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Temperatura_eventOnTemperatureChecked_Parms, CurrentTemperature), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::NewProp_CurrentTemperature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATemperatura, nullptr, "OnTemperatureChecked", nullptr, nullptr, Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::PropPointers), sizeof(Temperatura_eventOnTemperatureChecked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Temperatura_eventOnTemperatureChecked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATemperatura_OnTemperatureChecked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATemperatura_OnTemperatureChecked_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATemperatura Function OnTemperatureChecked

// Begin Class ATemperatura
void ATemperatura::StaticRegisterNativesATemperatura()
{
	UClass* Class = ATemperatura::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAvarageTemperature", &ATemperatura::execCalculateAvarageTemperature },
		{ "CalculateStaticTemperatureDifference", &ATemperatura::execCalculateStaticTemperatureDifference },
		{ "CalculateTemperatureDifference", &ATemperatura::execCalculateTemperatureDifference },
		{ "ConvertKelvinToCelsius", &ATemperatura::execConvertKelvinToCelsius },
		{ "GetTemperatureFarenheit", &ATemperatura::execGetTemperatureFarenheit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemperatura);
UClass* Z_Construct_UClass_ATemperatura_NoRegister()
{
	return ATemperatura::StaticClass();
}
struct Z_Construct_UClass_ATemperatura_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Temperatura.h" },
		{ "ModuleRelativePath", "Temperatura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureCelcius_MetaData[] = {
		{ "Category", "Temperatura" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Funci\xef\xbf\xbdn para obtener la temperatura actual en Celsius\n" },
#endif
		{ "ModuleRelativePath", "Temperatura.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Funci\xef\xbf\xbdn para obtener la temperatura actual en Celsius" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemperatureCelcius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATemperatura_CalculateAvarageTemperature, "CalculateAvarageTemperature" }, // 3581058015
		{ &Z_Construct_UFunction_ATemperatura_CalculateStaticTemperatureDifference, "CalculateStaticTemperatureDifference" }, // 1462407089
		{ &Z_Construct_UFunction_ATemperatura_CalculateTemperatureDifference, "CalculateTemperatureDifference" }, // 623614423
		{ &Z_Construct_UFunction_ATemperatura_ConvertKelvinToCelsius, "ConvertKelvinToCelsius" }, // 951425274
		{ &Z_Construct_UFunction_ATemperatura_GetTemperatureFarenheit, "GetTemperatureFarenheit" }, // 3251563229
		{ &Z_Construct_UFunction_ATemperatura_OnTemperatureChecked, "OnTemperatureChecked" }, // 3246856441
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemperatura>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelcius = { "TemperatureCelcius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATemperatura, TemperatureCelcius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureCelcius_MetaData), NewProp_TemperatureCelcius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemperatura_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemperatura_Statics::NewProp_TemperatureCelcius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATemperatura_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemperatura_Statics::ClassParams = {
	&ATemperatura::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATemperatura_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams), Z_Construct_UClass_ATemperatura_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATemperatura()
{
	if (!Z_Registration_Info_UClass_ATemperatura.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemperatura.OuterSingleton, Z_Construct_UClass_ATemperatura_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATemperatura.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<ATemperatura>()
{
	return ATemperatura::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATemperatura);
ATemperatura::~ATemperatura() {}
// End Class ATemperatura

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Temperatura_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATemperatura, ATemperatura::StaticClass, TEXT("ATemperatura"), &Z_Registration_Info_UClass_ATemperatura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemperatura), 1696879278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Temperatura_h_1416841752(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Temperatura_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Temperatura_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
