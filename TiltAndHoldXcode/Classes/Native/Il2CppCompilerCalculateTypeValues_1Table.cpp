﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.LocalDataStore
struct LocalDataStore_t3383582627;
// System.String
struct String_t;
// System.Reflection.MonoCMethod
struct MonoCMethod_t3191134373;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t1707895399;
// System.LocalDataStoreElement[]
struct LocalDataStoreElementU5BU5D_t1026346256;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Collections.Generic.List`1<System.LocalDataStore>
struct List_1_t560690073;
// System.Collections.Generic.Dictionary`2<System.String,System.LocalDataStoreSlot>
struct Dictionary_2_t526098267;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.RuntimeType[]
struct RuntimeTypeU5BU5D_t236644441;
// System.RuntimeType
struct RuntimeType_t3636489352;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.TypeIdentifier
struct TypeIdentifier_t2999352009;
// System.Collections.Generic.List`1<System.TypeIdentifier>
struct List_1_t176459455;
// System.Collections.Generic.List`1<System.TypeSpec>
struct List_1_t3123561566;
// System.Collections.Generic.List`1<System.ModifierSpec>
struct List_1_t1546471780;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Predicate`1<System.Type>
struct Predicate_1_t3309238884;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Void
struct Void_t1185182177;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2649313536;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t3423053037;
// System.EventArgs
struct EventArgs_t3591816995;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t1806616898;
// System.Collections.Generic.Dictionary`2<System.Guid,System.Type>
struct Dictionary_2_t1532962293;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t359885250;

struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef BUFFER_T1599081364_H
#define BUFFER_T1599081364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffer
struct  Buffer_t1599081364  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T1599081364_H
#ifndef LOCALDATASTOREHOLDER_T2567786569_H
#define LOCALDATASTOREHOLDER_T2567786569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreHolder
struct  LocalDataStoreHolder_t2567786569  : public RuntimeObject
{
public:
	// System.LocalDataStore System.LocalDataStoreHolder::m_Store
	LocalDataStore_t3383582627 * ___m_Store_0;

public:
	inline static int32_t get_offset_of_m_Store_0() { return static_cast<int32_t>(offsetof(LocalDataStoreHolder_t2567786569, ___m_Store_0)); }
	inline LocalDataStore_t3383582627 * get_m_Store_0() const { return ___m_Store_0; }
	inline LocalDataStore_t3383582627 ** get_address_of_m_Store_0() { return &___m_Store_0; }
	inline void set_m_Store_0(LocalDataStore_t3383582627 * value)
	{
		___m_Store_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Store_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTOREHOLDER_T2567786569_H
#ifndef __FILTERS_T550753867_H
#define __FILTERS_T550753867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Filters
struct  __Filters_t550753867  : public RuntimeObject
{
public:

public:
};

struct __Filters_t550753867_StaticFields
{
public:
	// System.__Filters System.__Filters::Instance
	__Filters_t550753867 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(__Filters_t550753867_StaticFields, ___Instance_0)); }
	inline __Filters_t550753867 * get_Instance_0() const { return ___Instance_0; }
	inline __Filters_t550753867 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(__Filters_t550753867 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __FILTERS_T550753867_H
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef MONOTYPEINFO_T3366989025_H
#define MONOTYPEINFO_T3366989025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t3366989025  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.MonoCMethod System.MonoTypeInfo::default_ctor
	MonoCMethod_t3191134373 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t3366989025, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t3366989025, ___default_ctor_1)); }
	inline MonoCMethod_t3191134373 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline MonoCMethod_t3191134373 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(MonoCMethod_t3191134373 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoTypeInfo
struct MonoTypeInfo_t3366989025_marshaled_pinvoke
{
	char* ___full_name_0;
	MonoCMethod_t3191134373 * ___default_ctor_1;
};
// Native definition for COM marshalling of System.MonoTypeInfo
struct MonoTypeInfo_t3366989025_marshaled_com
{
	Il2CppChar* ___full_name_0;
	MonoCMethod_t3191134373 * ___default_ctor_1;
};
#endif // MONOTYPEINFO_T3366989025_H
#ifndef TYPENAMEPARSER_T3310353628_H
#define TYPENAMEPARSER_T3310353628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNameParser
struct  TypeNameParser_t3310353628  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMEPARSER_T3310353628_H
#ifndef CLRCONFIG_T2776416919_H
#define CLRCONFIG_T2776416919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLRConfig
struct  CLRConfig_t2776416919  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRCONFIG_T2776416919_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;

public:
	inline static int32_t get_offset_of_IsLittleEndian_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_0)); }
	inline bool get_IsLittleEndian_0() const { return ___IsLittleEndian_0; }
	inline bool* get_address_of_IsLittleEndian_0() { return &___IsLittleEndian_0; }
	inline void set_IsLittleEndian_0(bool value)
	{
		___IsLittleEndian_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef EMPTY_T4129602447_H
#define EMPTY_T4129602447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Empty
struct  Empty_t4129602447  : public RuntimeObject
{
public:

public:
};

struct Empty_t4129602447_StaticFields
{
public:
	// System.Empty System.Empty::Value
	Empty_t4129602447 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Empty_t4129602447_StaticFields, ___Value_0)); }
	inline Empty_t4129602447 * get_Value_0() const { return ___Value_0; }
	inline Empty_t4129602447 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Empty_t4129602447 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTY_T4129602447_H
#ifndef ATYPENAME_T2426384130_H
#define ATYPENAME_T2426384130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeNames/ATypeName
struct  ATypeName_t2426384130  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATYPENAME_T2426384130_H
#ifndef VALUESANDNAMES_T523671982_H
#define VALUESANDNAMES_T523671982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum/ValuesAndNames
struct  ValuesAndNames_t523671982  : public RuntimeObject
{
public:
	// System.UInt64[] System.Enum/ValuesAndNames::Values
	UInt64U5BU5D_t1659327989* ___Values_0;
	// System.String[] System.Enum/ValuesAndNames::Names
	StringU5BU5D_t1281789340* ___Names_1;

public:
	inline static int32_t get_offset_of_Values_0() { return static_cast<int32_t>(offsetof(ValuesAndNames_t523671982, ___Values_0)); }
	inline UInt64U5BU5D_t1659327989* get_Values_0() const { return ___Values_0; }
	inline UInt64U5BU5D_t1659327989** get_address_of_Values_0() { return &___Values_0; }
	inline void set_Values_0(UInt64U5BU5D_t1659327989* value)
	{
		___Values_0 = value;
		Il2CppCodeGenWriteBarrier((&___Values_0), value);
	}

	inline static int32_t get_offset_of_Names_1() { return static_cast<int32_t>(offsetof(ValuesAndNames_t523671982, ___Names_1)); }
	inline StringU5BU5D_t1281789340* get_Names_1() const { return ___Names_1; }
	inline StringU5BU5D_t1281789340** get_address_of_Names_1() { return &___Names_1; }
	inline void set_Names_1(StringU5BU5D_t1281789340* value)
	{
		___Names_1 = value;
		Il2CppCodeGenWriteBarrier((&___Names_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUESANDNAMES_T523671982_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef ACTIVATOR_T1841325713_H
#define ACTIVATOR_T1841325713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Activator
struct  Activator_t1841325713  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATOR_T1841325713_H
#ifndef LOCALDATASTORESLOT_T740841968_H
#define LOCALDATASTORESLOT_T740841968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t740841968  : public RuntimeObject
{
public:
	// System.LocalDataStoreMgr System.LocalDataStoreSlot::m_mgr
	LocalDataStoreMgr_t1707895399 * ___m_mgr_0;
	// System.Int32 System.LocalDataStoreSlot::m_slot
	int32_t ___m_slot_1;
	// System.Int64 System.LocalDataStoreSlot::m_cookie
	int64_t ___m_cookie_2;

public:
	inline static int32_t get_offset_of_m_mgr_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___m_mgr_0)); }
	inline LocalDataStoreMgr_t1707895399 * get_m_mgr_0() const { return ___m_mgr_0; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_m_mgr_0() { return &___m_mgr_0; }
	inline void set_m_mgr_0(LocalDataStoreMgr_t1707895399 * value)
	{
		___m_mgr_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_mgr_0), value);
	}

