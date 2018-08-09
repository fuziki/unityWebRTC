#include "il2cpp-config.h"

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


// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// WebRtcMsgExchanger
struct WebRtcMsgExchanger_t3272896331;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// SimplePeerConnectionM.PeerConnectionM
struct PeerConnectionM_t1544440329;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;




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
#ifndef ICEJSON_T3287139184_H
#define ICEJSON_T3287139184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRtcCoreWindows/IceJson
struct  IceJson_t3287139184  : public RuntimeObject
{
public:
	// System.String WebRtcCoreWindows/IceJson::Ice
	String_t* ___Ice_0;
	// System.Int32 WebRtcCoreWindows/IceJson::Index
	int32_t ___Index_1;
	// System.String WebRtcCoreWindows/IceJson::Mid
	String_t* ___Mid_2;

public:
	inline static int32_t get_offset_of_Ice_0() { return static_cast<int32_t>(offsetof(IceJson_t3287139184, ___Ice_0)); }
	inline String_t* get_Ice_0() const { return ___Ice_0; }
	inline String_t** get_address_of_Ice_0() { return &___Ice_0; }
	inline void set_Ice_0(String_t* value)
	{
		___Ice_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ice_0), value);
	}

	inline static int32_t get_offset_of_Index_1() { return static_cast<int32_t>(offsetof(IceJson_t3287139184, ___Index_1)); }
	inline int32_t get_Index_1() const { return ___Index_1; }
	inline int32_t* get_address_of_Index_1() { return &___Index_1; }
	inline void set_Index_1(int32_t value)
	{
		___Index_1 = value;
	}

	inline static int32_t get_offset_of_Mid_2() { return static_cast<int32_t>(offsetof(IceJson_t3287139184, ___Mid_2)); }
	inline String_t* get_Mid_2() const { return ___Mid_2; }
	inline String_t** get_address_of_Mid_2() { return &___Mid_2; }
	inline void set_Mid_2(String_t* value)
	{
		___Mid_2 = value;
		Il2CppCodeGenWriteBarrier((&___Mid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICEJSON_T3287139184_H
#ifndef WEBRTCCORE_T934528111_H
#define WEBRTCCORE_T934528111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRtcCore
struct  WebRtcCore_t934528111  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D WebRtcCore::RecievedTexture2D
	Texture2D_t3840446185 * ___RecievedTexture2D_0;
	// UnityEngine.Texture2D WebRtcCore::inputTexture
	Texture2D_t3840446185 * ___inputTexture_1;
	// WebRtcMsgExchanger WebRtcCore::msgExchanger
	WebRtcMsgExchanger_t3272896331 * ___msgExchanger_2;

public:
	inline static int32_t get_offset_of_RecievedTexture2D_0() { return static_cast<int32_t>(offsetof(WebRtcCore_t934528111, ___RecievedTexture2D_0)); }
	inline Texture2D_t3840446185 * get_RecievedTexture2D_0() const { return ___RecievedTexture2D_0; }
	inline Texture2D_t3840446185 ** get_address_of_RecievedTexture2D_0() { return &___RecievedTexture2D_0; }
	inline void set_RecievedTexture2D_0(Texture2D_t3840446185 * value)
	{
		___RecievedTexture2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___RecievedTexture2D_0), value);
	}

	inline static int32_t get_offset_of_inputTexture_1() { return static_cast<int32_t>(offsetof(WebRtcCore_t934528111, ___inputTexture_1)); }
	inline Texture2D_t3840446185 * get_inputTexture_1() const { return ___inputTexture_1; }
	inline Texture2D_t3840446185 ** get_address_of_inputTexture_1() { return &___inputTexture_1; }
	inline void set_inputTexture_1(Texture2D_t3840446185 * value)
	{
		___inputTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___inputTexture_1), value);
	}

	inline static int32_t get_offset_of_msgExchanger_2() { return static_cast<int32_t>(offsetof(WebRtcCore_t934528111, ___msgExchanger_2)); }
	inline WebRtcMsgExchanger_t3272896331 * get_msgExchanger_2() const { return ___msgExchanger_2; }
	inline WebRtcMsgExchanger_t3272896331 ** get_address_of_msgExchanger_2() { return &___msgExchanger_2; }
	inline void set_msgExchanger_2(WebRtcMsgExchanger_t3272896331 * value)
	{
		___msgExchanger_2 = value;
		Il2CppCodeGenWriteBarrier((&___msgExchanger_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRTCCORE_T934528111_H
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

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef WEBRTCCOREWINDOWS_T2553259814_H
#define WEBRTCCOREWINDOWS_T2553259814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRtcCoreWindows
struct  WebRtcCoreWindows_t2553259814  : public WebRtcCore_t934528111
{
public:
	// SimplePeerConnectionM.PeerConnectionM WebRtcCoreWindows::peer
	PeerConnectionM_t1544440329 * ___peer_3;
	// WebRtcMsgExchanger WebRtcCoreWindows::msgExchanger
	WebRtcMsgExchanger_t3272896331 * ___msgExchanger_4;
	// System.Byte[] WebRtcCoreWindows::recievedTextureBuffer
	ByteU5BU5D_t4116647657* ___recievedTextureBuffer_5;
	// System.Boolean WebRtcCoreWindows::recievedTextureBufferIsUpdated
	bool ___recievedTextureBufferIsUpdated_6;
	// System.IntPtr WebRtcCoreWindows::inputTexturePixlesPtr
	intptr_t ___inputTexturePixlesPtr_7;
	// UnityEngine.Color32[] WebRtcCoreWindows::inputTexturePixels
	Color32U5BU5D_t3850468773* ___inputTexturePixels_8;
	// System.Runtime.InteropServices.GCHandle WebRtcCoreWindows::inputTextureHandle
	GCHandle_t3351438187  ___inputTextureHandle_9;
	// System.Int32 WebRtcCoreWindows::UniquePeerId
	int32_t ___UniquePeerId_10;

public:
	inline static int32_t get_offset_of_peer_3() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___peer_3)); }
	inline PeerConnectionM_t1544440329 * get_peer_3() const { return ___peer_3; }
	inline PeerConnectionM_t1544440329 ** get_address_of_peer_3() { return &___peer_3; }
	inline void set_peer_3(PeerConnectionM_t1544440329 * value)
	{
		___peer_3 = value;
		Il2CppCodeGenWriteBarrier((&___peer_3), value);
	}

	inline static int32_t get_offset_of_msgExchanger_4() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___msgExchanger_4)); }
	inline WebRtcMsgExchanger_t3272896331 * get_msgExchanger_4() const { return ___msgExchanger_4; }
	inline WebRtcMsgExchanger_t3272896331 ** get_address_of_msgExchanger_4() { return &___msgExchanger_4; }
	inline void set_msgExchanger_4(WebRtcMsgExchanger_t3272896331 * value)
	{
		___msgExchanger_4 = value;
		Il2CppCodeGenWriteBarrier((&___msgExchanger_4), value);
	}

	inline static int32_t get_offset_of_recievedTextureBuffer_5() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___recievedTextureBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_recievedTextureBuffer_5() const { return ___recievedTextureBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_recievedTextureBuffer_5() { return &___recievedTextureBuffer_5; }
	inline void set_recievedTextureBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___recievedTextureBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___recievedTextureBuffer_5), value);
	}

	inline static int32_t get_offset_of_recievedTextureBufferIsUpdated_6() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___recievedTextureBufferIsUpdated_6)); }
	inline bool get_recievedTextureBufferIsUpdated_6() const { return ___recievedTextureBufferIsUpdated_6; }
	inline bool* get_address_of_recievedTextureBufferIsUpdated_6() { return &___recievedTextureBufferIsUpdated_6; }
	inline void set_recievedTextureBufferIsUpdated_6(bool value)
	{
		___recievedTextureBufferIsUpdated_6 = value;
	}

	inline static int32_t get_offset_of_inputTexturePixlesPtr_7() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___inputTexturePixlesPtr_7)); }
	inline intptr_t get_inputTexturePixlesPtr_7() const { return ___inputTexturePixlesPtr_7; }
	inline intptr_t* get_address_of_inputTexturePixlesPtr_7() { return &___inputTexturePixlesPtr_7; }
	inline void set_inputTexturePixlesPtr_7(intptr_t value)
	{
		___inputTexturePixlesPtr_7 = value;
	}

	inline static int32_t get_offset_of_inputTexturePixels_8() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___inputTexturePixels_8)); }
	inline Color32U5BU5D_t3850468773* get_inputTexturePixels_8() const { return ___inputTexturePixels_8; }
	inline Color32U5BU5D_t3850468773** get_address_of_inputTexturePixels_8() { return &___inputTexturePixels_8; }
	inline void set_inputTexturePixels_8(Color32U5BU5D_t3850468773* value)
	{
		___inputTexturePixels_8 = value;
		Il2CppCodeGenWriteBarrier((&___inputTexturePixels_8), value);
	}

	inline static int32_t get_offset_of_inputTextureHandle_9() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___inputTextureHandle_9)); }
	inline GCHandle_t3351438187  get_inputTextureHandle_9() const { return ___inputTextureHandle_9; }
	inline GCHandle_t3351438187 * get_address_of_inputTextureHandle_9() { return &___inputTextureHandle_9; }
	inline void set_inputTextureHandle_9(GCHandle_t3351438187  value)
	{
		___inputTextureHandle_9 = value;
	}

	inline static int32_t get_offset_of_UniquePeerId_10() { return static_cast<int32_t>(offsetof(WebRtcCoreWindows_t2553259814, ___UniquePeerId_10)); }
	inline int32_t get_UniquePeerId_10() const { return ___UniquePeerId_10; }
	inline int32_t* get_address_of_UniquePeerId_10() { return &___UniquePeerId_10; }
	inline void set_UniquePeerId_10(int32_t value)
	{
		___UniquePeerId_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRTCCOREWINDOWS_T2553259814_H
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
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef FAILUREMESSAGEDELEGATE_T3750826190_H
#define FAILUREMESSAGEDELEGATE_T3750826190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate
struct  FailureMessageDelegate_t3750826190  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAILUREMESSAGEDELEGATE_T3750826190_H
#ifndef AUDIOBUSREADYINTERNALDELEGATE_T2220975906_H
#define AUDIOBUSREADYINTERNALDELEGATE_T2220975906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate
struct  AudioBusReadyInternalDelegate_t2220975906  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBUSREADYINTERNALDELEGATE_T2220975906_H
#ifndef AUDIOBUSREADYDELEGATE_T1824694707_H
#define AUDIOBUSREADYDELEGATE_T1824694707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate
struct  AudioBusReadyDelegate_t1824694707  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBUSREADYDELEGATE_T1824694707_H
#ifndef RECIEVEDRGBFRAMEINTERNALDELEGATE_T1745086045_H
#define RECIEVEDRGBFRAMEINTERNALDELEGATE_T1745086045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate
struct  RecievedRGBFrameInternalDelegate_t1745086045  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECIEVEDRGBFRAMEINTERNALDELEGATE_T1745086045_H
#ifndef RECIEVEDRGBFRAMEDELEGATE_T726515755_H
#define RECIEVEDRGBFRAMEDELEGATE_T726515755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate
struct  RecievedRGBFrameDelegate_t726515755  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECIEVEDRGBFRAMEDELEGATE_T726515755_H
#ifndef LOCALSDPREADYTOSENDINTERNALDELEGATE_T4044312851_H
#define LOCALSDPREADYTOSENDINTERNALDELEGATE_T4044312851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate
struct  LocalSdpReadytoSendInternalDelegate_t4044312851  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALSDPREADYTOSENDINTERNALDELEGATE_T4044312851_H
#ifndef LOCALSDPREADYTOSENDDELEGATE_T527669091_H
#define LOCALSDPREADYTOSENDDELEGATE_T527669091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate
struct  LocalSdpReadytoSendDelegate_t527669091  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALSDPREADYTOSENDDELEGATE_T527669091_H
#ifndef ICECANDIATEREADYTOSENDINTERNALDELEGATE_T754111350_H
#define ICECANDIATEREADYTOSENDINTERNALDELEGATE_T754111350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate
struct  IceCandiateReadytoSendInternalDelegate_t754111350  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICECANDIATEREADYTOSENDINTERNALDELEGATE_T754111350_H
#ifndef ICECANDIATEREADYTOSENDDELEGATE_T3971808015_H
#define ICECANDIATEREADYTOSENDDELEGATE_T3971808015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate
struct  IceCandiateReadytoSendDelegate_t3971808015  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ICECANDIATEREADYTOSENDDELEGATE_T3971808015_H
#ifndef FAILUREMESSAGEINTERNALDELEGATE_T3617644009_H
#define FAILUREMESSAGEINTERNALDELEGATE_T3617644009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate
struct  FailureMessageInternalDelegate_t3617644009  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAILUREMESSAGEINTERNALDELEGATE_T3617644009_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (FailureMessageInternalDelegate_t3617644009), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (FailureMessageDelegate_t3750826190), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (AudioBusReadyInternalDelegate_t2220975906), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (AudioBusReadyDelegate_t1824694707), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (RecievedRGBFrameInternalDelegate_t1745086045), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (RecievedRGBFrameDelegate_t726515755), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (LocalSdpReadytoSendInternalDelegate_t4044312851), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (LocalSdpReadytoSendDelegate_t527669091), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (IceCandiateReadytoSendInternalDelegate_t754111350), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (IceCandiateReadytoSendDelegate_t3971808015), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (WebRtcCoreWindows_t2553259814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[8] = 
{
	WebRtcCoreWindows_t2553259814::get_offset_of_peer_3(),
	WebRtcCoreWindows_t2553259814::get_offset_of_msgExchanger_4(),
	WebRtcCoreWindows_t2553259814::get_offset_of_recievedTextureBuffer_5(),
	WebRtcCoreWindows_t2553259814::get_offset_of_recievedTextureBufferIsUpdated_6(),
	WebRtcCoreWindows_t2553259814::get_offset_of_inputTexturePixlesPtr_7(),
	WebRtcCoreWindows_t2553259814::get_offset_of_inputTexturePixels_8(),
	WebRtcCoreWindows_t2553259814::get_offset_of_inputTextureHandle_9(),
	WebRtcCoreWindows_t2553259814::get_offset_of_UniquePeerId_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (IceJson_t3287139184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[3] = 
{
	IceJson_t3287139184::get_offset_of_Ice_0(),
	IceJson_t3287139184::get_offset_of_Index_1(),
	IceJson_t3287139184::get_offset_of_Mid_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
