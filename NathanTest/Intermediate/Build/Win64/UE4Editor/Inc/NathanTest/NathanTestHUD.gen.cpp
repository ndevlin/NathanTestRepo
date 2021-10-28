// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NathanTest/NathanTestHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNathanTestHUD() {}
// Cross Module References
	NATHANTEST_API UClass* Z_Construct_UClass_ANathanTestHUD_NoRegister();
	NATHANTEST_API UClass* Z_Construct_UClass_ANathanTestHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NathanTest();
// End Cross Module References
	void ANathanTestHUD::StaticRegisterNativesANathanTestHUD()
	{
	}
	UClass* Z_Construct_UClass_ANathanTestHUD_NoRegister()
	{
		return ANathanTestHUD::StaticClass();
	}
	struct Z_Construct_UClass_ANathanTestHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANathanTestHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NathanTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANathanTestHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NathanTestHUD.h" },
		{ "ModuleRelativePath", "NathanTestHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANathanTestHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANathanTestHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANathanTestHUD_Statics::ClassParams = {
		&ANathanTestHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANathanTestHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANathanTestHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANathanTestHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANathanTestHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANathanTestHUD, 53664079);
	template<> NATHANTEST_API UClass* StaticClass<ANathanTestHUD>()
	{
		return ANathanTestHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANathanTestHUD(Z_Construct_UClass_ANathanTestHUD, &ANathanTestHUD::StaticClass, TEXT("/Script/NathanTest"), TEXT("ANathanTestHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANathanTestHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
