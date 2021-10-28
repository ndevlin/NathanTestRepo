// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NATHANTEST_NathanTestProjectile_generated_h
#error "NathanTestProjectile.generated.h already included, missing '#pragma once' in NathanTestProjectile.h"
#endif
#define NATHANTEST_NathanTestProjectile_generated_h

#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_SPARSE_DATA
#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANathanTestProjectile(); \
	friend struct Z_Construct_UClass_ANathanTestProjectile_Statics; \
public: \
	DECLARE_CLASS(ANathanTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NathanTest"), NO_API) \
	DECLARE_SERIALIZER(ANathanTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANathanTestProjectile(); \
	friend struct Z_Construct_UClass_ANathanTestProjectile_Statics; \
public: \
	DECLARE_CLASS(ANathanTestProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NathanTest"), NO_API) \
	DECLARE_SERIALIZER(ANathanTestProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANathanTestProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANathanTestProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANathanTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANathanTestProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANathanTestProjectile(ANathanTestProjectile&&); \
	NO_API ANathanTestProjectile(const ANathanTestProjectile&); \
public:


#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANathanTestProjectile(ANathanTestProjectile&&); \
	NO_API ANathanTestProjectile(const ANathanTestProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANathanTestProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANathanTestProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANathanTestProjectile)


#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ANathanTestProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ANathanTestProjectile, ProjectileMovement); }


#define NathanTest_Source_NathanTest_NathanTestProjectile_h_12_PROLOG
#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_SPARSE_DATA \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_RPC_WRAPPERS \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_INCLASS \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NathanTest_Source_NathanTest_NathanTestProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_SPARSE_DATA \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_INCLASS_NO_PURE_DECLS \
	NathanTest_Source_NathanTest_NathanTestProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATHANTEST_API UClass* StaticClass<class ANathanTestProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NathanTest_Source_NathanTest_NathanTestProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
