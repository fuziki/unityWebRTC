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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// MqttController
struct MqttController_t3766054392;
// WebRtcMsgExchanger
struct WebRtcMsgExchanger_t3272896331;
// uPLibrary.Networking.M2Mqtt.MqttClient
struct MqttClient_t1237157870;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler
struct MqttMsgPublishEventHandler_t1923217352;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct MqttMsgPublishEventArgs_t2350602093;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Text.Encoding
struct Encoding_t1523322056;
// PlaneUpdater
struct PlaneUpdater_t1284977546;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// SimplePeerConnectionM.PeerConnectionM
struct PeerConnectionM_t1544440329;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate
struct LocalDataChannelReadyInternalDelegate_t4253056107;
// SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate
struct DataFromDataChannelReadyInternalDelegate_t513489297;
// SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate
struct FailureMessageInternalDelegate_t3617644009;
// SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate
struct AudioBusReadyInternalDelegate_t2220975906;
// SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate
struct RecievedRGBFrameInternalDelegate_t1745086045;
// SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate
struct LocalSdpReadytoSendInternalDelegate_t4044312851;
// SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate
struct IceCandiateReadytoSendInternalDelegate_t754111350;
// SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate
struct LocalDataChannelReadyDelegate_t1540256137;
// SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate
struct DataFromDataChannelReadyDelegate_t2867388022;
// SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate
struct FailureMessageDelegate_t3750826190;
// SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate
struct AudioBusReadyDelegate_t1824694707;
// SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate
struct RecievedRGBFrameDelegate_t726515755;
// SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate
struct LocalSdpReadytoSendDelegate_t527669091;
// SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate
struct IceCandiateReadytoSendDelegate_t3971808015;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// WebRtcController
struct WebRtcController_t2826223470;
// WebRtcCoreiOS
struct WebRtcCoreiOS_t2902875004;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// WebRtcCore
struct WebRtcCore_t934528111;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RenderTexture
struct RenderTexture_t2108887433;
// UnityEngine.Object
struct Object_t631007953;
// PeerConnectioniOS
struct PeerConnectioniOS_t1321012807;
// PeerConnectioniOS/SDPREADY_Delegate
struct SDPREADY_Delegate_t94822726;
// WebRtcCoreWindows
struct WebRtcCoreWindows_t2553259814;
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773;
// WebRtcCoreWindows/IceJson
struct IceJson_t3287139184;
// System.Type
struct Type_t;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t2321119380;
// System.Exception
struct Exception_t;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct MqttMsgPublishedEventHandler_t3860164542;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct MqttMsgSubscribedEventHandler_t2042141578;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct MqttMsgUnsubscribedEventHandler_t2087605283;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler
struct MqttMsgDisconnectEventHandler_t848571114;
// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel
struct IMqttNetworkChannel_t3555245973;
// System.Collections.Queue
struct Queue_t3637523393;
// uPLibrary.Networking.M2Mqtt.MqttSettings
struct MqttSettings_t1362412725;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;

extern RuntimeClass* MqttClient_t1237157870_il2cpp_TypeInfo_var;
extern RuntimeClass* MqttMsgPublishEventHandler_t1923217352_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttController_ReceivedMessage_m387903925_RuntimeMethod_var;
extern String_t* _stringLiteral990781616;
extern String_t* _stringLiteral3547863816;
extern const uint32_t MqttController_Start_m2331879798_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern const uint32_t MqttController_ReceivedMessage_m387903925_MetadataUsageId;
extern const uint32_t MqttController_SendMessage_m863138276_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3971110727;
extern String_t* _stringLiteral3031636744;
extern String_t* _stringLiteral3452614529;
extern const uint32_t MqttController_RequiredSendingMessage_m1790476948_MetadataUsageId;
extern const RuntimeMethod* List_1_ToArray_m3983937259_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern const uint32_t PeerConnectionM__ctor_m2038595787_MetadataUsageId;
extern RuntimeClass* LocalDataChannelReadyInternalDelegate_t4253056107_il2cpp_TypeInfo_var;
extern RuntimeClass* DataFromDataChannelReadyInternalDelegate_t513489297_il2cpp_TypeInfo_var;
extern RuntimeClass* FailureMessageInternalDelegate_t3617644009_il2cpp_TypeInfo_var;
extern RuntimeClass* AudioBusReadyInternalDelegate_t2220975906_il2cpp_TypeInfo_var;
extern RuntimeClass* RecievedRGBFrameInternalDelegate_t1745086045_il2cpp_TypeInfo_var;
extern RuntimeClass* LocalSdpReadytoSendInternalDelegate_t4044312851_il2cpp_TypeInfo_var;
extern RuntimeClass* IceCandiateReadytoSendInternalDelegate_t754111350_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PeerConnectionM_RaiseLocalDataChannelReady_m2096657625_RuntimeMethod_var;
extern const RuntimeMethod* PeerConnectionM_RaiseDataFromDataChannelReady_m324978328_RuntimeMethod_var;
extern const RuntimeMethod* PeerConnectionM_RaiseFailureMessage_m3298792034_RuntimeMethod_var;
extern const RuntimeMethod* PeerConnectionM_RaiseAudioBusReady_m2625571004_RuntimeMethod_var;
extern const RuntimeMethod* PeerConnectionM_RaiseRGBVideoFrameReady_m505442155_RuntimeMethod_var;
extern const RuntimeMethod* PeerConnectionM_RaiseLocalSdpReadytoSend_m3595029936_RuntimeMethod_var;
extern const RuntimeMethod* PeerConnectionM_RaiseIceCandiateReadytoSend_m3666981664_RuntimeMethod_var;
extern const uint32_t PeerConnectionM_RegisterCallbacks_m670014253_MetadataUsageId;
extern RuntimeClass* LocalDataChannelReadyDelegate_t1540256137_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_OnLocalDataChannelReady_m2306596303_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_OnLocalDataChannelReady_m2305146633_MetadataUsageId;
extern RuntimeClass* DataFromDataChannelReadyDelegate_t2867388022_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_OnDataFromDataChannelReady_m2557643621_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_OnDataFromDataChannelReady_m1366899369_MetadataUsageId;
extern RuntimeClass* FailureMessageDelegate_t3750826190_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_OnFailureMessage_m3043468050_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_OnFailureMessage_m2952274504_MetadataUsageId;
extern RuntimeClass* AudioBusReadyDelegate_t1824694707_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_OnAudioBusReady_m631575994_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_OnAudioBusReady_m771539546_MetadataUsageId;
extern RuntimeClass* RecievedRGBFrameDelegate_t726515755_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_FramgeGate_onRecieved_m3615637464_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_FramgeGate_onRecieved_m1073588511_MetadataUsageId;
extern RuntimeClass* LocalSdpReadytoSendDelegate_t527669091_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_OnLocalSdpReadytoSend_m835606092_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_OnLocalSdpReadytoSend_m2125799282_MetadataUsageId;
extern RuntimeClass* IceCandiateReadytoSendDelegate_t3971808015_il2cpp_TypeInfo_var;
extern const uint32_t PeerConnectionM_add_OnIceCandiateReadytoSend_m128809503_MetadataUsageId;
extern const uint32_t PeerConnectionM_remove_OnIceCandiateReadytoSend_m3593025061_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t AudioBusReadyDelegate_BeginInvoke_m2100580139_MetadataUsageId;
extern const uint32_t AudioBusReadyInternalDelegate_BeginInvoke_m1432301034_MetadataUsageId;
extern const uint32_t DataFromDataChannelReadyDelegate_BeginInvoke_m267608053_MetadataUsageId;
extern const uint32_t FailureMessageDelegate_BeginInvoke_m1141354983_MetadataUsageId;
extern const uint32_t IceCandiateReadytoSendDelegate_BeginInvoke_m1070973458_MetadataUsageId;
extern const uint32_t IceCandiateReadytoSendInternalDelegate_BeginInvoke_m2121857840_MetadataUsageId;
extern const uint32_t LocalDataChannelReadyDelegate_BeginInvoke_m2806540801_MetadataUsageId;
extern const uint32_t LocalSdpReadytoSendDelegate_BeginInvoke_m3972429737_MetadataUsageId;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern const uint32_t RecievedRGBFrameDelegate_BeginInvoke_m1484175643_MetadataUsageId;
extern const uint32_t RecievedRGBFrameInternalDelegate_BeginInvoke_m1395819739_MetadataUsageId;
extern RuntimeClass* WebRtcCoreiOS_t2902875004_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisWebRtcMsgExchanger_t3272896331_m3981858059_RuntimeMethod_var;
extern const uint32_t WebRtcController_Start_m3487213827_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern const uint32_t WebRtcCore_FrameGate_Input_m2557469663_MetadataUsageId;
extern RuntimeClass* PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var;
extern RuntimeClass* SDPREADY_Delegate_t94822726_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WebRtcCoreiOS_SdpReadyCallback_m530249718_RuntimeMethod_var;
extern String_t* _stringLiteral2962428090;
extern String_t* _stringLiteral515161096;
extern const uint32_t WebRtcCoreiOS__ctor_m793953905_MetadataUsageId;
extern String_t* _stringLiteral3757327182;
extern String_t* _stringLiteral3450517380;
extern const uint32_t WebRtcCoreiOS_SdpReadyCallback_m530249718_MetadataUsageId;
extern String_t* _stringLiteral3963721087;
extern const uint32_t WebRtcCoreiOS_Close_m814323968_MetadataUsageId;
extern String_t* _stringLiteral1609782641;
extern const uint32_t WebRtcCoreiOS_CreateOffer_m1410769418_MetadataUsageId;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* PeerConnectionM_t1544440329_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* WebRtcCoreWindows_OnLocalSdpReadytoSend_m1897714168_RuntimeMethod_var;
extern const RuntimeMethod* WebRtcCoreWindows_OnIceCandiateReadytoSend_m680431510_RuntimeMethod_var;
extern const RuntimeMethod* WebRtcCoreWindows_RecievedRGBFrame_m2232008021_RuntimeMethod_var;
extern const RuntimeMethod* WebRtcCoreWindows_OnFailureMessage_m3240352638_RuntimeMethod_var;
extern String_t* _stringLiteral1803913336;
extern String_t* _stringLiteral2474132131;
extern const uint32_t WebRtcCoreWindows__ctor_m3315090686_MetadataUsageId;
extern String_t* _stringLiteral4258793312;
extern const uint32_t WebRtcCoreWindows_Close_m1423883481_MetadataUsageId;
extern String_t* _stringLiteral2718436488;
extern const uint32_t WebRtcCoreWindows_CreateOffer_m765754139_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral942018554;
extern String_t* _stringLiteral536748604;
extern String_t* _stringLiteral756541977;
extern const uint32_t WebRtcCoreWindows_OnLocalSdpReadytoSend_m1897714168_MetadataUsageId;
extern RuntimeClass* IceJson_t3287139184_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1699725656;
extern String_t* _stringLiteral2133073445;
extern const uint32_t WebRtcCoreWindows_OnIceCandiateReadytoSend_m680431510_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const uint32_t WebRtcCoreWindows_RecievedRGBFrame_m2232008021_MetadataUsageId;
extern String_t* _stringLiteral3292287797;
extern String_t* _stringLiteral1271086852;
extern const uint32_t WebRtcCoreWindows_OnFailureMessage_m3240352638_MetadataUsageId;
extern const RuntimeType* IceJson_t3287139184_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1943138033;
extern String_t* _stringLiteral40126141;
extern String_t* _stringLiteral2288287499;
extern const uint32_t WebRtcCoreWindows_RecievedMessage_m2313573200_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct GameObjectU5BU5D_t3328599146;
struct Color32U5BU5D_t3850468773;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MQTTCLIENT_T1237157870_H
#define MQTTCLIENT_T1237157870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient
struct  MqttClient_t1237157870  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttClient::caCert
	X509Certificate_t713131622 * ___caCert_0;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::brokerHostName
	String_t* ___brokerHostName_1;
	// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttClient::brokerIpAddress
	IPAddress_t241777590 * ___brokerIpAddress_2;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttClient::brokerPort
	int32_t ___brokerPort_3;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::secure
	bool ___secure_4;
	// System.Threading.Thread uPLibrary.Networking.M2Mqtt.MqttClient::receiveThread
	Thread_t2300836069 * ___receiveThread_5;
	// System.Threading.Thread uPLibrary.Networking.M2Mqtt.MqttClient::receiveEventThread
	Thread_t2300836069 * ___receiveEventThread_6;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::isRunning
	bool ___isRunning_7;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::receiveEventWaitHandle
	AutoResetEvent_t1333520283 * ___receiveEventWaitHandle_8;
	// System.Threading.Thread uPLibrary.Networking.M2Mqtt.MqttClient::processInflightThread
	Thread_t2300836069 * ___processInflightThread_9;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::inflightWaitHandle
	AutoResetEvent_t1333520283 * ___inflightWaitHandle_10;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::syncEndReceiving
	AutoResetEvent_t1333520283 * ___syncEndReceiving_11;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::msgReceived
	MqttMsgBase_t2321119380 * ___msgReceived_12;
	// System.Exception uPLibrary.Networking.M2Mqtt.MqttClient::exReceiving
	Exception_t * ___exReceiving_13;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttClient::keepAlivePeriod
	int32_t ___keepAlivePeriod_14;
	// System.Threading.Thread uPLibrary.Networking.M2Mqtt.MqttClient::keepAliveThread
	Thread_t2300836069 * ___keepAliveThread_15;
	// System.Threading.AutoResetEvent uPLibrary.Networking.M2Mqtt.MqttClient::keepAliveEvent
	AutoResetEvent_t1333520283 * ___keepAliveEvent_16;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::isKeepAliveTimeout
	bool ___isKeepAliveTimeout_17;
	// System.Int64 uPLibrary.Networking.M2Mqtt.MqttClient::lastCommTime
	int64_t ___lastCommTime_18;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgPublishReceived
	MqttMsgPublishEventHandler_t1923217352 * ___MqttMsgPublishReceived_19;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgPublished
	MqttMsgPublishedEventHandler_t3860164542 * ___MqttMsgPublished_20;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgSubscribed
	MqttMsgSubscribedEventHandler_t2042141578 * ___MqttMsgSubscribed_21;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgUnsubscribed
	MqttMsgUnsubscribedEventHandler_t2087605283 * ___MqttMsgUnsubscribed_22;
	// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler uPLibrary.Networking.M2Mqtt.MqttClient::MqttMsgDisconnected
	MqttMsgDisconnectEventHandler_t848571114 * ___MqttMsgDisconnected_23;
	// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel uPLibrary.Networking.M2Mqtt.MqttClient::channel
	RuntimeObject* ___channel_24;
	// System.Collections.Queue uPLibrary.Networking.M2Mqtt.MqttClient::inflightQueue
	Queue_t3637523393 * ___inflightQueue_25;
	// System.Collections.Queue uPLibrary.Networking.M2Mqtt.MqttClient::internalQueue
	Queue_t3637523393 * ___internalQueue_26;
	// System.Collections.Queue uPLibrary.Networking.M2Mqtt.MqttClient::receiveQueue
	Queue_t3637523393 * ___receiveQueue_27;
	// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttClient::settings
	MqttSettings_t1362412725 * ___settings_28;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::messageIdCounter
	uint16_t ___messageIdCounter_29;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_30;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::<ClientId>k__BackingField
	String_t* ___U3CClientIdU3Ek__BackingField_31;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::<CleanSession>k__BackingField
	bool ___U3CCleanSessionU3Ek__BackingField_32;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::<WillFlag>k__BackingField
	bool ___U3CWillFlagU3Ek__BackingField_33;
	// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::<WillQosLevel>k__BackingField
	uint8_t ___U3CWillQosLevelU3Ek__BackingField_34;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::<WillTopic>k__BackingField
	String_t* ___U3CWillTopicU3Ek__BackingField_35;
	// System.String uPLibrary.Networking.M2Mqtt.MqttClient::<WillMessage>k__BackingField
	String_t* ___U3CWillMessageU3Ek__BackingField_36;

