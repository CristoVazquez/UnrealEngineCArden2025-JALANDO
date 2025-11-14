// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlatformActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInterface;
class UPrimitiveComponent;
struct FHitResult;
#ifdef EUCARDEN_PlatformActor_generated_h
#error "PlatformActor.generated.h already included, missing '#pragma once' in PlatformActor.h"
#endif
#define EUCARDEN_PlatformActor_generated_h

#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execChangeMaterial);


#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformActor(); \
	friend struct Z_Construct_UClass_APlatformActor_Statics; \
public: \
	DECLARE_CLASS(APlatformActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EUCArden"), NO_API) \
	DECLARE_SERIALIZER(APlatformActor)


#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlatformActor(APlatformActor&&); \
	APlatformActor(const APlatformActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformActor) \
	NO_API virtual ~APlatformActor();


#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_10_PROLOG
#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EUCARDEN_API UClass* StaticClass<class APlatformActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_PlatformActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
