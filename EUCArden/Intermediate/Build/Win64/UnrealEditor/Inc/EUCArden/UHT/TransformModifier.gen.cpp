// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/TransformModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformModifier() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_ATransformModifier();
EUCARDEN_API UClass* Z_Construct_UClass_ATransformModifier_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class ATransformModifier Function ChangeMaterial
struct Z_Construct_UFunction_ATransformModifier_ChangeMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifier_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifier, nullptr, "ChangeMaterial", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifier_ChangeMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifier_ChangeMaterial_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATransformModifier_ChangeMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifier_ChangeMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifier::execChangeMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeMaterial();
	P_NATIVE_END;
}
// End Class ATransformModifier Function ChangeMaterial

// Begin Class ATransformModifier Function ModifyTargetTransform
struct Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics
{
	struct TransformModifier_eventModifyTargetTransform_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TransformModifier_eventModifyTargetTransform_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifier, nullptr, "ModifyTargetTransform", nullptr, nullptr, Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::TransformModifier_eventModifyTargetTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::TransformModifier_eventModifyTargetTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifier::execModifyTargetTransform)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyTargetTransform(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class ATransformModifier Function ModifyTargetTransform

// Begin Class ATransformModifier Function MoveToNextPosition
struct Z_Construct_UFunction_ATransformModifier_MoveToNextPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATransformModifier_MoveToNextPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATransformModifier, nullptr, "MoveToNextPosition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATransformModifier_MoveToNextPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATransformModifier_MoveToNextPosition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATransformModifier_MoveToNextPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATransformModifier_MoveToNextPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATransformModifier::execMoveToNextPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveToNextPosition();
	P_NATIVE_END;
}
// End Class ATransformModifier Function MoveToNextPosition

// Begin Class ATransformModifier
void ATransformModifier::StaticRegisterNativesATransformModifier()
{
	UClass* Class = ATransformModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeMaterial", &ATransformModifier::execChangeMaterial },
		{ "ModifyTargetTransform", &ATransformModifier::execModifyTargetTransform },
		{ "MoveToNextPosition", &ATransformModifier::execMoveToNextPosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATransformModifier);
UClass* Z_Construct_UClass_ATransformModifier_NoRegister()
{
	return ATransformModifier::StaticClass();
}
struct Z_Construct_UClass_ATransformModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TransformModifier.h" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Category", "Transform" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Una variable que almacene a Target Actor\n" },
#endif
		{ "ModuleRelativePath", "TransformModifier.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Una variable que almacene a Target Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTransform_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Positions_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionIndex_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "TransformModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Positions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPositionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATransformModifier_ChangeMaterial, "ChangeMaterial" }, // 3661612198
		{ &Z_Construct_UFunction_ATransformModifier_ModifyTargetTransform, "ModifyTargetTransform" }, // 1653283823
		{ &Z_Construct_UFunction_ATransformModifier_MoveToNextPosition, "MoveToNextPosition" }, // 2484630402
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATransformModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifier, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifier, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTransform_MetaData), NewProp_NewTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifier, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Positions_MetaData), NewProp_Positions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifier, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATransformModifier_Statics::NewProp_CurrentPositionIndex = { "CurrentPositionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATransformModifier, CurrentPositionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPositionIndex_MetaData), NewProp_CurrentPositionIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATransformModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_NewTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_Positions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_Positions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATransformModifier_Statics::NewProp_CurrentPositionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATransformModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATransformModifier_Statics::ClassParams = {
	&ATransformModifier::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATransformModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifier_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATransformModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_ATransformModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATransformModifier()
{
	if (!Z_Registration_Info_UClass_ATransformModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATransformModifier.OuterSingleton, Z_Construct_UClass_ATransformModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATransformModifier.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<ATransformModifier>()
{
	return ATransformModifier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATransformModifier);
ATransformModifier::~ATransformModifier() {}
// End Class ATransformModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_TransformModifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATransformModifier, ATransformModifier::StaticClass, TEXT("ATransformModifier"), &Z_Registration_Info_UClass_ATransformModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATransformModifier), 4059056294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_TransformModifier_h_828792464(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_TransformModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_TransformModifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