	inline static int32_t get_offset_of_m_slot_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___m_slot_1)); }
	inline int32_t get_m_slot_1() const { return ___m_slot_1; }
	inline int32_t* get_address_of_m_slot_1() { return &___m_slot_1; }
	inline void set_m_slot_1(int32_t value)
	{
		___m_slot_1 = value;
	}

	inline static int32_t get_offset_of_m_cookie_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___m_cookie_2)); }
	inline int64_t get_m_cookie_2() const { return ___m_cookie_2; }
	inline int64_t* get_address_of_m_cookie_2() { return &___m_cookie_2; }
	inline void set_m_cookie_2(int64_t value)
	{
		___m_cookie_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T740841968_H
#ifndef LOCALDATASTORE_T3383582627_H
#define LOCALDATASTORE_T3383582627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStore
struct  LocalDataStore_t3383582627  : public RuntimeObject
{
public:
	// System.LocalDataStoreElement[] System.LocalDataStore::m_DataTable
	LocalDataStoreElementU5BU5D_t1026346256* ___m_DataTable_0;
	// System.LocalDataStoreMgr System.LocalDataStore::m_Manager
	LocalDataStoreMgr_t1707895399 * ___m_Manager_1;

public:
	inline static int32_t get_offset_of_m_DataTable_0() { return static_cast<int32_t>(offsetof(LocalDataStore_t3383582627, ___m_DataTable_0)); }
	inline LocalDataStoreElementU5BU5D_t1026346256* get_m_DataTable_0() const { return ___m_DataTable_0; }
	inline LocalDataStoreElementU5BU5D_t1026346256** get_address_of_m_DataTable_0() { return &___m_DataTable_0; }
	inline void set_m_DataTable_0(LocalDataStoreElementU5BU5D_t1026346256* value)
	{
		___m_DataTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DataTable_0), value);
	}

	inline static int32_t get_offset_of_m_Manager_1() { return static_cast<int32_t>(offsetof(LocalDataStore_t3383582627, ___m_Manager_1)); }
	inline LocalDataStoreMgr_t1707895399 * get_m_Manager_1() const { return ___m_Manager_1; }
	inline LocalDataStoreMgr_t1707895399 ** get_address_of_m_Manager_1() { return &___m_Manager_1; }
	inline void set_m_Manager_1(LocalDataStoreMgr_t1707895399 * value)
	{
		___m_Manager_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Manager_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORE_T3383582627_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef LOCALDATASTOREMGR_T1707895399_H
#define LOCALDATASTOREMGR_T1707895399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreMgr
struct  LocalDataStoreMgr_t1707895399  : public RuntimeObject
{
public:
	// System.Boolean[] System.LocalDataStoreMgr::m_SlotInfoTable
	BooleanU5BU5D_t2897418192* ___m_SlotInfoTable_0;
	// System.Int32 System.LocalDataStoreMgr::m_FirstAvailableSlot
	int32_t ___m_FirstAvailableSlot_1;
	// System.Collections.Generic.List`1<System.LocalDataStore> System.LocalDataStoreMgr::m_ManagedLocalDataStores
	List_1_t560690073 * ___m_ManagedLocalDataStores_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.LocalDataStoreSlot> System.LocalDataStoreMgr::m_KeyToSlotMap
	Dictionary_2_t526098267 * ___m_KeyToSlotMap_3;
	// System.Int64 System.LocalDataStoreMgr::m_CookieGenerator
	int64_t ___m_CookieGenerator_4;

public:
	inline static int32_t get_offset_of_m_SlotInfoTable_0() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_SlotInfoTable_0)); }
	inline BooleanU5BU5D_t2897418192* get_m_SlotInfoTable_0() const { return ___m_SlotInfoTable_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of_m_SlotInfoTable_0() { return &___m_SlotInfoTable_0; }
	inline void set_m_SlotInfoTable_0(BooleanU5BU5D_t2897418192* value)
	{
		___m_SlotInfoTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_SlotInfoTable_0), value);
	}

	inline static int32_t get_offset_of_m_FirstAvailableSlot_1() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_FirstAvailableSlot_1)); }
	inline int32_t get_m_FirstAvailableSlot_1() const { return ___m_FirstAvailableSlot_1; }
	inline int32_t* get_address_of_m_FirstAvailableSlot_1() { return &___m_FirstAvailableSlot_1; }
	inline void set_m_FirstAvailableSlot_1(int32_t value)
	{
		___m_FirstAvailableSlot_1 = value;
	}

	inline static int32_t get_offset_of_m_ManagedLocalDataStores_2() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_ManagedLocalDataStores_2)); }
	inline List_1_t560690073 * get_m_ManagedLocalDataStores_2() const { return ___m_ManagedLocalDataStores_2; }
	inline List_1_t560690073 ** get_address_of_m_ManagedLocalDataStores_2() { return &___m_ManagedLocalDataStores_2; }
	inline void set_m_ManagedLocalDataStores_2(List_1_t560690073 * value)
	{
		___m_ManagedLocalDataStores_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ManagedLocalDataStores_2), value);
	}

	inline static int32_t get_offset_of_m_KeyToSlotMap_3() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_KeyToSlotMap_3)); }
	inline Dictionary_2_t526098267 * get_m_KeyToSlotMap_3() const { return ___m_KeyToSlotMap_3; }
	inline Dictionary_2_t526098267 ** get_address_of_m_KeyToSlotMap_3() { return &___m_KeyToSlotMap_3; }
	inline void set_m_KeyToSlotMap_3(Dictionary_2_t526098267 * value)
	{
		___m_KeyToSlotMap_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_KeyToSlotMap_3), value);
	}

	inline static int32_t get_offset_of_m_CookieGenerator_4() { return static_cast<int32_t>(offsetof(LocalDataStoreMgr_t1707895399, ___m_CookieGenerator_4)); }
	inline int64_t get_m_CookieGenerator_4() const { return ___m_CookieGenerator_4; }
	inline int64_t* get_address_of_m_CookieGenerator_4() { return &___m_CookieGenerator_4; }
	inline void set_m_CookieGenerator_4(int64_t value)
	{
		___m_CookieGenerator_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTOREMGR_T1707895399_H
#ifndef PARSENUMBERS_T3599255983_H
#define PARSENUMBERS_T3599255983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ParseNumbers
struct  ParseNumbers_t3599255983  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSENUMBERS_T3599255983_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef CHARENUMERATOR_T1121470421_H
#define CHARENUMERATOR_T1121470421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CharEnumerator
struct  CharEnumerator_t1121470421  : public RuntimeObject
{
public:
	// System.String System.CharEnumerator::str
	String_t* ___str_0;
	// System.Int32 System.CharEnumerator::index
	int32_t ___index_1;
	// System.Char System.CharEnumerator::currentElement
	Il2CppChar ___currentElement_2;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(CharEnumerator_t1121470421, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(CharEnumerator_t1121470421, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_currentElement_2() { return static_cast<int32_t>(offsetof(CharEnumerator_t1121470421, ___currentElement_2)); }
	inline Il2CppChar get_currentElement_2() const { return ___currentElement_2; }
	inline Il2CppChar* get_address_of_currentElement_2() { return &___currentElement_2; }
	inline void set_currentElement_2(Il2CppChar value)
	{
		___currentElement_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARENUMERATOR_T1121470421_H
#ifndef CONVERT_T2465617642_H
#define CONVERT_T2465617642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Convert
struct  Convert_t2465617642  : public RuntimeObject
{
public:

public:
};

struct Convert_t2465617642_StaticFields
{
public:
	// System.RuntimeType[] System.Convert::ConvertTypes
	RuntimeTypeU5BU5D_t236644441* ___ConvertTypes_0;
	// System.RuntimeType System.Convert::EnumType
	RuntimeType_t3636489352 * ___EnumType_1;
	// System.Char[] System.Convert::base64Table
	CharU5BU5D_t3528271667* ___base64Table_2;
	// System.Object System.Convert::DBNull
	RuntimeObject * ___DBNull_3;

public:
	inline static int32_t get_offset_of_ConvertTypes_0() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___ConvertTypes_0)); }
	inline RuntimeTypeU5BU5D_t236644441* get_ConvertTypes_0() const { return ___ConvertTypes_0; }
	inline RuntimeTypeU5BU5D_t236644441** get_address_of_ConvertTypes_0() { return &___ConvertTypes_0; }
	inline void set_ConvertTypes_0(RuntimeTypeU5BU5D_t236644441* value)
	{
		___ConvertTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConvertTypes_0), value);
	}

	inline static int32_t get_offset_of_EnumType_1() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___EnumType_1)); }
	inline RuntimeType_t3636489352 * get_EnumType_1() const { return ___EnumType_1; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_1() { return &___EnumType_1; }
	inline void set_EnumType_1(RuntimeType_t3636489352 * value)
	{
		___EnumType_1 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_1), value);
	}

	inline static int32_t get_offset_of_base64Table_2() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___base64Table_2)); }
	inline CharU5BU5D_t3528271667* get_base64Table_2() const { return ___base64Table_2; }
	inline CharU5BU5D_t3528271667** get_address_of_base64Table_2() { return &___base64Table_2; }
	inline void set_base64Table_2(CharU5BU5D_t3528271667* value)
	{
		___base64Table_2 = value;
		Il2CppCodeGenWriteBarrier((&___base64Table_2), value);
	}

	inline static int32_t get_offset_of_DBNull_3() { return static_cast<int32_t>(offsetof(Convert_t2465617642_StaticFields, ___DBNull_3)); }
	inline RuntimeObject * get_DBNull_3() const { return ___DBNull_3; }
	inline RuntimeObject ** get_address_of_DBNull_3() { return &___DBNull_3; }
	inline void set_DBNull_3(RuntimeObject * value)
	{
		___DBNull_3 = value;
		Il2CppCodeGenWriteBarrier((&___DBNull_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONVERT_T2465617642_H
#ifndef ARRAYSPEC_T3456100556_H
#define ARRAYSPEC_T3456100556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArraySpec
struct  ArraySpec_t3456100556  : public RuntimeObject
{
public:
	// System.Int32 System.ArraySpec::dimensions
	int32_t ___dimensions_0;
	// System.Boolean System.ArraySpec::bound
	bool ___bound_1;

public:
	inline static int32_t get_offset_of_dimensions_0() { return static_cast<int32_t>(offsetof(ArraySpec_t3456100556, ___dimensions_0)); }
	inline int32_t get_dimensions_0() const { return ___dimensions_0; }
	inline int32_t* get_address_of_dimensions_0() { return &___dimensions_0; }
	inline void set_dimensions_0(int32_t value)
	{
		___dimensions_0 = value;
	}

	inline static int32_t get_offset_of_bound_1() { return static_cast<int32_t>(offsetof(ArraySpec_t3456100556, ___bound_1)); }
	inline bool get_bound_1() const { return ___bound_1; }
	inline bool* get_address_of_bound_1() { return &___bound_1; }
	inline void set_bound_1(bool value)
	{
		___bound_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSPEC_T3456100556_H
#ifndef LOCALDATASTOREELEMENT_T4055991005_H
#define LOCALDATASTOREELEMENT_T4055991005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreElement
struct  LocalDataStoreElement_t4055991005  : public RuntimeObject
{
public:
	// System.Object System.LocalDataStoreElement::m_value
	RuntimeObject * ___m_value_0;
	// System.Int64 System.LocalDataStoreElement::m_cookie
	int64_t ___m_cookie_1;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(LocalDataStoreElement_t4055991005, ___m_value_0)); }
	inline RuntimeObject * get_m_value_0() const { return ___m_value_0; }
	inline RuntimeObject ** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(RuntimeObject * value)
	{
		___m_value_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_value_0), value);
	}

	inline static int32_t get_offset_of_m_cookie_1() { return static_cast<int32_t>(offsetof(LocalDataStoreElement_t4055991005, ___m_cookie_1)); }
	inline int64_t get_m_cookie_1() const { return ___m_cookie_1; }
	inline int64_t* get_address_of_m_cookie_1() { return &___m_cookie_1; }
	inline void set_m_cookie_1(int64_t value)
	{
		___m_cookie_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTOREELEMENT_T4055991005_H
#ifndef TYPESPEC_T1651486824_H
#define TYPESPEC_T1651486824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeSpec
struct  TypeSpec_t1651486824  : public RuntimeObject
{
public:
	// System.TypeIdentifier System.TypeSpec::name
	RuntimeObject* ___name_0;
	// System.String System.TypeSpec::assembly_name
	String_t* ___assembly_name_1;
	// System.Collections.Generic.List`1<System.TypeIdentifier> System.TypeSpec::nested
	List_1_t176459455 * ___nested_2;
	// System.Collections.Generic.List`1<System.TypeSpec> System.TypeSpec::generic_params
	List_1_t3123561566 * ___generic_params_3;
	// System.Collections.Generic.List`1<System.ModifierSpec> System.TypeSpec::modifier_spec
	List_1_t1546471780 * ___modifier_spec_4;
	// System.Boolean System.TypeSpec::is_byref
	bool ___is_byref_5;
	// System.String System.TypeSpec::display_fullname
	String_t* ___display_fullname_6;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___name_0)); }
	inline RuntimeObject* get_name_0() const { return ___name_0; }
	inline RuntimeObject** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(RuntimeObject* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_assembly_name_1() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___assembly_name_1)); }
	inline String_t* get_assembly_name_1() const { return ___assembly_name_1; }
	inline String_t** get_address_of_assembly_name_1() { return &___assembly_name_1; }
	inline void set_assembly_name_1(String_t* value)
	{
		___assembly_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_1), value);
	}

	inline static int32_t get_offset_of_nested_2() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___nested_2)); }
	inline List_1_t176459455 * get_nested_2() const { return ___nested_2; }
	inline List_1_t176459455 ** get_address_of_nested_2() { return &___nested_2; }
	inline void set_nested_2(List_1_t176459455 * value)
	{
		___nested_2 = value;
		Il2CppCodeGenWriteBarrier((&___nested_2), value);
	}

	inline static int32_t get_offset_of_generic_params_3() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___generic_params_3)); }
	inline List_1_t3123561566 * get_generic_params_3() const { return ___generic_params_3; }
	inline List_1_t3123561566 ** get_address_of_generic_params_3() { return &___generic_params_3; }
	inline void set_generic_params_3(List_1_t3123561566 * value)
	{
		___generic_params_3 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_3), value);
	}

	inline static int32_t get_offset_of_modifier_spec_4() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___modifier_spec_4)); }
	inline List_1_t1546471780 * get_modifier_spec_4() const { return ___modifier_spec_4; }
	inline List_1_t1546471780 ** get_address_of_modifier_spec_4() { return &___modifier_spec_4; }
	inline void set_modifier_spec_4(List_1_t1546471780 * value)
	{
		___modifier_spec_4 = value;
		Il2CppCodeGenWriteBarrier((&___modifier_spec_4), value);
	}

	inline static int32_t get_offset_of_is_byref_5() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___is_byref_5)); }
	inline bool get_is_byref_5() const { return ___is_byref_5; }
	inline bool* get_address_of_is_byref_5() { return &___is_byref_5; }
	inline void set_is_byref_5(bool value)
	{
		___is_byref_5 = value;
	}

	inline static int32_t get_offset_of_display_fullname_6() { return static_cast<int32_t>(offsetof(TypeSpec_t1651486824, ___display_fullname_6)); }
	inline String_t* get_display_fullname_6() const { return ___display_fullname_6; }
	inline String_t** get_address_of_display_fullname_6() { return &___display_fullname_6; }
	inline void set_display_fullname_6(String_t* value)
	{
		___display_fullname_6 = value;
		Il2CppCodeGenWriteBarrier((&___display_fullname_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPESPEC_T1651486824_H
#ifndef POINTERSPEC_T334147946_H
#define POINTERSPEC_T334147946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PointerSpec
struct  PointerSpec_t334147946  : public RuntimeObject
{
public:
	// System.Int32 System.PointerSpec::pointer_level
	int32_t ___pointer_level_0;

public:
	inline static int32_t get_offset_of_pointer_level_0() { return static_cast<int32_t>(offsetof(PointerSpec_t334147946, ___pointer_level_0)); }
	inline int32_t get_pointer_level_0() const { return ___pointer_level_0; }
	inline int32_t* get_address_of_pointer_level_0() { return &___pointer_level_0; }
	inline void set_pointer_level_0(int32_t value)
	{
		___pointer_level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTERSPEC_T334147946_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef BINDERSTATE_T1273278376_H
#define BINDERSTATE_T1273278376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultBinder/BinderState
struct  BinderState_t1273278376  : public RuntimeObject
{
public:
	// System.Int32[] System.DefaultBinder/BinderState::m_argsMap
	Int32U5BU5D_t385246372* ___m_argsMap_0;
	// System.Int32 System.DefaultBinder/BinderState::m_originalSize
	int32_t ___m_originalSize_1;
	// System.Boolean System.DefaultBinder/BinderState::m_isParamArray
	bool ___m_isParamArray_2;

public:
	inline static int32_t get_offset_of_m_argsMap_0() { return static_cast<int32_t>(offsetof(BinderState_t1273278376, ___m_argsMap_0)); }
	inline Int32U5BU5D_t385246372* get_m_argsMap_0() const { return ___m_argsMap_0; }
	inline Int32U5BU5D_t385246372** get_address_of_m_argsMap_0() { return &___m_argsMap_0; }
	inline void set_m_argsMap_0(Int32U5BU5D_t385246372* value)
	{
		___m_argsMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_argsMap_0), value);
	}

	inline static int32_t get_offset_of_m_originalSize_1() { return static_cast<int32_t>(offsetof(BinderState_t1273278376, ___m_originalSize_1)); }
	inline int32_t get_m_originalSize_1() const { return ___m_originalSize_1; }
	inline int32_t* get_address_of_m_originalSize_1() { return &___m_originalSize_1; }
	inline void set_m_originalSize_1(int32_t value)
	{
		___m_originalSize_1 = value;
	}

	inline static int32_t get_offset_of_m_isParamArray_2() { return static_cast<int32_t>(offsetof(BinderState_t1273278376, ___m_isParamArray_2)); }
	inline bool get_m_isParamArray_2() const { return ___m_isParamArray_2; }
	inline bool* get_address_of_m_isParamArray_2() { return &___m_isParamArray_2; }
	inline void set_m_isParamArray_2(bool value)
	{
		___m_isParamArray_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDERSTATE_T1273278376_H
#ifndef COMPATIBILITYSWITCHES_T1721006176_H
#define COMPATIBILITYSWITCHES_T1721006176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CompatibilitySwitches
struct  CompatibilitySwitches_t1721006176  : public RuntimeObject
{
public:

public:
};

struct CompatibilitySwitches_t1721006176_StaticFields
{
public:
	// System.Boolean System.CompatibilitySwitches::IsAppEarlierThanSilverlight4
	bool ___IsAppEarlierThanSilverlight4_0;
	// System.Boolean System.CompatibilitySwitches::IsAppEarlierThanWindowsPhone8
	bool ___IsAppEarlierThanWindowsPhone8_1;

public:
	inline static int32_t get_offset_of_IsAppEarlierThanSilverlight4_0() { return static_cast<int32_t>(offsetof(CompatibilitySwitches_t1721006176_StaticFields, ___IsAppEarlierThanSilverlight4_0)); }
	inline bool get_IsAppEarlierThanSilverlight4_0() const { return ___IsAppEarlierThanSilverlight4_0; }
	inline bool* get_address_of_IsAppEarlierThanSilverlight4_0() { return &___IsAppEarlierThanSilverlight4_0; }
	inline void set_IsAppEarlierThanSilverlight4_0(bool value)
	{
		___IsAppEarlierThanSilverlight4_0 = value;
	}

	inline static int32_t get_offset_of_IsAppEarlierThanWindowsPhone8_1() { return static_cast<int32_t>(offsetof(CompatibilitySwitches_t1721006176_StaticFields, ___IsAppEarlierThanWindowsPhone8_1)); }
	inline bool get_IsAppEarlierThanWindowsPhone8_1() const { return ___IsAppEarlierThanWindowsPhone8_1; }
	inline bool* get_address_of_IsAppEarlierThanWindowsPhone8_1() { return &___IsAppEarlierThanWindowsPhone8_1; }
	inline void set_IsAppEarlierThanWindowsPhone8_1(bool value)
	{
		___IsAppEarlierThanWindowsPhone8_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBILITYSWITCHES_T1721006176_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef U3CU3EC_T4234874483_H
#define U3CU3EC_T4234874483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultBinder/<>c
struct  U3CU3Ec_t4234874483  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4234874483_StaticFields
{
public:
	// System.DefaultBinder/<>c System.DefaultBinder/<>c::<>9
	U3CU3Ec_t4234874483 * ___U3CU3E9_0;
	// System.Predicate`1<System.Type> System.DefaultBinder/<>c::<>9__5_0
	Predicate_1_t3309238884 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4234874483_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4234874483 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4234874483 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4234874483 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4234874483_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Predicate_1_t3309238884 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Predicate_1_t3309238884 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Predicate_1_t3309238884 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__5_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T4234874483_H
#ifndef CONTEXTBOUNDOBJECT_T1394786030_H
#define CONTEXTBOUNDOBJECT_T1394786030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextBoundObject
struct  ContextBoundObject_t1394786030  : public MarshalByRefObject_t2760389100
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTBOUNDOBJECT_T1394786030_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_1;

public:
	inline static int32_t get_offset_of_NegativeZero_1() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_1)); }
	inline double get_NegativeZero_1() const { return ___NegativeZero_1; }
	inline double* get_address_of_NegativeZero_1() { return &___NegativeZero_1; }
	inline void set_NegativeZero_1(double value)
	{
		___NegativeZero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef CLSCOMPLIANTATTRIBUTE_T999444765_H
#define CLSCOMPLIANTATTRIBUTE_T999444765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CLSCompliantAttribute
struct  CLSCompliantAttribute_t999444765  : public Attribute_t861562559
{
public:
	// System.Boolean System.CLSCompliantAttribute::m_compliant
	bool ___m_compliant_0;

public:
	inline static int32_t get_offset_of_m_compliant_0() { return static_cast<int32_t>(offsetof(CLSCompliantAttribute_t999444765, ___m_compliant_0)); }
	inline bool get_m_compliant_0() const { return ___m_compliant_0; }
	inline bool* get_address_of_m_compliant_0() { return &___m_compliant_0; }
	inline void set_m_compliant_0(bool value)
	{
		___m_compliant_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLSCOMPLIANTATTRIBUTE_T999444765_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_4;

public:
	inline static int32_t get_offset_of_dateData_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_4)); }
	inline uint64_t get_dateData_4() const { return ___dateData_4; }
	inline uint64_t* get_address_of_dateData_4() { return &___dateData_4; }
	inline void set_dateData_4(uint64_t value)
	{
		___dateData_4 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_0;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_1;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_2;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_3;

public:
	inline static int32_t get_offset_of_DaysToMonth365_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_0)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_0() const { return ___DaysToMonth365_0; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_0() { return &___DaysToMonth365_0; }
	inline void set_DaysToMonth365_0(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_0 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_0), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_1)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_1() const { return ___DaysToMonth366_1; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_1() { return &___DaysToMonth366_1; }
	inline void set_DaysToMonth366_1(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_1 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_1), value);
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_2)); }
	inline DateTime_t3738529785  get_MinValue_2() const { return ___MinValue_2; }
	inline DateTime_t3738529785 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(DateTime_t3738529785  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of_MaxValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_3)); }
	inline DateTime_t3738529785  get_MaxValue_3() const { return ___MaxValue_3; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_3() { return &___MaxValue_3; }
	inline void set_MaxValue_3(DateTime_t3738529785  value)
	{
		___MaxValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t2770800703* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2948259380  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2948259380  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2948259380  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t2770800703* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t2770800703* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___Zero_7)); }
	inline Decimal_t2948259380  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2948259380 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2948259380  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_8)); }
	inline Decimal_t2948259380  get_One_8() const { return ___One_8; }
	inline Decimal_t2948259380 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2948259380  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2948259380  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2948259380  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2948259380  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2948259380  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_11)); }
	inline Decimal_t2948259380  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2948259380 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2948259380  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2948259380  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2948259380 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2948259380  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2948259380  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2948259380 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2948259380  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef CONTEXTSTATICATTRIBUTE_T2700898555_H
