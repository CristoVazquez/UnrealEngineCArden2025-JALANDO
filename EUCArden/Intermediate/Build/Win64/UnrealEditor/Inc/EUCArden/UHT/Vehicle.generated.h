// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Vehicle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EUCARDEN_Vehicle_generated_h
#error "Vehicle.generated.h already included, missing '#pragma once' in Vehicle.h"
#endif
#define EUCARDEN_Vehicle_generated_h

#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMove);


#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicle(); \
	friend struct Z_Construct_UClass_AVehicle_Statics; \
public: \
	DECLARE_CLASS(AVehicle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EUCArden"), NO_API) \
	DECLARE_SERIALIZER(AVehicle)


#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVehicle(AVehicle&&); \
	AVehicle(const AVehicle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVehicle) \
	NO_API virtual ~AVehicle();


#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_7_PROLOG
#define FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EUCARDEN_API UClass* StaticClass<class AVehicle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_Documents_GitHub_UnrealEngineCArden2025_EUCArden_Source_EUCArden_Vehicle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
