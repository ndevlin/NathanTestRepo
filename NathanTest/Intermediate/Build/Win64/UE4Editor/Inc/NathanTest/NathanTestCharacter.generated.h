// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATHANTEST_NathanTestCharacter_generated_h
#error "NathanTestCharacter.generated.h already included, missing '#pragma once' in NathanTestCharacter.h"
#endif
#define NATHANTEST_NathanTestCharacter_generated_h

#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_SPARSE_DATA
#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_RPC_WRAPPERS
#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANathanTestCharacter(); \
	friend struct Z_Construct_UClass_ANathanTestCharacter_Statics; \
public: \
	DECLARE_CLASS(ANathanTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NathanTest"), NO_API) \
	DECLARE_SERIALIZER(ANathanTestCharacter)


#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesANathanTestCharacter(); \
	friend struct Z_Construct_UClass_ANathanTestCharacter_Statics; \
public: \
	DECLARE_CLASS(ANathanTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NathanTest"), NO_API) \
	DECLARE_SERIALIZER(ANathanTestCharacter)


#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANathanTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANathanTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANathanTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANathanTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANathanTestCharacter(ANathanTestCharacter&&); \
	NO_API ANathanTestCharacter(const ANathanTestCharacter&); \
public:


#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANathanTestCharacter(ANathanTestCharacter&&); \
	NO_API ANathanTestCharacter(const ANathanTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANathanTestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANathanTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANathanTestCharacter)


#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ANathanTestCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ANathanTestCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ANathanTestCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ANathanTestCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ANathanTestCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ANathanTestCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ANathanTestCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ANathanTestCharacter, L_MotionController); }


#define NathanTest_Source_NathanTest_NathanTestCharacter_h_17_PROLOG
#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_SPARSE_DATA \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_RPC_WRAPPERS \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_INCLASS \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NathanTest_Source_NathanTest_NathanTestCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_SPARSE_DATA \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_INCLASS_NO_PURE_DECLS \
	NathanTest_Source_NathanTest_NathanTestCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATHANTEST_API UClass* StaticClass<class ANathanTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NathanTest_Source_NathanTest_NathanTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