#define CONTEXTSTATICATTRIBUTE_T2700898555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ContextStaticAttribute
struct  ContextStaticAttribute_t2700898555  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTSTATICATTRIBUTE_T2700898555_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef DEFAULTBINDER_T3032604929_H
#define DEFAULTBINDER_T3032604929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultBinder
struct  DefaultBinder_t3032604929  : public Binder_t2999457153
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTBINDER_T3032604929_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef AGGREGATEEXCEPTION_T3586243216_H
#define AGGREGATEEXCEPTION_T3586243216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AggregateException
struct  AggregateException_t3586243216  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t2649313536 * ___m_innerExceptions_16;

public:
	inline static int32_t get_offset_of_m_innerExceptions_16() { return static_cast<int32_t>(offsetof(AggregateException_t3586243216, ___m_innerExceptions_16)); }
	inline ReadOnlyCollection_1_t2649313536 * get_m_innerExceptions_16() const { return ___m_innerExceptions_16; }
	inline ReadOnlyCollection_1_t2649313536 ** get_address_of_m_innerExceptions_16() { return &___m_innerExceptions_16; }
	inline void set_m_innerExceptions_16(ReadOnlyCollection_1_t2649313536 * value)
	{
		___m_innerExceptions_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerExceptions_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEEXCEPTION_T3586243216_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NOESCAPE_T3415473081_H
#define NOESCAPE_T3415473081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeIdentifiers/NoEscape
struct  NoEscape_t3415473081  : public ATypeName_t2426384130
{
public:
	// System.String System.TypeIdentifiers/NoEscape::simpleName
	String_t* ___simpleName_0;

public:
	inline static int32_t get_offset_of_simpleName_0() { return static_cast<int32_t>(offsetof(NoEscape_t3415473081, ___simpleName_0)); }
	inline String_t* get_simpleName_0() const { return ___simpleName_0; }
	inline String_t** get_address_of_simpleName_0() { return &___simpleName_0; }
	inline void set_simpleName_0(String_t* value)
	{
		___simpleName_0 = value;
		Il2CppCodeGenWriteBarrier((&___simpleName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOESCAPE_T3415473081_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_16;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_17;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_18;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_19;

public:
	inline static int32_t get_offset_of_ClassName_16() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___ClassName_16)); }
	inline String_t* get_ClassName_16() const { return ___ClassName_16; }
	inline String_t** get_address_of_ClassName_16() { return &___ClassName_16; }
	inline void set_ClassName_16(String_t* value)
	{
		___ClassName_16 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_16), value);
	}

	inline static int32_t get_offset_of_AssemblyName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___AssemblyName_17)); }
	inline String_t* get_AssemblyName_17() const { return ___AssemblyName_17; }
	inline String_t** get_address_of_AssemblyName_17() { return &___AssemblyName_17; }
	inline void set_AssemblyName_17(String_t* value)
	{
		___AssemblyName_17 = value;
		Il2CppCodeGenWriteBarrier((&___AssemblyName_17), value);
	}

	inline static int32_t get_offset_of_MessageArg_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___MessageArg_18)); }
	inline String_t* get_MessageArg_18() const { return ___MessageArg_18; }
	inline String_t** get_address_of_MessageArg_18() { return &___MessageArg_18; }
	inline void set_MessageArg_18(String_t* value)
	{
		___MessageArg_18 = value;
		Il2CppCodeGenWriteBarrier((&___MessageArg_18), value);
	}

	inline static int32_t get_offset_of_ResourceId_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___ResourceId_19)); }
	inline int32_t get_ResourceId_19() const { return ___ResourceId_19; }
	inline int32_t* get_address_of_ResourceId_19() { return &___ResourceId_19; }
	inline void set_ResourceId_19(int32_t value)
	{
		___ResourceId_19 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef BASE64FORMATTINGOPTIONS_T1508405059_H
#define BASE64FORMATTINGOPTIONS_T1508405059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Base64FormattingOptions
struct  Base64FormattingOptions_t1508405059 
{
public:
	// System.Int32 System.Base64FormattingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Base64FormattingOptions_t1508405059, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64FORMATTINGOPTIONS_T1508405059_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef DAYOFWEEK_T3650621421_H
#define DAYOFWEEK_T3650621421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t3650621421 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DayOfWeek_t3650621421, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYOFWEEK_T3650621421_H
#ifndef PARSEFAILUREKIND_T2353020108_H
#define PARSEFAILUREKIND_T2353020108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum/ParseFailureKind
struct  ParseFailureKind_t2353020108 
{
public:
	// System.Int32 System.Enum/ParseFailureKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParseFailureKind_t2353020108, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSEFAILUREKIND_T2353020108_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLES_T3280152003_H
#ifndef ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#define ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArrayTypeMismatchException
struct  ArrayTypeMismatchException_t2342549375  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYTYPEMISMATCHEXCEPTION_T2342549375_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef LOADEROPTIMIZATION_T1484956347_H
#define LOADEROPTIMIZATION_T1484956347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t1484956347 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoaderOptimization_t1484956347, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADEROPTIMIZATION_T1484956347_H
#ifndef APPDOMAINUNLOADEDEXCEPTION_T2857636191_H
#define APPDOMAINUNLOADEDEXCEPTION_T2857636191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainUnloadedException
struct  AppDomainUnloadedException_t2857636191  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAINUNLOADEDEXCEPTION_T2857636191_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_16;

public:
	inline static int32_t get_offset_of_m_paramName_16() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_16)); }
	inline String_t* get_m_paramName_16() const { return ___m_paramName_16; }
	inline String_t** get_address_of_m_paramName_16() { return &___m_paramName_16; }
	inline void set_m_paramName_16(String_t* value)
	{
		___m_paramName_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef WINDOWSCONSOLEDRIVER_T3991887195_H
#define WINDOWSCONSOLEDRIVER_T3991887195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t3991887195  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSCONSOLEDRIVER_T3991887195_H
#ifndef MEMBERLISTTYPE_T1519024423_H
#define MEMBERLISTTYPE_T1519024423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType/MemberListType
struct  MemberListType_t1519024423 
{
public:
	// System.Int32 System.RuntimeType/MemberListType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberListType_t1519024423, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERLISTTYPE_T1519024423_H
#ifndef CONSOLECOLOR_T2680034144_H
#define CONSOLECOLOR_T2680034144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleColor
struct  ConsoleColor_t2680034144 
{
public:
	// System.Int32 System.ConsoleColor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleColor_t2680034144, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECOLOR_T2680034144_H
#ifndef DISPLAYNAMEFORMAT_T2724649181_H
#define DISPLAYNAMEFORMAT_T2724649181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeSpec/DisplayNameFormat
struct  DisplayNameFormat_t2724649181 
{
public:
	// System.Int32 System.TypeSpec/DisplayNameFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayNameFormat_t2724649181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYNAMEFORMAT_T2724649181_H
#ifndef CONSOLEKEY_T4097401472_H
#define CONSOLEKEY_T4097401472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t4097401472 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleKey_t4097401472, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEKEY_T4097401472_H
#ifndef CONSOLESPECIALKEY_T3452252982_H
#define CONSOLESPECIALKEY_T3452252982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleSpecialKey
struct  ConsoleSpecialKey_t3452252982 
{
public:
	// System.Int32 System.ConsoleSpecialKey::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleSpecialKey_t3452252982, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESPECIALKEY_T3452252982_H
#ifndef CONSOLEMODIFIERS_T1471011467_H
#define CONSOLEMODIFIERS_T1471011467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t1471011467 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t1471011467, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLEMODIFIERS_T1471011467_H
#ifndef ATTRIBUTETARGETS_T1784037988_H
#define ATTRIBUTETARGETS_T1784037988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1784037988 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t1784037988, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T1784037988_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T2987224087_H
#ifndef BADIMAGEFORMATEXCEPTION_T251534586_H
#define BADIMAGEFORMATEXCEPTION_T251534586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BadImageFormatException
struct  BadImageFormatException_t251534586  : public SystemException_t176217640
{
public:
	// System.String System.BadImageFormatException::_fileName
	String_t* ____fileName_16;
	// System.String System.BadImageFormatException::_fusionLog
	String_t* ____fusionLog_17;

public:
	inline static int32_t get_offset_of__fileName_16() { return static_cast<int32_t>(offsetof(BadImageFormatException_t251534586, ____fileName_16)); }
	inline String_t* get__fileName_16() const { return ____fileName_16; }
	inline String_t** get_address_of__fileName_16() { return &____fileName_16; }
	inline void set__fileName_16(String_t* value)
	{
		____fileName_16 = value;
		Il2CppCodeGenWriteBarrier((&____fileName_16), value);
	}

	inline static int32_t get_offset_of__fusionLog_17() { return static_cast<int32_t>(offsetof(BadImageFormatException_t251534586, ____fusionLog_17)); }
	inline String_t* get__fusionLog_17() const { return ____fusionLog_17; }
	inline String_t** get_address_of__fusionLog_17() { return &____fusionLog_17; }
	inline void set__fusionLog_17(String_t* value)
	{
		____fusionLog_17 = value;
		Il2CppCodeGenWriteBarrier((&____fusionLog_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BADIMAGEFORMATEXCEPTION_T251534586_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t426314064 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t426314064 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_3), value);
	}

	inline static int32_t get_offset_of_Missing_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_4)); }
	inline RuntimeObject * get_Missing_4() const { return ___Missing_4; }
	inline RuntimeObject ** get_address_of_Missing_4() { return &___Missing_4; }
	inline void set_Missing_4(RuntimeObject * value)
	{
		___Missing_4 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_4), value);
	}

	inline static int32_t get_offset_of_Delimiter_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_5)); }
	inline Il2CppChar get_Delimiter_5() const { return ___Delimiter_5; }
	inline Il2CppChar* get_address_of_Delimiter_5() { return &___Delimiter_5; }
	inline void set_Delimiter_5(Il2CppChar value)
	{
		___Delimiter_5 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_6)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t2999457153 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t2999457153 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef ATTRIBUTEUSAGEATTRIBUTE_T290877318_H
