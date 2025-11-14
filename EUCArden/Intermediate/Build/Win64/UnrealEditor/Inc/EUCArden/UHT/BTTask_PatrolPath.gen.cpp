// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/BTTask_PatrolPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_PatrolPath() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_UAIBehaviorComponent_NoRegister();
EUCARDEN_API UClass* Z_Construct_UClass_UBTTask_PatrolPath();
EUCARDEN_API UClass* Z_Construct_UClass_UBTTask_PatrolPath_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class UBTTask_PatrolPath
void UBTTask_PatrolPath::StaticRegisterNativesUBTTask_PatrolPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_PatrolPath);
UClass* Z_Construct_UClass_UBTTask_PatrolPath_NoRegister()
{
	return UBTTask_PatrolPath::StaticClass();
}
struct Z_Construct_UClass_UBTTask_PatrolPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Recorre en orden las claves del PointConfigs (APathModule*) del AIBehaviorComponent.\n * Se mueve al actor, espera WaitTime y pasa al siguiente (loop).\n */" },
#endif
		{ "IncludePath", "BTTask_PatrolPath.h" },
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recorre en orden las claves del PointConfigs (APathModule*) del AIBehaviorComponent.\nSe mueve al actor, espera WaitTime y pasa al siguiente (loop)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radio de aceptaci\xef\xbf\xbdn del MoveTo (cm) */" },
#endif
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radio de aceptaci\xef\xbf\xbdn del MoveTo (cm)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinWaitSeconds_MetaData[] = {
		{ "Category", "Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Espera m\xef\xbf\xbdnima por punto (seg), capea valores muy bajos */" },
#endif
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Espera m\xef\xbf\xbdnima por punto (seg), capea valores muy bajos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "Category", "Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbdRepetir al llegar al final? */" },
#endif
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdRepetir al llegar al final?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[] = {
		{ "Category", "Patrol" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbdndice inicial dentro de las claves */" },
#endif
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbdndice inicial dentro de las claves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AICon_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guardamos refs vivas/seguras para el callback\n" },
#endif
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guardamos refs vivas/seguras para el callback" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[] = {
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BTTask_PatrolPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWaitSeconds;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AICon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_PatrolPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_MinWaitSeconds = { "MinWaitSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, MinWaitSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinWaitSeconds_MetaData), NewProp_MinWaitSeconds_MetaData) };
void Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((UBTTask_PatrolPath*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_PatrolPath), &Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, StartIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartIndex_MetaData), NewProp_StartIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_AICon = { "AICon", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, AICon), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AICon_MetaData), NewProp_AICon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledPawn_MetaData), NewProp_ControlledPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_PatrolPath, BehaviorComp), Z_Construct_UClass_UAIBehaviorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorComp_MetaData), NewProp_BehaviorComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_MinWaitSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_StartIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_AICon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_ControlledPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_PatrolPath_Statics::NewProp_BehaviorComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_PatrolPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_PatrolPath_Statics::ClassParams = {
	&UBTTask_PatrolPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_PatrolPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_PatrolPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_PatrolPath()
{
	if (!Z_Registration_Info_UClass_UBTTask_PatrolPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_PatrolPath.OuterSingleton, Z_Construct_UClass_UBTTask_PatrolPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_PatrolPath.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<UBTTask_PatrolPath>()
{
	return UBTTask_PatrolPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_PatrolPath);
UBTTask_PatrolPath::~UBTTask_PatrolPath() {}
// End Class UBTTask_PatrolPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_PatrolPath, UBTTask_PatrolPath::StaticClass, TEXT("UBTTask_PatrolPath"), &Z_Registration_Info_UClass_UBTTask_PatrolPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_PatrolPath), 3665941323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_1030838869(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTTask_PatrolPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
