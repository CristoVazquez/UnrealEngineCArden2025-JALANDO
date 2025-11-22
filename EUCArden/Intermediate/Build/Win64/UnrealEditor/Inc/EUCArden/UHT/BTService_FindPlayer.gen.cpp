// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EUCArden/BTService_FindPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_FindPlayer() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
EUCARDEN_API UClass* Z_Construct_UClass_UBTService_FindPlayer();
EUCARDEN_API UClass* Z_Construct_UClass_UBTService_FindPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_EUCArden();
// End Cross Module References

// Begin Class UBTService_FindPlayer
void UBTService_FindPlayer::StaticRegisterNativesUBTService_FindPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_FindPlayer);
UClass* Z_Construct_UClass_UBTService_FindPlayer_NoRegister()
{
	return UBTService_FindPlayer::StaticClass();
}
struct Z_Construct_UClass_UBTService_FindPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Este servicio revisa constantemente si el jugador est\xef\xbf\xbd cerca.\n */" },
#endif
		{ "IncludePath", "BTService_FindPlayer.h" },
		{ "ModuleRelativePath", "BTService_FindPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Este servicio revisa constantemente si el jugador est\xef\xbf\xbd cerca." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BTService_FindPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_FindPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_FindPlayer_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_FindPlayer, Range), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Range_MetaData), NewProp_Range_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_FindPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_FindPlayer_Statics::NewProp_Range,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_FindPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EUCArden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_FindPlayer_Statics::ClassParams = {
	&UBTService_FindPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_FindPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindPlayer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_FindPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_FindPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_FindPlayer()
{
	if (!Z_Registration_Info_UClass_UBTService_FindPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_FindPlayer.OuterSingleton, Z_Construct_UClass_UBTService_FindPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_FindPlayer.OuterSingleton;
}
template<> EUCARDEN_API UClass* StaticClass<UBTService_FindPlayer>()
{
	return UBTService_FindPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_FindPlayer);
UBTService_FindPlayer::~UBTService_FindPlayer() {}
// End Class UBTService_FindPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTService_FindPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_FindPlayer, UBTService_FindPlayer::StaticClass, TEXT("UBTService_FindPlayer"), &Z_Registration_Info_UClass_UBTService_FindPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_FindPlayer), 1597561546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTService_FindPlayer_h_1550763815(TEXT("/Script/EUCArden"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTService_FindPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_BTService_FindPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