#define ATTRIBUTEUSAGEATTRIBUTE_T290877318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_t290877318  : public Attribute_t861562559
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_t290877318_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_t290877318 * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_t290877318_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_t290877318 * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_t290877318 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_t290877318 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEUSAGEATTRIBUTE_T290877318_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_18;

public:
	inline static int32_t get_offset_of_m_actualValue_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_18)); }
	inline RuntimeObject * get_m_actualValue_18() const { return ___m_actualValue_18; }
	inline RuntimeObject ** get_address_of_m_actualValue_18() { return &___m_actualValue_18; }
	inline void set_m_actualValue_18(RuntimeObject * value)
	{
		___m_actualValue_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_18), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_17;

public:
	inline static int32_t get_offset_of__rangeMessage_17() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_17)); }
	inline String_t* get__rangeMessage_17() const { return ____rangeMessage_17; }
	inline String_t** get_address_of__rangeMessage_17() { return &____rangeMessage_17; }
	inline void set__rangeMessage_17(String_t* value)
	{
		____rangeMessage_17 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef CONSOLEKEYINFO_T1802691652_H
#define CONSOLEKEYINFO_T1802691652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t1802691652 
{
public:
	// System.Char System.ConsoleKeyInfo::_keyChar
	Il2CppChar ____keyChar_0;
	// System.ConsoleKey System.ConsoleKeyInfo::_key
	int32_t ____key_1;
	// System.ConsoleModifiers System.ConsoleKeyInfo::_mods
	int32_t ____mods_2;

public:
	inline static int32_t get_offset_of__keyChar_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____keyChar_0)); }
	inline Il2CppChar get__keyChar_0() const { return ____keyChar_0; }
	inline Il2CppChar* get_address_of__keyChar_0() { return &____keyChar_0; }
	inline void set__keyChar_0(Il2CppChar value)
	{
		____keyChar_0 = value;
	}

	inline static int32_t get_offset_of__key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____key_1)); }
	inline int32_t get__key_1() const { return ____key_1; }
	inline int32_t* get_address_of__key_1() { return &____key_1; }
	inline void set__key_1(int32_t value)
	{
		____key_1 = value;
	}

	inline static int32_t get_offset_of__mods_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ____mods_2)); }
	inline int32_t get__mods_2() const { return ____mods_2; }
	inline int32_t* get_address_of__mods_2() { return &____mods_2; }
	inline void set__mods_2(int32_t value)
	{
		____mods_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_pinvoke
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_com
{
	uint8_t ____keyChar_0;
	int32_t ____key_1;
	int32_t ____mods_2;
};
#endif // CONSOLEKEYINFO_T1802691652_H
#ifndef DLLNOTFOUNDEXCEPTION_T2721418633_H
#define DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2721418633  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifndef CONSOLECANCELEVENTARGS_T3423053037_H
#define CONSOLECANCELEVENTARGS_T3423053037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleCancelEventArgs
struct  ConsoleCancelEventArgs_t3423053037  : public EventArgs_t3591816995
{
public:
	// System.ConsoleSpecialKey System.ConsoleCancelEventArgs::_type
	int32_t ____type_1;
	// System.Boolean System.ConsoleCancelEventArgs::_cancel
	bool ____cancel_2;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(ConsoleCancelEventArgs_t3423053037, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}

	inline static int32_t get_offset_of__cancel_2() { return static_cast<int32_t>(offsetof(ConsoleCancelEventArgs_t3423053037, ____cancel_2)); }
	inline bool get__cancel_2() const { return ____cancel_2; }
	inline bool* get_address_of__cancel_2() { return &____cancel_2; }
	inline void set__cancel_2(bool value)
	{
		____cancel_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECANCELEVENTARGS_T3423053037_H
#ifndef DIVIDEBYZEROEXCEPTION_T1856388118_H
#define DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t1856388118  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef ENUMRESULT_T2373072967_H
#define ENUMRESULT_T2373072967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum/EnumResult
struct  EnumResult_t2373072967 
{
public:
	// System.Object System.Enum/EnumResult::parsedEnum
	RuntimeObject * ___parsedEnum_0;
	// System.Boolean System.Enum/EnumResult::canThrow
	bool ___canThrow_1;
	// System.Enum/ParseFailureKind System.Enum/EnumResult::m_failure
	int32_t ___m_failure_2;
	// System.String System.Enum/EnumResult::m_failureMessageID
	String_t* ___m_failureMessageID_3;
	// System.String System.Enum/EnumResult::m_failureParameter
	String_t* ___m_failureParameter_4;
	// System.Object System.Enum/EnumResult::m_failureMessageFormatArgument
	RuntimeObject * ___m_failureMessageFormatArgument_5;
	// System.Exception System.Enum/EnumResult::m_innerException
	Exception_t * ___m_innerException_6;

public:
	inline static int32_t get_offset_of_parsedEnum_0() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___parsedEnum_0)); }
	inline RuntimeObject * get_parsedEnum_0() const { return ___parsedEnum_0; }
	inline RuntimeObject ** get_address_of_parsedEnum_0() { return &___parsedEnum_0; }
	inline void set_parsedEnum_0(RuntimeObject * value)
	{
		___parsedEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___parsedEnum_0), value);
	}

	inline static int32_t get_offset_of_canThrow_1() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___canThrow_1)); }
	inline bool get_canThrow_1() const { return ___canThrow_1; }
	inline bool* get_address_of_canThrow_1() { return &___canThrow_1; }
	inline void set_canThrow_1(bool value)
	{
		___canThrow_1 = value;
	}

	inline static int32_t get_offset_of_m_failure_2() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___m_failure_2)); }
	inline int32_t get_m_failure_2() const { return ___m_failure_2; }
	inline int32_t* get_address_of_m_failure_2() { return &___m_failure_2; }
	inline void set_m_failure_2(int32_t value)
	{
		___m_failure_2 = value;
	}

	inline static int32_t get_offset_of_m_failureMessageID_3() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___m_failureMessageID_3)); }
	inline String_t* get_m_failureMessageID_3() const { return ___m_failureMessageID_3; }
	inline String_t** get_address_of_m_failureMessageID_3() { return &___m_failureMessageID_3; }
	inline void set_m_failureMessageID_3(String_t* value)
	{
		___m_failureMessageID_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageID_3), value);
	}

	inline static int32_t get_offset_of_m_failureParameter_4() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___m_failureParameter_4)); }
	inline String_t* get_m_failureParameter_4() const { return ___m_failureParameter_4; }
	inline String_t** get_address_of_m_failureParameter_4() { return &___m_failureParameter_4; }
	inline void set_m_failureParameter_4(String_t* value)
	{
		___m_failureParameter_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureParameter_4), value);
	}

	inline static int32_t get_offset_of_m_failureMessageFormatArgument_5() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___m_failureMessageFormatArgument_5)); }
	inline RuntimeObject * get_m_failureMessageFormatArgument_5() const { return ___m_failureMessageFormatArgument_5; }
	inline RuntimeObject ** get_address_of_m_failureMessageFormatArgument_5() { return &___m_failureMessageFormatArgument_5; }
	inline void set_m_failureMessageFormatArgument_5(RuntimeObject * value)
	{
		___m_failureMessageFormatArgument_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_failureMessageFormatArgument_5), value);
	}

	inline static int32_t get_offset_of_m_innerException_6() { return static_cast<int32_t>(offsetof(EnumResult_t2373072967, ___m_innerException_6)); }
	inline Exception_t * get_m_innerException_6() const { return ___m_innerException_6; }
	inline Exception_t ** get_address_of_m_innerException_6() { return &___m_innerException_6; }
	inline void set_m_innerException_6(Exception_t * value)
	{
		___m_innerException_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_innerException_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum/EnumResult
struct EnumResult_t2373072967_marshaled_pinvoke
{
	Il2CppIUnknown* ___parsedEnum_0;
	int32_t ___canThrow_1;
	int32_t ___m_failure_2;
	char* ___m_failureMessageID_3;
	char* ___m_failureParameter_4;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_5;
	Exception_t_marshaled_pinvoke* ___m_innerException_6;
};
// Native definition for COM marshalling of System.Enum/EnumResult
struct EnumResult_t2373072967_marshaled_com
{
	Il2CppIUnknown* ___parsedEnum_0;
	int32_t ___canThrow_1;
	int32_t ___m_failure_2;
	Il2CppChar* ___m_failureMessageID_3;
	Il2CppChar* ___m_failureParameter_4;
	Il2CppIUnknown* ___m_failureMessageFormatArgument_5;
	Exception_t_marshaled_com* ___m_innerException_6;
};
#endif // ENUMRESULT_T2373072967_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t1356862416  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef CONSOLECANCELEVENTHANDLER_T3919940372_H
#define CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleCancelEventHandler
struct  ConsoleCancelEventHandler_t3919940372  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifndef TYPEINFO_T1690786683_H
#define TYPEINFO_T1690786683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeInfo
struct  TypeInfo_t1690786683  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1690786683_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef EVENTHANDLER_T1348719766_H
#define EVENTHANDLER_T1348719766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1348719766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1348719766_H
#ifndef RUNTIMETYPE_T3636489352_H
#define RUNTIMETYPE_T3636489352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeType
struct  RuntimeType_t3636489352  : public TypeInfo_t1690786683
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_10;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_11;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t1806616898 * ___m_serializationCtor_12;

public:
	inline static int32_t get_offset_of_type_info_10() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___type_info_10)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_10() const { return ___type_info_10; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_10() { return &___type_info_10; }
	inline void set_type_info_10(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_10 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_10), value);
	}

	inline static int32_t get_offset_of_GenericCache_11() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___GenericCache_11)); }
	inline RuntimeObject * get_GenericCache_11() const { return ___GenericCache_11; }
	inline RuntimeObject ** get_address_of_GenericCache_11() { return &___GenericCache_11; }
	inline void set_GenericCache_11(RuntimeObject * value)
	{
		___GenericCache_11 = value;
		Il2CppCodeGenWriteBarrier((&___GenericCache_11), value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_12() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352, ___m_serializationCtor_12)); }
	inline RuntimeConstructorInfo_t1806616898 * get_m_serializationCtor_12() const { return ___m_serializationCtor_12; }
	inline RuntimeConstructorInfo_t1806616898 ** get_address_of_m_serializationCtor_12() { return &___m_serializationCtor_12; }
	inline void set_m_serializationCtor_12(RuntimeConstructorInfo_t1806616898 * value)
	{
		___m_serializationCtor_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_serializationCtor_12), value);
	}
};