public:
	inline static int32_t get_offset_of_caCert_0() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___caCert_0)); }
	inline X509Certificate_t713131622 * get_caCert_0() const { return ___caCert_0; }
	inline X509Certificate_t713131622 ** get_address_of_caCert_0() { return &___caCert_0; }
	inline void set_caCert_0(X509Certificate_t713131622 * value)
	{
		___caCert_0 = value;
		Il2CppCodeGenWriteBarrier((&___caCert_0), value);
	}

	inline static int32_t get_offset_of_brokerHostName_1() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___brokerHostName_1)); }
	inline String_t* get_brokerHostName_1() const { return ___brokerHostName_1; }
	inline String_t** get_address_of_brokerHostName_1() { return &___brokerHostName_1; }
	inline void set_brokerHostName_1(String_t* value)
	{
		___brokerHostName_1 = value;
		Il2CppCodeGenWriteBarrier((&___brokerHostName_1), value);
	}

	inline static int32_t get_offset_of_brokerIpAddress_2() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___brokerIpAddress_2)); }
	inline IPAddress_t241777590 * get_brokerIpAddress_2() const { return ___brokerIpAddress_2; }
	inline IPAddress_t241777590 ** get_address_of_brokerIpAddress_2() { return &___brokerIpAddress_2; }
	inline void set_brokerIpAddress_2(IPAddress_t241777590 * value)
	{
		___brokerIpAddress_2 = value;
		Il2CppCodeGenWriteBarrier((&___brokerIpAddress_2), value);
	}

	inline static int32_t get_offset_of_brokerPort_3() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___brokerPort_3)); }
	inline int32_t get_brokerPort_3() const { return ___brokerPort_3; }
	inline int32_t* get_address_of_brokerPort_3() { return &___brokerPort_3; }
	inline void set_brokerPort_3(int32_t value)
	{
		___brokerPort_3 = value;
	}

	inline static int32_t get_offset_of_secure_4() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___secure_4)); }
	inline bool get_secure_4() const { return ___secure_4; }
	inline bool* get_address_of_secure_4() { return &___secure_4; }
	inline void set_secure_4(bool value)
	{
		___secure_4 = value;
	}

	inline static int32_t get_offset_of_receiveThread_5() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___receiveThread_5)); }
	inline Thread_t2300836069 * get_receiveThread_5() const { return ___receiveThread_5; }
	inline Thread_t2300836069 ** get_address_of_receiveThread_5() { return &___receiveThread_5; }
	inline void set_receiveThread_5(Thread_t2300836069 * value)
	{
		___receiveThread_5 = value;
		Il2CppCodeGenWriteBarrier((&___receiveThread_5), value);
	}

	inline static int32_t get_offset_of_receiveEventThread_6() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___receiveEventThread_6)); }
	inline Thread_t2300836069 * get_receiveEventThread_6() const { return ___receiveEventThread_6; }
	inline Thread_t2300836069 ** get_address_of_receiveEventThread_6() { return &___receiveEventThread_6; }
	inline void set_receiveEventThread_6(Thread_t2300836069 * value)
	{
		___receiveEventThread_6 = value;
		Il2CppCodeGenWriteBarrier((&___receiveEventThread_6), value);
	}

	inline static int32_t get_offset_of_isRunning_7() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___isRunning_7)); }
	inline bool get_isRunning_7() const { return ___isRunning_7; }
	inline bool* get_address_of_isRunning_7() { return &___isRunning_7; }
	inline void set_isRunning_7(bool value)
	{
		___isRunning_7 = value;
	}

	inline static int32_t get_offset_of_receiveEventWaitHandle_8() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___receiveEventWaitHandle_8)); }
	inline AutoResetEvent_t1333520283 * get_receiveEventWaitHandle_8() const { return ___receiveEventWaitHandle_8; }
	inline AutoResetEvent_t1333520283 ** get_address_of_receiveEventWaitHandle_8() { return &___receiveEventWaitHandle_8; }
	inline void set_receiveEventWaitHandle_8(AutoResetEvent_t1333520283 * value)
	{
		___receiveEventWaitHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___receiveEventWaitHandle_8), value);
	}

	inline static int32_t get_offset_of_processInflightThread_9() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___processInflightThread_9)); }
	inline Thread_t2300836069 * get_processInflightThread_9() const { return ___processInflightThread_9; }
	inline Thread_t2300836069 ** get_address_of_processInflightThread_9() { return &___processInflightThread_9; }
	inline void set_processInflightThread_9(Thread_t2300836069 * value)
	{
		___processInflightThread_9 = value;
		Il2CppCodeGenWriteBarrier((&___processInflightThread_9), value);
	}

	inline static int32_t get_offset_of_inflightWaitHandle_10() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___inflightWaitHandle_10)); }
	inline AutoResetEvent_t1333520283 * get_inflightWaitHandle_10() const { return ___inflightWaitHandle_10; }
	inline AutoResetEvent_t1333520283 ** get_address_of_inflightWaitHandle_10() { return &___inflightWaitHandle_10; }
	inline void set_inflightWaitHandle_10(AutoResetEvent_t1333520283 * value)
	{
		___inflightWaitHandle_10 = value;
		Il2CppCodeGenWriteBarrier((&___inflightWaitHandle_10), value);
	}

	inline static int32_t get_offset_of_syncEndReceiving_11() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___syncEndReceiving_11)); }
	inline AutoResetEvent_t1333520283 * get_syncEndReceiving_11() const { return ___syncEndReceiving_11; }
	inline AutoResetEvent_t1333520283 ** get_address_of_syncEndReceiving_11() { return &___syncEndReceiving_11; }
	inline void set_syncEndReceiving_11(AutoResetEvent_t1333520283 * value)
	{
		___syncEndReceiving_11 = value;
		Il2CppCodeGenWriteBarrier((&___syncEndReceiving_11), value);
	}

	inline static int32_t get_offset_of_msgReceived_12() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___msgReceived_12)); }
	inline MqttMsgBase_t2321119380 * get_msgReceived_12() const { return ___msgReceived_12; }
	inline MqttMsgBase_t2321119380 ** get_address_of_msgReceived_12() { return &___msgReceived_12; }
	inline void set_msgReceived_12(MqttMsgBase_t2321119380 * value)
	{
		___msgReceived_12 = value;
		Il2CppCodeGenWriteBarrier((&___msgReceived_12), value);
	}

	inline static int32_t get_offset_of_exReceiving_13() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___exReceiving_13)); }
	inline Exception_t * get_exReceiving_13() const { return ___exReceiving_13; }
	inline Exception_t ** get_address_of_exReceiving_13() { return &___exReceiving_13; }
	inline void set_exReceiving_13(Exception_t * value)
	{
		___exReceiving_13 = value;
		Il2CppCodeGenWriteBarrier((&___exReceiving_13), value);
	}

	inline static int32_t get_offset_of_keepAlivePeriod_14() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___keepAlivePeriod_14)); }
	inline int32_t get_keepAlivePeriod_14() const { return ___keepAlivePeriod_14; }
	inline int32_t* get_address_of_keepAlivePeriod_14() { return &___keepAlivePeriod_14; }
	inline void set_keepAlivePeriod_14(int32_t value)
	{
		___keepAlivePeriod_14 = value;
	}

	inline static int32_t get_offset_of_keepAliveThread_15() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___keepAliveThread_15)); }
	inline Thread_t2300836069 * get_keepAliveThread_15() const { return ___keepAliveThread_15; }
	inline Thread_t2300836069 ** get_address_of_keepAliveThread_15() { return &___keepAliveThread_15; }
	inline void set_keepAliveThread_15(Thread_t2300836069 * value)
	{
		___keepAliveThread_15 = value;
		Il2CppCodeGenWriteBarrier((&___keepAliveThread_15), value);
	}

	inline static int32_t get_offset_of_keepAliveEvent_16() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___keepAliveEvent_16)); }
	inline AutoResetEvent_t1333520283 * get_keepAliveEvent_16() const { return ___keepAliveEvent_16; }
	inline AutoResetEvent_t1333520283 ** get_address_of_keepAliveEvent_16() { return &___keepAliveEvent_16; }
	inline void set_keepAliveEvent_16(AutoResetEvent_t1333520283 * value)
	{
		___keepAliveEvent_16 = value;
		Il2CppCodeGenWriteBarrier((&___keepAliveEvent_16), value);
	}

	inline static int32_t get_offset_of_isKeepAliveTimeout_17() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___isKeepAliveTimeout_17)); }
	inline bool get_isKeepAliveTimeout_17() const { return ___isKeepAliveTimeout_17; }
	inline bool* get_address_of_isKeepAliveTimeout_17() { return &___isKeepAliveTimeout_17; }
	inline void set_isKeepAliveTimeout_17(bool value)
	{
		___isKeepAliveTimeout_17 = value;
	}

	inline static int32_t get_offset_of_lastCommTime_18() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___lastCommTime_18)); }
	inline int64_t get_lastCommTime_18() const { return ___lastCommTime_18; }
	inline int64_t* get_address_of_lastCommTime_18() { return &___lastCommTime_18; }
	inline void set_lastCommTime_18(int64_t value)
	{
		___lastCommTime_18 = value;
	}

	inline static int32_t get_offset_of_MqttMsgPublishReceived_19() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___MqttMsgPublishReceived_19)); }
	inline MqttMsgPublishEventHandler_t1923217352 * get_MqttMsgPublishReceived_19() const { return ___MqttMsgPublishReceived_19; }
	inline MqttMsgPublishEventHandler_t1923217352 ** get_address_of_MqttMsgPublishReceived_19() { return &___MqttMsgPublishReceived_19; }
	inline void set_MqttMsgPublishReceived_19(MqttMsgPublishEventHandler_t1923217352 * value)
	{
		___MqttMsgPublishReceived_19 = value;
		Il2CppCodeGenWriteBarrier((&___MqttMsgPublishReceived_19), value);
	}

	inline static int32_t get_offset_of_MqttMsgPublished_20() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___MqttMsgPublished_20)); }
	inline MqttMsgPublishedEventHandler_t3860164542 * get_MqttMsgPublished_20() const { return ___MqttMsgPublished_20; }
	inline MqttMsgPublishedEventHandler_t3860164542 ** get_address_of_MqttMsgPublished_20() { return &___MqttMsgPublished_20; }
	inline void set_MqttMsgPublished_20(MqttMsgPublishedEventHandler_t3860164542 * value)
	{
		___MqttMsgPublished_20 = value;
		Il2CppCodeGenWriteBarrier((&___MqttMsgPublished_20), value);
	}

	inline static int32_t get_offset_of_MqttMsgSubscribed_21() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___MqttMsgSubscribed_21)); }
	inline MqttMsgSubscribedEventHandler_t2042141578 * get_MqttMsgSubscribed_21() const { return ___MqttMsgSubscribed_21; }
	inline MqttMsgSubscribedEventHandler_t2042141578 ** get_address_of_MqttMsgSubscribed_21() { return &___MqttMsgSubscribed_21; }
	inline void set_MqttMsgSubscribed_21(MqttMsgSubscribedEventHandler_t2042141578 * value)
	{
		___MqttMsgSubscribed_21 = value;
		Il2CppCodeGenWriteBarrier((&___MqttMsgSubscribed_21), value);
	}

	inline static int32_t get_offset_of_MqttMsgUnsubscribed_22() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___MqttMsgUnsubscribed_22)); }
	inline MqttMsgUnsubscribedEventHandler_t2087605283 * get_MqttMsgUnsubscribed_22() const { return ___MqttMsgUnsubscribed_22; }
	inline MqttMsgUnsubscribedEventHandler_t2087605283 ** get_address_of_MqttMsgUnsubscribed_22() { return &___MqttMsgUnsubscribed_22; }
	inline void set_MqttMsgUnsubscribed_22(MqttMsgUnsubscribedEventHandler_t2087605283 * value)
	{
		___MqttMsgUnsubscribed_22 = value;
		Il2CppCodeGenWriteBarrier((&___MqttMsgUnsubscribed_22), value);
	}

	inline static int32_t get_offset_of_MqttMsgDisconnected_23() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___MqttMsgDisconnected_23)); }
	inline MqttMsgDisconnectEventHandler_t848571114 * get_MqttMsgDisconnected_23() const { return ___MqttMsgDisconnected_23; }
	inline MqttMsgDisconnectEventHandler_t848571114 ** get_address_of_MqttMsgDisconnected_23() { return &___MqttMsgDisconnected_23; }
	inline void set_MqttMsgDisconnected_23(MqttMsgDisconnectEventHandler_t848571114 * value)
	{
		___MqttMsgDisconnected_23 = value;
		Il2CppCodeGenWriteBarrier((&___MqttMsgDisconnected_23), value);
	}

	inline static int32_t get_offset_of_channel_24() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___channel_24)); }
	inline RuntimeObject* get_channel_24() const { return ___channel_24; }
	inline RuntimeObject** get_address_of_channel_24() { return &___channel_24; }
	inline void set_channel_24(RuntimeObject* value)
	{
		___channel_24 = value;
		Il2CppCodeGenWriteBarrier((&___channel_24), value);
	}

	inline static int32_t get_offset_of_inflightQueue_25() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___inflightQueue_25)); }
	inline Queue_t3637523393 * get_inflightQueue_25() const { return ___inflightQueue_25; }
	inline Queue_t3637523393 ** get_address_of_inflightQueue_25() { return &___inflightQueue_25; }
	inline void set_inflightQueue_25(Queue_t3637523393 * value)
	{
		___inflightQueue_25 = value;
		Il2CppCodeGenWriteBarrier((&___inflightQueue_25), value);
	}

	inline static int32_t get_offset_of_internalQueue_26() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___internalQueue_26)); }
	inline Queue_t3637523393 * get_internalQueue_26() const { return ___internalQueue_26; }
	inline Queue_t3637523393 ** get_address_of_internalQueue_26() { return &___internalQueue_26; }
	inline void set_internalQueue_26(Queue_t3637523393 * value)
	{
		___internalQueue_26 = value;
		Il2CppCodeGenWriteBarrier((&___internalQueue_26), value);
	}

	inline static int32_t get_offset_of_receiveQueue_27() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___receiveQueue_27)); }
	inline Queue_t3637523393 * get_receiveQueue_27() const { return ___receiveQueue_27; }
	inline Queue_t3637523393 ** get_address_of_receiveQueue_27() { return &___receiveQueue_27; }
	inline void set_receiveQueue_27(Queue_t3637523393 * value)
	{
		___receiveQueue_27 = value;
		Il2CppCodeGenWriteBarrier((&___receiveQueue_27), value);
	}

	inline static int32_t get_offset_of_settings_28() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___settings_28)); }
	inline MqttSettings_t1362412725 * get_settings_28() const { return ___settings_28; }
	inline MqttSettings_t1362412725 ** get_address_of_settings_28() { return &___settings_28; }
	inline void set_settings_28(MqttSettings_t1362412725 * value)
	{
		___settings_28 = value;
		Il2CppCodeGenWriteBarrier((&___settings_28), value);
	}

	inline static int32_t get_offset_of_messageIdCounter_29() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___messageIdCounter_29)); }
	inline uint16_t get_messageIdCounter_29() const { return ___messageIdCounter_29; }
	inline uint16_t* get_address_of_messageIdCounter_29() { return &___messageIdCounter_29; }
	inline void set_messageIdCounter_29(uint16_t value)
	{
		___messageIdCounter_29 = value;
	}

	inline static int32_t get_offset_of_U3CIsConnectedU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CIsConnectedU3Ek__BackingField_30)); }
	inline bool get_U3CIsConnectedU3Ek__BackingField_30() const { return ___U3CIsConnectedU3Ek__BackingField_30; }
	inline bool* get_address_of_U3CIsConnectedU3Ek__BackingField_30() { return &___U3CIsConnectedU3Ek__BackingField_30; }
	inline void set_U3CIsConnectedU3Ek__BackingField_30(bool value)
	{
		___U3CIsConnectedU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CClientIdU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CClientIdU3Ek__BackingField_31)); }
	inline String_t* get_U3CClientIdU3Ek__BackingField_31() const { return ___U3CClientIdU3Ek__BackingField_31; }
	inline String_t** get_address_of_U3CClientIdU3Ek__BackingField_31() { return &___U3CClientIdU3Ek__BackingField_31; }
	inline void set_U3CClientIdU3Ek__BackingField_31(String_t* value)
	{
		___U3CClientIdU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CClientIdU3Ek__BackingField_31), value);
	}

	inline static int32_t get_offset_of_U3CCleanSessionU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CCleanSessionU3Ek__BackingField_32)); }
	inline bool get_U3CCleanSessionU3Ek__BackingField_32() const { return ___U3CCleanSessionU3Ek__BackingField_32; }
	inline bool* get_address_of_U3CCleanSessionU3Ek__BackingField_32() { return &___U3CCleanSessionU3Ek__BackingField_32; }
	inline void set_U3CCleanSessionU3Ek__BackingField_32(bool value)
	{
		___U3CCleanSessionU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CWillFlagU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CWillFlagU3Ek__BackingField_33)); }
	inline bool get_U3CWillFlagU3Ek__BackingField_33() const { return ___U3CWillFlagU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CWillFlagU3Ek__BackingField_33() { return &___U3CWillFlagU3Ek__BackingField_33; }
	inline void set_U3CWillFlagU3Ek__BackingField_33(bool value)
	{
		___U3CWillFlagU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CWillQosLevelU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CWillQosLevelU3Ek__BackingField_34)); }
	inline uint8_t get_U3CWillQosLevelU3Ek__BackingField_34() const { return ___U3CWillQosLevelU3Ek__BackingField_34; }
	inline uint8_t* get_address_of_U3CWillQosLevelU3Ek__BackingField_34() { return &___U3CWillQosLevelU3Ek__BackingField_34; }
	inline void set_U3CWillQosLevelU3Ek__BackingField_34(uint8_t value)
	{
		___U3CWillQosLevelU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CWillTopicU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CWillTopicU3Ek__BackingField_35)); }
	inline String_t* get_U3CWillTopicU3Ek__BackingField_35() const { return ___U3CWillTopicU3Ek__BackingField_35; }
	inline String_t** get_address_of_U3CWillTopicU3Ek__BackingField_35() { return &___U3CWillTopicU3Ek__BackingField_35; }
	inline void set_U3CWillTopicU3Ek__BackingField_35(String_t* value)
	{
		___U3CWillTopicU3Ek__BackingField_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWillTopicU3Ek__BackingField_35), value);
	}

	inline static int32_t get_offset_of_U3CWillMessageU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(MqttClient_t1237157870, ___U3CWillMessageU3Ek__BackingField_36)); }
	inline String_t* get_U3CWillMessageU3Ek__BackingField_36() const { return ___U3CWillMessageU3Ek__BackingField_36; }
	inline String_t** get_address_of_U3CWillMessageU3Ek__BackingField_36() { return &___U3CWillMessageU3Ek__BackingField_36; }
	inline void set_U3CWillMessageU3Ek__BackingField_36(String_t* value)
	{
		___U3CWillMessageU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((&___U3CWillMessageU3Ek__BackingField_36), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTCLIENT_T1237157870_H
#ifndef PEERCONNECTIONIOS_T1321012807_H
#define PEERCONNECTIONIOS_T1321012807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PeerConnectioniOS
struct  PeerConnectioniOS_t1321012807  : public RuntimeObject
{
public:

public:
};

struct PeerConnectioniOS_t1321012807_StaticFields
{
public:
	// PeerConnectioniOS/SDPREADY_Delegate PeerConnectioniOS::onSdpReadyDelegate
	SDPREADY_Delegate_t94822726 * ___onSdpReadyDelegate_0;
	// PeerConnectioniOS/SDPREADY_Delegate PeerConnectioniOS::<>f__mg$cache0
	SDPREADY_Delegate_t94822726 * ___U3CU3Ef__mgU24cache0_1;

public:
	inline static int32_t get_offset_of_onSdpReadyDelegate_0() { return static_cast<int32_t>(offsetof(PeerConnectioniOS_t1321012807_StaticFields, ___onSdpReadyDelegate_0)); }
	inline SDPREADY_Delegate_t94822726 * get_onSdpReadyDelegate_0() const { return ___onSdpReadyDelegate_0; }
	inline SDPREADY_Delegate_t94822726 ** get_address_of_onSdpReadyDelegate_0() { return &___onSdpReadyDelegate_0; }
	inline void set_onSdpReadyDelegate_0(SDPREADY_Delegate_t94822726 * value)
	{
		___onSdpReadyDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSdpReadyDelegate_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_1() { return static_cast<int32_t>(offsetof(PeerConnectioniOS_t1321012807_StaticFields, ___U3CU3Ef__mgU24cache0_1)); }
	inline SDPREADY_Delegate_t94822726 * get_U3CU3Ef__mgU24cache0_1() const { return ___U3CU3Ef__mgU24cache0_1; }
	inline SDPREADY_Delegate_t94822726 ** get_address_of_U3CU3Ef__mgU24cache0_1() { return &___U3CU3Ef__mgU24cache0_1; }
	inline void set_U3CU3Ef__mgU24cache0_1(SDPREADY_Delegate_t94822726 * value)
	{
		___U3CU3Ef__mgU24cache0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERCONNECTIONIOS_T1321012807_H
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
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef PEERCONNECTIONM_T1544440329_H
#define PEERCONNECTIONM_T1544440329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM
struct  PeerConnectionM_t1544440329  : public RuntimeObject
{
public:
	// SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate SimplePeerConnectionM.PeerConnectionM::localDataChannelReadyDelegate
	LocalDataChannelReadyInternalDelegate_t4253056107 * ___localDataChannelReadyDelegate_1;
	// SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate SimplePeerConnectionM.PeerConnectionM::OnLocalDataChannelReady
	LocalDataChannelReadyDelegate_t1540256137 * ___OnLocalDataChannelReady_2;
	// SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate SimplePeerConnectionM.PeerConnectionM::dataFromDataChannelReadyDelegate
	DataFromDataChannelReadyInternalDelegate_t513489297 * ___dataFromDataChannelReadyDelegate_3;
	// SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate SimplePeerConnectionM.PeerConnectionM::OnDataFromDataChannelReady
	DataFromDataChannelReadyDelegate_t2867388022 * ___OnDataFromDataChannelReady_4;
	// SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate SimplePeerConnectionM.PeerConnectionM::failureMessageDelegate
	FailureMessageInternalDelegate_t3617644009 * ___failureMessageDelegate_5;
	// SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate SimplePeerConnectionM.PeerConnectionM::OnFailureMessage
	FailureMessageDelegate_t3750826190 * ___OnFailureMessage_6;
	// SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate SimplePeerConnectionM.PeerConnectionM::audioBusReadyDelegate
	AudioBusReadyInternalDelegate_t2220975906 * ___audioBusReadyDelegate_7;
	// SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate SimplePeerConnectionM.PeerConnectionM::OnAudioBusReady
	AudioBusReadyDelegate_t1824694707 * ___OnAudioBusReady_8;
	// SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate SimplePeerConnectionM.PeerConnectionM::FramgeGate_RecievedDelegate
	RecievedRGBFrameInternalDelegate_t1745086045 * ___FramgeGate_RecievedDelegate_9;
	// SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate SimplePeerConnectionM.PeerConnectionM::FramgeGate_onRecieved
	RecievedRGBFrameDelegate_t726515755 * ___FramgeGate_onRecieved_10;
	// SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate SimplePeerConnectionM.PeerConnectionM::localSdpReadytoSendDelegate
	LocalSdpReadytoSendInternalDelegate_t4044312851 * ___localSdpReadytoSendDelegate_11;
	// SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate SimplePeerConnectionM.PeerConnectionM::OnLocalSdpReadytoSend
	LocalSdpReadytoSendDelegate_t527669091 * ___OnLocalSdpReadytoSend_12;
	// SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate SimplePeerConnectionM.PeerConnectionM::iceCandiateReadytoSendDelegate
	IceCandiateReadytoSendInternalDelegate_t754111350 * ___iceCandiateReadytoSendDelegate_13;
	// SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate SimplePeerConnectionM.PeerConnectionM::OnIceCandiateReadytoSend
	IceCandiateReadytoSendDelegate_t3971808015 * ___OnIceCandiateReadytoSend_14;
	// System.Int32 SimplePeerConnectionM.PeerConnectionM::mPeerConnectionId
	int32_t ___mPeerConnectionId_15;

public:
	inline static int32_t get_offset_of_localDataChannelReadyDelegate_1() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___localDataChannelReadyDelegate_1)); }
	inline LocalDataChannelReadyInternalDelegate_t4253056107 * get_localDataChannelReadyDelegate_1() const { return ___localDataChannelReadyDelegate_1; }
	inline LocalDataChannelReadyInternalDelegate_t4253056107 ** get_address_of_localDataChannelReadyDelegate_1() { return &___localDataChannelReadyDelegate_1; }
	inline void set_localDataChannelReadyDelegate_1(LocalDataChannelReadyInternalDelegate_t4253056107 * value)
	{
		___localDataChannelReadyDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___localDataChannelReadyDelegate_1), value);
	}

	inline static int32_t get_offset_of_OnLocalDataChannelReady_2() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___OnLocalDataChannelReady_2)); }
	inline LocalDataChannelReadyDelegate_t1540256137 * get_OnLocalDataChannelReady_2() const { return ___OnLocalDataChannelReady_2; }
	inline LocalDataChannelReadyDelegate_t1540256137 ** get_address_of_OnLocalDataChannelReady_2() { return &___OnLocalDataChannelReady_2; }
	inline void set_OnLocalDataChannelReady_2(LocalDataChannelReadyDelegate_t1540256137 * value)
	{
		___OnLocalDataChannelReady_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnLocalDataChannelReady_2), value);
	}

	inline static int32_t get_offset_of_dataFromDataChannelReadyDelegate_3() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___dataFromDataChannelReadyDelegate_3)); }
	inline DataFromDataChannelReadyInternalDelegate_t513489297 * get_dataFromDataChannelReadyDelegate_3() const { return ___dataFromDataChannelReadyDelegate_3; }
	inline DataFromDataChannelReadyInternalDelegate_t513489297 ** get_address_of_dataFromDataChannelReadyDelegate_3() { return &___dataFromDataChannelReadyDelegate_3; }
	inline void set_dataFromDataChannelReadyDelegate_3(DataFromDataChannelReadyInternalDelegate_t513489297 * value)
	{
		___dataFromDataChannelReadyDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataFromDataChannelReadyDelegate_3), value);
	}

	inline static int32_t get_offset_of_OnDataFromDataChannelReady_4() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___OnDataFromDataChannelReady_4)); }
	inline DataFromDataChannelReadyDelegate_t2867388022 * get_OnDataFromDataChannelReady_4() const { return ___OnDataFromDataChannelReady_4; }
	inline DataFromDataChannelReadyDelegate_t2867388022 ** get_address_of_OnDataFromDataChannelReady_4() { return &___OnDataFromDataChannelReady_4; }
	inline void set_OnDataFromDataChannelReady_4(DataFromDataChannelReadyDelegate_t2867388022 * value)
	{
		___OnDataFromDataChannelReady_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnDataFromDataChannelReady_4), value);
	}

	inline static int32_t get_offset_of_failureMessageDelegate_5() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___failureMessageDelegate_5)); }
	inline FailureMessageInternalDelegate_t3617644009 * get_failureMessageDelegate_5() const { return ___failureMessageDelegate_5; }
	inline FailureMessageInternalDelegate_t3617644009 ** get_address_of_failureMessageDelegate_5() { return &___failureMessageDelegate_5; }
	inline void set_failureMessageDelegate_5(FailureMessageInternalDelegate_t3617644009 * value)
	{
		___failureMessageDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&___failureMessageDelegate_5), value);
	}

	inline static int32_t get_offset_of_OnFailureMessage_6() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___OnFailureMessage_6)); }
	inline FailureMessageDelegate_t3750826190 * get_OnFailureMessage_6() const { return ___OnFailureMessage_6; }
	inline FailureMessageDelegate_t3750826190 ** get_address_of_OnFailureMessage_6() { return &___OnFailureMessage_6; }
	inline void set_OnFailureMessage_6(FailureMessageDelegate_t3750826190 * value)
	{
		___OnFailureMessage_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnFailureMessage_6), value);
	}

	inline static int32_t get_offset_of_audioBusReadyDelegate_7() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___audioBusReadyDelegate_7)); }
	inline AudioBusReadyInternalDelegate_t2220975906 * get_audioBusReadyDelegate_7() const { return ___audioBusReadyDelegate_7; }
	inline AudioBusReadyInternalDelegate_t2220975906 ** get_address_of_audioBusReadyDelegate_7() { return &___audioBusReadyDelegate_7; }
	inline void set_audioBusReadyDelegate_7(AudioBusReadyInternalDelegate_t2220975906 * value)
	{
		___audioBusReadyDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&___audioBusReadyDelegate_7), value);
	}

	inline static int32_t get_offset_of_OnAudioBusReady_8() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___OnAudioBusReady_8)); }
	inline AudioBusReadyDelegate_t1824694707 * get_OnAudioBusReady_8() const { return ___OnAudioBusReady_8; }
	inline AudioBusReadyDelegate_t1824694707 ** get_address_of_OnAudioBusReady_8() { return &___OnAudioBusReady_8; }
	inline void set_OnAudioBusReady_8(AudioBusReadyDelegate_t1824694707 * value)
	{
		___OnAudioBusReady_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnAudioBusReady_8), value);
	}

	inline static int32_t get_offset_of_FramgeGate_RecievedDelegate_9() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___FramgeGate_RecievedDelegate_9)); }
	inline RecievedRGBFrameInternalDelegate_t1745086045 * get_FramgeGate_RecievedDelegate_9() const { return ___FramgeGate_RecievedDelegate_9; }
	inline RecievedRGBFrameInternalDelegate_t1745086045 ** get_address_of_FramgeGate_RecievedDelegate_9() { return &___FramgeGate_RecievedDelegate_9; }
	inline void set_FramgeGate_RecievedDelegate_9(RecievedRGBFrameInternalDelegate_t1745086045 * value)
	{
		___FramgeGate_RecievedDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___FramgeGate_RecievedDelegate_9), value);
	}

	inline static int32_t get_offset_of_FramgeGate_onRecieved_10() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___FramgeGate_onRecieved_10)); }
	inline RecievedRGBFrameDelegate_t726515755 * get_FramgeGate_onRecieved_10() const { return ___FramgeGate_onRecieved_10; }
	inline RecievedRGBFrameDelegate_t726515755 ** get_address_of_FramgeGate_onRecieved_10() { return &___FramgeGate_onRecieved_10; }
	inline void set_FramgeGate_onRecieved_10(RecievedRGBFrameDelegate_t726515755 * value)
	{
		___FramgeGate_onRecieved_10 = value;
		Il2CppCodeGenWriteBarrier((&___FramgeGate_onRecieved_10), value);
	}

	inline static int32_t get_offset_of_localSdpReadytoSendDelegate_11() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___localSdpReadytoSendDelegate_11)); }
	inline LocalSdpReadytoSendInternalDelegate_t4044312851 * get_localSdpReadytoSendDelegate_11() const { return ___localSdpReadytoSendDelegate_11; }
	inline LocalSdpReadytoSendInternalDelegate_t4044312851 ** get_address_of_localSdpReadytoSendDelegate_11() { return &___localSdpReadytoSendDelegate_11; }
	inline void set_localSdpReadytoSendDelegate_11(LocalSdpReadytoSendInternalDelegate_t4044312851 * value)
	{
		___localSdpReadytoSendDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((&___localSdpReadytoSendDelegate_11), value);
	}

	inline static int32_t get_offset_of_OnLocalSdpReadytoSend_12() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___OnLocalSdpReadytoSend_12)); }
	inline LocalSdpReadytoSendDelegate_t527669091 * get_OnLocalSdpReadytoSend_12() const { return ___OnLocalSdpReadytoSend_12; }
	inline LocalSdpReadytoSendDelegate_t527669091 ** get_address_of_OnLocalSdpReadytoSend_12() { return &___OnLocalSdpReadytoSend_12; }
	inline void set_OnLocalSdpReadytoSend_12(LocalSdpReadytoSendDelegate_t527669091 * value)
	{
		___OnLocalSdpReadytoSend_12 = value;
		Il2CppCodeGenWriteBarrier((&___OnLocalSdpReadytoSend_12), value);
	}

	inline static int32_t get_offset_of_iceCandiateReadytoSendDelegate_13() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___iceCandiateReadytoSendDelegate_13)); }
	inline IceCandiateReadytoSendInternalDelegate_t754111350 * get_iceCandiateReadytoSendDelegate_13() const { return ___iceCandiateReadytoSendDelegate_13; }
	inline IceCandiateReadytoSendInternalDelegate_t754111350 ** get_address_of_iceCandiateReadytoSendDelegate_13() { return &___iceCandiateReadytoSendDelegate_13; }
	inline void set_iceCandiateReadytoSendDelegate_13(IceCandiateReadytoSendInternalDelegate_t754111350 * value)
	{
		___iceCandiateReadytoSendDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((&___iceCandiateReadytoSendDelegate_13), value);
	}

	inline static int32_t get_offset_of_OnIceCandiateReadytoSend_14() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___OnIceCandiateReadytoSend_14)); }
	inline IceCandiateReadytoSendDelegate_t3971808015 * get_OnIceCandiateReadytoSend_14() const { return ___OnIceCandiateReadytoSend_14; }
	inline IceCandiateReadytoSendDelegate_t3971808015 ** get_address_of_OnIceCandiateReadytoSend_14() { return &___OnIceCandiateReadytoSend_14; }
	inline void set_OnIceCandiateReadytoSend_14(IceCandiateReadytoSendDelegate_t3971808015 * value)
	{
		___OnIceCandiateReadytoSend_14 = value;
		Il2CppCodeGenWriteBarrier((&___OnIceCandiateReadytoSend_14), value);
	}

	inline static int32_t get_offset_of_mPeerConnectionId_15() { return static_cast<int32_t>(offsetof(PeerConnectionM_t1544440329, ___mPeerConnectionId_15)); }
	inline int32_t get_mPeerConnectionId_15() const { return ___mPeerConnectionId_15; }
	inline int32_t* get_address_of_mPeerConnectionId_15() { return &___mPeerConnectionId_15; }
	inline void set_mPeerConnectionId_15(int32_t value)
	{
		___mPeerConnectionId_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERCONNECTIONM_T1544440329_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef X509CERTIFICATE_T713131622_H
#define X509CERTIFICATE_T713131622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t713131622  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t489243024 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t4116647657* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___x509_0)); }
	inline X509Certificate_t489243024 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t489243024 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t489243024 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t4116647657* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t4116647657* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T713131622_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef COLOR32_T2600501292_H
#define COLOR32_T2600501292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t2600501292 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t2600501292, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T2600501292_H
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
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
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
#ifndef WEBRTCCOREIOS_T2902875004_H
#define WEBRTCCOREIOS_T2902875004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRtcCoreiOS
struct  WebRtcCoreiOS_t2902875004  : public WebRtcCore_t934528111
{
public:
	// PeerConnectioniOS WebRtcCoreiOS::peer
	PeerConnectioniOS_t1321012807 * ___peer_3;

public:
	inline static int32_t get_offset_of_peer_3() { return static_cast<int32_t>(offsetof(WebRtcCoreiOS_t2902875004, ___peer_3)); }
	inline PeerConnectioniOS_t1321012807 * get_peer_3() const { return ___peer_3; }
	inline PeerConnectioniOS_t1321012807 ** get_address_of_peer_3() { return &___peer_3; }
	inline void set_peer_3(PeerConnectioniOS_t1321012807 * value)
	{
		___peer_3 = value;
		Il2CppCodeGenWriteBarrier((&___peer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRTCCOREIOS_T2902875004_H
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
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
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
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef MQTTMSGPUBLISHEVENTARGS_T2350602093_H
#define MQTTMSGPUBLISHEVENTARGS_T2350602093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs
struct  MqttMsgPublishEventArgs_t2350602093  : public EventArgs_t3591816995
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::topic
	String_t* ___topic_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::message
	ByteU5BU5D_t4116647657* ___message_2;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::dupFlag
	bool ___dupFlag_3;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::qosLevel
	uint8_t ___qosLevel_4;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::retain
	bool ___retain_5;

public:
	inline static int32_t get_offset_of_topic_1() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t2350602093, ___topic_1)); }
	inline String_t* get_topic_1() const { return ___topic_1; }
	inline String_t** get_address_of_topic_1() { return &___topic_1; }
	inline void set_topic_1(String_t* value)
	{
		___topic_1 = value;
		Il2CppCodeGenWriteBarrier((&___topic_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t2350602093, ___message_2)); }
	inline ByteU5BU5D_t4116647657* get_message_2() const { return ___message_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(ByteU5BU5D_t4116647657* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_dupFlag_3() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t2350602093, ___dupFlag_3)); }
	inline bool get_dupFlag_3() const { return ___dupFlag_3; }
	inline bool* get_address_of_dupFlag_3() { return &___dupFlag_3; }
	inline void set_dupFlag_3(bool value)
	{
		___dupFlag_3 = value;
	}

	inline static int32_t get_offset_of_qosLevel_4() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t2350602093, ___qosLevel_4)); }
	inline uint8_t get_qosLevel_4() const { return ___qosLevel_4; }
	inline uint8_t* get_address_of_qosLevel_4() { return &___qosLevel_4; }
	inline void set_qosLevel_4(uint8_t value)
	{
		___qosLevel_4 = value;
	}

	inline static int32_t get_offset_of_retain_5() { return static_cast<int32_t>(offsetof(MqttMsgPublishEventArgs_t2350602093, ___retain_5)); }
	inline bool get_retain_5() const { return ___retain_5; }
	inline bool* get_address_of_retain_5() { return &___retain_5; }
	inline void set_retain_5(bool value)
	{
		___retain_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBLISHEVENTARGS_T2350602093_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
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
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
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
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
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
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
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
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T3432586689_H
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
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
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
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
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
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
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
#ifndef MQTTMSGPUBLISHEVENTHANDLER_T1923217352_H
#define MQTTMSGPUBLISHEVENTHANDLER_T1923217352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler
struct  MqttMsgPublishEventHandler_t1923217352  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBLISHEVENTHANDLER_T1923217352_H
#ifndef DATAFROMDATACHANNELREADYINTERNALDELEGATE_T513489297_H
#define DATAFROMDATACHANNELREADYINTERNALDELEGATE_T513489297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate
struct  DataFromDataChannelReadyInternalDelegate_t513489297  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAFROMDATACHANNELREADYINTERNALDELEGATE_T513489297_H
#ifndef LOCALDATACHANNELREADYINTERNALDELEGATE_T4253056107_H
#define LOCALDATACHANNELREADYINTERNALDELEGATE_T4253056107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate
struct  LocalDataChannelReadyInternalDelegate_t4253056107  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATACHANNELREADYINTERNALDELEGATE_T4253056107_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef SDPREADY_DELEGATE_T94822726_H
#define SDPREADY_DELEGATE_T94822726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PeerConnectioniOS/SDPREADY_Delegate
struct  SDPREADY_Delegate_t94822726  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SDPREADY_DELEGATE_T94822726_H
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
#ifndef RENDERTEXTURE_T2108887433_H
#define RENDERTEXTURE_T2108887433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderTexture
struct  RenderTexture_t2108887433  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERTEXTURE_T2108887433_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef LOCALDATACHANNELREADYDELEGATE_T1540256137_H
#define LOCALDATACHANNELREADYDELEGATE_T1540256137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate
struct  LocalDataChannelReadyDelegate_t1540256137  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATACHANNELREADYDELEGATE_T1540256137_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef DATAFROMDATACHANNELREADYDELEGATE_T2867388022_H
#define DATAFROMDATACHANNELREADYDELEGATE_T2867388022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate
struct  DataFromDataChannelReadyDelegate_t2867388022  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAFROMDATACHANNELREADYDELEGATE_T2867388022_H
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
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PLANEUPDATER_T1284977546_H
#define PLANEUPDATER_T1284977546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaneUpdater
struct  PlaneUpdater_t1284977546  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANEUPDATER_T1284977546_H
#ifndef WEBRTCCONTROLLER_T2826223470_H
#define WEBRTCCONTROLLER_T2826223470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRtcController
struct  WebRtcController_t2826223470  : public MonoBehaviour_t3962482529
{
public:
	// WebRtcCore WebRtcController::webRtcCore
	WebRtcCore_t934528111 * ___webRtcCore_2;
	// UnityEngine.GameObject WebRtcController::webRtcMsgExchanger
	GameObject_t1113636619 * ___webRtcMsgExchanger_3;
	// UnityEngine.GameObject[] WebRtcController::RenderingTargets
	GameObjectU5BU5D_t3328599146* ___RenderingTargets_4;
	// UnityEngine.RenderTexture WebRtcController::SubCameraTexture
	RenderTexture_t2108887433 * ___SubCameraTexture_5;

public:
	inline static int32_t get_offset_of_webRtcCore_2() { return static_cast<int32_t>(offsetof(WebRtcController_t2826223470, ___webRtcCore_2)); }
	inline WebRtcCore_t934528111 * get_webRtcCore_2() const { return ___webRtcCore_2; }
	inline WebRtcCore_t934528111 ** get_address_of_webRtcCore_2() { return &___webRtcCore_2; }
	inline void set_webRtcCore_2(WebRtcCore_t934528111 * value)
	{
		___webRtcCore_2 = value;
		Il2CppCodeGenWriteBarrier((&___webRtcCore_2), value);
	}

	inline static int32_t get_offset_of_webRtcMsgExchanger_3() { return static_cast<int32_t>(offsetof(WebRtcController_t2826223470, ___webRtcMsgExchanger_3)); }
	inline GameObject_t1113636619 * get_webRtcMsgExchanger_3() const { return ___webRtcMsgExchanger_3; }
	inline GameObject_t1113636619 ** get_address_of_webRtcMsgExchanger_3() { return &___webRtcMsgExchanger_3; }
	inline void set_webRtcMsgExchanger_3(GameObject_t1113636619 * value)
	{
		___webRtcMsgExchanger_3 = value;
		Il2CppCodeGenWriteBarrier((&___webRtcMsgExchanger_3), value);
	}

	inline static int32_t get_offset_of_RenderingTargets_4() { return static_cast<int32_t>(offsetof(WebRtcController_t2826223470, ___RenderingTargets_4)); }
	inline GameObjectU5BU5D_t3328599146* get_RenderingTargets_4() const { return ___RenderingTargets_4; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_RenderingTargets_4() { return &___RenderingTargets_4; }
	inline void set_RenderingTargets_4(GameObjectU5BU5D_t3328599146* value)
	{
		___RenderingTargets_4 = value;
		Il2CppCodeGenWriteBarrier((&___RenderingTargets_4), value);
	}

	inline static int32_t get_offset_of_SubCameraTexture_5() { return static_cast<int32_t>(offsetof(WebRtcController_t2826223470, ___SubCameraTexture_5)); }
	inline RenderTexture_t2108887433 * get_SubCameraTexture_5() const { return ___SubCameraTexture_5; }
	inline RenderTexture_t2108887433 ** get_address_of_SubCameraTexture_5() { return &___SubCameraTexture_5; }
	inline void set_SubCameraTexture_5(RenderTexture_t2108887433 * value)
	{
		___SubCameraTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___SubCameraTexture_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRTCCONTROLLER_T2826223470_H
#ifndef WEBRTCMSGEXCHANGER_T3272896331_H
#define WEBRTCMSGEXCHANGER_T3272896331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WebRtcMsgExchanger
struct  WebRtcMsgExchanger_t3272896331  : public MonoBehaviour_t3962482529
{
public:
	// WebRtcCore WebRtcMsgExchanger::RtcCore
	WebRtcCore_t934528111 * ___RtcCore_2;

public:
	inline static int32_t get_offset_of_RtcCore_2() { return static_cast<int32_t>(offsetof(WebRtcMsgExchanger_t3272896331, ___RtcCore_2)); }
	inline WebRtcCore_t934528111 * get_RtcCore_2() const { return ___RtcCore_2; }
	inline WebRtcCore_t934528111 ** get_address_of_RtcCore_2() { return &___RtcCore_2; }
	inline void set_RtcCore_2(WebRtcCore_t934528111 * value)
	{
		___RtcCore_2 = value;
		Il2CppCodeGenWriteBarrier((&___RtcCore_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBRTCMSGEXCHANGER_T3272896331_H
#ifndef MQTTCONTROLLER_T3766054392_H
#define MQTTCONTROLLER_T3766054392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MqttController
struct  MqttController_t3766054392  : public WebRtcMsgExchanger_t3272896331
{
public:
	// uPLibrary.Networking.M2Mqtt.MqttClient MqttController::mqttClient
	MqttClient_t1237157870 * ___mqttClient_3;

public:
	inline static int32_t get_offset_of_mqttClient_3() { return static_cast<int32_t>(offsetof(MqttController_t3766054392, ___mqttClient_3)); }
	inline MqttClient_t1237157870 * get_mqttClient_3() const { return ___mqttClient_3; }
	inline MqttClient_t1237157870 ** get_address_of_mqttClient_3() { return &___mqttClient_3; }
	inline void set_mqttClient_3(MqttClient_t1237157870 * value)
	{
		___mqttClient_3 = value;
		Il2CppCodeGenWriteBarrier((&___mqttClient_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTCONTROLLER_T3766054392_H
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t3850468773  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t2600501292  m_Items[1];

public:
	inline Color32_t2600501292  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t2600501292  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t2600501292 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t2600501292  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void WebRtcMsgExchanger::.ctor()
extern "C"  void WebRtcMsgExchanger__ctor_m688705840 (WebRtcMsgExchanger_t3272896331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient__ctor_m2956131190 (MqttClient_t1237157870 * __this, String_t* p0, int32_t p1, bool p2, X509Certificate_t713131622 * p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgPublishEventHandler__ctor_m3294399465 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler)
extern "C"  void MqttClient_add_MqttMsgPublishReceived_m3145106695 (MqttClient_t1237157870 * __this, MqttMsgPublishEventHandler_t1923217352 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String)
extern "C"  uint8_t MqttClient_Connect_m1200615702 (MqttClient_t1237157870 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Subscribe(System.String[],System.Byte[])
extern "C"  uint16_t MqttClient_Subscribe_m914342903 (MqttClient_t1237157870 * __this, StringU5BU5D_t1281789340* p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Topic()
extern "C"  String_t* MqttMsgPublishEventArgs_get_Topic_m763780921 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String uPLibrary.Networking.M2Mqtt.MqttClient::get_ClientId()
extern "C"  String_t* MqttClient_get_ClientId_m1266538281 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Message()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPublishEventArgs_get_Message_m3404860665 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcMsgExchanger::WebRtcCtr_RecievedMessage(System.String,System.String)
extern "C"  void WebRtcMsgExchanger_WebRtcCtr_RecievedMessage_m724448117 (WebRtcMsgExchanger_t3272896331 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Publish(System.String,System.Byte[],System.Byte,System.Boolean)
extern "C"  uint16_t MqttClient_Publish_m2947629173 (MqttClient_t1237157870 * __this, String_t* p0, ByteU5BU5D_t4116647657* p1, uint8_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Disconnect()
extern "C"  void MqttClient_Disconnect_m1914667810 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::get_IsConnected()
extern "C"  bool MqttClient_get_IsConnected_m3984152883 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MqttController::SendMessage(System.String,System.String)
extern "C"  void MqttController_SendMessage_m863138276 (MqttController_t3766054392 * __this, String_t* ___topic0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m3983937259(__this, method) ((  StringU5BU5D_t1281789340* (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m2276455407(__this, method) ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Int32 SimplePeerConnectionM.PeerConnectionM::CreatePeerConnection(System.String[],System.Int32,System.String,System.String)
extern "C"  int32_t PeerConnectionM_CreatePeerConnection_m666123147 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* ___turnUrls0, int32_t ___noOfUrls1, String_t* ___username2, String_t* ___credential3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::RegisterCallbacks()
extern "C"  void PeerConnectionM_RegisterCallbacks_m670014253 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimplePeerConnectionM.PeerConnectionM::TestFunction(System.Int32)
extern "C"  int32_t PeerConnectionM_TestFunction_m927248389 (RuntimeObject * __this /* static, unused */, int32_t ___num0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::FramgeGate_Input(System.Int32,System.IntPtr,System.Int32,System.Int32)
extern "C"  void PeerConnectionM_FramgeGate_Input_m260001873 (RuntimeObject * __this /* static, unused */, int32_t ___peer_connection_id0, intptr_t ___image1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::ClosePeerConnection(System.Int32)
extern "C"  bool PeerConnectionM_ClosePeerConnection_m3222523420 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::AddStream(System.Int32,System.Boolean)
extern "C"  bool PeerConnectionM_AddStream_m3811800792 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, bool ___audioOnly1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::AddDataChannel(System.Int32)
extern "C"  bool PeerConnectionM_AddDataChannel_m117135342 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::CreateOffer(System.Int32)
extern "C"  bool PeerConnectionM_CreateOffer_m1370463794 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::CreateAnswer(System.Int32)
extern "C"  bool PeerConnectionM_CreateAnswer_m2671050304 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::SendDataViaDataChannel(System.Int32,System.String)
extern "C"  bool PeerConnectionM_SendDataViaDataChannel_m517714798 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, String_t* ___data1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::SetAudioControl(System.Int32,System.Boolean,System.Boolean)
extern "C"  bool PeerConnectionM_SetAudioControl_m3932261462 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, bool ___isMute1, bool ___isRecord2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::SetRemoteDescription(System.Int32,System.String,System.String)
extern "C"  bool PeerConnectionM_SetRemoteDescription_m2669134367 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, String_t* ___type1, String_t* ___sdp2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::AddIceCandidate(System.Int32,System.String,System.Int32,System.String)
extern "C"  bool PeerConnectionM_AddIceCandidate_m3218835148 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, String_t* ___sdp1, int32_t ___sdpMlineindex2, String_t* ___sdpMid3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalDataChannelReadyInternalDelegate__ctor_m1939356344 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnLocalDataChannelReady(System.Int32,SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnLocalDataChannelReady_m1514363717 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, LocalDataChannelReadyInternalDelegate_t4253056107 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DataFromDataChannelReadyInternalDelegate__ctor_m604148853 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnDataFromDataChannelReady(System.Int32,SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnDataFromDataChannelReady_m1650801983 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, DataFromDataChannelReadyInternalDelegate_t513489297 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FailureMessageInternalDelegate__ctor_m3505053702 (FailureMessageInternalDelegate_t3617644009 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnFailure(System.Int32,SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnFailure_m3654743574 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, FailureMessageInternalDelegate_t3617644009 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioBusReadyInternalDelegate__ctor_m2901242911 (AudioBusReadyInternalDelegate_t2220975906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnAudioBusReady(System.Int32,SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnAudioBusReady_m4079422364 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, AudioBusReadyInternalDelegate_t2220975906 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RecievedRGBFrameInternalDelegate__ctor_m44051601 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::FrameGate_RegisterOnRecieved(System.Int32,SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate)
extern "C"  bool PeerConnectionM_FrameGate_RegisterOnRecieved_m2028839294 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, RecievedRGBFrameInternalDelegate_t1745086045 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalSdpReadytoSendInternalDelegate__ctor_m3323919969 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnLocalSdpReadytoSend(System.Int32,SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnLocalSdpReadytoSend_m2397861960 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, LocalSdpReadytoSendInternalDelegate_t4044312851 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IceCandiateReadytoSendInternalDelegate__ctor_m2193365268 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnIceCandiateReadytoSend(System.Int32,SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnIceCandiateReadytoSend_m1352393878 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, IceCandiateReadytoSendInternalDelegate_t754111350 * ___callback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate::Invoke(System.Int32)
extern "C"  void LocalDataChannelReadyDelegate_Invoke_m1407566565 (LocalDataChannelReadyDelegate_t1540256137 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate::Invoke(System.Int32,System.String)
extern "C"  void DataFromDataChannelReadyDelegate_Invoke_m167498838 (DataFromDataChannelReadyDelegate_t2867388022 * __this, int32_t ___id0, String_t* ___s1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate::Invoke(System.Int32,System.String)
extern "C"  void FailureMessageDelegate_Invoke_m2465925799 (FailureMessageDelegate_t3750826190 * __this, int32_t ___id0, String_t* ___msg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate::Invoke(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void AudioBusReadyDelegate_Invoke_m3854471619 (AudioBusReadyDelegate_t1824694707 * __this, int32_t ___id0, intptr_t ___data1, int32_t ___bitsPerSample2, int32_t ___sampleRate3, int32_t ___numberOfChannels4, int32_t ___numberOfFrames5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate::Invoke(System.Int32,System.IntPtr,System.UInt32,System.UInt32)
extern "C"  void RecievedRGBFrameDelegate_Invoke_m3318570457 (RecievedRGBFrameDelegate_t726515755 * __this, int32_t ___id0, intptr_t ___rgb1, uint32_t ___width2, uint32_t ___height3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate::Invoke(System.Int32,System.String,System.String)
extern "C"  void LocalSdpReadytoSendDelegate_Invoke_m3704001102 (LocalSdpReadytoSendDelegate_t527669091 * __this, int32_t ___id0, String_t* ___type1, String_t* ___sdp2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate::Invoke(System.Int32,System.String,System.Int32,System.String)
extern "C"  void IceCandiateReadytoSendDelegate_Invoke_m1101032379 (IceCandiateReadytoSendDelegate_t3971808015 * __this, int32_t ___id0, String_t* ___candidate1, int32_t ___sdpMlineIndex2, String_t* ___sdpMid3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate::Invoke(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void AudioBusReadyInternalDelegate_Invoke_m3031619375 (AudioBusReadyInternalDelegate_t2220975906 * __this, intptr_t ___data0, int32_t ___bitsPerSample1, int32_t ___sampleRate2, int32_t ___numberOfChannels3, int32_t ___numberOfFrames4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate::Invoke(System.String)
extern "C"  void DataFromDataChannelReadyInternalDelegate_Invoke_m153636077 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate::Invoke(System.String)
extern "C"  void FailureMessageInternalDelegate_Invoke_m656394069 (FailureMessageInternalDelegate_t3617644009 * __this, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate::Invoke(System.String,System.Int32,System.String)
extern "C"  void IceCandiateReadytoSendInternalDelegate_Invoke_m3800185323 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate::Invoke()
extern "C"  void LocalDataChannelReadyInternalDelegate_Invoke_m4080767948 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate::Invoke(System.String,System.String)
extern "C"  void LocalSdpReadytoSendInternalDelegate_Invoke_m93520032 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate::Invoke(System.IntPtr,System.UInt32,System.UInt32)
extern "C"  void RecievedRGBFrameInternalDelegate_Invoke_m41080840 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, intptr_t ___rgb0, uint32_t ___width1, uint32_t ___height2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcCoreiOS::.ctor()
extern "C"  void WebRtcCoreiOS__ctor_m793953905 (WebRtcCoreiOS_t2902875004 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<WebRtcMsgExchanger>()
#define GameObject_GetComponent_TisWebRtcMsgExchanger_t3272896331_m3981858059(__this, method) ((  WebRtcMsgExchanger_t3272896331 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void WebRtcCore::set_MsgExchanger(WebRtcMsgExchanger)
extern "C"  void WebRtcCore_set_MsgExchanger_m3215172827 (WebRtcCore_t934528111 * __this, WebRtcMsgExchanger_t3272896331 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C"  void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
extern "C"  RenderTexture_t2108887433 * RenderTexture_get_active_m2427925032 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1437732586 (RuntimeObject * __this /* static, unused */, RenderTexture_t2108887433 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
extern "C"  void Texture2D_ReadPixels_m3395504488 (Texture2D_t3840446185 * __this, Rect_t2360479859  p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcCore::.ctor()
extern "C"  void WebRtcCore__ctor_m2212621533 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcCoreiOS::CoMuLogger_Log(System.String)
extern "C"  void WebRtcCoreiOS_CoMuLogger_Log_m2362021428 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::.ctor()
extern "C"  void PeerConnectioniOS__ctor_m695293517 (PeerConnectioniOS_t1321012807 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS/SDPREADY_Delegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SDPREADY_Delegate__ctor_m3757528741 (SDPREADY_Delegate_t94822726 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::add_OnLocalSdpReady(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_add_OnLocalSdpReady_m2462805725 (PeerConnectioniOS_t1321012807 * __this, SDPREADY_Delegate_t94822726 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::CallTest()
extern "C"  void PeerConnectioniOS_CallTest_m3021989603 (PeerConnectioniOS_t1321012807 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void SimplePeerConnectionM.PeerConnectionM::.ctor(System.Collections.Generic.List`1<System.String>,System.String,System.String)
extern "C"  void PeerConnectionM__ctor_m2038595787 (PeerConnectionM_t1544440329 * __this, List_1_t3319525431 * ___turnUrls0, String_t* ___username1, String_t* ___credential2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimplePeerConnectionM.PeerConnectionM::GetUniqueId()
extern "C"  int32_t PeerConnectionM_GetUniqueId_m834968440 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalSdpReadytoSendDelegate__ctor_m144972830 (LocalSdpReadytoSendDelegate_t527669091 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnLocalSdpReadytoSend(SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate)
extern "C"  void PeerConnectionM_add_OnLocalSdpReadytoSend_m835606092 (PeerConnectionM_t1544440329 * __this, LocalSdpReadytoSendDelegate_t527669091 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IceCandiateReadytoSendDelegate__ctor_m3817349325 (IceCandiateReadytoSendDelegate_t3971808015 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnIceCandiateReadytoSend(SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate)
extern "C"  void PeerConnectionM_add_OnIceCandiateReadytoSend_m128809503 (PeerConnectionM_t1544440329 * __this, IceCandiateReadytoSendDelegate_t3971808015 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RecievedRGBFrameDelegate__ctor_m975400911 (RecievedRGBFrameDelegate_t726515755 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::add_FramgeGate_onRecieved(SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate)
extern "C"  void PeerConnectionM_add_FramgeGate_onRecieved_m3615637464 (PeerConnectionM_t1544440329 * __this, RecievedRGBFrameDelegate_t726515755 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FailureMessageDelegate__ctor_m2840523361 (FailureMessageDelegate_t3750826190 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnFailureMessage(SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate)
extern "C"  void PeerConnectionM_add_OnFailureMessage_m3043468050 (PeerConnectionM_t1544440329 * __this, FailureMessageDelegate_t3750826190 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::AddStream(System.Boolean)
extern "C"  void PeerConnectionM_AddStream_m3794451455 (PeerConnectionM_t1544440329 * __this, bool ___audioOnly0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::ClosePeerConnection()
extern "C"  void PeerConnectionM_ClosePeerConnection_m2938929551 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::CreateOffer()
extern "C"  void PeerConnectionM_CreateOffer_m3707951050 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
extern "C"  void Texture2D_LoadRawTextureData_m1232009149 (Texture2D_t3840446185 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t3850468773* Texture2D_GetPixels32_m647746242 (Texture2D_t3840446185 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
extern "C"  intptr_t GCHandle_AddrOfPinnedObject_m3427142301 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::FramgeGate_Input(System.IntPtr,System.Int32,System.Int32)
extern "C"  void PeerConnectionM_FramgeGate_Input_m3112400015 (PeerConnectionM_t1544440329 * __this, intptr_t ___image0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// WebRtcMsgExchanger WebRtcCore::get_MsgExchanger()
extern "C"  WebRtcMsgExchanger_t3272896331 * WebRtcCore_get_MsgExchanger_m3784267525 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WebRtcCoreWindows/IceJson::.ctor(System.String,System.Int32,System.String)
extern "C"  void IceJson__ctor_m3481197562 (IceJson_t3287139184 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C"  String_t* JsonUtility_ToJson_m3644929270 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C"  void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::SetRemoteDescription(System.String,System.String)
extern "C"  void PeerConnectionM_SetRemoteDescription_m450948145 (PeerConnectionM_t1544440329 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::CreateAnswer()
extern "C"  void PeerConnectionM_CreateAnswer_m2622316497 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern "C"  RuntimeObject * JsonUtility_FromJson_m4191471030 (RuntimeObject * __this /* static, unused */, String_t* p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SimplePeerConnectionM.PeerConnectionM::AddIceCandidate(System.String,System.Int32,System.String)
extern "C"  void PeerConnectionM_AddIceCandidate_m355481554 (PeerConnectionM_t1544440329 * __this, String_t* ___candidate0, int32_t ___sdpMlineindex1, String_t* ___sdpMid2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MqttController::.ctor()
extern "C"  void MqttController__ctor_m297482624 (MqttController_t3766054392 * __this, const RuntimeMethod* method)
{
	{
		WebRtcMsgExchanger__ctor_m688705840(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MqttController::Start()
extern "C"  void MqttController_Start_m2331879798 (MqttController_t3766054392 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttController_Start_m2331879798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		MqttClient_t1237157870 * L_0 = (MqttClient_t1237157870 *)il2cpp_codegen_object_new(MqttClient_t1237157870_il2cpp_TypeInfo_var);
		MqttClient__ctor_m2956131190(L_0, _stringLiteral990781616, ((int32_t)1883), (bool)0, (X509Certificate_t713131622 *)NULL, /*hidden argument*/NULL);
		__this->set_mqttClient_3(L_0);
		MqttClient_t1237157870 * L_1 = __this->get_mqttClient_3();
		intptr_t L_2 = (intptr_t)MqttController_ReceivedMessage_m387903925_RuntimeMethod_var;
		MqttMsgPublishEventHandler_t1923217352 * L_3 = (MqttMsgPublishEventHandler_t1923217352 *)il2cpp_codegen_object_new(MqttMsgPublishEventHandler_t1923217352_il2cpp_TypeInfo_var);
		MqttMsgPublishEventHandler__ctor_m3294399465(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MqttClient_add_MqttMsgPublishReceived_m3145106695(L_1, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_4 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = Guid_ToString_m3279186591((&V_1), /*hidden argument*/NULL);
		V_0 = L_5;
		MqttClient_t1237157870 * L_6 = __this->get_mqttClient_3();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		MqttClient_Connect_m1200615702(L_6, L_7, /*hidden argument*/NULL);
		MqttClient_t1237157870 * L_8 = __this->get_mqttClient_3();
		StringU5BU5D_t1281789340* L_9 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3547863816);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3547863816);
		NullCheck(L_8);
		MqttClient_Subscribe_m914342903(L_8, L_9, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MqttController::ReceivedMessage(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
extern "C"  void MqttController_ReceivedMessage_m387903925 (MqttController_t3766054392 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t2350602093 * ___msgPublishEventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttController_ReceivedMessage_m387903925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	{
		MqttMsgPublishEventArgs_t2350602093 * L_0 = ___msgPublishEventArgs1;
		NullCheck(L_0);
		String_t* L_1 = MqttMsgPublishEventArgs_get_Topic_m763780921(L_0, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_2 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_1);
		StringU5BU5D_t1281789340* L_3 = String_Split_m3646115398(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		MqttClient_t1237157870 * L_7 = __this->get_mqttClient_3();
		NullCheck(L_7);
		String_t* L_8 = MqttClient_get_ClientId_m1266538281(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		StringU5BU5D_t1281789340* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_13 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		MqttMsgPublishEventArgs_t2350602093 * L_14 = ___msgPublishEventArgs1;
		NullCheck(L_14);
		ByteU5BU5D_t4116647657* L_15 = MqttMsgPublishEventArgs_get_Message_m3404860665(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_13, L_15);
		WebRtcMsgExchanger_WebRtcCtr_RecievedMessage_m724448117(__this, L_12, L_16, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void MqttController::SendMessage(System.String,System.String)
extern "C"  void MqttController_SendMessage_m863138276 (MqttController_t3766054392 * __this, String_t* ___topic0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttController_SendMessage_m863138276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttClient_t1237157870 * L_0 = __this->get_mqttClient_3();
		String_t* L_1 = ___topic0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_2 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		NullCheck(L_0);
		MqttClient_Publish_m2947629173(L_0, L_1, L_4, (uint8_t)2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MqttController::Update()
extern "C"  void MqttController_Update_m3083875780 (MqttController_t3766054392 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MqttController::OnDestroy()
extern "C"  void MqttController_OnDestroy_m1487635597 (MqttController_t3766054392 * __this, const RuntimeMethod* method)
{
	{
		MqttClient_t1237157870 * L_0 = __this->get_mqttClient_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		MqttClient_t1237157870 * L_1 = __this->get_mqttClient_3();
		NullCheck(L_1);
		MqttClient_Disconnect_m1914667810(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MqttController::RequiredSendingMessage(System.String,System.String)
extern "C"  void MqttController_RequiredSendingMessage_m1790476948 (MqttController_t3766054392 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttController_RequiredSendingMessage_m1790476948_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttClient_t1237157870 * L_0 = __this->get_mqttClient_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3971110727, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		MqttClient_t1237157870 * L_1 = __this->get_mqttClient_3();
		NullCheck(L_1);
		bool L_2 = MqttClient_get_IsConnected_m3984152883(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		MqttClient_t1237157870 * L_3 = __this->get_mqttClient_3();
		NullCheck(L_3);
		String_t* L_4 = MqttClient_get_ClientId_m1266538281(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___description0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3031636744, L_4, _stringLiteral3452614529, L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___message1;
		MqttController_SendMessage_m863138276(__this, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlaneUpdater::.ctor()
extern "C"  void PlaneUpdater__ctor_m4250337611 (PlaneUpdater_t1284977546 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlaneUpdater::Start()
extern "C"  void PlaneUpdater_Start_m1045478551 (PlaneUpdater_t1284977546 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void PlaneUpdater::Update()
extern "C"  void PlaneUpdater_Update_m4008033987 (PlaneUpdater_t1284977546 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m3353183577((&L_1), (0.0f), (0.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_m720511863(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SimplePeerConnectionM.PeerConnectionM::.ctor(System.Collections.Generic.List`1<System.String>,System.String,System.String)
extern "C"  void PeerConnectionM__ctor_m2038595787 (PeerConnectionM_t1544440329 * __this, List_1_t3319525431 * ___turnUrls0, String_t* ___username1, String_t* ___credential2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM__ctor_m2038595787_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	StringU5BU5D_t1281789340* G_B3_0 = NULL;
	int32_t G_B6_0 = 0;
	{
		__this->set_mPeerConnectionId_15((-1));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		List_1_t3319525431 * L_0 = ___turnUrls0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		List_1_t3319525431 * L_1 = ___turnUrls0;
		NullCheck(L_1);
		StringU5BU5D_t1281789340* L_2 = List_1_ToArray_m3983937259(L_1, /*hidden argument*/List_1_ToArray_m3983937259_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = ((StringU5BU5D_t1281789340*)(NULL));
	}

IL_001f:
	{
		V_0 = G_B3_0;
		List_1_t3319525431 * L_3 = ___turnUrls0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t3319525431 * L_4 = ___turnUrls0;
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m2276455407(L_4, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		G_B6_0 = L_5;
		goto IL_0032;
	}

IL_0031:
	{
		G_B6_0 = 0;
	}

IL_0032:
	{
		V_1 = G_B6_0;
		StringU5BU5D_t1281789340* L_6 = V_0;
		int32_t L_7 = V_1;
		String_t* L_8 = ___username1;
		String_t* L_9 = ___credential2;
		int32_t L_10 = PeerConnectionM_CreatePeerConnection_m666123147(NULL /*static, unused*/, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->set_mPeerConnectionId_15(L_10);
		PeerConnectionM_RegisterCallbacks_m670014253(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 SimplePeerConnectionM.PeerConnectionM::CreatePeerConnection(System.String[],System.Int32,System.String,System.String)
extern "C"  int32_t PeerConnectionM_CreatePeerConnection_m666123147 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* ___turnUrls0, int32_t ___noOfUrls1, String_t* ___username2, String_t* ___credential3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (char**, int32_t, char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "CreatePeerConnection", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CreatePeerConnection'"),NULL);
		}
	}

	// Marshaling of parameter '___turnUrls0' to native representation
	char** ____turnUrls0_marshaled = NULL;
	if (___turnUrls0 != NULL)
	{
		il2cpp_array_size_t ____turnUrls0_Length = (___turnUrls0)->max_length;
		____turnUrls0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____turnUrls0_Length + 1);
		(____turnUrls0_marshaled)[____turnUrls0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____turnUrls0_Length); i++)
		{
			(____turnUrls0_marshaled)[i] = il2cpp_codegen_marshal_string((___turnUrls0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____turnUrls0_marshaled = NULL;
	}

	// Marshaling of parameter '___username2' to native representation
	char* ____username2_marshaled = NULL;
	____username2_marshaled = il2cpp_codegen_marshal_string(___username2);

	// Marshaling of parameter '___credential3' to native representation
	char* ____credential3_marshaled = NULL;
	____credential3_marshaled = il2cpp_codegen_marshal_string(___credential3);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____turnUrls0_marshaled, ___noOfUrls1, ____username2_marshaled, ____credential3_marshaled);

	// Marshaling cleanup of parameter '___turnUrls0' native representation
	if (____turnUrls0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____turnUrls0_marshaled_CleanupLoopCount = (___turnUrls0 != NULL) ? (___turnUrls0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____turnUrls0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____turnUrls0_marshaled)[i]);
			(____turnUrls0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____turnUrls0_marshaled);
		____turnUrls0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___username2' native representation
	il2cpp_codegen_marshal_free(____username2_marshaled);
	____username2_marshaled = NULL;

	// Marshaling cleanup of parameter '___credential3' native representation
	il2cpp_codegen_marshal_free(____credential3_marshaled);
	____credential3_marshaled = NULL;

	return returnValue;
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::ClosePeerConnection(System.Int32)
extern "C"  bool PeerConnectionM_ClosePeerConnection_m3222523420 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "ClosePeerConnection", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ClosePeerConnection'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::AddStream(System.Int32,System.Boolean)
extern "C"  bool PeerConnectionM_AddStream_m3811800792 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, bool ___audioOnly1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "AddStream", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'AddStream'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, static_cast<int32_t>(___audioOnly1));

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::AddDataChannel(System.Int32)
extern "C"  bool PeerConnectionM_AddDataChannel_m117135342 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "AddDataChannel", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'AddDataChannel'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::CreateOffer(System.Int32)
extern "C"  bool PeerConnectionM_CreateOffer_m1370463794 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "CreateOffer", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CreateOffer'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::CreateAnswer(System.Int32)
extern "C"  bool PeerConnectionM_CreateAnswer_m2671050304 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "CreateAnswer", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'CreateAnswer'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::SendDataViaDataChannel(System.Int32,System.String)
extern "C"  bool PeerConnectionM_SendDataViaDataChannel_m517714798 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, String_t* ___data1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "SendDataViaDataChannel", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SendDataViaDataChannel'"),NULL);
		}
	}

	// Marshaling of parameter '___data1' to native representation
	char* ____data1_marshaled = NULL;
	____data1_marshaled = il2cpp_codegen_marshal_string(___data1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____data1_marshaled);

	// Marshaling cleanup of parameter '___data1' native representation
	il2cpp_codegen_marshal_free(____data1_marshaled);
	____data1_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::SetAudioControl(System.Int32,System.Boolean,System.Boolean)
extern "C"  bool PeerConnectionM_SetAudioControl_m3932261462 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, bool ___isMute1, bool ___isRecord2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + 4 + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "SetAudioControl", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetAudioControl'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, static_cast<int32_t>(___isMute1), static_cast<int32_t>(___isRecord2));

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnLocalDataChannelReady(System.Int32,SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnLocalDataChannelReady_m1514363717 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, LocalDataChannelReadyInternalDelegate_t4253056107 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "RegisterOnLocalDataChannelReady", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RegisterOnLocalDataChannelReady'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnDataFromDataChannelReady(System.Int32,SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnDataFromDataChannelReady_m1650801983 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, DataFromDataChannelReadyInternalDelegate_t513489297 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "RegisterOnDataFromDataChannelReady", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RegisterOnDataFromDataChannelReady'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnFailure(System.Int32,SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnFailure_m3654743574 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, FailureMessageInternalDelegate_t3617644009 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "RegisterOnFailure", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RegisterOnFailure'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnAudioBusReady(System.Int32,SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnAudioBusReady_m4079422364 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, AudioBusReadyInternalDelegate_t2220975906 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "RegisterOnAudioBusReady", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RegisterOnAudioBusReady'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::FrameGate_RegisterOnRecieved(System.Int32,SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate)
extern "C"  bool PeerConnectionM_FrameGate_RegisterOnRecieved_m2028839294 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, RecievedRGBFrameInternalDelegate_t1745086045 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "FrameGate_RegisterOnRecieved", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FrameGate_RegisterOnRecieved'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnLocalSdpReadytoSend(System.Int32,SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnLocalSdpReadytoSend_m2397861960 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, LocalSdpReadytoSendInternalDelegate_t4044312851 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "RegisterOnLocalSdpReadytoSend", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RegisterOnLocalSdpReadytoSend'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::RegisterOnIceCandiateReadytoSend(System.Int32,SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate)
extern "C"  bool PeerConnectionM_RegisterOnIceCandiateReadytoSend_m1352393878 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, IceCandiateReadytoSendInternalDelegate_t754111350 * ___callback1, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, Il2CppMethodPointer);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "RegisterOnIceCandiateReadytoSend", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'RegisterOnIceCandiateReadytoSend'"),NULL);
		}
	}

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____callback1_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::SetRemoteDescription(System.Int32,System.String,System.String)
extern "C"  bool PeerConnectionM_SetRemoteDescription_m2669134367 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, String_t* ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, char*, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "SetRemoteDescription", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'SetRemoteDescription'"),NULL);
		}
	}

	// Marshaling of parameter '___type1' to native representation
	char* ____type1_marshaled = NULL;
	____type1_marshaled = il2cpp_codegen_marshal_string(___type1);

	// Marshaling of parameter '___sdp2' to native representation
	char* ____sdp2_marshaled = NULL;
	____sdp2_marshaled = il2cpp_codegen_marshal_string(___sdp2);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____type1_marshaled, ____sdp2_marshaled);

	// Marshaling cleanup of parameter '___type1' native representation
	il2cpp_codegen_marshal_free(____type1_marshaled);
	____type1_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdp2' native representation
	il2cpp_codegen_marshal_free(____sdp2_marshaled);
	____sdp2_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean SimplePeerConnectionM.PeerConnectionM::AddIceCandidate(System.Int32,System.String,System.Int32,System.String)
extern "C"  bool PeerConnectionM_AddIceCandidate_m3218835148 (RuntimeObject * __this /* static, unused */, int32_t ___peerConnectionId0, String_t* ___sdp1, int32_t ___sdpMlineindex2, String_t* ___sdpMid3, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t, char*, int32_t, char*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "AddIceCandidate", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'AddIceCandidate'"),NULL);
		}
	}

	// Marshaling of parameter '___sdp1' to native representation
	char* ____sdp1_marshaled = NULL;
	____sdp1_marshaled = il2cpp_codegen_marshal_string(___sdp1);

	// Marshaling of parameter '___sdpMid3' to native representation
	char* ____sdpMid3_marshaled = NULL;
	____sdpMid3_marshaled = il2cpp_codegen_marshal_string(___sdpMid3);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___peerConnectionId0, ____sdp1_marshaled, ___sdpMlineindex2, ____sdpMid3_marshaled);

	// Marshaling cleanup of parameter '___sdp1' native representation
	il2cpp_codegen_marshal_free(____sdp1_marshaled);
	____sdp1_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdpMid3' native representation
	il2cpp_codegen_marshal_free(____sdpMid3_marshaled);
	____sdpMid3_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Int32 SimplePeerConnectionM.PeerConnectionM::TestFunction(System.Int32)
extern "C"  int32_t PeerConnectionM_TestFunction_m927248389 (RuntimeObject * __this /* static, unused */, int32_t ___num0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "TestFunction", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'TestFunction'"),NULL);
		}
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___num0);

	return returnValue;
}
// System.Int32 SimplePeerConnectionM.PeerConnectionM::CallTestFunction(System.Int32)
extern "C"  int32_t PeerConnectionM_CallTestFunction_m4155148016 (PeerConnectionM_t1544440329 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___num0;
		int32_t L_1 = PeerConnectionM_TestFunction_m927248389(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::FramgeGate_Input(System.Int32,System.IntPtr,System.Int32,System.Int32)
extern "C"  void PeerConnectionM_FramgeGate_Input_m260001873 (RuntimeObject * __this /* static, unused */, int32_t ___peer_connection_id0, intptr_t ___image1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (int32_t, intptr_t, int32_t, int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("webrtc_unity_plugin"), "FramgeGate_Input", IL2CPP_CALL_C, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'FramgeGate_Input'"),NULL);
		}
	}

	// Native function invocation
	il2cppPInvokeFunc(___peer_connection_id0, ___image1, ___width2, ___height3);

}
// System.Void SimplePeerConnectionM.PeerConnectionM::FramgeGate_Input(System.IntPtr,System.Int32,System.Int32)
extern "C"  void PeerConnectionM_FramgeGate_Input_m3112400015 (PeerConnectionM_t1544440329 * __this, intptr_t ___image0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		intptr_t L_1 = ___image0;
		int32_t L_2 = ___width1;
		int32_t L_3 = ___height2;
		PeerConnectionM_FramgeGate_Input_m260001873(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::ClosePeerConnection()
extern "C"  void PeerConnectionM_ClosePeerConnection_m2938929551 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		PeerConnectionM_ClosePeerConnection_m3222523420(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_mPeerConnectionId_15((-1));
		return;
	}
}
// System.Int32 SimplePeerConnectionM.PeerConnectionM::GetUniqueId()
extern "C"  int32_t PeerConnectionM_GetUniqueId_m834968440 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		return L_0;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::AddStream(System.Boolean)
extern "C"  void PeerConnectionM_AddStream_m3794451455 (PeerConnectionM_t1544440329 * __this, bool ___audioOnly0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		bool L_1 = ___audioOnly0;
		PeerConnectionM_AddStream_m3811800792(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::AddDataChannel()
extern "C"  void PeerConnectionM_AddDataChannel_m120987485 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		PeerConnectionM_AddDataChannel_m117135342(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::CreateOffer()
extern "C"  void PeerConnectionM_CreateOffer_m3707951050 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		PeerConnectionM_CreateOffer_m1370463794(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::CreateAnswer()
extern "C"  void PeerConnectionM_CreateAnswer_m2622316497 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		PeerConnectionM_CreateAnswer_m2671050304(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::SendDataViaDataChannel(System.String)
extern "C"  void PeerConnectionM_SendDataViaDataChannel_m13909633 (PeerConnectionM_t1544440329 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		String_t* L_1 = ___data0;
		PeerConnectionM_SendDataViaDataChannel_m517714798(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::SetAudioControl(System.Boolean,System.Boolean)
extern "C"  void PeerConnectionM_SetAudioControl_m3100751844 (PeerConnectionM_t1544440329 * __this, bool ___isMute0, bool ___isRecord1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		bool L_1 = ___isMute0;
		bool L_2 = ___isRecord1;
		PeerConnectionM_SetAudioControl_m3932261462(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::SetRemoteDescription(System.String,System.String)
extern "C"  void PeerConnectionM_SetRemoteDescription_m450948145 (PeerConnectionM_t1544440329 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		String_t* L_1 = ___type0;
		String_t* L_2 = ___sdp1;
		PeerConnectionM_SetRemoteDescription_m2669134367(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::AddIceCandidate(System.String,System.Int32,System.String)
extern "C"  void PeerConnectionM_AddIceCandidate_m355481554 (PeerConnectionM_t1544440329 * __this, String_t* ___candidate0, int32_t ___sdpMlineindex1, String_t* ___sdpMid2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPeerConnectionId_15();
		String_t* L_1 = ___candidate0;
		int32_t L_2 = ___sdpMlineindex1;
		String_t* L_3 = ___sdpMid2;
		PeerConnectionM_AddIceCandidate_m3218835148(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RegisterCallbacks()
extern "C"  void PeerConnectionM_RegisterCallbacks_m670014253 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_RegisterCallbacks_m670014253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)PeerConnectionM_RaiseLocalDataChannelReady_m2096657625_RuntimeMethod_var;
		LocalDataChannelReadyInternalDelegate_t4253056107 * L_1 = (LocalDataChannelReadyInternalDelegate_t4253056107 *)il2cpp_codegen_object_new(LocalDataChannelReadyInternalDelegate_t4253056107_il2cpp_TypeInfo_var);
		LocalDataChannelReadyInternalDelegate__ctor_m1939356344(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->set_localDataChannelReadyDelegate_1(L_1);
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		LocalDataChannelReadyInternalDelegate_t4253056107 * L_3 = __this->get_localDataChannelReadyDelegate_1();
		PeerConnectionM_RegisterOnLocalDataChannelReady_m1514363717(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)PeerConnectionM_RaiseDataFromDataChannelReady_m324978328_RuntimeMethod_var;
		DataFromDataChannelReadyInternalDelegate_t513489297 * L_5 = (DataFromDataChannelReadyInternalDelegate_t513489297 *)il2cpp_codegen_object_new(DataFromDataChannelReadyInternalDelegate_t513489297_il2cpp_TypeInfo_var);
		DataFromDataChannelReadyInternalDelegate__ctor_m604148853(L_5, __this, L_4, /*hidden argument*/NULL);
		__this->set_dataFromDataChannelReadyDelegate_3(L_5);
		int32_t L_6 = __this->get_mPeerConnectionId_15();
		DataFromDataChannelReadyInternalDelegate_t513489297 * L_7 = __this->get_dataFromDataChannelReadyDelegate_3();
		PeerConnectionM_RegisterOnDataFromDataChannelReady_m1650801983(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		intptr_t L_8 = (intptr_t)PeerConnectionM_RaiseFailureMessage_m3298792034_RuntimeMethod_var;
		FailureMessageInternalDelegate_t3617644009 * L_9 = (FailureMessageInternalDelegate_t3617644009 *)il2cpp_codegen_object_new(FailureMessageInternalDelegate_t3617644009_il2cpp_TypeInfo_var);
		FailureMessageInternalDelegate__ctor_m3505053702(L_9, __this, L_8, /*hidden argument*/NULL);
		__this->set_failureMessageDelegate_5(L_9);
		int32_t L_10 = __this->get_mPeerConnectionId_15();
		FailureMessageInternalDelegate_t3617644009 * L_11 = __this->get_failureMessageDelegate_5();
		PeerConnectionM_RegisterOnFailure_m3654743574(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		intptr_t L_12 = (intptr_t)PeerConnectionM_RaiseAudioBusReady_m2625571004_RuntimeMethod_var;
		AudioBusReadyInternalDelegate_t2220975906 * L_13 = (AudioBusReadyInternalDelegate_t2220975906 *)il2cpp_codegen_object_new(AudioBusReadyInternalDelegate_t2220975906_il2cpp_TypeInfo_var);
		AudioBusReadyInternalDelegate__ctor_m2901242911(L_13, __this, L_12, /*hidden argument*/NULL);
		__this->set_audioBusReadyDelegate_7(L_13);
		int32_t L_14 = __this->get_mPeerConnectionId_15();
		AudioBusReadyInternalDelegate_t2220975906 * L_15 = __this->get_audioBusReadyDelegate_7();
		PeerConnectionM_RegisterOnAudioBusReady_m4079422364(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		intptr_t L_16 = (intptr_t)PeerConnectionM_RaiseRGBVideoFrameReady_m505442155_RuntimeMethod_var;
		RecievedRGBFrameInternalDelegate_t1745086045 * L_17 = (RecievedRGBFrameInternalDelegate_t1745086045 *)il2cpp_codegen_object_new(RecievedRGBFrameInternalDelegate_t1745086045_il2cpp_TypeInfo_var);
		RecievedRGBFrameInternalDelegate__ctor_m44051601(L_17, __this, L_16, /*hidden argument*/NULL);
		__this->set_FramgeGate_RecievedDelegate_9(L_17);
		int32_t L_18 = __this->get_mPeerConnectionId_15();
		RecievedRGBFrameInternalDelegate_t1745086045 * L_19 = __this->get_FramgeGate_RecievedDelegate_9();
		PeerConnectionM_FrameGate_RegisterOnRecieved_m2028839294(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		intptr_t L_20 = (intptr_t)PeerConnectionM_RaiseLocalSdpReadytoSend_m3595029936_RuntimeMethod_var;
		LocalSdpReadytoSendInternalDelegate_t4044312851 * L_21 = (LocalSdpReadytoSendInternalDelegate_t4044312851 *)il2cpp_codegen_object_new(LocalSdpReadytoSendInternalDelegate_t4044312851_il2cpp_TypeInfo_var);
		LocalSdpReadytoSendInternalDelegate__ctor_m3323919969(L_21, __this, L_20, /*hidden argument*/NULL);
		__this->set_localSdpReadytoSendDelegate_11(L_21);
		int32_t L_22 = __this->get_mPeerConnectionId_15();
		LocalSdpReadytoSendInternalDelegate_t4044312851 * L_23 = __this->get_localSdpReadytoSendDelegate_11();
		PeerConnectionM_RegisterOnLocalSdpReadytoSend_m2397861960(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		intptr_t L_24 = (intptr_t)PeerConnectionM_RaiseIceCandiateReadytoSend_m3666981664_RuntimeMethod_var;
		IceCandiateReadytoSendInternalDelegate_t754111350 * L_25 = (IceCandiateReadytoSendInternalDelegate_t754111350 *)il2cpp_codegen_object_new(IceCandiateReadytoSendInternalDelegate_t754111350_il2cpp_TypeInfo_var);
		IceCandiateReadytoSendInternalDelegate__ctor_m2193365268(L_25, __this, L_24, /*hidden argument*/NULL);
		__this->set_iceCandiateReadytoSendDelegate_13(L_25);
		int32_t L_26 = __this->get_mPeerConnectionId_15();
		IceCandiateReadytoSendInternalDelegate_t754111350 * L_27 = __this->get_iceCandiateReadytoSendDelegate_13();
		PeerConnectionM_RegisterOnIceCandiateReadytoSend_m1352393878(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseLocalDataChannelReady()
extern "C"  void PeerConnectionM_RaiseLocalDataChannelReady_m2096657625 (PeerConnectionM_t1544440329 * __this, const RuntimeMethod* method)
{
	{
		LocalDataChannelReadyDelegate_t1540256137 * L_0 = __this->get_OnLocalDataChannelReady_2();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		LocalDataChannelReadyDelegate_t1540256137 * L_1 = __this->get_OnLocalDataChannelReady_2();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		NullCheck(L_1);
		LocalDataChannelReadyDelegate_Invoke_m1407566565(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseDataFromDataChannelReady(System.String)
extern "C"  void PeerConnectionM_RaiseDataFromDataChannelReady_m324978328 (PeerConnectionM_t1544440329 * __this, String_t* ___data0, const RuntimeMethod* method)
{
	{
		DataFromDataChannelReadyDelegate_t2867388022 * L_0 = __this->get_OnDataFromDataChannelReady_4();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		DataFromDataChannelReadyDelegate_t2867388022 * L_1 = __this->get_OnDataFromDataChannelReady_4();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		String_t* L_3 = ___data0;
		NullCheck(L_1);
		DataFromDataChannelReadyDelegate_Invoke_m167498838(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseFailureMessage(System.String)
extern "C"  void PeerConnectionM_RaiseFailureMessage_m3298792034 (PeerConnectionM_t1544440329 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		FailureMessageDelegate_t3750826190 * L_0 = __this->get_OnFailureMessage_6();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		FailureMessageDelegate_t3750826190 * L_1 = __this->get_OnFailureMessage_6();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		String_t* L_3 = ___msg0;
		NullCheck(L_1);
		FailureMessageDelegate_Invoke_m2465925799(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseAudioBusReady(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void PeerConnectionM_RaiseAudioBusReady_m2625571004 (PeerConnectionM_t1544440329 * __this, intptr_t ___data0, int32_t ___bitsPerSample1, int32_t ___sampleRate2, int32_t ___numberOfChannels3, int32_t ___numberOfFrames4, const RuntimeMethod* method)
{
	{
		AudioBusReadyDelegate_t1824694707 * L_0 = __this->get_OnAudioBusReady_8();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		AudioBusReadyDelegate_t1824694707 * L_1 = __this->get_OnAudioBusReady_8();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		intptr_t L_3 = ___data0;
		int32_t L_4 = ___bitsPerSample1;
		int32_t L_5 = ___sampleRate2;
		int32_t L_6 = ___numberOfChannels3;
		int32_t L_7 = ___numberOfFrames4;
		NullCheck(L_1);
		AudioBusReadyDelegate_Invoke_m3854471619(L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseRGBVideoFrameReady(System.IntPtr,System.UInt32,System.UInt32)
extern "C"  void PeerConnectionM_RaiseRGBVideoFrameReady_m505442155 (PeerConnectionM_t1544440329 * __this, intptr_t ___rgb0, uint32_t ___width1, uint32_t ___height2, const RuntimeMethod* method)
{
	{
		RecievedRGBFrameDelegate_t726515755 * L_0 = __this->get_FramgeGate_onRecieved_10();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		RecievedRGBFrameDelegate_t726515755 * L_1 = __this->get_FramgeGate_onRecieved_10();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		intptr_t L_3 = ___rgb0;
		uint32_t L_4 = ___width1;
		uint32_t L_5 = ___height2;
		NullCheck(L_1);
		RecievedRGBFrameDelegate_Invoke_m3318570457(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseLocalSdpReadytoSend(System.String,System.String)
extern "C"  void PeerConnectionM_RaiseLocalSdpReadytoSend_m3595029936 (PeerConnectionM_t1544440329 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	{
		LocalSdpReadytoSendDelegate_t527669091 * L_0 = __this->get_OnLocalSdpReadytoSend_12();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		LocalSdpReadytoSendDelegate_t527669091 * L_1 = __this->get_OnLocalSdpReadytoSend_12();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		String_t* L_3 = ___type0;
		String_t* L_4 = ___sdp1;
		NullCheck(L_1);
		LocalSdpReadytoSendDelegate_Invoke_m3704001102(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::RaiseIceCandiateReadytoSend(System.String,System.Int32,System.String)
extern "C"  void PeerConnectionM_RaiseIceCandiateReadytoSend_m3666981664 (PeerConnectionM_t1544440329 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, const RuntimeMethod* method)
{
	{
		IceCandiateReadytoSendDelegate_t3971808015 * L_0 = __this->get_OnIceCandiateReadytoSend_14();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		IceCandiateReadytoSendDelegate_t3971808015 * L_1 = __this->get_OnIceCandiateReadytoSend_14();
		int32_t L_2 = __this->get_mPeerConnectionId_15();
		String_t* L_3 = ___candidate0;
		int32_t L_4 = ___sdpMlineIndex1;
		String_t* L_5 = ___sdpMid2;
		NullCheck(L_1);
		IceCandiateReadytoSendDelegate_Invoke_m1101032379(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnLocalDataChannelReady(SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate)
extern "C"  void PeerConnectionM_add_OnLocalDataChannelReady_m2306596303 (PeerConnectionM_t1544440329 * __this, LocalDataChannelReadyDelegate_t1540256137 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_OnLocalDataChannelReady_m2306596303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalDataChannelReadyDelegate_t1540256137 * V_0 = NULL;
	LocalDataChannelReadyDelegate_t1540256137 * V_1 = NULL;
	{
		LocalDataChannelReadyDelegate_t1540256137 * L_0 = __this->get_OnLocalDataChannelReady_2();
		V_0 = L_0;
	}

IL_0007:
	{
		LocalDataChannelReadyDelegate_t1540256137 * L_1 = V_0;
		V_1 = L_1;
		LocalDataChannelReadyDelegate_t1540256137 ** L_2 = __this->get_address_of_OnLocalDataChannelReady_2();
		LocalDataChannelReadyDelegate_t1540256137 * L_3 = V_1;
		LocalDataChannelReadyDelegate_t1540256137 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		LocalDataChannelReadyDelegate_t1540256137 * L_6 = V_0;
		LocalDataChannelReadyDelegate_t1540256137 * L_7 = InterlockedCompareExchangeImpl<LocalDataChannelReadyDelegate_t1540256137 *>(L_2, ((LocalDataChannelReadyDelegate_t1540256137 *)CastclassSealed((RuntimeObject*)L_5, LocalDataChannelReadyDelegate_t1540256137_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		LocalDataChannelReadyDelegate_t1540256137 * L_8 = V_0;
		LocalDataChannelReadyDelegate_t1540256137 * L_9 = V_1;
		if ((!(((RuntimeObject*)(LocalDataChannelReadyDelegate_t1540256137 *)L_8) == ((RuntimeObject*)(LocalDataChannelReadyDelegate_t1540256137 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_OnLocalDataChannelReady(SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate)
extern "C"  void PeerConnectionM_remove_OnLocalDataChannelReady_m2305146633 (PeerConnectionM_t1544440329 * __this, LocalDataChannelReadyDelegate_t1540256137 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_OnLocalDataChannelReady_m2305146633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalDataChannelReadyDelegate_t1540256137 * V_0 = NULL;
	LocalDataChannelReadyDelegate_t1540256137 * V_1 = NULL;
	{
		LocalDataChannelReadyDelegate_t1540256137 * L_0 = __this->get_OnLocalDataChannelReady_2();
		V_0 = L_0;
	}

IL_0007:
	{
		LocalDataChannelReadyDelegate_t1540256137 * L_1 = V_0;
		V_1 = L_1;
		LocalDataChannelReadyDelegate_t1540256137 ** L_2 = __this->get_address_of_OnLocalDataChannelReady_2();
		LocalDataChannelReadyDelegate_t1540256137 * L_3 = V_1;
		LocalDataChannelReadyDelegate_t1540256137 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		LocalDataChannelReadyDelegate_t1540256137 * L_6 = V_0;
		LocalDataChannelReadyDelegate_t1540256137 * L_7 = InterlockedCompareExchangeImpl<LocalDataChannelReadyDelegate_t1540256137 *>(L_2, ((LocalDataChannelReadyDelegate_t1540256137 *)CastclassSealed((RuntimeObject*)L_5, LocalDataChannelReadyDelegate_t1540256137_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		LocalDataChannelReadyDelegate_t1540256137 * L_8 = V_0;
		LocalDataChannelReadyDelegate_t1540256137 * L_9 = V_1;
		if ((!(((RuntimeObject*)(LocalDataChannelReadyDelegate_t1540256137 *)L_8) == ((RuntimeObject*)(LocalDataChannelReadyDelegate_t1540256137 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnDataFromDataChannelReady(SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate)
extern "C"  void PeerConnectionM_add_OnDataFromDataChannelReady_m2557643621 (PeerConnectionM_t1544440329 * __this, DataFromDataChannelReadyDelegate_t2867388022 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_OnDataFromDataChannelReady_m2557643621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataFromDataChannelReadyDelegate_t2867388022 * V_0 = NULL;
	DataFromDataChannelReadyDelegate_t2867388022 * V_1 = NULL;
	{
		DataFromDataChannelReadyDelegate_t2867388022 * L_0 = __this->get_OnDataFromDataChannelReady_4();
		V_0 = L_0;
	}

IL_0007:
	{
		DataFromDataChannelReadyDelegate_t2867388022 * L_1 = V_0;
		V_1 = L_1;
		DataFromDataChannelReadyDelegate_t2867388022 ** L_2 = __this->get_address_of_OnDataFromDataChannelReady_4();
		DataFromDataChannelReadyDelegate_t2867388022 * L_3 = V_1;
		DataFromDataChannelReadyDelegate_t2867388022 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		DataFromDataChannelReadyDelegate_t2867388022 * L_6 = V_0;
		DataFromDataChannelReadyDelegate_t2867388022 * L_7 = InterlockedCompareExchangeImpl<DataFromDataChannelReadyDelegate_t2867388022 *>(L_2, ((DataFromDataChannelReadyDelegate_t2867388022 *)CastclassSealed((RuntimeObject*)L_5, DataFromDataChannelReadyDelegate_t2867388022_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		DataFromDataChannelReadyDelegate_t2867388022 * L_8 = V_0;
		DataFromDataChannelReadyDelegate_t2867388022 * L_9 = V_1;
		if ((!(((RuntimeObject*)(DataFromDataChannelReadyDelegate_t2867388022 *)L_8) == ((RuntimeObject*)(DataFromDataChannelReadyDelegate_t2867388022 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_OnDataFromDataChannelReady(SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate)
extern "C"  void PeerConnectionM_remove_OnDataFromDataChannelReady_m1366899369 (PeerConnectionM_t1544440329 * __this, DataFromDataChannelReadyDelegate_t2867388022 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_OnDataFromDataChannelReady_m1366899369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataFromDataChannelReadyDelegate_t2867388022 * V_0 = NULL;
	DataFromDataChannelReadyDelegate_t2867388022 * V_1 = NULL;
	{
		DataFromDataChannelReadyDelegate_t2867388022 * L_0 = __this->get_OnDataFromDataChannelReady_4();
		V_0 = L_0;
	}

IL_0007:
	{
		DataFromDataChannelReadyDelegate_t2867388022 * L_1 = V_0;
		V_1 = L_1;
		DataFromDataChannelReadyDelegate_t2867388022 ** L_2 = __this->get_address_of_OnDataFromDataChannelReady_4();
		DataFromDataChannelReadyDelegate_t2867388022 * L_3 = V_1;
		DataFromDataChannelReadyDelegate_t2867388022 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		DataFromDataChannelReadyDelegate_t2867388022 * L_6 = V_0;
		DataFromDataChannelReadyDelegate_t2867388022 * L_7 = InterlockedCompareExchangeImpl<DataFromDataChannelReadyDelegate_t2867388022 *>(L_2, ((DataFromDataChannelReadyDelegate_t2867388022 *)CastclassSealed((RuntimeObject*)L_5, DataFromDataChannelReadyDelegate_t2867388022_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		DataFromDataChannelReadyDelegate_t2867388022 * L_8 = V_0;
		DataFromDataChannelReadyDelegate_t2867388022 * L_9 = V_1;
		if ((!(((RuntimeObject*)(DataFromDataChannelReadyDelegate_t2867388022 *)L_8) == ((RuntimeObject*)(DataFromDataChannelReadyDelegate_t2867388022 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnFailureMessage(SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate)
extern "C"  void PeerConnectionM_add_OnFailureMessage_m3043468050 (PeerConnectionM_t1544440329 * __this, FailureMessageDelegate_t3750826190 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_OnFailureMessage_m3043468050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FailureMessageDelegate_t3750826190 * V_0 = NULL;
	FailureMessageDelegate_t3750826190 * V_1 = NULL;
	{
		FailureMessageDelegate_t3750826190 * L_0 = __this->get_OnFailureMessage_6();
		V_0 = L_0;
	}

IL_0007:
	{
		FailureMessageDelegate_t3750826190 * L_1 = V_0;
		V_1 = L_1;
		FailureMessageDelegate_t3750826190 ** L_2 = __this->get_address_of_OnFailureMessage_6();
		FailureMessageDelegate_t3750826190 * L_3 = V_1;
		FailureMessageDelegate_t3750826190 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		FailureMessageDelegate_t3750826190 * L_6 = V_0;
		FailureMessageDelegate_t3750826190 * L_7 = InterlockedCompareExchangeImpl<FailureMessageDelegate_t3750826190 *>(L_2, ((FailureMessageDelegate_t3750826190 *)CastclassSealed((RuntimeObject*)L_5, FailureMessageDelegate_t3750826190_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		FailureMessageDelegate_t3750826190 * L_8 = V_0;
		FailureMessageDelegate_t3750826190 * L_9 = V_1;
		if ((!(((RuntimeObject*)(FailureMessageDelegate_t3750826190 *)L_8) == ((RuntimeObject*)(FailureMessageDelegate_t3750826190 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_OnFailureMessage(SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate)
extern "C"  void PeerConnectionM_remove_OnFailureMessage_m2952274504 (PeerConnectionM_t1544440329 * __this, FailureMessageDelegate_t3750826190 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_OnFailureMessage_m2952274504_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FailureMessageDelegate_t3750826190 * V_0 = NULL;
	FailureMessageDelegate_t3750826190 * V_1 = NULL;
	{
		FailureMessageDelegate_t3750826190 * L_0 = __this->get_OnFailureMessage_6();
		V_0 = L_0;
	}

IL_0007:
	{
		FailureMessageDelegate_t3750826190 * L_1 = V_0;
		V_1 = L_1;
		FailureMessageDelegate_t3750826190 ** L_2 = __this->get_address_of_OnFailureMessage_6();
		FailureMessageDelegate_t3750826190 * L_3 = V_1;
		FailureMessageDelegate_t3750826190 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		FailureMessageDelegate_t3750826190 * L_6 = V_0;
		FailureMessageDelegate_t3750826190 * L_7 = InterlockedCompareExchangeImpl<FailureMessageDelegate_t3750826190 *>(L_2, ((FailureMessageDelegate_t3750826190 *)CastclassSealed((RuntimeObject*)L_5, FailureMessageDelegate_t3750826190_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		FailureMessageDelegate_t3750826190 * L_8 = V_0;
		FailureMessageDelegate_t3750826190 * L_9 = V_1;
		if ((!(((RuntimeObject*)(FailureMessageDelegate_t3750826190 *)L_8) == ((RuntimeObject*)(FailureMessageDelegate_t3750826190 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnAudioBusReady(SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate)
extern "C"  void PeerConnectionM_add_OnAudioBusReady_m631575994 (PeerConnectionM_t1544440329 * __this, AudioBusReadyDelegate_t1824694707 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_OnAudioBusReady_m631575994_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioBusReadyDelegate_t1824694707 * V_0 = NULL;
	AudioBusReadyDelegate_t1824694707 * V_1 = NULL;
	{
		AudioBusReadyDelegate_t1824694707 * L_0 = __this->get_OnAudioBusReady_8();
		V_0 = L_0;
	}

IL_0007:
	{
		AudioBusReadyDelegate_t1824694707 * L_1 = V_0;
		V_1 = L_1;
		AudioBusReadyDelegate_t1824694707 ** L_2 = __this->get_address_of_OnAudioBusReady_8();
		AudioBusReadyDelegate_t1824694707 * L_3 = V_1;
		AudioBusReadyDelegate_t1824694707 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		AudioBusReadyDelegate_t1824694707 * L_6 = V_0;
		AudioBusReadyDelegate_t1824694707 * L_7 = InterlockedCompareExchangeImpl<AudioBusReadyDelegate_t1824694707 *>(L_2, ((AudioBusReadyDelegate_t1824694707 *)CastclassSealed((RuntimeObject*)L_5, AudioBusReadyDelegate_t1824694707_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		AudioBusReadyDelegate_t1824694707 * L_8 = V_0;
		AudioBusReadyDelegate_t1824694707 * L_9 = V_1;
		if ((!(((RuntimeObject*)(AudioBusReadyDelegate_t1824694707 *)L_8) == ((RuntimeObject*)(AudioBusReadyDelegate_t1824694707 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_OnAudioBusReady(SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate)
extern "C"  void PeerConnectionM_remove_OnAudioBusReady_m771539546 (PeerConnectionM_t1544440329 * __this, AudioBusReadyDelegate_t1824694707 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_OnAudioBusReady_m771539546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioBusReadyDelegate_t1824694707 * V_0 = NULL;
	AudioBusReadyDelegate_t1824694707 * V_1 = NULL;
	{
		AudioBusReadyDelegate_t1824694707 * L_0 = __this->get_OnAudioBusReady_8();
		V_0 = L_0;
	}

IL_0007:
	{
		AudioBusReadyDelegate_t1824694707 * L_1 = V_0;
		V_1 = L_1;
		AudioBusReadyDelegate_t1824694707 ** L_2 = __this->get_address_of_OnAudioBusReady_8();
		AudioBusReadyDelegate_t1824694707 * L_3 = V_1;
		AudioBusReadyDelegate_t1824694707 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		AudioBusReadyDelegate_t1824694707 * L_6 = V_0;
		AudioBusReadyDelegate_t1824694707 * L_7 = InterlockedCompareExchangeImpl<AudioBusReadyDelegate_t1824694707 *>(L_2, ((AudioBusReadyDelegate_t1824694707 *)CastclassSealed((RuntimeObject*)L_5, AudioBusReadyDelegate_t1824694707_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		AudioBusReadyDelegate_t1824694707 * L_8 = V_0;
		AudioBusReadyDelegate_t1824694707 * L_9 = V_1;
		if ((!(((RuntimeObject*)(AudioBusReadyDelegate_t1824694707 *)L_8) == ((RuntimeObject*)(AudioBusReadyDelegate_t1824694707 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_FramgeGate_onRecieved(SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate)
extern "C"  void PeerConnectionM_add_FramgeGate_onRecieved_m3615637464 (PeerConnectionM_t1544440329 * __this, RecievedRGBFrameDelegate_t726515755 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_FramgeGate_onRecieved_m3615637464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecievedRGBFrameDelegate_t726515755 * V_0 = NULL;
	RecievedRGBFrameDelegate_t726515755 * V_1 = NULL;
	{
		RecievedRGBFrameDelegate_t726515755 * L_0 = __this->get_FramgeGate_onRecieved_10();
		V_0 = L_0;
	}

IL_0007:
	{
		RecievedRGBFrameDelegate_t726515755 * L_1 = V_0;
		V_1 = L_1;
		RecievedRGBFrameDelegate_t726515755 ** L_2 = __this->get_address_of_FramgeGate_onRecieved_10();
		RecievedRGBFrameDelegate_t726515755 * L_3 = V_1;
		RecievedRGBFrameDelegate_t726515755 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		RecievedRGBFrameDelegate_t726515755 * L_6 = V_0;
		RecievedRGBFrameDelegate_t726515755 * L_7 = InterlockedCompareExchangeImpl<RecievedRGBFrameDelegate_t726515755 *>(L_2, ((RecievedRGBFrameDelegate_t726515755 *)CastclassSealed((RuntimeObject*)L_5, RecievedRGBFrameDelegate_t726515755_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		RecievedRGBFrameDelegate_t726515755 * L_8 = V_0;
		RecievedRGBFrameDelegate_t726515755 * L_9 = V_1;
		if ((!(((RuntimeObject*)(RecievedRGBFrameDelegate_t726515755 *)L_8) == ((RuntimeObject*)(RecievedRGBFrameDelegate_t726515755 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_FramgeGate_onRecieved(SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate)
extern "C"  void PeerConnectionM_remove_FramgeGate_onRecieved_m1073588511 (PeerConnectionM_t1544440329 * __this, RecievedRGBFrameDelegate_t726515755 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_FramgeGate_onRecieved_m1073588511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecievedRGBFrameDelegate_t726515755 * V_0 = NULL;
	RecievedRGBFrameDelegate_t726515755 * V_1 = NULL;
	{
		RecievedRGBFrameDelegate_t726515755 * L_0 = __this->get_FramgeGate_onRecieved_10();
		V_0 = L_0;
	}

IL_0007:
	{
		RecievedRGBFrameDelegate_t726515755 * L_1 = V_0;
		V_1 = L_1;
		RecievedRGBFrameDelegate_t726515755 ** L_2 = __this->get_address_of_FramgeGate_onRecieved_10();
		RecievedRGBFrameDelegate_t726515755 * L_3 = V_1;
		RecievedRGBFrameDelegate_t726515755 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		RecievedRGBFrameDelegate_t726515755 * L_6 = V_0;
		RecievedRGBFrameDelegate_t726515755 * L_7 = InterlockedCompareExchangeImpl<RecievedRGBFrameDelegate_t726515755 *>(L_2, ((RecievedRGBFrameDelegate_t726515755 *)CastclassSealed((RuntimeObject*)L_5, RecievedRGBFrameDelegate_t726515755_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		RecievedRGBFrameDelegate_t726515755 * L_8 = V_0;
		RecievedRGBFrameDelegate_t726515755 * L_9 = V_1;
		if ((!(((RuntimeObject*)(RecievedRGBFrameDelegate_t726515755 *)L_8) == ((RuntimeObject*)(RecievedRGBFrameDelegate_t726515755 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnLocalSdpReadytoSend(SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate)
extern "C"  void PeerConnectionM_add_OnLocalSdpReadytoSend_m835606092 (PeerConnectionM_t1544440329 * __this, LocalSdpReadytoSendDelegate_t527669091 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_OnLocalSdpReadytoSend_m835606092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalSdpReadytoSendDelegate_t527669091 * V_0 = NULL;
	LocalSdpReadytoSendDelegate_t527669091 * V_1 = NULL;
	{
		LocalSdpReadytoSendDelegate_t527669091 * L_0 = __this->get_OnLocalSdpReadytoSend_12();
		V_0 = L_0;
	}

IL_0007:
	{
		LocalSdpReadytoSendDelegate_t527669091 * L_1 = V_0;
		V_1 = L_1;
		LocalSdpReadytoSendDelegate_t527669091 ** L_2 = __this->get_address_of_OnLocalSdpReadytoSend_12();
		LocalSdpReadytoSendDelegate_t527669091 * L_3 = V_1;
		LocalSdpReadytoSendDelegate_t527669091 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		LocalSdpReadytoSendDelegate_t527669091 * L_6 = V_0;
		LocalSdpReadytoSendDelegate_t527669091 * L_7 = InterlockedCompareExchangeImpl<LocalSdpReadytoSendDelegate_t527669091 *>(L_2, ((LocalSdpReadytoSendDelegate_t527669091 *)CastclassSealed((RuntimeObject*)L_5, LocalSdpReadytoSendDelegate_t527669091_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		LocalSdpReadytoSendDelegate_t527669091 * L_8 = V_0;
		LocalSdpReadytoSendDelegate_t527669091 * L_9 = V_1;
		if ((!(((RuntimeObject*)(LocalSdpReadytoSendDelegate_t527669091 *)L_8) == ((RuntimeObject*)(LocalSdpReadytoSendDelegate_t527669091 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_OnLocalSdpReadytoSend(SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate)
extern "C"  void PeerConnectionM_remove_OnLocalSdpReadytoSend_m2125799282 (PeerConnectionM_t1544440329 * __this, LocalSdpReadytoSendDelegate_t527669091 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_OnLocalSdpReadytoSend_m2125799282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalSdpReadytoSendDelegate_t527669091 * V_0 = NULL;
	LocalSdpReadytoSendDelegate_t527669091 * V_1 = NULL;
	{
		LocalSdpReadytoSendDelegate_t527669091 * L_0 = __this->get_OnLocalSdpReadytoSend_12();
		V_0 = L_0;
	}

IL_0007:
	{
		LocalSdpReadytoSendDelegate_t527669091 * L_1 = V_0;
		V_1 = L_1;
		LocalSdpReadytoSendDelegate_t527669091 ** L_2 = __this->get_address_of_OnLocalSdpReadytoSend_12();
		LocalSdpReadytoSendDelegate_t527669091 * L_3 = V_1;
		LocalSdpReadytoSendDelegate_t527669091 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		LocalSdpReadytoSendDelegate_t527669091 * L_6 = V_0;
		LocalSdpReadytoSendDelegate_t527669091 * L_7 = InterlockedCompareExchangeImpl<LocalSdpReadytoSendDelegate_t527669091 *>(L_2, ((LocalSdpReadytoSendDelegate_t527669091 *)CastclassSealed((RuntimeObject*)L_5, LocalSdpReadytoSendDelegate_t527669091_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		LocalSdpReadytoSendDelegate_t527669091 * L_8 = V_0;
		LocalSdpReadytoSendDelegate_t527669091 * L_9 = V_1;
		if ((!(((RuntimeObject*)(LocalSdpReadytoSendDelegate_t527669091 *)L_8) == ((RuntimeObject*)(LocalSdpReadytoSendDelegate_t527669091 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::add_OnIceCandiateReadytoSend(SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate)
extern "C"  void PeerConnectionM_add_OnIceCandiateReadytoSend_m128809503 (PeerConnectionM_t1544440329 * __this, IceCandiateReadytoSendDelegate_t3971808015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_add_OnIceCandiateReadytoSend_m128809503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IceCandiateReadytoSendDelegate_t3971808015 * V_0 = NULL;
	IceCandiateReadytoSendDelegate_t3971808015 * V_1 = NULL;
	{
		IceCandiateReadytoSendDelegate_t3971808015 * L_0 = __this->get_OnIceCandiateReadytoSend_14();
		V_0 = L_0;
	}

IL_0007:
	{
		IceCandiateReadytoSendDelegate_t3971808015 * L_1 = V_0;
		V_1 = L_1;
		IceCandiateReadytoSendDelegate_t3971808015 ** L_2 = __this->get_address_of_OnIceCandiateReadytoSend_14();
		IceCandiateReadytoSendDelegate_t3971808015 * L_3 = V_1;
		IceCandiateReadytoSendDelegate_t3971808015 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		IceCandiateReadytoSendDelegate_t3971808015 * L_6 = V_0;
		IceCandiateReadytoSendDelegate_t3971808015 * L_7 = InterlockedCompareExchangeImpl<IceCandiateReadytoSendDelegate_t3971808015 *>(L_2, ((IceCandiateReadytoSendDelegate_t3971808015 *)CastclassSealed((RuntimeObject*)L_5, IceCandiateReadytoSendDelegate_t3971808015_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		IceCandiateReadytoSendDelegate_t3971808015 * L_8 = V_0;
		IceCandiateReadytoSendDelegate_t3971808015 * L_9 = V_1;
		if ((!(((RuntimeObject*)(IceCandiateReadytoSendDelegate_t3971808015 *)L_8) == ((RuntimeObject*)(IceCandiateReadytoSendDelegate_t3971808015 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SimplePeerConnectionM.PeerConnectionM::remove_OnIceCandiateReadytoSend(SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate)
extern "C"  void PeerConnectionM_remove_OnIceCandiateReadytoSend_m3593025061 (PeerConnectionM_t1544440329 * __this, IceCandiateReadytoSendDelegate_t3971808015 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectionM_remove_OnIceCandiateReadytoSend_m3593025061_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IceCandiateReadytoSendDelegate_t3971808015 * V_0 = NULL;
	IceCandiateReadytoSendDelegate_t3971808015 * V_1 = NULL;
	{
		IceCandiateReadytoSendDelegate_t3971808015 * L_0 = __this->get_OnIceCandiateReadytoSend_14();
		V_0 = L_0;
	}

IL_0007:
	{
		IceCandiateReadytoSendDelegate_t3971808015 * L_1 = V_0;
		V_1 = L_1;
		IceCandiateReadytoSendDelegate_t3971808015 ** L_2 = __this->get_address_of_OnIceCandiateReadytoSend_14();
		IceCandiateReadytoSendDelegate_t3971808015 * L_3 = V_1;
		IceCandiateReadytoSendDelegate_t3971808015 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		IceCandiateReadytoSendDelegate_t3971808015 * L_6 = V_0;
		IceCandiateReadytoSendDelegate_t3971808015 * L_7 = InterlockedCompareExchangeImpl<IceCandiateReadytoSendDelegate_t3971808015 *>(L_2, ((IceCandiateReadytoSendDelegate_t3971808015 *)CastclassSealed((RuntimeObject*)L_5, IceCandiateReadytoSendDelegate_t3971808015_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		IceCandiateReadytoSendDelegate_t3971808015 * L_8 = V_0;
		IceCandiateReadytoSendDelegate_t3971808015 * L_9 = V_1;
		if ((!(((RuntimeObject*)(IceCandiateReadytoSendDelegate_t3971808015 *)L_8) == ((RuntimeObject*)(IceCandiateReadytoSendDelegate_t3971808015 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_AudioBusReadyDelegate_t1824694707 (AudioBusReadyDelegate_t1824694707 * __this, int32_t ___id0, intptr_t ___data1, int32_t ___bitsPerSample2, int32_t ___sampleRate3, int32_t ___numberOfChannels4, int32_t ___numberOfFrames5, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5);

}
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioBusReadyDelegate__ctor_m2464113959 (AudioBusReadyDelegate_t1824694707 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate::Invoke(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void AudioBusReadyDelegate_Invoke_m3854471619 (AudioBusReadyDelegate_t1824694707 * __this, int32_t ___id0, intptr_t ___data1, int32_t ___bitsPerSample2, int32_t ___sampleRate3, int32_t ___numberOfChannels4, int32_t ___numberOfFrames5, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AudioBusReadyDelegate_Invoke_m3854471619((AudioBusReadyDelegate_t1824694707 *)__this->get_prev_9(), ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 6)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5);
					else
						GenericVirtActionInvoker6< int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5);
					else
						VirtActionInvoker6< int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___data1, ___bitsPerSample2, ___sampleRate3, ___numberOfChannels4, ___numberOfFrames5, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AudioBusReadyDelegate_BeginInvoke_m2100580139 (AudioBusReadyDelegate_t1824694707 * __this, int32_t ___id0, intptr_t ___data1, int32_t ___bitsPerSample2, int32_t ___sampleRate3, int32_t ___numberOfChannels4, int32_t ___numberOfFrames5, AsyncCallback_t3962456242 * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioBusReadyDelegate_BeginInvoke_m2100580139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data1);
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___bitsPerSample2);
	__d_args[3] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___sampleRate3);
	__d_args[4] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___numberOfChannels4);
	__d_args[5] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___numberOfFrames5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AudioBusReadyDelegate_EndInvoke_m1391097284 (AudioBusReadyDelegate_t1824694707 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_AudioBusReadyInternalDelegate_t2220975906 (AudioBusReadyInternalDelegate_t2220975906 * __this, intptr_t ___data0, int32_t ___bitsPerSample1, int32_t ___sampleRate2, int32_t ___numberOfChannels3, int32_t ___numberOfFrames4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, int32_t, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4);

}
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void AudioBusReadyInternalDelegate__ctor_m2901242911 (AudioBusReadyInternalDelegate_t2220975906 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate::Invoke(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void AudioBusReadyInternalDelegate_Invoke_m3031619375 (AudioBusReadyInternalDelegate_t2220975906 * __this, intptr_t ___data0, int32_t ___bitsPerSample1, int32_t ___sampleRate2, int32_t ___numberOfChannels3, int32_t ___numberOfFrames4, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		AudioBusReadyInternalDelegate_Invoke_m3031619375((AudioBusReadyInternalDelegate_t2220975906 *)__this->get_prev_9(), ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 5)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4);
					else
						GenericVirtActionInvoker5< intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4);
					else
						VirtActionInvoker5< intptr_t, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, ___bitsPerSample1, ___sampleRate2, ___numberOfChannels3, ___numberOfFrames4, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate::BeginInvoke(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* AudioBusReadyInternalDelegate_BeginInvoke_m1432301034 (AudioBusReadyInternalDelegate_t2220975906 * __this, intptr_t ___data0, int32_t ___bitsPerSample1, int32_t ___sampleRate2, int32_t ___numberOfChannels3, int32_t ___numberOfFrames4, AsyncCallback_t3962456242 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioBusReadyInternalDelegate_BeginInvoke_m1432301034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___data0);
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___bitsPerSample1);
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___sampleRate2);
	__d_args[3] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___numberOfChannels3);
	__d_args[4] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___numberOfFrames4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/AudioBusReadyInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void AudioBusReadyInternalDelegate_EndInvoke_m1064307047 (AudioBusReadyInternalDelegate_t2220975906 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DataFromDataChannelReadyDelegate_t2867388022 (DataFromDataChannelReadyDelegate_t2867388022 * __this, int32_t ___id0, String_t* ___s1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___s1' to native representation
	char* ____s1_marshaled = NULL;
	____s1_marshaled = il2cpp_codegen_marshal_string(___s1);

	// Native function invocation
	il2cppPInvokeFunc(___id0, ____s1_marshaled);

	// Marshaling cleanup of parameter '___s1' native representation
	il2cpp_codegen_marshal_free(____s1_marshaled);
	____s1_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DataFromDataChannelReadyDelegate__ctor_m1850655292 (DataFromDataChannelReadyDelegate_t2867388022 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate::Invoke(System.Int32,System.String)
extern "C"  void DataFromDataChannelReadyDelegate_Invoke_m167498838 (DataFromDataChannelReadyDelegate_t2867388022 * __this, int32_t ___id0, String_t* ___s1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DataFromDataChannelReadyDelegate_Invoke_m167498838((DataFromDataChannelReadyDelegate_t2867388022 *)__this->get_prev_9(), ___id0, ___s1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, ___s1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, ___s1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___s1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___s1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___s1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___s1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___s1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* DataFromDataChannelReadyDelegate_BeginInvoke_m267608053 (DataFromDataChannelReadyDelegate_t2867388022 * __this, int32_t ___id0, String_t* ___s1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataFromDataChannelReadyDelegate_BeginInvoke_m267608053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	__d_args[1] = ___s1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void DataFromDataChannelReadyDelegate_EndInvoke_m1490877428 (DataFromDataChannelReadyDelegate_t2867388022 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_DataFromDataChannelReadyInternalDelegate_t513489297 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___s0' to native representation
	char* ____s0_marshaled = NULL;
	____s0_marshaled = il2cpp_codegen_marshal_string(___s0);

	// Native function invocation
	il2cppPInvokeFunc(____s0_marshaled);

	// Marshaling cleanup of parameter '___s0' native representation
	il2cpp_codegen_marshal_free(____s0_marshaled);
	____s0_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DataFromDataChannelReadyInternalDelegate__ctor_m604148853 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate::Invoke(System.String)
extern "C"  void DataFromDataChannelReadyInternalDelegate_Invoke_m153636077 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		DataFromDataChannelReadyInternalDelegate_Invoke_m153636077((DataFromDataChannelReadyInternalDelegate_t513489297 *)__this->get_prev_9(), ___s0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___s0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___s0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___s0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___s0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___s0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___s0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___s0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___s0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___s0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___s0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___s0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___s0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* DataFromDataChannelReadyInternalDelegate_BeginInvoke_m664167412 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, String_t* ___s0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___s0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/DataFromDataChannelReadyInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void DataFromDataChannelReadyInternalDelegate_EndInvoke_m3016309850 (DataFromDataChannelReadyInternalDelegate_t513489297 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_FailureMessageDelegate_t3750826190 (FailureMessageDelegate_t3750826190 * __this, int32_t ___id0, String_t* ___msg1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg1' to native representation
	char* ____msg1_marshaled = NULL;
	____msg1_marshaled = il2cpp_codegen_marshal_string(___msg1);

	// Native function invocation
	il2cppPInvokeFunc(___id0, ____msg1_marshaled);

	// Marshaling cleanup of parameter '___msg1' native representation
	il2cpp_codegen_marshal_free(____msg1_marshaled);
	____msg1_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FailureMessageDelegate__ctor_m2840523361 (FailureMessageDelegate_t3750826190 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate::Invoke(System.Int32,System.String)
extern "C"  void FailureMessageDelegate_Invoke_m2465925799 (FailureMessageDelegate_t3750826190 * __this, int32_t ___id0, String_t* ___msg1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		FailureMessageDelegate_Invoke_m2465925799((FailureMessageDelegate_t3750826190 *)__this->get_prev_9(), ___id0, ___msg1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, ___msg1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, ___msg1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___msg1);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___msg1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___msg1);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___msg1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___msg1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate::BeginInvoke(System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* FailureMessageDelegate_BeginInvoke_m1141354983 (FailureMessageDelegate_t3750826190 * __this, int32_t ___id0, String_t* ___msg1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FailureMessageDelegate_BeginInvoke_m1141354983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	__d_args[1] = ___msg1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FailureMessageDelegate_EndInvoke_m1419527959 (FailureMessageDelegate_t3750826190 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_FailureMessageInternalDelegate_t3617644009 (FailureMessageInternalDelegate_t3617644009 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	il2cppPInvokeFunc(____msg0_marshaled);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FailureMessageInternalDelegate__ctor_m3505053702 (FailureMessageInternalDelegate_t3617644009 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate::Invoke(System.String)
extern "C"  void FailureMessageInternalDelegate_Invoke_m656394069 (FailureMessageInternalDelegate_t3617644009 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		FailureMessageInternalDelegate_Invoke_m656394069((FailureMessageInternalDelegate_t3617644009 *)__this->get_prev_9(), ___msg0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___msg0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___msg0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___msg0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___msg0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___msg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___msg0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___msg0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___msg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___msg0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___msg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___msg0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* FailureMessageInternalDelegate_BeginInvoke_m1576276590 (FailureMessageInternalDelegate_t3617644009 * __this, String_t* ___msg0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___msg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/FailureMessageInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FailureMessageInternalDelegate_EndInvoke_m3100855380 (FailureMessageInternalDelegate_t3617644009 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_IceCandiateReadytoSendDelegate_t3971808015 (IceCandiateReadytoSendDelegate_t3971808015 * __this, int32_t ___id0, String_t* ___candidate1, int32_t ___sdpMlineIndex2, String_t* ___sdpMid3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___candidate1' to native representation
	char* ____candidate1_marshaled = NULL;
	____candidate1_marshaled = il2cpp_codegen_marshal_string(___candidate1);

	// Marshaling of parameter '___sdpMid3' to native representation
	char* ____sdpMid3_marshaled = NULL;
	____sdpMid3_marshaled = il2cpp_codegen_marshal_string(___sdpMid3);

	// Native function invocation
	il2cppPInvokeFunc(___id0, ____candidate1_marshaled, ___sdpMlineIndex2, ____sdpMid3_marshaled);

	// Marshaling cleanup of parameter '___candidate1' native representation
	il2cpp_codegen_marshal_free(____candidate1_marshaled);
	____candidate1_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdpMid3' native representation
	il2cpp_codegen_marshal_free(____sdpMid3_marshaled);
	____sdpMid3_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IceCandiateReadytoSendDelegate__ctor_m3817349325 (IceCandiateReadytoSendDelegate_t3971808015 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate::Invoke(System.Int32,System.String,System.Int32,System.String)
extern "C"  void IceCandiateReadytoSendDelegate_Invoke_m1101032379 (IceCandiateReadytoSendDelegate_t3971808015 * __this, int32_t ___id0, String_t* ___candidate1, int32_t ___sdpMlineIndex2, String_t* ___sdpMid3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		IceCandiateReadytoSendDelegate_Invoke_m1101032379((IceCandiateReadytoSendDelegate_t3971808015 *)__this->get_prev_9(), ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, String_t*, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3);
					else
						GenericVirtActionInvoker4< int32_t, String_t*, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, String_t*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3);
					else
						VirtActionInvoker4< int32_t, String_t*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___candidate1, ___sdpMlineIndex2, ___sdpMid3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate::BeginInvoke(System.Int32,System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* IceCandiateReadytoSendDelegate_BeginInvoke_m1070973458 (IceCandiateReadytoSendDelegate_t3971808015 * __this, int32_t ___id0, String_t* ___candidate1, int32_t ___sdpMlineIndex2, String_t* ___sdpMid3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IceCandiateReadytoSendDelegate_BeginInvoke_m1070973458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	__d_args[1] = ___candidate1;
	__d_args[2] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___sdpMlineIndex2);
	__d_args[3] = ___sdpMid3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void IceCandiateReadytoSendDelegate_EndInvoke_m400855919 (IceCandiateReadytoSendDelegate_t3971808015 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_IceCandiateReadytoSendInternalDelegate_t754111350 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___candidate0' to native representation
	char* ____candidate0_marshaled = NULL;
	____candidate0_marshaled = il2cpp_codegen_marshal_string(___candidate0);

	// Marshaling of parameter '___sdpMid2' to native representation
	char* ____sdpMid2_marshaled = NULL;
	____sdpMid2_marshaled = il2cpp_codegen_marshal_string(___sdpMid2);

	// Native function invocation
	il2cppPInvokeFunc(____candidate0_marshaled, ___sdpMlineIndex1, ____sdpMid2_marshaled);

	// Marshaling cleanup of parameter '___candidate0' native representation
	il2cpp_codegen_marshal_free(____candidate0_marshaled);
	____candidate0_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdpMid2' native representation
	il2cpp_codegen_marshal_free(____sdpMid2_marshaled);
	____sdpMid2_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void IceCandiateReadytoSendInternalDelegate__ctor_m2193365268 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate::Invoke(System.String,System.Int32,System.String)
extern "C"  void IceCandiateReadytoSendInternalDelegate_Invoke_m3800185323 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		IceCandiateReadytoSendInternalDelegate_Invoke_m3800185323((IceCandiateReadytoSendInternalDelegate_t754111350 *)__this->get_prev_9(), ___candidate0, ___sdpMlineIndex1, ___sdpMid2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___candidate0, ___sdpMlineIndex1, ___sdpMid2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___candidate0, ___sdpMlineIndex1, ___sdpMid2, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
					else
						GenericVirtActionInvoker3< String_t*, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
					else
						VirtActionInvoker3< String_t*, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___candidate0, ___sdpMlineIndex1, ___sdpMid2, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
					else
						GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
					else
						VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___candidate0, ___sdpMlineIndex1, ___sdpMid2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___candidate0, ___sdpMlineIndex1, ___sdpMid2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate::BeginInvoke(System.String,System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* IceCandiateReadytoSendInternalDelegate_BeginInvoke_m2121857840 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IceCandiateReadytoSendInternalDelegate_BeginInvoke_m2121857840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___candidate0;
	__d_args[1] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___sdpMlineIndex1);
	__d_args[2] = ___sdpMid2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/IceCandiateReadytoSendInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void IceCandiateReadytoSendInternalDelegate_EndInvoke_m2404595968 (IceCandiateReadytoSendInternalDelegate_t754111350 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_LocalDataChannelReadyDelegate_t1540256137 (LocalDataChannelReadyDelegate_t1540256137 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0);

}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalDataChannelReadyDelegate__ctor_m4163028518 (LocalDataChannelReadyDelegate_t1540256137 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate::Invoke(System.Int32)
extern "C"  void LocalDataChannelReadyDelegate_Invoke_m1407566565 (LocalDataChannelReadyDelegate_t1540256137 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		LocalDataChannelReadyDelegate_Invoke_m1407566565((LocalDataChannelReadyDelegate_t1540256137 *)__this->get_prev_9(), ___id0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___id0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* LocalDataChannelReadyDelegate_BeginInvoke_m2806540801 (LocalDataChannelReadyDelegate_t1540256137 * __this, int32_t ___id0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalDataChannelReadyDelegate_BeginInvoke_m2806540801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LocalDataChannelReadyDelegate_EndInvoke_m908398377 (LocalDataChannelReadyDelegate_t1540256137 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_LocalDataChannelReadyInternalDelegate_t4253056107 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalDataChannelReadyInternalDelegate__ctor_m1939356344 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate::Invoke()
extern "C"  void LocalDataChannelReadyInternalDelegate_Invoke_m4080767948 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		LocalDataChannelReadyInternalDelegate_Invoke_m4080767948((LocalDataChannelReadyInternalDelegate_t4253056107 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* LocalDataChannelReadyInternalDelegate_BeginInvoke_m3688485327 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalDataChannelReadyInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LocalDataChannelReadyInternalDelegate_EndInvoke_m1921608429 (LocalDataChannelReadyInternalDelegate_t4253056107 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_LocalSdpReadytoSendDelegate_t527669091 (LocalSdpReadytoSendDelegate_t527669091 * __this, int32_t ___id0, String_t* ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___type1' to native representation
	char* ____type1_marshaled = NULL;
	____type1_marshaled = il2cpp_codegen_marshal_string(___type1);

	// Marshaling of parameter '___sdp2' to native representation
	char* ____sdp2_marshaled = NULL;
	____sdp2_marshaled = il2cpp_codegen_marshal_string(___sdp2);

	// Native function invocation
	il2cppPInvokeFunc(___id0, ____type1_marshaled, ____sdp2_marshaled);

	// Marshaling cleanup of parameter '___type1' native representation
	il2cpp_codegen_marshal_free(____type1_marshaled);
	____type1_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdp2' native representation
	il2cpp_codegen_marshal_free(____sdp2_marshaled);
	____sdp2_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalSdpReadytoSendDelegate__ctor_m144972830 (LocalSdpReadytoSendDelegate_t527669091 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate::Invoke(System.Int32,System.String,System.String)
extern "C"  void LocalSdpReadytoSendDelegate_Invoke_m3704001102 (LocalSdpReadytoSendDelegate_t527669091 * __this, int32_t ___id0, String_t* ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		LocalSdpReadytoSendDelegate_Invoke_m3704001102((LocalSdpReadytoSendDelegate_t527669091 *)__this->get_prev_9(), ___id0, ___type1, ___sdp2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, ___type1, ___sdp2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, ___type1, ___sdp2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___type1, ___sdp2);
					else
						GenericVirtActionInvoker3< int32_t, String_t*, String_t* >::Invoke(targetMethod, targetThis, ___id0, ___type1, ___sdp2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___type1, ___sdp2);
					else
						VirtActionInvoker3< int32_t, String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___type1, ___sdp2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___type1, ___sdp2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate::BeginInvoke(System.Int32,System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* LocalSdpReadytoSendDelegate_BeginInvoke_m3972429737 (LocalSdpReadytoSendDelegate_t527669091 * __this, int32_t ___id0, String_t* ___type1, String_t* ___sdp2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalSdpReadytoSendDelegate_BeginInvoke_m3972429737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	__d_args[1] = ___type1;
	__d_args[2] = ___sdp2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LocalSdpReadytoSendDelegate_EndInvoke_m1482884215 (LocalSdpReadytoSendDelegate_t527669091 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_LocalSdpReadytoSendInternalDelegate_t4044312851 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___type0' to native representation
	char* ____type0_marshaled = NULL;
	____type0_marshaled = il2cpp_codegen_marshal_string(___type0);

	// Marshaling of parameter '___sdp1' to native representation
	char* ____sdp1_marshaled = NULL;
	____sdp1_marshaled = il2cpp_codegen_marshal_string(___sdp1);

	// Native function invocation
	il2cppPInvokeFunc(____type0_marshaled, ____sdp1_marshaled);

	// Marshaling cleanup of parameter '___type0' native representation
	il2cpp_codegen_marshal_free(____type0_marshaled);
	____type0_marshaled = NULL;

	// Marshaling cleanup of parameter '___sdp1' native representation
	il2cpp_codegen_marshal_free(____sdp1_marshaled);
	____sdp1_marshaled = NULL;

}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LocalSdpReadytoSendInternalDelegate__ctor_m3323919969 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate::Invoke(System.String,System.String)
extern "C"  void LocalSdpReadytoSendInternalDelegate_Invoke_m93520032 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		LocalSdpReadytoSendInternalDelegate_Invoke_m93520032((LocalSdpReadytoSendInternalDelegate_t4044312851 *)__this->get_prev_9(), ___type0, ___sdp1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___type0, ___sdp1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___type0, ___sdp1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___type0, ___sdp1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___type0, ___sdp1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___type0, ___sdp1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___type0, ___sdp1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___type0, ___sdp1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___type0, ___sdp1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___type0, ___sdp1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___type0, ___sdp1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___type0, ___sdp1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___type0, ___sdp1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* LocalSdpReadytoSendInternalDelegate_BeginInvoke_m2684073891 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, String_t* ___type0, String_t* ___sdp1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___type0;
	__d_args[1] = ___sdp1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/LocalSdpReadytoSendInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LocalSdpReadytoSendInternalDelegate_EndInvoke_m312257225 (LocalSdpReadytoSendInternalDelegate_t4044312851 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RecievedRGBFrameDelegate_t726515755 (RecievedRGBFrameDelegate_t726515755 * __this, int32_t ___id0, intptr_t ___rgb1, uint32_t ___width2, uint32_t ___height3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, intptr_t, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___id0, ___rgb1, ___width2, ___height3);

}
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RecievedRGBFrameDelegate__ctor_m975400911 (RecievedRGBFrameDelegate_t726515755 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate::Invoke(System.Int32,System.IntPtr,System.UInt32,System.UInt32)
extern "C"  void RecievedRGBFrameDelegate_Invoke_m3318570457 (RecievedRGBFrameDelegate_t726515755 * __this, int32_t ___id0, intptr_t ___rgb1, uint32_t ___width2, uint32_t ___height3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		RecievedRGBFrameDelegate_Invoke_m3318570457((RecievedRGBFrameDelegate_t726515755 *)__this->get_prev_9(), ___id0, ___rgb1, ___width2, ___height3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___id0, ___rgb1, ___width2, ___height3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___id0, ___rgb1, ___width2, ___height3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, intptr_t, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___id0, ___rgb1, ___width2, ___height3);
					else
						GenericVirtActionInvoker4< int32_t, intptr_t, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___id0, ___rgb1, ___width2, ___height3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, intptr_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___rgb1, ___width2, ___height3);
					else
						VirtActionInvoker4< int32_t, intptr_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___rgb1, ___width2, ___height3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___rgb1, ___width2, ___height3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate::BeginInvoke(System.Int32,System.IntPtr,System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* RecievedRGBFrameDelegate_BeginInvoke_m1484175643 (RecievedRGBFrameDelegate_t726515755 * __this, int32_t ___id0, intptr_t ___rgb1, uint32_t ___width2, uint32_t ___height3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecievedRGBFrameDelegate_BeginInvoke_m1484175643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___id0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rgb1);
	__d_args[2] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___width2);
	__d_args[3] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___height3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void RecievedRGBFrameDelegate_EndInvoke_m2632805723 (RecievedRGBFrameDelegate_t726515755 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_RecievedRGBFrameInternalDelegate_t1745086045 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, intptr_t ___rgb0, uint32_t ___width1, uint32_t ___height2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t, uint32_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___rgb0, ___width1, ___height2);

}
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void RecievedRGBFrameInternalDelegate__ctor_m44051601 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate::Invoke(System.IntPtr,System.UInt32,System.UInt32)
extern "C"  void RecievedRGBFrameInternalDelegate_Invoke_m41080840 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, intptr_t ___rgb0, uint32_t ___width1, uint32_t ___height2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		RecievedRGBFrameInternalDelegate_Invoke_m41080840((RecievedRGBFrameInternalDelegate_t1745086045 *)__this->get_prev_9(), ___rgb0, ___width1, ___height2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___rgb0, ___width1, ___height2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___rgb0, ___width1, ___height2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___rgb0, ___width1, ___height2);
					else
						GenericVirtActionInvoker3< intptr_t, uint32_t, uint32_t >::Invoke(targetMethod, targetThis, ___rgb0, ___width1, ___height2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___rgb0, ___width1, ___height2);
					else
						VirtActionInvoker3< intptr_t, uint32_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___rgb0, ___width1, ___height2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, uint32_t, uint32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___rgb0, ___width1, ___height2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate::BeginInvoke(System.IntPtr,System.UInt32,System.UInt32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* RecievedRGBFrameInternalDelegate_BeginInvoke_m1395819739 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, intptr_t ___rgb0, uint32_t ___width1, uint32_t ___height2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecievedRGBFrameInternalDelegate_BeginInvoke_m1395819739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___rgb0);
	__d_args[1] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___width1);
	__d_args[2] = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &___height2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void SimplePeerConnectionM.PeerConnectionM/RecievedRGBFrameInternalDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void RecievedRGBFrameInternalDelegate_EndInvoke_m2325088855 (RecievedRGBFrameInternalDelegate_t1745086045 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcController::.ctor()
extern "C"  void WebRtcController__ctor_m1109465847 (WebRtcController_t2826223470 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcController::Start()
extern "C"  void WebRtcController_Start_m3487213827 (WebRtcController_t2826223470 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcController_Start_m3487213827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	int32_t V_2 = 0;
	{
		WebRtcCoreiOS_t2902875004 * L_0 = (WebRtcCoreiOS_t2902875004 *)il2cpp_codegen_object_new(WebRtcCoreiOS_t2902875004_il2cpp_TypeInfo_var);
		WebRtcCoreiOS__ctor_m793953905(L_0, /*hidden argument*/NULL);
		__this->set_webRtcCore_2(L_0);
		WebRtcCore_t934528111 * L_1 = __this->get_webRtcCore_2();
		GameObject_t1113636619 * L_2 = __this->get_webRtcMsgExchanger_3();
		NullCheck(L_2);
		WebRtcMsgExchanger_t3272896331 * L_3 = GameObject_GetComponent_TisWebRtcMsgExchanger_t3272896331_m3981858059(L_2, /*hidden argument*/GameObject_GetComponent_TisWebRtcMsgExchanger_t3272896331_m3981858059_RuntimeMethod_var);
		NullCheck(L_1);
		WebRtcCore_set_MsgExchanger_m3215172827(L_1, L_3, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_4 = __this->get_RenderingTargets_4();
		V_1 = L_4;
		V_2 = 0;
		goto IL_0037;
	}

IL_002f:
	{
		GameObjectU5BU5D_t3328599146* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t1113636619 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		GameObjectU5BU5D_t3328599146* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void WebRtcController::RequestCreateOffer()
extern "C"  void WebRtcController_RequestCreateOffer_m3911837240 (WebRtcController_t2826223470 * __this, const RuntimeMethod* method)
{
	{
		WebRtcCore_t934528111 * L_0 = __this->get_webRtcCore_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void WebRtcCore::CreateOffer() */, L_0);
		return;
	}
}
// System.Void WebRtcController::Update()
extern "C"  void WebRtcController_Update_m4229718253 (WebRtcController_t2826223470 * __this, const RuntimeMethod* method)
{
	{
		WebRtcCore_t934528111 * L_0 = __this->get_webRtcCore_2();
		RenderTexture_t2108887433 * L_1 = __this->get_SubCameraTexture_5();
		NullCheck(L_0);
		VirtActionInvoker1< RenderTexture_t2108887433 * >::Invoke(8 /* System.Void WebRtcCore::FrameGate_Input(UnityEngine.RenderTexture) */, L_0, L_1);
		WebRtcCore_t934528111 * L_2 = __this->get_webRtcCore_2();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(6 /* System.Void WebRtcCore::Update() */, L_2);
		return;
	}
}
// System.Void WebRtcController::OnDestroy()
extern "C"  void WebRtcController_OnDestroy_m1272203155 (WebRtcController_t2826223470 * __this, const RuntimeMethod* method)
{
	{
		WebRtcCore_t934528111 * L_0 = __this->get_webRtcCore_2();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(4 /* System.Void WebRtcCore::Close() */, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcCore::.ctor()
extern "C"  void WebRtcCore__ctor_m2212621533 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCore::set_MsgExchanger(WebRtcMsgExchanger)
extern "C"  void WebRtcCore_set_MsgExchanger_m3215172827 (WebRtcCore_t934528111 * __this, WebRtcMsgExchanger_t3272896331 * ___value0, const RuntimeMethod* method)
{
	{
		WebRtcMsgExchanger_t3272896331 * L_0 = ___value0;
		__this->set_msgExchanger_2(L_0);
		WebRtcMsgExchanger_t3272896331 * L_1 = __this->get_msgExchanger_2();
		NullCheck(L_1);
		L_1->set_RtcCore_2(__this);
		return;
	}
}
// WebRtcMsgExchanger WebRtcCore::get_MsgExchanger()
extern "C"  WebRtcMsgExchanger_t3272896331 * WebRtcCore_get_MsgExchanger_m3784267525 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method)
{
	{
		WebRtcMsgExchanger_t3272896331 * L_0 = __this->get_msgExchanger_2();
		return L_0;
	}
}
// System.Void WebRtcCore::Close()
extern "C"  void WebRtcCore_Close_m300404744 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCore::CreateOffer()
extern "C"  void WebRtcCore_CreateOffer_m2412945592 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCore::Update()
extern "C"  void WebRtcCore_Update_m297660215 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCore::FrameGate_Input(UnityEngine.Texture2D)
extern "C"  void WebRtcCore_FrameGate_Input_m646372646 (WebRtcCore_t934528111 * __this, Texture2D_t3840446185 * ___tex0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCore::FrameGate_Input(UnityEngine.RenderTexture)
extern "C"  void WebRtcCore_FrameGate_Input_m2557469663 (WebRtcCore_t934528111 * __this, RenderTexture_t2108887433 * ___rtex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCore_FrameGate_Input_m2557469663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_t2108887433 * V_0 = NULL;
	{
		Texture2D_t3840446185 * L_0 = __this->get_inputTexture_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Texture2D_t3840446185 * L_2 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_2, ((int32_t)480), ((int32_t)640), 5, (bool)0, /*hidden argument*/NULL);
		__this->set_inputTexture_1(L_2);
	}

IL_0028:
	{
		RenderTexture_t2108887433 * L_3 = RenderTexture_get_active_m2427925032(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		RenderTexture_t2108887433 * L_4 = ___rtex0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_5 = __this->get_inputTexture_1();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		RenderTexture_t2108887433 * L_7 = ___rtex0;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_7);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0060;
		}
	}
	{
		Texture2D_t3840446185 * L_9 = __this->get_inputTexture_1();
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_9);
		RenderTexture_t2108887433 * L_11 = ___rtex0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_11);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}

IL_0060:
	{
		return;
	}

IL_0061:
	{
		Texture2D_t3840446185 * L_13 = __this->get_inputTexture_1();
		RenderTexture_t2108887433 * L_14 = ___rtex0;
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		RenderTexture_t2108887433 * L_16 = ___rtex0;
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		Rect_t2360479859  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Rect__ctor_m2614021312((&L_18), (0.0f), (0.0f), (((float)((float)L_15))), (((float)((float)L_17))), /*hidden argument*/NULL);
		NullCheck(L_13);
		Texture2D_ReadPixels_m3395504488(L_13, L_18, 0, 0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_19 = __this->get_inputTexture_1();
		NullCheck(L_19);
		Texture2D_Apply_m2271746283(L_19, /*hidden argument*/NULL);
		RenderTexture_t2108887433 * L_20 = V_0;
		RenderTexture_set_active_m1437732586(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_21 = __this->get_inputTexture_1();
		VirtActionInvoker1< Texture2D_t3840446185 * >::Invoke(7 /* System.Void WebRtcCore::FrameGate_Input(UnityEngine.Texture2D) */, __this, L_21);
		return;
	}
}
// System.Void WebRtcCore::Destroy()
extern "C"  void WebRtcCore_Destroy_m1366185601 (WebRtcCore_t934528111 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCore::RecievedMessage(System.String,System.String)
extern "C"  void WebRtcCore_RecievedMessage_m1484794790 (WebRtcCore_t934528111 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcCoreiOS::.ctor()
extern "C"  void WebRtcCoreiOS__ctor_m793953905 (WebRtcCoreiOS_t2902875004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreiOS__ctor_m793953905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebRtcCore__ctor_m2212621533(__this, /*hidden argument*/NULL);
		WebRtcCoreiOS_CoMuLogger_Log_m2362021428(NULL /*static, unused*/, _stringLiteral2962428090, /*hidden argument*/NULL);
		PeerConnectioniOS_t1321012807 * L_0 = (PeerConnectioniOS_t1321012807 *)il2cpp_codegen_object_new(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var);
		PeerConnectioniOS__ctor_m695293517(L_0, /*hidden argument*/NULL);
		__this->set_peer_3(L_0);
		PeerConnectioniOS_t1321012807 * L_1 = __this->get_peer_3();
		intptr_t L_2 = (intptr_t)WebRtcCoreiOS_SdpReadyCallback_m530249718_RuntimeMethod_var;
		SDPREADY_Delegate_t94822726 * L_3 = (SDPREADY_Delegate_t94822726 *)il2cpp_codegen_object_new(SDPREADY_Delegate_t94822726_il2cpp_TypeInfo_var);
		SDPREADY_Delegate__ctor_m3757528741(L_3, __this, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		PeerConnectioniOS_add_OnLocalSdpReady_m2462805725(L_1, L_3, /*hidden argument*/NULL);
		WebRtcCoreiOS_CoMuLogger_Log_m2362021428(NULL /*static, unused*/, _stringLiteral515161096, /*hidden argument*/NULL);
		PeerConnectioniOS_t1321012807 * L_4 = __this->get_peer_3();
		NullCheck(L_4);
		PeerConnectioniOS_CallTest_m3021989603(L_4, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL CoMuLogger_Log(char*);
// System.Void WebRtcCoreiOS::CoMuLogger_Log(System.String)
extern "C"  void WebRtcCoreiOS_CoMuLogger_Log_m2362021428 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___msg0' to native representation
	char* ____msg0_marshaled = NULL;
	____msg0_marshaled = il2cpp_codegen_marshal_string(___msg0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CoMuLogger_Log)(____msg0_marshaled);

	// Marshaling cleanup of parameter '___msg0' native representation
	il2cpp_codegen_marshal_free(____msg0_marshaled);
	____msg0_marshaled = NULL;

}
// System.Void WebRtcCoreiOS::SdpReadyCallback(System.String,System.String)
extern "C"  void WebRtcCoreiOS_SdpReadyCallback_m530249718 (WebRtcCoreiOS_t2902875004 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreiOS_SdpReadyCallback_m530249718_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___type0;
		String_t* L_1 = ___sdp1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3757327182, L_0, _stringLiteral3450517380, L_1, /*hidden argument*/NULL);
		WebRtcCoreiOS_CoMuLogger_Log_m2362021428(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreiOS::Close()
extern "C"  void WebRtcCoreiOS_Close_m814323968 (WebRtcCoreiOS_t2902875004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreiOS_Close_m814323968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebRtcCoreiOS_CoMuLogger_Log_m2362021428(NULL /*static, unused*/, _stringLiteral3963721087, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreiOS::CreateOffer()
extern "C"  void WebRtcCoreiOS_CreateOffer_m1410769418 (WebRtcCoreiOS_t2902875004 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreiOS_CreateOffer_m1410769418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebRtcCoreiOS_CoMuLogger_Log_m2362021428(NULL /*static, unused*/, _stringLiteral1609782641, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreiOS::Update()
extern "C"  void WebRtcCoreiOS_Update_m1830328740 (WebRtcCoreiOS_t2902875004 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCoreiOS::FrameGate_Input(UnityEngine.RenderTexture)
extern "C"  void WebRtcCoreiOS_FrameGate_Input_m3872708861 (WebRtcCoreiOS_t2902875004 * __this, RenderTexture_t2108887433 * ___rtex0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCoreiOS::FrameGate_Input(UnityEngine.Texture2D)
extern "C"  void WebRtcCoreiOS_FrameGate_Input_m4022184217 (WebRtcCoreiOS_t2902875004 * __this, Texture2D_t3840446185 * ___tex0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcCoreiOS::RecievedMessage(System.String,System.String)
extern "C"  void WebRtcCoreiOS_RecievedMessage_m1868149711 (WebRtcCoreiOS_t2902875004 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcCoreWindows::.ctor()
extern "C"  void WebRtcCoreWindows__ctor_m3315090686 (WebRtcCoreWindows_t2553259814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows__ctor_m3315090686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	{
		WebRtcCore__ctor_m2212621533(__this, /*hidden argument*/NULL);
		VirtActionInvoker0::Invoke(4 /* System.Void WebRtcCore::Close() */, __this);
		List_1_t3319525431 * L_0 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_0, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t3319525431 * L_1 = V_0;
		NullCheck(L_1);
		List_1_Add_m1685793073(L_1, _stringLiteral1803913336, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		PeerConnectionM_t1544440329 * L_5 = (PeerConnectionM_t1544440329 *)il2cpp_codegen_object_new(PeerConnectionM_t1544440329_il2cpp_TypeInfo_var);
		PeerConnectionM__ctor_m2038595787(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_peer_3(L_5);
		PeerConnectionM_t1544440329 * L_6 = __this->get_peer_3();
		NullCheck(L_6);
		int32_t L_7 = PeerConnectionM_GetUniqueId_m834968440(L_6, /*hidden argument*/NULL);
		__this->set_UniquePeerId_10(L_7);
		PeerConnectionM_t1544440329 * L_8 = __this->get_peer_3();
		intptr_t L_9 = (intptr_t)WebRtcCoreWindows_OnLocalSdpReadytoSend_m1897714168_RuntimeMethod_var;
		LocalSdpReadytoSendDelegate_t527669091 * L_10 = (LocalSdpReadytoSendDelegate_t527669091 *)il2cpp_codegen_object_new(LocalSdpReadytoSendDelegate_t527669091_il2cpp_TypeInfo_var);
		LocalSdpReadytoSendDelegate__ctor_m144972830(L_10, __this, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		PeerConnectionM_add_OnLocalSdpReadytoSend_m835606092(L_8, L_10, /*hidden argument*/NULL);
		PeerConnectionM_t1544440329 * L_11 = __this->get_peer_3();
		intptr_t L_12 = (intptr_t)WebRtcCoreWindows_OnIceCandiateReadytoSend_m680431510_RuntimeMethod_var;
		IceCandiateReadytoSendDelegate_t3971808015 * L_13 = (IceCandiateReadytoSendDelegate_t3971808015 *)il2cpp_codegen_object_new(IceCandiateReadytoSendDelegate_t3971808015_il2cpp_TypeInfo_var);
		IceCandiateReadytoSendDelegate__ctor_m3817349325(L_13, __this, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		PeerConnectionM_add_OnIceCandiateReadytoSend_m128809503(L_11, L_13, /*hidden argument*/NULL);
		PeerConnectionM_t1544440329 * L_14 = __this->get_peer_3();
		intptr_t L_15 = (intptr_t)WebRtcCoreWindows_RecievedRGBFrame_m2232008021_RuntimeMethod_var;
		RecievedRGBFrameDelegate_t726515755 * L_16 = (RecievedRGBFrameDelegate_t726515755 *)il2cpp_codegen_object_new(RecievedRGBFrameDelegate_t726515755_il2cpp_TypeInfo_var);
		RecievedRGBFrameDelegate__ctor_m975400911(L_16, __this, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		PeerConnectionM_add_FramgeGate_onRecieved_m3615637464(L_14, L_16, /*hidden argument*/NULL);
		PeerConnectionM_t1544440329 * L_17 = __this->get_peer_3();
		intptr_t L_18 = (intptr_t)WebRtcCoreWindows_OnFailureMessage_m3240352638_RuntimeMethod_var;
		FailureMessageDelegate_t3750826190 * L_19 = (FailureMessageDelegate_t3750826190 *)il2cpp_codegen_object_new(FailureMessageDelegate_t3750826190_il2cpp_TypeInfo_var);
		FailureMessageDelegate__ctor_m2840523361(L_19, __this, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		PeerConnectionM_add_OnFailureMessage_m3043468050(L_17, L_19, /*hidden argument*/NULL);
		PeerConnectionM_t1544440329 * L_20 = __this->get_peer_3();
		NullCheck(L_20);
		PeerConnectionM_AddStream_m3794451455(L_20, (bool)0, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_21 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_21, ((int32_t)480), ((int32_t)640), 5, (bool)0, /*hidden argument*/NULL);
		((WebRtcCore_t934528111 *)__this)->set_RecievedTexture2D_0(L_21);
		Texture2D_t3840446185 * L_22 = ((WebRtcCore_t934528111 *)__this)->get_RecievedTexture2D_0();
		NullCheck(L_22);
		int32_t L_23 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_22);
		Texture2D_t3840446185 * L_24 = ((WebRtcCore_t934528111 *)__this)->get_RecievedTexture2D_0();
		NullCheck(L_24);
		int32_t L_25 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_24);
		__this->set_recievedTextureBuffer_5(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_23)), (int32_t)L_25)))));
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2474132131, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreWindows::Close()
extern "C"  void WebRtcCoreWindows_Close_m1423883481 (WebRtcCoreWindows_t2553259814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_Close_m1423883481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerConnectionM_t1544440329 * L_0 = __this->get_peer_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		PeerConnectionM_t1544440329 * L_1 = __this->get_peer_3();
		NullCheck(L_1);
		PeerConnectionM_ClosePeerConnection_m2938929551(L_1, /*hidden argument*/NULL);
		__this->set_peer_3((PeerConnectionM_t1544440329 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral4258793312, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreWindows::CreateOffer()
extern "C"  void WebRtcCoreWindows_CreateOffer_m765754139 (WebRtcCoreWindows_t2553259814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_CreateOffer_m765754139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerConnectionM_t1544440329 * L_0 = __this->get_peer_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		PeerConnectionM_t1544440329 * L_1 = __this->get_peer_3();
		NullCheck(L_1);
		PeerConnectionM_CreateOffer_m3707951050(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2718436488, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreWindows::Update()
extern "C"  void WebRtcCoreWindows_Update_m1586805786 (WebRtcCoreWindows_t2553259814 * __this, const RuntimeMethod* method)
{
	{
		PeerConnectionM_t1544440329 * L_0 = __this->get_peer_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = __this->get_recievedTextureBufferIsUpdated_6();
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		Texture2D_t3840446185 * L_2 = ((WebRtcCore_t934528111 *)__this)->get_RecievedTexture2D_0();
		ByteU5BU5D_t4116647657* L_3 = __this->get_recievedTextureBuffer_5();
		NullCheck(L_2);
		Texture2D_LoadRawTextureData_m1232009149(L_2, L_3, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_4 = ((WebRtcCore_t934528111 *)__this)->get_RecievedTexture2D_0();
		NullCheck(L_4);
		Texture2D_Apply_m2271746283(L_4, /*hidden argument*/NULL);
		__this->set_recievedTextureBufferIsUpdated_6((bool)0);
	}

IL_003a:
	{
		return;
	}
}
// System.Void WebRtcCoreWindows::FrameGate_Input(UnityEngine.Texture2D)
extern "C"  void WebRtcCoreWindows_FrameGate_Input_m498779852 (WebRtcCoreWindows_t2553259814 * __this, Texture2D_t3840446185 * ___tex0, const RuntimeMethod* method)
{
	{
		PeerConnectionM_t1544440329 * L_0 = __this->get_peer_3();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		bool L_1 = __this->get_recievedTextureBufferIsUpdated_6();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		return;
	}

IL_0018:
	{
		Texture2D_t3840446185 * L_2 = ___tex0;
		NullCheck(L_2);
		Color32U5BU5D_t3850468773* L_3 = Texture2D_GetPixels32_m647746242(L_2, /*hidden argument*/NULL);
		__this->set_inputTexturePixels_8(L_3);
		Color32U5BU5D_t3850468773* L_4 = __this->get_inputTexturePixels_8();
		GCHandle_t3351438187  L_5 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_4, 3, /*hidden argument*/NULL);
		__this->set_inputTextureHandle_9(L_5);
		GCHandle_t3351438187 * L_6 = __this->get_address_of_inputTextureHandle_9();
		intptr_t L_7 = GCHandle_AddrOfPinnedObject_m3427142301(L_6, /*hidden argument*/NULL);
		__this->set_inputTexturePixlesPtr_7(L_7);
		PeerConnectionM_t1544440329 * L_8 = __this->get_peer_3();
		intptr_t L_9 = __this->get_inputTexturePixlesPtr_7();
		Texture2D_t3840446185 * L_10 = ___tex0;
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_10);
		Texture2D_t3840446185 * L_12 = ___tex0;
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_height() */, L_12);
		NullCheck(L_8);
		PeerConnectionM_FramgeGate_Input_m3112400015(L_8, L_9, L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreWindows::OnLocalSdpReadytoSend(System.Int32,System.String,System.String)
extern "C"  void WebRtcCoreWindows_OnLocalSdpReadytoSend_m1897714168 (WebRtcCoreWindows_t2553259814 * __this, int32_t ___id0, String_t* ___type1, String_t* ___sdp2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_OnLocalSdpReadytoSend_m1897714168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral942018554);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral942018554);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral536748604);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral536748604);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = ___type1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral756541977);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral756541977);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		String_t* L_10 = ___sdp2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2971454694(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		WebRtcMsgExchanger_t3272896331 * L_12 = WebRtcCore_get_MsgExchanger_m3784267525(__this, /*hidden argument*/NULL);
		String_t* L_13 = ___type1;
		String_t* L_14 = ___sdp2;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void WebRtcMsgExchanger::RequiredSendingMessage(System.String,System.String) */, L_12, L_13, L_14);
		return;
	}
}
// System.Void WebRtcCoreWindows::OnIceCandiateReadytoSend(System.Int32,System.String,System.Int32,System.String)
extern "C"  void WebRtcCoreWindows_OnIceCandiateReadytoSend_m680431510 (WebRtcCoreWindows_t2553259814 * __this, int32_t ___id0, String_t* ___candidate1, int32_t ___sdpMlineIndex2, String_t* ___sdpMid3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_OnIceCandiateReadytoSend_m680431510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IceJson_t3287139184 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		WebRtcMsgExchanger_t3272896331 * L_0 = WebRtcCore_get_MsgExchanger_m3784267525(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___candidate1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void WebRtcMsgExchanger::RequiredSendingMessage(System.String,System.String) */, L_0, _stringLiteral1699725656, L_1);
		String_t* L_2 = ___candidate1;
		int32_t L_3 = ___sdpMlineIndex2;
		String_t* L_4 = ___sdpMid3;
		IceJson_t3287139184 * L_5 = (IceJson_t3287139184 *)il2cpp_codegen_object_new(IceJson_t3287139184_il2cpp_TypeInfo_var);
		IceJson__ctor_m3481197562(L_5, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		IceJson_t3287139184 * L_6 = V_0;
		String_t* L_7 = JsonUtility_ToJson_m3644929270(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		WebRtcMsgExchanger_t3272896331 * L_8 = WebRtcCore_get_MsgExchanger_m3784267525(__this, /*hidden argument*/NULL);
		String_t* L_9 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void WebRtcMsgExchanger::RequiredSendingMessage(System.String,System.String) */, L_8, _stringLiteral2133073445, L_9);
		return;
	}
}
// System.Void WebRtcCoreWindows::RecievedRGBFrame(System.Int32,System.IntPtr,System.UInt32,System.UInt32)
extern "C"  void WebRtcCoreWindows_RecievedRGBFrame_m2232008021 (WebRtcCoreWindows_t2553259814 * __this, int32_t ___id0, intptr_t ___rgb1, uint32_t ___width2, uint32_t ___height3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_RecievedRGBFrame_m2232008021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_recievedTextureBufferIsUpdated_6();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		intptr_t L_1 = ___rgb1;
		ByteU5BU5D_t4116647657* L_2 = __this->get_recievedTextureBuffer_5();
		uint32_t L_3 = ___width2;
		uint32_t L_4 = ___height3;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_1, L_2, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)4, (int32_t)L_3)), (int32_t)L_4)), /*hidden argument*/NULL);
		__this->set_recievedTextureBufferIsUpdated_6((bool)1);
		return;
	}
}
// System.Void WebRtcCoreWindows::OnFailureMessage(System.Int32,System.String)
extern "C"  void WebRtcCoreWindows_OnFailureMessage_m3240352638 (WebRtcCoreWindows_t2553259814 * __this, int32_t ___id0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_OnFailureMessage_m3240352638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3292287797);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3292287797);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		int32_t L_2 = ___id0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral1271086852);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1271086852);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		String_t* L_7 = ___msg1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcCoreWindows::RecievedMessage(System.String,System.String)
extern "C"  void WebRtcCoreWindows_RecievedMessage_m2313573200 (WebRtcCoreWindows_t2553259814 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRtcCoreWindows_RecievedMessage_m2313573200_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IceJson_t3287139184 * V_0 = NULL;
	{
		String_t* L_0 = ___description0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, L_0, _stringLiteral1943138033, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		PeerConnectionM_t1544440329 * L_2 = __this->get_peer_3();
		String_t* L_3 = ___message1;
		NullCheck(L_2);
		PeerConnectionM_SetRemoteDescription_m450948145(L_2, _stringLiteral1943138033, L_3, /*hidden argument*/NULL);
		PeerConnectionM_t1544440329 * L_4 = __this->get_peer_3();
		NullCheck(L_4);
		PeerConnectionM_CreateAnswer_m2622316497(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		String_t* L_5 = ___description0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral40126141, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		PeerConnectionM_t1544440329 * L_7 = __this->get_peer_3();
		String_t* L_8 = ___message1;
		NullCheck(L_7);
		PeerConnectionM_SetRemoteDescription_m450948145(L_7, _stringLiteral40126141, L_8, /*hidden argument*/NULL);
	}

IL_004d:
	{
		String_t* L_9 = ___description0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral1699725656, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005d;
		}
	}

IL_005d:
	{
		String_t* L_11 = ___description0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral2133073445, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00e4;
		}
	}
	{
		String_t* L_13 = ___message1;
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (IceJson_t3287139184_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		RuntimeObject * L_16 = JsonUtility_FromJson_m4191471030(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		V_0 = ((IceJson_t3287139184 *)IsInstClass((RuntimeObject*)L_16, IceJson_t3287139184_il2cpp_TypeInfo_var));
		PeerConnectionM_t1544440329 * L_17 = __this->get_peer_3();
		IceJson_t3287139184 * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_Ice_0();
		IceJson_t3287139184 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_Index_1();
		IceJson_t3287139184 * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = L_22->get_Mid_2();
		NullCheck(L_17);
		PeerConnectionM_AddIceCandidate_m355481554(L_17, L_19, L_21, L_23, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_24 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6));
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral2288287499);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2288287499);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		String_t* L_26 = ___description0;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_26);
		ObjectU5BU5D_t2843939325* L_27 = L_25;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3450517380);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3450517380);
		ObjectU5BU5D_t2843939325* L_28 = L_27;
		IceJson_t3287139184 * L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_Ice_0();
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_28;
		IceJson_t3287139184 * L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = L_32->get_Index_1();
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_35);
		ObjectU5BU5D_t2843939325* L_36 = L_31;
		IceJson_t3287139184 * L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38 = L_37->get_Mid_2();
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_39 = String_Concat_m2971454694(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcCoreWindows/IceJson::.ctor(System.String,System.Int32,System.String)
extern "C"  void IceJson__ctor_m3481197562 (IceJson_t3287139184 * __this, String_t* ___candidate0, int32_t ___sdpMlineIndex1, String_t* ___sdpMid2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___candidate0;
		__this->set_Ice_0(L_0);
		int32_t L_1 = ___sdpMlineIndex1;
		__this->set_Index_1(L_1);
		String_t* L_2 = ___sdpMid2;
		__this->set_Mid_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebRtcMsgExchanger::.ctor()
extern "C"  void WebRtcMsgExchanger__ctor_m688705840 (WebRtcMsgExchanger_t3272896331 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebRtcMsgExchanger::RequiredSendingMessage(System.String,System.String)
extern "C"  void WebRtcMsgExchanger_RequiredSendingMessage_m539895449 (WebRtcMsgExchanger_t3272896331 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WebRtcMsgExchanger::WebRtcCtr_RecievedMessage(System.String,System.String)
extern "C"  void WebRtcMsgExchanger_WebRtcCtr_RecievedMessage_m724448117 (WebRtcMsgExchanger_t3272896331 * __this, String_t* ___description0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		WebRtcCore_t934528111 * L_0 = __this->get_RtcCore_2();
		String_t* L_1 = ___description0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void WebRtcCore::RecievedMessage(System.String,System.String) */, L_0, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