struct RuntimeType_t3636489352_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Guid,System.Type> System.RuntimeType::clsid_types
	Dictionary_2_t1532962293 * ___clsid_types_13;
	// System.Reflection.Emit.AssemblyBuilder System.RuntimeType::clsid_assemblybuilder
	AssemblyBuilder_t359885250 * ___clsid_assemblybuilder_14;
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t3636489352 * ___ValueType_15;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t3636489352 * ___EnumType_16;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t3636489352 * ___ObjectType_17;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t3636489352 * ___StringType_18;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t3636489352 * ___DelegateType_19;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t3940880105* ___s_SICtorParamTypes_20;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t3636489352 * ___s_typedRef_30;

public:
	inline static int32_t get_offset_of_clsid_types_13() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_types_13)); }
	inline Dictionary_2_t1532962293 * get_clsid_types_13() const { return ___clsid_types_13; }
	inline Dictionary_2_t1532962293 ** get_address_of_clsid_types_13() { return &___clsid_types_13; }
	inline void set_clsid_types_13(Dictionary_2_t1532962293 * value)
	{
		___clsid_types_13 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_types_13), value);
	}

	inline static int32_t get_offset_of_clsid_assemblybuilder_14() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___clsid_assemblybuilder_14)); }
	inline AssemblyBuilder_t359885250 * get_clsid_assemblybuilder_14() const { return ___clsid_assemblybuilder_14; }
	inline AssemblyBuilder_t359885250 ** get_address_of_clsid_assemblybuilder_14() { return &___clsid_assemblybuilder_14; }
	inline void set_clsid_assemblybuilder_14(AssemblyBuilder_t359885250 * value)
	{
		___clsid_assemblybuilder_14 = value;
		Il2CppCodeGenWriteBarrier((&___clsid_assemblybuilder_14), value);
	}

	inline static int32_t get_offset_of_ValueType_15() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ValueType_15)); }
	inline RuntimeType_t3636489352 * get_ValueType_15() const { return ___ValueType_15; }
	inline RuntimeType_t3636489352 ** get_address_of_ValueType_15() { return &___ValueType_15; }
	inline void set_ValueType_15(RuntimeType_t3636489352 * value)
	{
		___ValueType_15 = value;
		Il2CppCodeGenWriteBarrier((&___ValueType_15), value);
	}

	inline static int32_t get_offset_of_EnumType_16() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___EnumType_16)); }
	inline RuntimeType_t3636489352 * get_EnumType_16() const { return ___EnumType_16; }
	inline RuntimeType_t3636489352 ** get_address_of_EnumType_16() { return &___EnumType_16; }
	inline void set_EnumType_16(RuntimeType_t3636489352 * value)
	{
		___EnumType_16 = value;
		Il2CppCodeGenWriteBarrier((&___EnumType_16), value);
	}

	inline static int32_t get_offset_of_ObjectType_17() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___ObjectType_17)); }
	inline RuntimeType_t3636489352 * get_ObjectType_17() const { return ___ObjectType_17; }
	inline RuntimeType_t3636489352 ** get_address_of_ObjectType_17() { return &___ObjectType_17; }
	inline void set_ObjectType_17(RuntimeType_t3636489352 * value)
	{
		___ObjectType_17 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectType_17), value);
	}

	inline static int32_t get_offset_of_StringType_18() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___StringType_18)); }
	inline RuntimeType_t3636489352 * get_StringType_18() const { return ___StringType_18; }
	inline RuntimeType_t3636489352 ** get_address_of_StringType_18() { return &___StringType_18; }
	inline void set_StringType_18(RuntimeType_t3636489352 * value)
	{
		___StringType_18 = value;
		Il2CppCodeGenWriteBarrier((&___StringType_18), value);
	}

	inline static int32_t get_offset_of_DelegateType_19() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___DelegateType_19)); }
	inline RuntimeType_t3636489352 * get_DelegateType_19() const { return ___DelegateType_19; }
	inline RuntimeType_t3636489352 ** get_address_of_DelegateType_19() { return &___DelegateType_19; }
	inline void set_DelegateType_19(RuntimeType_t3636489352 * value)
	{
		___DelegateType_19 = value;
		Il2CppCodeGenWriteBarrier((&___DelegateType_19), value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_20() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_SICtorParamTypes_20)); }
	inline TypeU5BU5D_t3940880105* get_s_SICtorParamTypes_20() const { return ___s_SICtorParamTypes_20; }
	inline TypeU5BU5D_t3940880105** get_address_of_s_SICtorParamTypes_20() { return &___s_SICtorParamTypes_20; }
	inline void set_s_SICtorParamTypes_20(TypeU5BU5D_t3940880105* value)
	{
		___s_SICtorParamTypes_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_SICtorParamTypes_20), value);
	}

	inline static int32_t get_offset_of_s_typedRef_30() { return static_cast<int32_t>(offsetof(RuntimeType_t3636489352_StaticFields, ___s_typedRef_30)); }
	inline RuntimeType_t3636489352 * get_s_typedRef_30() const { return ___s_typedRef_30; }
	inline RuntimeType_t3636489352 ** get_address_of_s_typedRef_30() { return &___s_typedRef_30; }
	inline void set_s_typedRef_30(RuntimeType_t3636489352 * value)
	{
		___s_typedRef_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_typedRef_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPE_T3636489352_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize100 = { sizeof (NoEscape_t3415473081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable100[1] = 
{
	NoEscape_t3415473081::get_offset_of_simpleName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize101 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize102 = { sizeof (ArraySpec_t3456100556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable102[2] = 
{
	ArraySpec_t3456100556::get_offset_of_dimensions_0(),
	ArraySpec_t3456100556::get_offset_of_bound_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize103 = { sizeof (PointerSpec_t334147946), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable103[1] = 
{
	PointerSpec_t334147946::get_offset_of_pointer_level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize104 = { sizeof (TypeSpec_t1651486824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable104[7] = 
{
	TypeSpec_t1651486824::get_offset_of_name_0(),
	TypeSpec_t1651486824::get_offset_of_assembly_name_1(),
	TypeSpec_t1651486824::get_offset_of_nested_2(),
	TypeSpec_t1651486824::get_offset_of_generic_params_3(),
	TypeSpec_t1651486824::get_offset_of_modifier_spec_4(),
	TypeSpec_t1651486824::get_offset_of_is_byref_5(),
	TypeSpec_t1651486824::get_offset_of_display_fullname_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize105 = { sizeof (DisplayNameFormat_t2724649181)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable105[4] = 
{
	DisplayNameFormat_t2724649181::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize106 = { sizeof (TypeCode_t2987224087)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable106[19] = 
{
	TypeCode_t2987224087::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize107 = { sizeof (UIntPtr_t)+ sizeof (RuntimeObject), sizeof(uintptr_t), sizeof(UIntPtr_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable107[2] = 
{
	UIntPtr_t_StaticFields::get_offset_of_Zero_0(),
	UIntPtr_t::get_offset_of__pointer_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize108 = { sizeof (ValueType_t3640485471), sizeof(ValueType_t3640485471_marshaled_pinvoke), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize109 = { sizeof (Void_t1185182177)+ sizeof (RuntimeObject), 1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize110 = { sizeof (WeakReference_t1334886716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable110[2] = 
{
	WeakReference_t1334886716::get_offset_of_isLongReference_0(),
	WeakReference_t1334886716::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize111 = { sizeof (InputRecord_t2660212290)+ sizeof (RuntimeObject), sizeof(InputRecord_t2660212290_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable111[9] = 
{
	InputRecord_t2660212290::get_offset_of_EventType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_KeyDown_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_RepeatCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_VirtualKeyCode_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_VirtualScanCode_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_Character_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_ControlKeyState_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_pad1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_pad2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize112 = { sizeof (Coord_t397375283)+ sizeof (RuntimeObject), sizeof(Coord_t397375283 ), 0, 0 };
extern const int32_t g_FieldOffsetTable112[2] = 
{
	Coord_t397375283::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Coord_t397375283::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize113 = { sizeof (SmallRect_t2930836963)+ sizeof (RuntimeObject), sizeof(SmallRect_t2930836963 ), 0, 0 };
extern const int32_t g_FieldOffsetTable113[4] = 
{
	SmallRect_t2930836963::get_offset_of_Left_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Top_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Right_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Bottom_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize114 = { sizeof (ConsoleScreenBufferInfo_t3095351730)+ sizeof (RuntimeObject), sizeof(ConsoleScreenBufferInfo_t3095351730 ), 0, 0 };
extern const int32_t g_FieldOffsetTable114[5] = 
{
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_CursorPosition_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Attribute_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Window_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_MaxWindowSize_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize115 = { sizeof (Handles_t3280152003)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable115[4] = 
{
	Handles_t3280152003::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize116 = { sizeof (WindowsConsoleDriver_t3991887195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable116[3] = 
{
	WindowsConsoleDriver_t3991887195::get_offset_of_inputHandle_0(),
	WindowsConsoleDriver_t3991887195::get_offset_of_outputHandle_1(),
	WindowsConsoleDriver_t3991887195::get_offset_of_defaultAttribute_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize117 = { sizeof (CompatibilitySwitches_t1721006176), -1, sizeof(CompatibilitySwitches_t1721006176_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable117[2] = 
{
	CompatibilitySwitches_t1721006176_StaticFields::get_offset_of_IsAppEarlierThanSilverlight4_0(),
	CompatibilitySwitches_t1721006176_StaticFields::get_offset_of_IsAppEarlierThanWindowsPhone8_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize118 = { sizeof (DefaultBinder_t3032604929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize119 = { sizeof (BinderState_t1273278376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable119[3] = 
{
	BinderState_t1273278376::get_offset_of_m_argsMap_0(),
	BinderState_t1273278376::get_offset_of_m_originalSize_1(),
	BinderState_t1273278376::get_offset_of_m_isParamArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize120 = { sizeof (U3CU3Ec_t4234874483), -1, sizeof(U3CU3Ec_t4234874483_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable120[2] = 
{
	U3CU3Ec_t4234874483_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t4234874483_StaticFields::get_offset_of_U3CU3E9__5_0_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize121 = { sizeof (ParseNumbers_t3599255983), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize122 = { sizeof (CLRConfig_t2776416919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize123 = { sizeof (TypeNameParser_t3310353628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize124 = { sizeof (MonoTypeInfo_t3366989025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable124[2] = 
{
	MonoTypeInfo_t3366989025::get_offset_of_full_name_0(),
	MonoTypeInfo_t3366989025::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize125 = { sizeof (RuntimeType_t3636489352), -1, sizeof(RuntimeType_t3636489352_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable125[21] = 
{
	RuntimeType_t3636489352::get_offset_of_type_info_10(),
	RuntimeType_t3636489352::get_offset_of_GenericCache_11(),
	RuntimeType_t3636489352::get_offset_of_m_serializationCtor_12(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_clsid_types_13(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_clsid_assemblybuilder_14(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_ValueType_15(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_EnumType_16(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_ObjectType_17(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_StringType_18(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_DelegateType_19(),
	RuntimeType_t3636489352_StaticFields::get_offset_of_s_SICtorParamTypes_20(),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	RuntimeType_t3636489352_StaticFields::get_offset_of_s_typedRef_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize126 = { sizeof (MemberListType_t1519024423)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable126[5] = 
{
	MemberListType_t1519024423::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize127 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable127[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize128 = { sizeof (Buffer_t1599081364), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize129 = { sizeof (String_t), sizeof(char*), sizeof(String_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable129[8] = 
{
	String_t::get_offset_of_m_stringLength_0(),
	String_t::get_offset_of_m_firstChar_1(),
	0,
	0,
	0,
	String_t_StaticFields::get_offset_of_Empty_5(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize130 = { sizeof (Type_t), -1, sizeof(Type_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable130[10] = 
{
	Type_t::get_offset_of__impl_0(),
	Type_t_StaticFields::get_offset_of_FilterAttribute_1(),
	Type_t_StaticFields::get_offset_of_FilterName_2(),
	Type_t_StaticFields::get_offset_of_FilterNameIgnoreCase_3(),
	Type_t_StaticFields::get_offset_of_Missing_4(),
	Type_t_StaticFields::get_offset_of_Delimiter_5(),
	Type_t_StaticFields::get_offset_of_EmptyTypes_6(),
	Type_t_StaticFields::get_offset_of_defaultBinder_7(),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize131 = { sizeof (__Filters_t550753867), -1, sizeof(__Filters_t550753867_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable131[1] = 
{
	__Filters_t550753867_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize132 = { sizeof (LocalDataStoreHolder_t2567786569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable132[1] = 
{
	LocalDataStoreHolder_t2567786569::get_offset_of_m_Store_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize133 = { sizeof (LocalDataStoreElement_t4055991005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable133[2] = 
{
	LocalDataStoreElement_t4055991005::get_offset_of_m_value_0(),
	LocalDataStoreElement_t4055991005::get_offset_of_m_cookie_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize134 = { sizeof (LocalDataStore_t3383582627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable134[2] = 
{
	LocalDataStore_t3383582627::get_offset_of_m_DataTable_0(),
	LocalDataStore_t3383582627::get_offset_of_m_Manager_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize135 = { sizeof (LocalDataStoreSlot_t740841968), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable135[3] = 
{
	LocalDataStoreSlot_t740841968::get_offset_of_m_mgr_0(),
	LocalDataStoreSlot_t740841968::get_offset_of_m_slot_1(),
	LocalDataStoreSlot_t740841968::get_offset_of_m_cookie_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize136 = { sizeof (LocalDataStoreMgr_t1707895399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable136[5] = 
{
	LocalDataStoreMgr_t1707895399::get_offset_of_m_SlotInfoTable_0(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_FirstAvailableSlot_1(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_ManagedLocalDataStores_2(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_KeyToSlotMap_3(),
	LocalDataStoreMgr_t1707895399::get_offset_of_m_CookieGenerator_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize137 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize138 = { sizeof (Action_t1264377477), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize139 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize140 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize141 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize142 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize143 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize144 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize145 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize146 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize147 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize148 = { sizeof (Activator_t1841325713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize149 = { sizeof (AggregateException_t3586243216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable149[1] = 
{
	AggregateException_t3586243216::get_offset_of_m_innerExceptions_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize150 = { sizeof (LoaderOptimization_t1484956347)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable150[7] = 
{
	LoaderOptimization_t1484956347::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize151 = { sizeof (AppDomainUnloadedException_t2857636191), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize152 = { sizeof (ApplicationException_t2339761290), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize153 = { sizeof (ArgumentException_t132251570), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable153[1] = 
{
	ArgumentException_t132251570::get_offset_of_m_paramName_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize154 = { sizeof (ArgumentNullException_t1615371798), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize155 = { sizeof (ArgumentOutOfRangeException_t777629997), -1, sizeof(ArgumentOutOfRangeException_t777629997_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable155[2] = 
{
	ArgumentOutOfRangeException_t777629997_StaticFields::get_offset_of__rangeMessage_17(),
	ArgumentOutOfRangeException_t777629997::get_offset_of_m_actualValue_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize156 = { sizeof (ArithmeticException_t4283546778), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize157 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable157[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize158 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable158[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize159 = { sizeof (ArrayTypeMismatchException_t2342549375), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize160 = { sizeof (AsyncCallback_t3962456242), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize161 = { sizeof (Attribute_t861562559), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize162 = { sizeof (AttributeTargets_t1784037988)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable162[17] = 
{
	AttributeTargets_t1784037988::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize163 = { sizeof (AttributeUsageAttribute_t290877318), -1, sizeof(AttributeUsageAttribute_t290877318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable163[4] = 
{
	AttributeUsageAttribute_t290877318::get_offset_of_m_attributeTarget_0(),
	AttributeUsageAttribute_t290877318::get_offset_of_m_allowMultiple_1(),
	AttributeUsageAttribute_t290877318::get_offset_of_m_inherited_2(),
	AttributeUsageAttribute_t290877318_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize164 = { sizeof (BadImageFormatException_t251534586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable164[2] = 
{
	BadImageFormatException_t251534586::get_offset_of__fileName_16(),
	BadImageFormatException_t251534586::get_offset_of__fusionLog_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize165 = { sizeof (BitConverter_t3118986983), -1, sizeof(BitConverter_t3118986983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable165[1] = 
{
	BitConverter_t3118986983_StaticFields::get_offset_of_IsLittleEndian_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize166 = { sizeof (Boolean_t97287965)+ sizeof (RuntimeObject), 4, sizeof(Boolean_t97287965_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable166[7] = 
{
	Boolean_t97287965::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	Boolean_t97287965_StaticFields::get_offset_of_TrueString_5(),
	Boolean_t97287965_StaticFields::get_offset_of_FalseString_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize167 = { sizeof (Byte_t1134296376)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable167[3] = 
{
	Byte_t1134296376::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize168 = { sizeof (Char_t3634460470)+ sizeof (RuntimeObject), 1, sizeof(Char_t3634460470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable168[9] = 
{
	Char_t3634460470::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	Char_t3634460470_StaticFields::get_offset_of_categoryForLatin1_3(),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize169 = { sizeof (CharEnumerator_t1121470421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable169[3] = 
{
	CharEnumerator_t1121470421::get_offset_of_str_0(),
	CharEnumerator_t1121470421::get_offset_of_index_1(),
	CharEnumerator_t1121470421::get_offset_of_currentElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize170 = { sizeof (ConsoleCancelEventHandler_t3919940372), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize171 = { sizeof (ConsoleCancelEventArgs_t3423053037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable171[2] = 
{
	ConsoleCancelEventArgs_t3423053037::get_offset_of__type_1(),
	ConsoleCancelEventArgs_t3423053037::get_offset_of__cancel_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize172 = { sizeof (ConsoleColor_t2680034144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable172[17] = 
{
	ConsoleColor_t2680034144::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize173 = { sizeof (ConsoleKey_t4097401472)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable173[145] = 
{
	ConsoleKey_t4097401472::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize174 = { sizeof (ConsoleKeyInfo_t1802691652)+ sizeof (RuntimeObject), sizeof(ConsoleKeyInfo_t1802691652_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable174[3] = 
{
	ConsoleKeyInfo_t1802691652::get_offset_of__keyChar_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleKeyInfo_t1802691652::get_offset_of__key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleKeyInfo_t1802691652::get_offset_of__mods_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize175 = { sizeof (ConsoleModifiers_t1471011467)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable175[4] = 
{
	ConsoleModifiers_t1471011467::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize176 = { sizeof (ConsoleSpecialKey_t3452252982)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable176[3] = 
{
	ConsoleSpecialKey_t3452252982::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize177 = { sizeof (ContextBoundObject_t1394786030), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize178 = { sizeof (ContextStaticAttribute_t2700898555), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize179 = { sizeof (CLSCompliantAttribute_t999444765), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable179[1] = 
{
	CLSCompliantAttribute_t999444765::get_offset_of_m_compliant_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize180 = { sizeof (Base64FormattingOptions_t1508405059)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable180[3] = 
{
	Base64FormattingOptions_t1508405059::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize181 = { sizeof (Convert_t2465617642), -1, sizeof(Convert_t2465617642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable181[4] = 
{
	Convert_t2465617642_StaticFields::get_offset_of_ConvertTypes_0(),
	Convert_t2465617642_StaticFields::get_offset_of_EnumType_1(),
	Convert_t2465617642_StaticFields::get_offset_of_base64Table_2(),
	Convert_t2465617642_StaticFields::get_offset_of_DBNull_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize182 = { sizeof (DateTime_t3738529785)+ sizeof (RuntimeObject), -1, sizeof(DateTime_t3738529785_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable182[5] = 
{
	DateTime_t3738529785_StaticFields::get_offset_of_DaysToMonth365_0(),
	DateTime_t3738529785_StaticFields::get_offset_of_DaysToMonth366_1(),
	DateTime_t3738529785_StaticFields::get_offset_of_MinValue_2(),
	DateTime_t3738529785_StaticFields::get_offset_of_MaxValue_3(),
	DateTime_t3738529785::get_offset_of_dateData_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize183 = { sizeof (DateTimeKind_t3468814247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable183[4] = 
{
	DateTimeKind_t3468814247::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize184 = { sizeof (DateTimeOffset_t3229287507)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t3229287507_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable184[4] = 
{
	DateTimeOffset_t3229287507_StaticFields::get_offset_of_MinValue_0(),
	DateTimeOffset_t3229287507_StaticFields::get_offset_of_MaxValue_1(),
	DateTimeOffset_t3229287507::get_offset_of_m_dateTime_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t3229287507::get_offset_of_m_offsetMinutes_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize185 = { sizeof (DayOfWeek_t3650621421)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable185[8] = 
{
	DayOfWeek_t3650621421::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize186 = { sizeof (Decimal_t2948259380)+ sizeof (RuntimeObject), sizeof(Decimal_t2948259380 ), sizeof(Decimal_t2948259380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable186[18] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	Decimal_t2948259380_StaticFields::get_offset_of_Powers10_6(),
	Decimal_t2948259380_StaticFields::get_offset_of_Zero_7(),
	Decimal_t2948259380_StaticFields::get_offset_of_One_8(),
	Decimal_t2948259380_StaticFields::get_offset_of_MinusOne_9(),
	Decimal_t2948259380_StaticFields::get_offset_of_MaxValue_10(),
	Decimal_t2948259380_StaticFields::get_offset_of_MinValue_11(),
	Decimal_t2948259380_StaticFields::get_offset_of_NearNegativeZero_12(),
	Decimal_t2948259380_StaticFields::get_offset_of_NearPositiveZero_13(),
	Decimal_t2948259380::get_offset_of_flags_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t2948259380::get_offset_of_hi_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t2948259380::get_offset_of_lo_16() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Decimal_t2948259380::get_offset_of_mid_17() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize187 = { sizeof (DBNull_t3725197148), -1, sizeof(DBNull_t3725197148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable187[1] = 
{
	DBNull_t3725197148_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize188 = { sizeof (DivideByZeroException_t1856388118), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize189 = { sizeof (DllNotFoundException_t2721418633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize190 = { sizeof (Double_t594665363)+ sizeof (RuntimeObject), sizeof(double), sizeof(Double_t594665363_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable190[2] = 
{
	Double_t594665363::get_offset_of_m_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Double_t594665363_StaticFields::get_offset_of_NegativeZero_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize191 = { sizeof (Empty_t4129602447), -1, sizeof(Empty_t4129602447_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable191[1] = 
{
	Empty_t4129602447_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize192 = { sizeof (Enum_t4135868527), sizeof(Enum_t4135868527_marshaled_pinvoke), sizeof(Enum_t4135868527_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable192[2] = 
{
	Enum_t4135868527_StaticFields::get_offset_of_enumSeperatorCharArray_0(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize193 = { sizeof (ParseFailureKind_t2353020108)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable193[6] = 
{
	ParseFailureKind_t2353020108::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize194 = { sizeof (EnumResult_t2373072967)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable194[7] = 
{
	EnumResult_t2373072967::get_offset_of_parsedEnum_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EnumResult_t2373072967::get_offset_of_canThrow_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EnumResult_t2373072967::get_offset_of_m_failure_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EnumResult_t2373072967::get_offset_of_m_failureMessageID_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EnumResult_t2373072967::get_offset_of_m_failureParameter_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EnumResult_t2373072967::get_offset_of_m_failureMessageFormatArgument_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	EnumResult_t2373072967::get_offset_of_m_innerException_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize195 = { sizeof (ValuesAndNames_t523671982), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable195[2] = 
{
	ValuesAndNames_t523671982::get_offset_of_Values_0(),
	ValuesAndNames_t523671982::get_offset_of_Names_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize196 = { sizeof (EntryPointNotFoundException_t1356862416), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize197 = { sizeof (EventArgs_t3591816995), -1, sizeof(EventArgs_t3591816995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable197[1] = 
{
	EventArgs_t3591816995_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize198 = { sizeof (EventHandler_t1348719766), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize199 = { 0, 0, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
