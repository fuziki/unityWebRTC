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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// mqttTest
struct mqttTest_t759171104;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// System.Net.IPAddress
struct IPAddress_t241777590;
// System.String
struct String_t;
// uPLibrary.Networking.M2Mqtt.MqttClient
struct MqttClient_t1237157870;
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
// System.Text.Encoding
struct Encoding_t1523322056;
// PeerConnectioniOS
struct PeerConnectioniOS_t1321012807;
// PeerConnectioniOS/SDPREADY_Delegate
struct SDPREADY_Delegate_t94822726;
// System.Delegate
struct Delegate_t1188392813;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct MqttClientException_t1411037672;
// System.ApplicationException
struct ApplicationException_t2339761290;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct MqttCommunicationException_t2651452853;
// System.Exception
struct Exception_t;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct MqttConnectionException_t3570015742;
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException
struct MqttTimeoutException_t738756372;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct MqttMsgBase_t2321119380;
// uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel
struct IMqttNetworkChannel_t3555245973;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack
struct MqttMsgConnack_t3695344180;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect
struct MqttMsgConnect_t2841720955;
// System.Char[]
struct CharU5BU5D_t3528271667;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs
struct MqttMsgConnectEventArgs_t930364184;
// System.EventArgs
struct EventArgs_t3591816995;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct MqttMsgContext_t1493973115;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect
struct MqttMsgDisconnect_t4092039470;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq
struct MqttMsgPingReq_t516259338;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp
struct MqttMsgPingResp_t2915329856;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback
struct MqttMsgPuback_t3000343258;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp
struct MqttMsgPubcomp_t24488374;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish
struct MqttMsgPublish_t1956840664;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct MqttMsgPublishedEventArgs_t90327050;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec
struct MqttMsgPubrec_t1898486492;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct MqttMsgPubrel_t1897503452;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct MqttMsgSuback_t3000343093;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct MqttMsgSubscribe_t4232534475;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct MqttMsgSubscribedEventArgs_t3669420413;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs
struct MqttMsgSubscribeEventArgs_t3581658625;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct MqttMsgUnsuback_t824663444;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe
struct MqttMsgUnsubscribe_t3220791601;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct MqttMsgUnsubscribedEventArgs_t2229036016;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs
struct MqttMsgUnsubscribeEventArgs_t147345733;
// System.Net.IPHostEntry
struct IPHostEntry_t263743900;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t596328627;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct MqttMsgPublishedEventHandler_t3860164542;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct MqttMsgSubscribedEventHandler_t2042141578;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct MqttMsgUnsubscribedEventHandler_t2087605283;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler
struct MqttMsgDisconnectEventHandler_t848571114;
// System.ArgumentException
struct ArgumentException_t132251570;
// uPLibrary.Networking.M2Mqtt.MqttSettings
struct MqttSettings_t1362412725;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1333520283;
// System.Collections.Queue
struct Queue_t3637523393;
// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct MqttNetworkChannel_t2078300306;
// System.Threading.ThreadStart
struct ThreadStart_t1006689297;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t777845177;
// System.Net.Sockets.SocketException
struct SocketException_t3852068672;
// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder
struct MqttMsgContextFinder_t287101668;
// uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate
struct QueuePredicate_t1615372677;
// System.Net.Sockets.Socket
struct Socket_t1119025450;
// System.Net.IPEndPoint
struct IPEndPoint_t3791887218;
// System.Net.EndPoint
struct EndPoint_t982345378;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct WriteTrace_t3974110851;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.Void
struct Void_t1185182177;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.Collections.Hashtable
struct Hashtable_t1853889766;

extern RuntimeClass* IPAddress_t241777590_il2cpp_TypeInfo_var;
extern RuntimeClass* MqttClient_t1237157870_il2cpp_TypeInfo_var;
extern RuntimeClass* MqttMsgPublishEventHandler_t1923217352_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const RuntimeMethod* mqttTest_client_MqttMsgPublishReceived_m384648285_RuntimeMethod_var;
extern String_t* _stringLiteral899131938;
extern String_t* _stringLiteral2640286824;
extern const uint32_t mqttTest_Start_m616292935_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1653617040;
extern const uint32_t mqttTest_client_MqttMsgPublishReceived_m384648285_MetadataUsageId;
extern RuntimeClass* GUI_t1624858472_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3716924571;
extern String_t* _stringLiteral2864253782;
extern String_t* _stringLiteral906680396;
extern String_t* _stringLiteral3893727521;
extern const uint32_t mqttTest_OnGUI_m3608614900_MetadataUsageId;
extern RuntimeClass* PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var;
extern RuntimeClass* SDPREADY_Delegate_t94822726_il2cpp_TypeInfo_var;
extern const RuntimeMethod* PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365_RuntimeMethod_var;
extern String_t* _stringLiteral2639446077;
extern const uint32_t PeerConnectioniOS_RegisterCallbacks_m1649261689_MetadataUsageId;
extern const uint32_t PeerConnectioniOS_add_onSdpReadyDelegate_m2735798781_MetadataUsageId;
extern const uint32_t PeerConnectioniOS_remove_onSdpReadyDelegate_m2239559694_MetadataUsageId;
extern const uint32_t PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365_MetadataUsageId;
extern const uint32_t MqttCommunicationException__ctor_m1765456204_MetadataUsageId;
extern RuntimeClass* IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgBase_decodeRemainingLength_m1049822892_MetadataUsageId;
extern RuntimeClass* MqttMsgConnack_t3695344180_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgConnack_Parse_m1892427643_MetadataUsageId;
extern const uint32_t MqttMsgConnack_GetBytes_m2955880752_MetadataUsageId;
extern String_t* _stringLiteral2957079594;
extern const uint32_t MqttMsgConnect__ctor_m3103498375_MetadataUsageId;
extern const uint32_t MqttMsgConnect__ctor_m1250605407_MetadataUsageId;
extern RuntimeClass* MqttMsgConnect_t2841720955_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgConnect_Parse_m3265014861_MetadataUsageId;
extern RuntimeClass* MqttClientException_t1411037672_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttMsgConnect_GetBytes_m35920527_RuntimeMethod_var;
extern const uint32_t MqttMsgConnect_GetBytes_m35920527_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgConnectEventArgs__ctor_m192086192_MetadataUsageId;
extern RuntimeClass* MqttMsgDisconnect_t4092039470_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgDisconnect_Parse_m1470563858_MetadataUsageId;
extern const uint32_t MqttMsgDisconnect_GetBytes_m1932598212_MetadataUsageId;
extern const uint32_t MqttMsgPingReq_GetBytes_m2597301524_MetadataUsageId;
extern RuntimeClass* MqttMsgPingReq_t516259338_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPingReq_Parse_m253756983_MetadataUsageId;
extern RuntimeClass* MqttMsgPingResp_t2915329856_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPingResp_Parse_m2246319529_MetadataUsageId;
extern const uint32_t MqttMsgPingResp_GetBytes_m969592971_MetadataUsageId;
extern const uint32_t MqttMsgPuback_GetBytes_m2327354666_MetadataUsageId;
extern RuntimeClass* MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPuback_Parse_m3652376793_MetadataUsageId;
extern const uint32_t MqttMsgPubcomp_GetBytes_m2679862602_MetadataUsageId;
extern RuntimeClass* MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPubcomp_Parse_m3781949255_MetadataUsageId;
extern const RuntimeMethod* MqttMsgPublish_GetBytes_m3062953436_RuntimeMethod_var;
extern const uint32_t MqttMsgPublish_GetBytes_m3062953436_MetadataUsageId;
extern RuntimeClass* MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPublish_Parse_m1565802144_MetadataUsageId;
extern const uint32_t MqttMsgPublishedEventArgs__ctor_m3198312214_MetadataUsageId;
extern const uint32_t MqttMsgPublishEventArgs__ctor_m4161232453_MetadataUsageId;
extern const uint32_t MqttMsgPubrec_GetBytes_m2518781433_MetadataUsageId;
extern RuntimeClass* MqttMsgPubrec_t1898486492_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPubrec_Parse_m1855442422_MetadataUsageId;
extern const uint32_t MqttMsgPubrel_GetBytes_m2674691587_MetadataUsageId;
extern RuntimeClass* MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgPubrel_Parse_m230762409_MetadataUsageId;
extern RuntimeClass* MqttMsgSuback_t3000343093_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgSuback_Parse_m1993898496_MetadataUsageId;
extern const uint32_t MqttMsgSuback_GetBytes_m2354644435_MetadataUsageId;
extern RuntimeClass* MqttMsgSubscribe_t4232534475_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2606371118_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t380635627_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3962448610_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t3662770472_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_1_t2949616159_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2032142263_RuntimeMethod_var;
extern const uint32_t MqttMsgSubscribe_Parse_m1720728324_MetadataUsageId;
extern RuntimeClass* ByteU5BU5DU5BU5D_t457913172_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttMsgSubscribe_GetBytes_m4164398511_RuntimeMethod_var;
extern const uint32_t MqttMsgSubscribe_GetBytes_m4164398511_MetadataUsageId;
extern const uint32_t MqttMsgSubscribedEventArgs__ctor_m4146728216_MetadataUsageId;
extern const uint32_t MqttMsgSubscribeEventArgs__ctor_m2622934437_MetadataUsageId;
extern RuntimeClass* MqttMsgUnsuback_t824663444_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgUnsuback_Parse_m428600086_MetadataUsageId;
extern const uint32_t MqttMsgUnsuback_GetBytes_m1109522372_MetadataUsageId;
extern RuntimeClass* MqttMsgUnsubscribe_t3220791601_il2cpp_TypeInfo_var;
extern const uint32_t MqttMsgUnsubscribe_Parse_m3035319983_MetadataUsageId;
extern const RuntimeMethod* MqttMsgUnsubscribe_GetBytes_m97634205_RuntimeMethod_var;
extern const uint32_t MqttMsgUnsubscribe_GetBytes_m97634205_MetadataUsageId;
extern const uint32_t MqttMsgUnsubscribedEventArgs__ctor_m1314859765_MetadataUsageId;
extern const uint32_t MqttMsgUnsubscribeEventArgs__ctor_m1128426959_MetadataUsageId;
extern RuntimeClass* Dns_t384099571_il2cpp_TypeInfo_var;
extern RuntimeClass* ApplicationException_t2339761290_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttClient__ctor_m2956131190_RuntimeMethod_var;
extern String_t* _stringLiteral160928716;
extern const uint32_t MqttClient__ctor_m2956131190_MetadataUsageId;
extern const uint32_t MqttClient_add_MqttMsgPublishReceived_m3145106695_MetadataUsageId;
extern const uint32_t MqttClient_remove_MqttMsgPublishReceived_m2298416518_MetadataUsageId;
extern RuntimeClass* MqttMsgPublishedEventHandler_t3860164542_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_add_MqttMsgPublished_m1785871629_MetadataUsageId;
extern const uint32_t MqttClient_remove_MqttMsgPublished_m3228096211_MetadataUsageId;
extern RuntimeClass* MqttMsgSubscribedEventHandler_t2042141578_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_add_MqttMsgSubscribed_m1687370795_MetadataUsageId;
extern const uint32_t MqttClient_remove_MqttMsgSubscribed_m198036731_MetadataUsageId;
extern RuntimeClass* MqttMsgUnsubscribedEventHandler_t2087605283_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_add_MqttMsgUnsubscribed_m1685940580_MetadataUsageId;
extern const uint32_t MqttClient_remove_MqttMsgUnsubscribed_m989251321_MetadataUsageId;
extern RuntimeClass* MqttMsgDisconnectEventHandler_t848571114_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_add_MqttMsgDisconnected_m743914860_MetadataUsageId;
extern const uint32_t MqttClient_remove_MqttMsgDisconnected_m1493069520_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* AutoResetEvent_t1333520283_il2cpp_TypeInfo_var;
extern RuntimeClass* Queue_t3637523393_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttClient_Init_m2786449446_RuntimeMethod_var;
extern String_t* _stringLiteral346343835;
extern const uint32_t MqttClient_Init_m2786449446_MetadataUsageId;
extern RuntimeClass* MqttNetworkChannel_t2078300306_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MqttConnectionException_t3570015742_il2cpp_TypeInfo_var;
extern RuntimeClass* ThreadStart_t1006689297_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttClient_Connect_m879571441_RuntimeMethod_var;
extern const RuntimeMethod* MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var;
extern const RuntimeMethod* MqttClient_KeepAliveThread_m2335153006_RuntimeMethod_var;
extern const RuntimeMethod* MqttClient_ReceiveEventThread_m2433938138_RuntimeMethod_var;
extern const RuntimeMethod* MqttClient_ProcessInflightThread_m3241873423_RuntimeMethod_var;
extern String_t* _stringLiteral279580675;
extern const uint32_t MqttClient_Connect_m879571441_MetadataUsageId;
extern const uint32_t MqttClient_Disconnect_m1914667810_MetadataUsageId;
extern const uint32_t MqttClient_Close_m2185175017_MetadataUsageId;
extern String_t* _stringLiteral3029892227;
extern const uint32_t MqttClient_Ping_m4940654_MetadataUsageId;
extern const uint32_t MqttClient_Subscribe_m914342903_MetadataUsageId;
extern const uint32_t MqttClient_Unsubscribe_m2827046529_MetadataUsageId;
extern const uint32_t MqttClient_Publish_m2947629173_MetadataUsageId;
extern RuntimeClass* MqttMsgPublishEventArgs_t2350602093_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_OnMqttMsgPublishReceived_m1921064112_MetadataUsageId;
extern RuntimeClass* MqttMsgPublishedEventArgs_t90327050_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_OnMqttMsgPublished_m2419643168_MetadataUsageId;
extern RuntimeClass* MqttMsgSubscribedEventArgs_t3669420413_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_OnMqttMsgSubscribed_m900306150_MetadataUsageId;
extern RuntimeClass* MqttMsgUnsubscribedEventArgs_t2229036016_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_OnMqttMsgUnsubscribed_m3505407607_MetadataUsageId;
extern const uint32_t MqttClient_OnMqttMsgDisconnected_m2996431297_MetadataUsageId;
extern RuntimeClass* MqttCommunicationException_t2651452853_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttClient_Send_m1860928569_RuntimeMethod_var;
extern const uint32_t MqttClient_Send_m1860928569_MetadataUsageId;
extern String_t* _stringLiteral2438014197;
extern const uint32_t MqttClient_Send_m1996534700_MetadataUsageId;
extern RuntimeClass* SocketException_t3852068672_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttClient_SendReceive_m3311807021_RuntimeMethod_var;
extern const uint32_t MqttClient_SendReceive_m3311807021_MetadataUsageId;
extern const uint32_t MqttClient_SendReceive_m2152143786_MetadataUsageId;
extern RuntimeClass* MqttMsgContextFinder_t287101668_il2cpp_TypeInfo_var;
extern RuntimeClass* QueuePredicate_t1615372677_il2cpp_TypeInfo_var;
extern RuntimeClass* MqttMsgContext_t1493973115_il2cpp_TypeInfo_var;
extern const RuntimeMethod* MqttMsgContextFinder_Find_m939155610_RuntimeMethod_var;
extern const uint32_t MqttClient_EnqueueInflight_m413130657_MetadataUsageId;
extern const uint32_t MqttClient_EnqueueInternal_m3752534690_MetadataUsageId;
extern String_t* _stringLiteral2475173501;
extern const uint32_t MqttClient_ReceiveThread_m3895413313_MetadataUsageId;
extern RuntimeClass* MqttMsgBase_t2321119380_il2cpp_TypeInfo_var;
extern const uint32_t MqttClient_ReceiveEventThread_m2433938138_MetadataUsageId;
extern const uint32_t MqttClient_ProcessInflightThread_m3241873423_MetadataUsageId;
extern const uint32_t MqttMsgContextFinder_Find_m939155610_MetadataUsageId;
extern RuntimeClass* Socket_t1119025450_il2cpp_TypeInfo_var;
extern RuntimeClass* IPEndPoint_t3791887218_il2cpp_TypeInfo_var;
extern const uint32_t MqttNetworkChannel_Connect_m1033884514_MetadataUsageId;
extern RuntimeClass* MqttSettings_t1362412725_il2cpp_TypeInfo_var;
extern const uint32_t MqttSettings_get_Instance_m2044335333_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t QueueExtension_Get_m3062141218_MetadataUsageId;
extern RuntimeClass* Trace_t376076007_il2cpp_TypeInfo_var;
extern const uint32_t Trace_Debug_m2286156421_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const uint32_t Trace_WriteLine_m980167908_MetadataUsageId;
extern const uint32_t Trace_WriteLine_m1516194618_MetadataUsageId;
extern const uint32_t Trace_WriteLine_m1827992788_MetadataUsageId;
extern const uint32_t Trace_WriteLine_m1537289973_MetadataUsageId;

struct StringU5BU5D_t1281789340;
struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct ByteU5BU5DU5BU5D_t457913172;
struct IPAddressU5BU5D_t596328627;
struct ObjectU5BU5D_t2843939325;


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
#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
#ifndef IPHOSTENTRY_T263743900_H
#define IPHOSTENTRY_T263743900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPHostEntry
struct  IPHostEntry_t263743900  : public RuntimeObject
{
public:
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t596328627* ___addressList_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t1281789340* ___aliases_1;
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_2;

public:
	inline static int32_t get_offset_of_addressList_0() { return static_cast<int32_t>(offsetof(IPHostEntry_t263743900, ___addressList_0)); }
	inline IPAddressU5BU5D_t596328627* get_addressList_0() const { return ___addressList_0; }
	inline IPAddressU5BU5D_t596328627** get_address_of_addressList_0() { return &___addressList_0; }
	inline void set_addressList_0(IPAddressU5BU5D_t596328627* value)
	{
		___addressList_0 = value;
		Il2CppCodeGenWriteBarrier((&___addressList_0), value);
	}

	inline static int32_t get_offset_of_aliases_1() { return static_cast<int32_t>(offsetof(IPHostEntry_t263743900, ___aliases_1)); }
	inline StringU5BU5D_t1281789340* get_aliases_1() const { return ___aliases_1; }
	inline StringU5BU5D_t1281789340** get_address_of_aliases_1() { return &___aliases_1; }
	inline void set_aliases_1(StringU5BU5D_t1281789340* value)
	{
		___aliases_1 = value;
		Il2CppCodeGenWriteBarrier((&___aliases_1), value);
	}

	inline static int32_t get_offset_of_hostName_2() { return static_cast<int32_t>(offsetof(IPHostEntry_t263743900, ___hostName_2)); }
	inline String_t* get_hostName_2() const { return ___hostName_2; }
	inline String_t** get_address_of_hostName_2() { return &___hostName_2; }
	inline void set_hostName_2(String_t* value)
	{
		___hostName_2 = value;
		Il2CppCodeGenWriteBarrier((&___hostName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPHOSTENTRY_T263743900_H
#ifndef MQTTSETTINGS_T1362412725_H
#define MQTTSETTINGS_T1362412725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttSettings
struct  MqttSettings_t1362412725  : public RuntimeObject
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_6;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<SslPort>k__BackingField
	int32_t ___U3CSslPortU3Ek__BackingField_7;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<TimeoutOnConnection>k__BackingField
	int32_t ___U3CTimeoutOnConnectionU3Ek__BackingField_8;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<TimeoutOnReceiving>k__BackingField
	int32_t ___U3CTimeoutOnReceivingU3Ek__BackingField_9;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<AttemptsOnRetry>k__BackingField
	int32_t ___U3CAttemptsOnRetryU3Ek__BackingField_10;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::<DelayOnRetry>k__BackingField
	int32_t ___U3CDelayOnRetryU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725, ___U3CPortU3Ek__BackingField_6)); }
	inline int32_t get_U3CPortU3Ek__BackingField_6() const { return ___U3CPortU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_6() { return &___U3CPortU3Ek__BackingField_6; }
	inline void set_U3CPortU3Ek__BackingField_6(int32_t value)
	{
		___U3CPortU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSslPortU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725, ___U3CSslPortU3Ek__BackingField_7)); }
	inline int32_t get_U3CSslPortU3Ek__BackingField_7() const { return ___U3CSslPortU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CSslPortU3Ek__BackingField_7() { return &___U3CSslPortU3Ek__BackingField_7; }
	inline void set_U3CSslPortU3Ek__BackingField_7(int32_t value)
	{
		___U3CSslPortU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutOnConnectionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725, ___U3CTimeoutOnConnectionU3Ek__BackingField_8)); }
	inline int32_t get_U3CTimeoutOnConnectionU3Ek__BackingField_8() const { return ___U3CTimeoutOnConnectionU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CTimeoutOnConnectionU3Ek__BackingField_8() { return &___U3CTimeoutOnConnectionU3Ek__BackingField_8; }
	inline void set_U3CTimeoutOnConnectionU3Ek__BackingField_8(int32_t value)
	{
		___U3CTimeoutOnConnectionU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CTimeoutOnReceivingU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725, ___U3CTimeoutOnReceivingU3Ek__BackingField_9)); }
	inline int32_t get_U3CTimeoutOnReceivingU3Ek__BackingField_9() const { return ___U3CTimeoutOnReceivingU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CTimeoutOnReceivingU3Ek__BackingField_9() { return &___U3CTimeoutOnReceivingU3Ek__BackingField_9; }
	inline void set_U3CTimeoutOnReceivingU3Ek__BackingField_9(int32_t value)
	{
		___U3CTimeoutOnReceivingU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptsOnRetryU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725, ___U3CAttemptsOnRetryU3Ek__BackingField_10)); }
	inline int32_t get_U3CAttemptsOnRetryU3Ek__BackingField_10() const { return ___U3CAttemptsOnRetryU3Ek__BackingField_10; }
	inline int32_t* get_address_of_U3CAttemptsOnRetryU3Ek__BackingField_10() { return &___U3CAttemptsOnRetryU3Ek__BackingField_10; }
	inline void set_U3CAttemptsOnRetryU3Ek__BackingField_10(int32_t value)
	{
		___U3CAttemptsOnRetryU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDelayOnRetryU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725, ___U3CDelayOnRetryU3Ek__BackingField_11)); }
	inline int32_t get_U3CDelayOnRetryU3Ek__BackingField_11() const { return ___U3CDelayOnRetryU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CDelayOnRetryU3Ek__BackingField_11() { return &___U3CDelayOnRetryU3Ek__BackingField_11; }
	inline void set_U3CDelayOnRetryU3Ek__BackingField_11(int32_t value)
	{
		___U3CDelayOnRetryU3Ek__BackingField_11 = value;
	}
};

struct MqttSettings_t1362412725_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::instance
	MqttSettings_t1362412725 * ___instance_12;

public:
	inline static int32_t get_offset_of_instance_12() { return static_cast<int32_t>(offsetof(MqttSettings_t1362412725_StaticFields, ___instance_12)); }
	inline MqttSettings_t1362412725 * get_instance_12() const { return ___instance_12; }
	inline MqttSettings_t1362412725 ** get_address_of_instance_12() { return &___instance_12; }
	inline void set_instance_12(MqttSettings_t1362412725 * value)
	{
		___instance_12 = value;
		Il2CppCodeGenWriteBarrier((&___instance_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTSETTINGS_T1362412725_H
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
#ifndef QUEUE_T3637523393_H
#define QUEUE_T3637523393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Queue
struct  Queue_t3637523393  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Queue::_array
	ObjectU5BU5D_t2843939325* ____array_0;
	// System.Int32 System.Collections.Queue::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Queue::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Queue::_tail
	int32_t ____tail_3;
	// System.Int32 System.Collections.Queue::_growFactor
	int32_t ____growFactor_4;
	// System.Int32 System.Collections.Queue::_version
	int32_t ____version_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____array_0)); }
	inline ObjectU5BU5D_t2843939325* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t2843939325** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t2843939325* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__tail_3() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____tail_3)); }
	inline int32_t get__tail_3() const { return ____tail_3; }
	inline int32_t* get_address_of__tail_3() { return &____tail_3; }
	inline void set__tail_3(int32_t value)
	{
		____tail_3 = value;
	}

	inline static int32_t get_offset_of__growFactor_4() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____growFactor_4)); }
	inline int32_t get__growFactor_4() const { return ____growFactor_4; }
	inline int32_t* get_address_of__growFactor_4() { return &____growFactor_4; }
	inline void set__growFactor_4(int32_t value)
	{
		____growFactor_4 = value;
	}

	inline static int32_t get_offset_of__version_5() { return static_cast<int32_t>(offsetof(Queue_t3637523393, ____version_5)); }
	inline int32_t get__version_5() const { return ____version_5; }
	inline int32_t* get_address_of__version_5() { return &____version_5; }
	inline void set__version_5(int32_t value)
	{
		____version_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUE_T3637523393_H
#ifndef MQTTNETWORKCHANNEL_T2078300306_H
#define MQTTNETWORKCHANNEL_T2078300306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttNetworkChannel
struct  MqttNetworkChannel_t2078300306  : public RuntimeObject
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteHostName
	String_t* ___remoteHostName_0;
	// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remoteIpAddress
	IPAddress_t241777590 * ___remoteIpAddress_1;
	// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::remotePort
	int32_t ___remotePort_2;
	// System.Net.Sockets.Socket uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::socket
	Socket_t1119025450 * ___socket_3;
	// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::secure
	bool ___secure_4;
	// System.Security.Cryptography.X509Certificates.X509Certificate uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::caCert
	X509Certificate_t713131622 * ___caCert_5;

public:
	inline static int32_t get_offset_of_remoteHostName_0() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t2078300306, ___remoteHostName_0)); }
	inline String_t* get_remoteHostName_0() const { return ___remoteHostName_0; }
	inline String_t** get_address_of_remoteHostName_0() { return &___remoteHostName_0; }
	inline void set_remoteHostName_0(String_t* value)
	{
		___remoteHostName_0 = value;
		Il2CppCodeGenWriteBarrier((&___remoteHostName_0), value);
	}

	inline static int32_t get_offset_of_remoteIpAddress_1() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t2078300306, ___remoteIpAddress_1)); }
	inline IPAddress_t241777590 * get_remoteIpAddress_1() const { return ___remoteIpAddress_1; }
	inline IPAddress_t241777590 ** get_address_of_remoteIpAddress_1() { return &___remoteIpAddress_1; }
	inline void set_remoteIpAddress_1(IPAddress_t241777590 * value)
	{
		___remoteIpAddress_1 = value;
		Il2CppCodeGenWriteBarrier((&___remoteIpAddress_1), value);
	}

	inline static int32_t get_offset_of_remotePort_2() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t2078300306, ___remotePort_2)); }
	inline int32_t get_remotePort_2() const { return ___remotePort_2; }
	inline int32_t* get_address_of_remotePort_2() { return &___remotePort_2; }
	inline void set_remotePort_2(int32_t value)
	{
		___remotePort_2 = value;
	}

	inline static int32_t get_offset_of_socket_3() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t2078300306, ___socket_3)); }
	inline Socket_t1119025450 * get_socket_3() const { return ___socket_3; }
	inline Socket_t1119025450 ** get_address_of_socket_3() { return &___socket_3; }
	inline void set_socket_3(Socket_t1119025450 * value)
	{
		___socket_3 = value;
		Il2CppCodeGenWriteBarrier((&___socket_3), value);
	}

	inline static int32_t get_offset_of_secure_4() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t2078300306, ___secure_4)); }
	inline bool get_secure_4() const { return ___secure_4; }
	inline bool* get_address_of_secure_4() { return &___secure_4; }
	inline void set_secure_4(bool value)
	{
		___secure_4 = value;
	}

	inline static int32_t get_offset_of_caCert_5() { return static_cast<int32_t>(offsetof(MqttNetworkChannel_t2078300306, ___caCert_5)); }
	inline X509Certificate_t713131622 * get_caCert_5() const { return ___caCert_5; }
	inline X509Certificate_t713131622 ** get_address_of_caCert_5() { return &___caCert_5; }
	inline void set_caCert_5(X509Certificate_t713131622 * value)
	{
		___caCert_5 = value;
		Il2CppCodeGenWriteBarrier((&___caCert_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTNETWORKCHANNEL_T2078300306_H
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
#ifndef MQTTMSGBASE_T2321119380_H
#define MQTTMSGBASE_T2321119380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase
struct  MqttMsgBase_t2321119380  : public RuntimeObject
{
public:
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::type
	uint8_t ___type_32;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::dupFlag
	bool ___dupFlag_33;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::qosLevel
	uint8_t ___qosLevel_34;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::retain
	bool ___retain_35;

public:
	inline static int32_t get_offset_of_type_32() { return static_cast<int32_t>(offsetof(MqttMsgBase_t2321119380, ___type_32)); }
	inline uint8_t get_type_32() const { return ___type_32; }
	inline uint8_t* get_address_of_type_32() { return &___type_32; }
	inline void set_type_32(uint8_t value)
	{
		___type_32 = value;
	}

	inline static int32_t get_offset_of_dupFlag_33() { return static_cast<int32_t>(offsetof(MqttMsgBase_t2321119380, ___dupFlag_33)); }
	inline bool get_dupFlag_33() const { return ___dupFlag_33; }
	inline bool* get_address_of_dupFlag_33() { return &___dupFlag_33; }
	inline void set_dupFlag_33(bool value)
	{
		___dupFlag_33 = value;
	}

	inline static int32_t get_offset_of_qosLevel_34() { return static_cast<int32_t>(offsetof(MqttMsgBase_t2321119380, ___qosLevel_34)); }
	inline uint8_t get_qosLevel_34() const { return ___qosLevel_34; }
	inline uint8_t* get_address_of_qosLevel_34() { return &___qosLevel_34; }
	inline void set_qosLevel_34(uint8_t value)
	{
		___qosLevel_34 = value;
	}

	inline static int32_t get_offset_of_retain_35() { return static_cast<int32_t>(offsetof(MqttMsgBase_t2321119380, ___retain_35)); }
	inline bool get_retain_35() const { return ___retain_35; }
	inline bool* get_address_of_retain_35() { return &___retain_35; }
	inline void set_retain_35(bool value)
	{
		___retain_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGBASE_T2321119380_H
#ifndef IPADDRESSUTILITY_T1010230559_H
#define IPADDRESSUTILITY_T1010230559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.IPAddressUtility
struct  IPAddressUtility_t1010230559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESSUTILITY_T1010230559_H
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
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
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
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
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
#ifndef ENDPOINT_T982345378_H
#define ENDPOINT_T982345378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPoint
struct  EndPoint_t982345378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPOINT_T982345378_H
#ifndef QUEUEEXTENSION_T116112095_H
#define QUEUEEXTENSION_T116112095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.QueueExtension
struct  QueueExtension_t116112095  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEEXTENSION_T116112095_H
#ifndef MQTTMSGSUBACK_T3000343093_H
#define MQTTMSGSUBACK_T3000343093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback
struct  MqttMsgSuback_t3000343093  : public MqttMsgBase_t2321119380
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::messageId
	uint16_t ___messageId_36;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::grantedQosLevels
	ByteU5BU5D_t4116647657* ___grantedQosLevels_37;

public:
	inline static int32_t get_offset_of_messageId_36() { return static_cast<int32_t>(offsetof(MqttMsgSuback_t3000343093, ___messageId_36)); }
	inline uint16_t get_messageId_36() const { return ___messageId_36; }
	inline uint16_t* get_address_of_messageId_36() { return &___messageId_36; }
	inline void set_messageId_36(uint16_t value)
	{
		___messageId_36 = value;
	}

	inline static int32_t get_offset_of_grantedQosLevels_37() { return static_cast<int32_t>(offsetof(MqttMsgSuback_t3000343093, ___grantedQosLevels_37)); }
	inline ByteU5BU5D_t4116647657* get_grantedQosLevels_37() const { return ___grantedQosLevels_37; }
	inline ByteU5BU5D_t4116647657** get_address_of_grantedQosLevels_37() { return &___grantedQosLevels_37; }
	inline void set_grantedQosLevels_37(ByteU5BU5D_t4116647657* value)
	{
		___grantedQosLevels_37 = value;
		Il2CppCodeGenWriteBarrier((&___grantedQosLevels_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGSUBACK_T3000343093_H
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
#ifndef MQTTMSGPINGRESP_T2915329856_H
#define MQTTMSGPINGRESP_T2915329856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp
struct  MqttMsgPingResp_t2915329856  : public MqttMsgBase_t2321119380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPINGRESP_T2915329856_H
#ifndef MQTTMSGPUBREL_T1897503452_H
#define MQTTMSGPUBREL_T1897503452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel
struct  MqttMsgPubrel_t1897503452  : public MqttMsgBase_t2321119380
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::messageId
	uint16_t ___messageId_36;

public:
	inline static int32_t get_offset_of_messageId_36() { return static_cast<int32_t>(offsetof(MqttMsgPubrel_t1897503452, ___messageId_36)); }
	inline uint16_t get_messageId_36() const { return ___messageId_36; }
	inline uint16_t* get_address_of_messageId_36() { return &___messageId_36; }
	inline void set_messageId_36(uint16_t value)
	{
		___messageId_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBREL_T1897503452_H
#ifndef MQTTMSGPUBREC_T1898486492_H
#define MQTTMSGPUBREC_T1898486492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec
struct  MqttMsgPubrec_t1898486492  : public MqttMsgBase_t2321119380
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::messageId
	uint16_t ___messageId_36;

public:
	inline static int32_t get_offset_of_messageId_36() { return static_cast<int32_t>(offsetof(MqttMsgPubrec_t1898486492, ___messageId_36)); }
	inline uint16_t get_messageId_36() const { return ___messageId_36; }
	inline uint16_t* get_address_of_messageId_36() { return &___messageId_36; }
	inline void set_messageId_36(uint16_t value)
	{
		___messageId_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBREC_T1898486492_H
#ifndef MQTTMSGPUBLISHEDEVENTARGS_T90327050_H
#define MQTTMSGPUBLISHEDEVENTARGS_T90327050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs
struct  MqttMsgPublishedEventArgs_t90327050  : public EventArgs_t3591816995
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::messageId
	uint16_t ___messageId_1;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgPublishedEventArgs_t90327050, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBLISHEDEVENTARGS_T90327050_H
#ifndef MQTTMSGPUBLISH_T1956840664_H
#define MQTTMSGPUBLISH_T1956840664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish
struct  MqttMsgPublish_t1956840664  : public MqttMsgBase_t2321119380
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::topic
	String_t* ___topic_36;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::message
	ByteU5BU5D_t4116647657* ___message_37;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::messageId
	uint16_t ___messageId_38;

public:
	inline static int32_t get_offset_of_topic_36() { return static_cast<int32_t>(offsetof(MqttMsgPublish_t1956840664, ___topic_36)); }
	inline String_t* get_topic_36() const { return ___topic_36; }
	inline String_t** get_address_of_topic_36() { return &___topic_36; }
	inline void set_topic_36(String_t* value)
	{
		___topic_36 = value;
		Il2CppCodeGenWriteBarrier((&___topic_36), value);
	}

	inline static int32_t get_offset_of_message_37() { return static_cast<int32_t>(offsetof(MqttMsgPublish_t1956840664, ___message_37)); }
	inline ByteU5BU5D_t4116647657* get_message_37() const { return ___message_37; }
	inline ByteU5BU5D_t4116647657** get_address_of_message_37() { return &___message_37; }
	inline void set_message_37(ByteU5BU5D_t4116647657* value)
	{
		___message_37 = value;
		Il2CppCodeGenWriteBarrier((&___message_37), value);
	}

	inline static int32_t get_offset_of_messageId_38() { return static_cast<int32_t>(offsetof(MqttMsgPublish_t1956840664, ___messageId_38)); }
	inline uint16_t get_messageId_38() const { return ___messageId_38; }
	inline uint16_t* get_address_of_messageId_38() { return &___messageId_38; }
	inline void set_messageId_38(uint16_t value)
	{
		___messageId_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBLISH_T1956840664_H
#ifndef MQTTMSGPUBCOMP_T24488374_H
#define MQTTMSGPUBCOMP_T24488374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp
struct  MqttMsgPubcomp_t24488374  : public MqttMsgBase_t2321119380
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::messageId
	uint16_t ___messageId_36;

public:
	inline static int32_t get_offset_of_messageId_36() { return static_cast<int32_t>(offsetof(MqttMsgPubcomp_t24488374, ___messageId_36)); }
	inline uint16_t get_messageId_36() const { return ___messageId_36; }
	inline uint16_t* get_address_of_messageId_36() { return &___messageId_36; }
	inline void set_messageId_36(uint16_t value)
	{
		___messageId_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBCOMP_T24488374_H
#ifndef MQTTMSGPUBACK_T3000343258_H
#define MQTTMSGPUBACK_T3000343258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback
struct  MqttMsgPuback_t3000343258  : public MqttMsgBase_t2321119380
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::messageId
	uint16_t ___messageId_36;

public:
	inline static int32_t get_offset_of_messageId_36() { return static_cast<int32_t>(offsetof(MqttMsgPuback_t3000343258, ___messageId_36)); }
	inline uint16_t get_messageId_36() const { return ___messageId_36; }
	inline uint16_t* get_address_of_messageId_36() { return &___messageId_36; }
	inline void set_messageId_36(uint16_t value)
	{
		___messageId_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBACK_T3000343258_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef IPENDPOINT_T3791887218_H
#define IPENDPOINT_T3791887218_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPEndPoint
struct  IPEndPoint_t3791887218  : public EndPoint_t982345378
{
public:
	// System.Net.IPAddress System.Net.IPEndPoint::address
	IPAddress_t241777590 * ___address_0;
	// System.Int32 System.Net.IPEndPoint::port
	int32_t ___port_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___address_0)); }
	inline IPAddress_t241777590 * get_address_0() const { return ___address_0; }
	inline IPAddress_t241777590 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(IPAddress_t241777590 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(IPEndPoint_t3791887218, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPENDPOINT_T3791887218_H
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
#ifndef MQTTMSGUNSUBSCRIBEEVENTARGS_T147345733_H
#define MQTTMSGUNSUBSCRIBEEVENTARGS_T147345733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs
struct  MqttMsgUnsubscribeEventArgs_t147345733  : public EventArgs_t3591816995
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::messageId
	uint16_t ___messageId_1;
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::topics
	StringU5BU5D_t1281789340* ___topics_2;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribeEventArgs_t147345733, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_topics_2() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribeEventArgs_t147345733, ___topics_2)); }
	inline StringU5BU5D_t1281789340* get_topics_2() const { return ___topics_2; }
	inline StringU5BU5D_t1281789340** get_address_of_topics_2() { return &___topics_2; }
	inline void set_topics_2(StringU5BU5D_t1281789340* value)
	{
		___topics_2 = value;
		Il2CppCodeGenWriteBarrier((&___topics_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGUNSUBSCRIBEEVENTARGS_T147345733_H
#ifndef MQTTMSGUNSUBSCRIBEDEVENTARGS_T2229036016_H
#define MQTTMSGUNSUBSCRIBEDEVENTARGS_T2229036016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs
struct  MqttMsgUnsubscribedEventArgs_t2229036016  : public EventArgs_t3591816995
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::messageId
	uint16_t ___messageId_1;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribedEventArgs_t2229036016, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGUNSUBSCRIBEDEVENTARGS_T2229036016_H
#ifndef MQTTMSGUNSUBSCRIBE_T3220791601_H
#define MQTTMSGUNSUBSCRIBE_T3220791601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe
struct  MqttMsgUnsubscribe_t3220791601  : public MqttMsgBase_t2321119380
{
public:
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::topics
	StringU5BU5D_t1281789340* ___topics_36;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::messageId
	uint16_t ___messageId_37;

public:
	inline static int32_t get_offset_of_topics_36() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribe_t3220791601, ___topics_36)); }
	inline StringU5BU5D_t1281789340* get_topics_36() const { return ___topics_36; }
	inline StringU5BU5D_t1281789340** get_address_of_topics_36() { return &___topics_36; }
	inline void set_topics_36(StringU5BU5D_t1281789340* value)
	{
		___topics_36 = value;
		Il2CppCodeGenWriteBarrier((&___topics_36), value);
	}

	inline static int32_t get_offset_of_messageId_37() { return static_cast<int32_t>(offsetof(MqttMsgUnsubscribe_t3220791601, ___messageId_37)); }
	inline uint16_t get_messageId_37() const { return ___messageId_37; }
	inline uint16_t* get_address_of_messageId_37() { return &___messageId_37; }
	inline void set_messageId_37(uint16_t value)
	{
		___messageId_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGUNSUBSCRIBE_T3220791601_H
#ifndef MQTTMSGUNSUBACK_T824663444_H
#define MQTTMSGUNSUBACK_T824663444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback
struct  MqttMsgUnsuback_t824663444  : public MqttMsgBase_t2321119380
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::messageId
	uint16_t ___messageId_36;

public:
	inline static int32_t get_offset_of_messageId_36() { return static_cast<int32_t>(offsetof(MqttMsgUnsuback_t824663444, ___messageId_36)); }
	inline uint16_t get_messageId_36() const { return ___messageId_36; }
	inline uint16_t* get_address_of_messageId_36() { return &___messageId_36; }
	inline void set_messageId_36(uint16_t value)
	{
		___messageId_36 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGUNSUBACK_T824663444_H
#ifndef MQTTMSGSUBSCRIBEEVENTARGS_T3581658625_H
#define MQTTMSGSUBSCRIBEEVENTARGS_T3581658625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs
struct  MqttMsgSubscribeEventArgs_t3581658625  : public EventArgs_t3591816995
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::messageId
	uint16_t ___messageId_1;
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::topics
	StringU5BU5D_t1281789340* ___topics_2;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::qosLevels
	ByteU5BU5D_t4116647657* ___qosLevels_3;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgSubscribeEventArgs_t3581658625, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_topics_2() { return static_cast<int32_t>(offsetof(MqttMsgSubscribeEventArgs_t3581658625, ___topics_2)); }
	inline StringU5BU5D_t1281789340* get_topics_2() const { return ___topics_2; }
	inline StringU5BU5D_t1281789340** get_address_of_topics_2() { return &___topics_2; }
	inline void set_topics_2(StringU5BU5D_t1281789340* value)
	{
		___topics_2 = value;
		Il2CppCodeGenWriteBarrier((&___topics_2), value);
	}

	inline static int32_t get_offset_of_qosLevels_3() { return static_cast<int32_t>(offsetof(MqttMsgSubscribeEventArgs_t3581658625, ___qosLevels_3)); }
	inline ByteU5BU5D_t4116647657* get_qosLevels_3() const { return ___qosLevels_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_qosLevels_3() { return &___qosLevels_3; }
	inline void set_qosLevels_3(ByteU5BU5D_t4116647657* value)
	{
		___qosLevels_3 = value;
		Il2CppCodeGenWriteBarrier((&___qosLevels_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGSUBSCRIBEEVENTARGS_T3581658625_H
#ifndef MQTTMSGSUBSCRIBEDEVENTARGS_T3669420413_H
#define MQTTMSGSUBSCRIBEDEVENTARGS_T3669420413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs
struct  MqttMsgSubscribedEventArgs_t3669420413  : public EventArgs_t3591816995
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::messageId
	uint16_t ___messageId_1;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::grantedQosLevels
	ByteU5BU5D_t4116647657* ___grantedQosLevels_2;

public:
	inline static int32_t get_offset_of_messageId_1() { return static_cast<int32_t>(offsetof(MqttMsgSubscribedEventArgs_t3669420413, ___messageId_1)); }
	inline uint16_t get_messageId_1() const { return ___messageId_1; }
	inline uint16_t* get_address_of_messageId_1() { return &___messageId_1; }
	inline void set_messageId_1(uint16_t value)
	{
		___messageId_1 = value;
	}

	inline static int32_t get_offset_of_grantedQosLevels_2() { return static_cast<int32_t>(offsetof(MqttMsgSubscribedEventArgs_t3669420413, ___grantedQosLevels_2)); }
	inline ByteU5BU5D_t4116647657* get_grantedQosLevels_2() const { return ___grantedQosLevels_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_grantedQosLevels_2() { return &___grantedQosLevels_2; }
	inline void set_grantedQosLevels_2(ByteU5BU5D_t4116647657* value)
	{
		___grantedQosLevels_2 = value;
		Il2CppCodeGenWriteBarrier((&___grantedQosLevels_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGSUBSCRIBEDEVENTARGS_T3669420413_H
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
#ifndef MQTTMSGSUBSCRIBE_T4232534475_H
#define MQTTMSGSUBSCRIBE_T4232534475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe
struct  MqttMsgSubscribe_t4232534475  : public MqttMsgBase_t2321119380
{
public:
	// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::topics
	StringU5BU5D_t1281789340* ___topics_36;
	// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::qosLevels
	ByteU5BU5D_t4116647657* ___qosLevels_37;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::messageId
	uint16_t ___messageId_38;

public:
	inline static int32_t get_offset_of_topics_36() { return static_cast<int32_t>(offsetof(MqttMsgSubscribe_t4232534475, ___topics_36)); }
	inline StringU5BU5D_t1281789340* get_topics_36() const { return ___topics_36; }
	inline StringU5BU5D_t1281789340** get_address_of_topics_36() { return &___topics_36; }
	inline void set_topics_36(StringU5BU5D_t1281789340* value)
	{
		___topics_36 = value;
		Il2CppCodeGenWriteBarrier((&___topics_36), value);
	}

	inline static int32_t get_offset_of_qosLevels_37() { return static_cast<int32_t>(offsetof(MqttMsgSubscribe_t4232534475, ___qosLevels_37)); }
	inline ByteU5BU5D_t4116647657* get_qosLevels_37() const { return ___qosLevels_37; }
	inline ByteU5BU5D_t4116647657** get_address_of_qosLevels_37() { return &___qosLevels_37; }
	inline void set_qosLevels_37(ByteU5BU5D_t4116647657* value)
	{
		___qosLevels_37 = value;
		Il2CppCodeGenWriteBarrier((&___qosLevels_37), value);
	}

	inline static int32_t get_offset_of_messageId_38() { return static_cast<int32_t>(offsetof(MqttMsgSubscribe_t4232534475, ___messageId_38)); }
	inline uint16_t get_messageId_38() const { return ___messageId_38; }
	inline uint16_t* get_address_of_messageId_38() { return &___messageId_38; }
	inline void set_messageId_38(uint16_t value)
	{
		___messageId_38 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGSUBSCRIBE_T4232534475_H
#ifndef MQTTMSGPINGREQ_T516259338_H
#define MQTTMSGPINGREQ_T516259338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq
struct  MqttMsgPingReq_t516259338  : public MqttMsgBase_t2321119380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPINGREQ_T516259338_H
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
#ifndef MQTTMSGCONNACK_T3695344180_H
#define MQTTMSGCONNACK_T3695344180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack
struct  MqttMsgConnack_t3695344180  : public MqttMsgBase_t2321119380
{
public:
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::returnCode
	uint8_t ___returnCode_46;

public:
	inline static int32_t get_offset_of_returnCode_46() { return static_cast<int32_t>(offsetof(MqttMsgConnack_t3695344180, ___returnCode_46)); }
	inline uint8_t get_returnCode_46() const { return ___returnCode_46; }
	inline uint8_t* get_address_of_returnCode_46() { return &___returnCode_46; }
	inline void set_returnCode_46(uint8_t value)
	{
		___returnCode_46 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGCONNACK_T3695344180_H
#ifndef MQTTMSGDISCONNECT_T4092039470_H
#define MQTTMSGDISCONNECT_T4092039470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect
struct  MqttMsgDisconnect_t4092039470  : public MqttMsgBase_t2321119380
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGDISCONNECT_T4092039470_H
#ifndef MQTTMSGCONNECT_T2841720955_H
#define MQTTMSGCONNECT_T2841720955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect
struct  MqttMsgConnect_t2841720955  : public MqttMsgBase_t2321119380
{
public:
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::protocolName
	String_t* ___protocolName_64;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::protocolVersion
	uint8_t ___protocolVersion_65;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::clientId
	String_t* ___clientId_66;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willRetain
	bool ___willRetain_67;
	// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willQosLevel
	uint8_t ___willQosLevel_68;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willFlag
	bool ___willFlag_69;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willTopic
	String_t* ___willTopic_70;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::willMessage
	String_t* ___willMessage_71;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::username
	String_t* ___username_72;
	// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::password
	String_t* ___password_73;
	// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::cleanSession
	bool ___cleanSession_74;
	// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::keepAlivePeriod
	uint16_t ___keepAlivePeriod_75;

public:
	inline static int32_t get_offset_of_protocolName_64() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___protocolName_64)); }
	inline String_t* get_protocolName_64() const { return ___protocolName_64; }
	inline String_t** get_address_of_protocolName_64() { return &___protocolName_64; }
	inline void set_protocolName_64(String_t* value)
	{
		___protocolName_64 = value;
		Il2CppCodeGenWriteBarrier((&___protocolName_64), value);
	}

	inline static int32_t get_offset_of_protocolVersion_65() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___protocolVersion_65)); }
	inline uint8_t get_protocolVersion_65() const { return ___protocolVersion_65; }
	inline uint8_t* get_address_of_protocolVersion_65() { return &___protocolVersion_65; }
	inline void set_protocolVersion_65(uint8_t value)
	{
		___protocolVersion_65 = value;
	}

	inline static int32_t get_offset_of_clientId_66() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___clientId_66)); }
	inline String_t* get_clientId_66() const { return ___clientId_66; }
	inline String_t** get_address_of_clientId_66() { return &___clientId_66; }
	inline void set_clientId_66(String_t* value)
	{
		___clientId_66 = value;
		Il2CppCodeGenWriteBarrier((&___clientId_66), value);
	}

	inline static int32_t get_offset_of_willRetain_67() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___willRetain_67)); }
	inline bool get_willRetain_67() const { return ___willRetain_67; }
	inline bool* get_address_of_willRetain_67() { return &___willRetain_67; }
	inline void set_willRetain_67(bool value)
	{
		___willRetain_67 = value;
	}

	inline static int32_t get_offset_of_willQosLevel_68() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___willQosLevel_68)); }
	inline uint8_t get_willQosLevel_68() const { return ___willQosLevel_68; }
	inline uint8_t* get_address_of_willQosLevel_68() { return &___willQosLevel_68; }
	inline void set_willQosLevel_68(uint8_t value)
	{
		___willQosLevel_68 = value;
	}

	inline static int32_t get_offset_of_willFlag_69() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___willFlag_69)); }
	inline bool get_willFlag_69() const { return ___willFlag_69; }
	inline bool* get_address_of_willFlag_69() { return &___willFlag_69; }
	inline void set_willFlag_69(bool value)
	{
		___willFlag_69 = value;
	}

	inline static int32_t get_offset_of_willTopic_70() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___willTopic_70)); }
	inline String_t* get_willTopic_70() const { return ___willTopic_70; }
	inline String_t** get_address_of_willTopic_70() { return &___willTopic_70; }
	inline void set_willTopic_70(String_t* value)
	{
		___willTopic_70 = value;
		Il2CppCodeGenWriteBarrier((&___willTopic_70), value);
	}

	inline static int32_t get_offset_of_willMessage_71() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___willMessage_71)); }
	inline String_t* get_willMessage_71() const { return ___willMessage_71; }
	inline String_t** get_address_of_willMessage_71() { return &___willMessage_71; }
	inline void set_willMessage_71(String_t* value)
	{
		___willMessage_71 = value;
		Il2CppCodeGenWriteBarrier((&___willMessage_71), value);
	}

	inline static int32_t get_offset_of_username_72() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___username_72)); }
	inline String_t* get_username_72() const { return ___username_72; }
	inline String_t** get_address_of_username_72() { return &___username_72; }
	inline void set_username_72(String_t* value)
	{
		___username_72 = value;
		Il2CppCodeGenWriteBarrier((&___username_72), value);
	}

	inline static int32_t get_offset_of_password_73() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___password_73)); }
	inline String_t* get_password_73() const { return ___password_73; }
	inline String_t** get_address_of_password_73() { return &___password_73; }
	inline void set_password_73(String_t* value)
	{
		___password_73 = value;
		Il2CppCodeGenWriteBarrier((&___password_73), value);
	}

	inline static int32_t get_offset_of_cleanSession_74() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___cleanSession_74)); }
	inline bool get_cleanSession_74() const { return ___cleanSession_74; }
	inline bool* get_address_of_cleanSession_74() { return &___cleanSession_74; }
	inline void set_cleanSession_74(bool value)
	{
		___cleanSession_74 = value;
	}

	inline static int32_t get_offset_of_keepAlivePeriod_75() { return static_cast<int32_t>(offsetof(MqttMsgConnect_t2841720955, ___keepAlivePeriod_75)); }
	inline uint16_t get_keepAlivePeriod_75() const { return ___keepAlivePeriod_75; }
	inline uint16_t* get_address_of_keepAlivePeriod_75() { return &___keepAlivePeriod_75; }
	inline void set_keepAlivePeriod_75(uint16_t value)
	{
		___keepAlivePeriod_75 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGCONNECT_T2841720955_H
#ifndef MQTTMSGCONNECTEVENTARGS_T930364184_H
#define MQTTMSGCONNECTEVENTARGS_T930364184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs
struct  MqttMsgConnectEventArgs_t930364184  : public EventArgs_t3591816995
{
public:
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::<Message>k__BackingField
	MqttMsgConnect_t2841720955 * ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgConnectEventArgs_t930364184, ___U3CMessageU3Ek__BackingField_1)); }
	inline MqttMsgConnect_t2841720955 * get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline MqttMsgConnect_t2841720955 ** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(MqttMsgConnect_t2841720955 * value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGCONNECTEVENTARGS_T930364184_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef SOCKETERROR_T3760144386_H
#define SOCKETERROR_T3760144386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketError
struct  SocketError_t3760144386 
{
public:
	// System.Int32 System.Net.Sockets.SocketError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketError_t3760144386, ___value___1)); }
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
#endif // SOCKETERROR_T3760144386_H
#ifndef TRACELEVEL_T1698272563_H
#define TRACELEVEL_T1698272563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel
struct  TraceLevel_t1698272563 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Utility.TraceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TraceLevel_t1698272563, ___value___1)); }
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
#endif // TRACELEVEL_T1698272563_H
#ifndef MQTTCOMMUNICATIONEXCEPTION_T2651452853_H
#define MQTTCOMMUNICATIONEXCEPTION_T2651452853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException
struct  MqttCommunicationException_t2651452853  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTCOMMUNICATIONEXCEPTION_T2651452853_H
#ifndef SOCKETTYPE_T2175930299_H
#define SOCKETTYPE_T2175930299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketType
struct  SocketType_t2175930299 
{
public:
	// System.Int32 System.Net.Sockets.SocketType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketType_t2175930299, ___value___1)); }
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
#endif // SOCKETTYPE_T2175930299_H
#ifndef EXTERNALEXCEPTION_T3544951457_H
#define EXTERNALEXCEPTION_T3544951457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3544951457  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T3544951457_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
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
#endif // THREADSTATE_T2533302383_H
#ifndef MQTTMSGFLOW_T2274703756_H
#define MQTTMSGFLOW_T2274703756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow
struct  MqttMsgFlow_t2274703756 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MqttMsgFlow_t2274703756, ___value___1)); }
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
#endif // MQTTMSGFLOW_T2274703756_H
#ifndef MQTTMSGSTATE_T2646276100_H
#define MQTTMSGSTATE_T2646276100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState
struct  MqttMsgState_t2646276100 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MqttMsgState_t2646276100, ___value___1)); }
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
#endif // MQTTMSGSTATE_T2646276100_H
#ifndef SOCKETFLAGS_T2969870452_H
#define SOCKETFLAGS_T2969870452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketFlags
struct  SocketFlags_t2969870452 
{
public:
	// System.Int32 System.Net.Sockets.SocketFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SocketFlags_t2969870452, ___value___1)); }
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
#endif // SOCKETFLAGS_T2969870452_H
#ifndef PROTOCOLTYPE_T303635025_H
#define PROTOCOLTYPE_T303635025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.ProtocolType
struct  ProtocolType_t303635025 
{
public:
	// System.Int32 System.Net.Sockets.ProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProtocolType_t303635025, ___value___1)); }
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
#endif // PROTOCOLTYPE_T303635025_H
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
#ifndef MQTTCLIENTERRORCODE_T1383219664_H
#define MQTTCLIENTERRORCODE_T1383219664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode
struct  MqttClientErrorCode_t1383219664 
{
public:
	// System.Int32 uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MqttClientErrorCode_t1383219664, ___value___1)); }
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
#endif // MQTTCLIENTERRORCODE_T1383219664_H
#ifndef MQTTTIMEOUTEXCEPTION_T738756372_H
#define MQTTTIMEOUTEXCEPTION_T738756372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException
struct  MqttTimeoutException_t738756372  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTTIMEOUTEXCEPTION_T738756372_H
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
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
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
#ifndef MQTTCONNECTIONEXCEPTION_T3570015742_H
#define MQTTCONNECTIONEXCEPTION_T3570015742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException
struct  MqttConnectionException_t3570015742  : public ApplicationException_t2339761290
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTCONNECTIONEXCEPTION_T3570015742_H
#ifndef ADDRESSFAMILY_T2612549059_H
#define ADDRESSFAMILY_T2612549059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.AddressFamily
struct  AddressFamily_t2612549059 
{
public:
	// System.Int32 System.Net.Sockets.AddressFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AddressFamily_t2612549059, ___value___1)); }
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
#endif // ADDRESSFAMILY_T2612549059_H
#ifndef IPADDRESS_T241777590_H
#define IPADDRESS_T241777590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.IPAddress
struct  IPAddress_t241777590  : public RuntimeObject
{
public:
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address_0;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family_1;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t3326319531* ___m_Numbers_2;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId_3;
	// System.Int32 System.Net.IPAddress::m_HashCode
	int32_t ___m_HashCode_11;

public:
	inline static int32_t get_offset_of_m_Address_0() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Address_0)); }
	inline int64_t get_m_Address_0() const { return ___m_Address_0; }
	inline int64_t* get_address_of_m_Address_0() { return &___m_Address_0; }
	inline void set_m_Address_0(int64_t value)
	{
		___m_Address_0 = value;
	}

	inline static int32_t get_offset_of_m_Family_1() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Family_1)); }
	inline int32_t get_m_Family_1() const { return ___m_Family_1; }
	inline int32_t* get_address_of_m_Family_1() { return &___m_Family_1; }
	inline void set_m_Family_1(int32_t value)
	{
		___m_Family_1 = value;
	}

	inline static int32_t get_offset_of_m_Numbers_2() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_Numbers_2)); }
	inline UInt16U5BU5D_t3326319531* get_m_Numbers_2() const { return ___m_Numbers_2; }
	inline UInt16U5BU5D_t3326319531** get_address_of_m_Numbers_2() { return &___m_Numbers_2; }
	inline void set_m_Numbers_2(UInt16U5BU5D_t3326319531* value)
	{
		___m_Numbers_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Numbers_2), value);
	}

	inline static int32_t get_offset_of_m_ScopeId_3() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_ScopeId_3)); }
	inline int64_t get_m_ScopeId_3() const { return ___m_ScopeId_3; }
	inline int64_t* get_address_of_m_ScopeId_3() { return &___m_ScopeId_3; }
	inline void set_m_ScopeId_3(int64_t value)
	{
		___m_ScopeId_3 = value;
	}

	inline static int32_t get_offset_of_m_HashCode_11() { return static_cast<int32_t>(offsetof(IPAddress_t241777590, ___m_HashCode_11)); }
	inline int32_t get_m_HashCode_11() const { return ___m_HashCode_11; }
	inline int32_t* get_address_of_m_HashCode_11() { return &___m_HashCode_11; }
	inline void set_m_HashCode_11(int32_t value)
	{
		___m_HashCode_11 = value;
	}
};

struct IPAddress_t241777590_StaticFields
{
public:
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t241777590 * ___Any_4;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t241777590 * ___Broadcast_5;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t241777590 * ___Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t241777590 * ___None_7;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t241777590 * ___IPv6Any_8;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t241777590 * ___IPv6Loopback_9;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t241777590 * ___IPv6None_10;

public:
	inline static int32_t get_offset_of_Any_4() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Any_4)); }
	inline IPAddress_t241777590 * get_Any_4() const { return ___Any_4; }
	inline IPAddress_t241777590 ** get_address_of_Any_4() { return &___Any_4; }
	inline void set_Any_4(IPAddress_t241777590 * value)
	{
		___Any_4 = value;
		Il2CppCodeGenWriteBarrier((&___Any_4), value);
	}

	inline static int32_t get_offset_of_Broadcast_5() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Broadcast_5)); }
	inline IPAddress_t241777590 * get_Broadcast_5() const { return ___Broadcast_5; }
	inline IPAddress_t241777590 ** get_address_of_Broadcast_5() { return &___Broadcast_5; }
	inline void set_Broadcast_5(IPAddress_t241777590 * value)
	{
		___Broadcast_5 = value;
		Il2CppCodeGenWriteBarrier((&___Broadcast_5), value);
	}

	inline static int32_t get_offset_of_Loopback_6() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___Loopback_6)); }
	inline IPAddress_t241777590 * get_Loopback_6() const { return ___Loopback_6; }
	inline IPAddress_t241777590 ** get_address_of_Loopback_6() { return &___Loopback_6; }
	inline void set_Loopback_6(IPAddress_t241777590 * value)
	{
		___Loopback_6 = value;
		Il2CppCodeGenWriteBarrier((&___Loopback_6), value);
	}

	inline static int32_t get_offset_of_None_7() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___None_7)); }
	inline IPAddress_t241777590 * get_None_7() const { return ___None_7; }
	inline IPAddress_t241777590 ** get_address_of_None_7() { return &___None_7; }
	inline void set_None_7(IPAddress_t241777590 * value)
	{
		___None_7 = value;
		Il2CppCodeGenWriteBarrier((&___None_7), value);
	}

	inline static int32_t get_offset_of_IPv6Any_8() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Any_8)); }
	inline IPAddress_t241777590 * get_IPv6Any_8() const { return ___IPv6Any_8; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Any_8() { return &___IPv6Any_8; }
	inline void set_IPv6Any_8(IPAddress_t241777590 * value)
	{
		___IPv6Any_8 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Any_8), value);
	}

	inline static int32_t get_offset_of_IPv6Loopback_9() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6Loopback_9)); }
	inline IPAddress_t241777590 * get_IPv6Loopback_9() const { return ___IPv6Loopback_9; }
	inline IPAddress_t241777590 ** get_address_of_IPv6Loopback_9() { return &___IPv6Loopback_9; }
	inline void set_IPv6Loopback_9(IPAddress_t241777590 * value)
	{
		___IPv6Loopback_9 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6Loopback_9), value);
	}

	inline static int32_t get_offset_of_IPv6None_10() { return static_cast<int32_t>(offsetof(IPAddress_t241777590_StaticFields, ___IPv6None_10)); }
	inline IPAddress_t241777590 * get_IPv6None_10() const { return ___IPv6None_10; }
	inline IPAddress_t241777590 ** get_address_of_IPv6None_10() { return &___IPv6None_10; }
	inline void set_IPv6None_10(IPAddress_t241777590 * value)
	{
		___IPv6None_10 = value;
		Il2CppCodeGenWriteBarrier((&___IPv6None_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPADDRESS_T241777590_H
#ifndef MQTTMSGCONTEXT_T1493973115_H
#define MQTTMSGCONTEXT_T1493973115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext
struct  MqttMsgContext_t1493973115  : public RuntimeObject
{
public:
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Message>k__BackingField
	MqttMsgBase_t2321119380 * ___U3CMessageU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_2;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Timestamp>k__BackingField
	int32_t ___U3CTimestampU3Ek__BackingField_3;
	// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::<Attempt>k__BackingField
	int32_t ___U3CAttemptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttMsgContext_t1493973115, ___U3CMessageU3Ek__BackingField_0)); }
	inline MqttMsgBase_t2321119380 * get_U3CMessageU3Ek__BackingField_0() const { return ___U3CMessageU3Ek__BackingField_0; }
	inline MqttMsgBase_t2321119380 ** get_address_of_U3CMessageU3Ek__BackingField_0() { return &___U3CMessageU3Ek__BackingField_0; }
	inline void set_U3CMessageU3Ek__BackingField_0(MqttMsgBase_t2321119380 * value)
	{
		___U3CMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgContext_t1493973115, ___U3CStateU3Ek__BackingField_1)); }
	inline int32_t get_U3CStateU3Ek__BackingField_1() const { return ___U3CStateU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_1() { return &___U3CStateU3Ek__BackingField_1; }
	inline void set_U3CStateU3Ek__BackingField_1(int32_t value)
	{
		___U3CStateU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CFlowU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MqttMsgContext_t1493973115, ___U3CFlowU3Ek__BackingField_2)); }
	inline int32_t get_U3CFlowU3Ek__BackingField_2() const { return ___U3CFlowU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CFlowU3Ek__BackingField_2() { return &___U3CFlowU3Ek__BackingField_2; }
	inline void set_U3CFlowU3Ek__BackingField_2(int32_t value)
	{
		___U3CFlowU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MqttMsgContext_t1493973115, ___U3CTimestampU3Ek__BackingField_3)); }
	inline int32_t get_U3CTimestampU3Ek__BackingField_3() const { return ___U3CTimestampU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CTimestampU3Ek__BackingField_3() { return &___U3CTimestampU3Ek__BackingField_3; }
	inline void set_U3CTimestampU3Ek__BackingField_3(int32_t value)
	{
		___U3CTimestampU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttemptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MqttMsgContext_t1493973115, ___U3CAttemptU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttemptU3Ek__BackingField_4() const { return ___U3CAttemptU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttemptU3Ek__BackingField_4() { return &___U3CAttemptU3Ek__BackingField_4; }
	inline void set_U3CAttemptU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttemptU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGCONTEXT_T1493973115_H
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
#ifndef TRACE_T376076007_H
#define TRACE_T376076007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Utility.Trace
struct  Trace_t376076007  : public RuntimeObject
{
public:

public:
};

struct Trace_t376076007_StaticFields
{
public:
	// uPLibrary.Networking.M2Mqtt.Utility.TraceLevel uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceLevel
	int32_t ___TraceLevel_0;
	// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace uPLibrary.Networking.M2Mqtt.Utility.Trace::TraceListener
	WriteTrace_t3974110851 * ___TraceListener_1;

public:
	inline static int32_t get_offset_of_TraceLevel_0() { return static_cast<int32_t>(offsetof(Trace_t376076007_StaticFields, ___TraceLevel_0)); }
	inline int32_t get_TraceLevel_0() const { return ___TraceLevel_0; }
	inline int32_t* get_address_of_TraceLevel_0() { return &___TraceLevel_0; }
	inline void set_TraceLevel_0(int32_t value)
	{
		___TraceLevel_0 = value;
	}

	inline static int32_t get_offset_of_TraceListener_1() { return static_cast<int32_t>(offsetof(Trace_t376076007_StaticFields, ___TraceListener_1)); }
	inline WriteTrace_t3974110851 * get_TraceListener_1() const { return ___TraceListener_1; }
	inline WriteTrace_t3974110851 ** get_address_of_TraceListener_1() { return &___TraceListener_1; }
	inline void set_TraceListener_1(WriteTrace_t3974110851 * value)
	{
		___TraceListener_1 = value;
		Il2CppCodeGenWriteBarrier((&___TraceListener_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACE_T376076007_H
#ifndef SOCKET_T1119025450_H
#define SOCKET_T1119025450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.Socket
struct  Socket_t1119025450  : public RuntimeObject
{
public:
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t3637523393 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t3637523393 * ___writeQ_1;
	// System.Boolean System.Net.Sockets.Socket::islistening
	bool ___islistening_2;
	// System.Boolean System.Net.Sockets.Socket::useoverlappedIO
	bool ___useoverlappedIO_3;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_4;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_5;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_8;
	// System.IntPtr System.Net.Sockets.Socket::socket
	intptr_t ___socket_9;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_10;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_11;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_12;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_13;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t2300836069 * ___blocking_thread_14;
	// System.Boolean System.Net.Sockets.Socket::isbound
	bool ___isbound_15;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_17;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_18;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_19;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_20;
	// System.Net.EndPoint System.Net.Sockets.Socket::seed_endpoint
	EndPoint_t982345378 * ___seed_endpoint_21;

public:
	inline static int32_t get_offset_of_readQ_0() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___readQ_0)); }
	inline Queue_t3637523393 * get_readQ_0() const { return ___readQ_0; }
	inline Queue_t3637523393 ** get_address_of_readQ_0() { return &___readQ_0; }
	inline void set_readQ_0(Queue_t3637523393 * value)
	{
		___readQ_0 = value;
		Il2CppCodeGenWriteBarrier((&___readQ_0), value);
	}

	inline static int32_t get_offset_of_writeQ_1() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___writeQ_1)); }
	inline Queue_t3637523393 * get_writeQ_1() const { return ___writeQ_1; }
	inline Queue_t3637523393 ** get_address_of_writeQ_1() { return &___writeQ_1; }
	inline void set_writeQ_1(Queue_t3637523393 * value)
	{
		___writeQ_1 = value;
		Il2CppCodeGenWriteBarrier((&___writeQ_1), value);
	}

	inline static int32_t get_offset_of_islistening_2() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___islistening_2)); }
	inline bool get_islistening_2() const { return ___islistening_2; }
	inline bool* get_address_of_islistening_2() { return &___islistening_2; }
	inline void set_islistening_2(bool value)
	{
		___islistening_2 = value;
	}

	inline static int32_t get_offset_of_useoverlappedIO_3() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___useoverlappedIO_3)); }
	inline bool get_useoverlappedIO_3() const { return ___useoverlappedIO_3; }
	inline bool* get_address_of_useoverlappedIO_3() { return &___useoverlappedIO_3; }
	inline void set_useoverlappedIO_3(bool value)
	{
		___useoverlappedIO_3 = value;
	}

	inline static int32_t get_offset_of_MinListenPort_4() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___MinListenPort_4)); }
	inline int32_t get_MinListenPort_4() const { return ___MinListenPort_4; }
	inline int32_t* get_address_of_MinListenPort_4() { return &___MinListenPort_4; }
	inline void set_MinListenPort_4(int32_t value)
	{
		___MinListenPort_4 = value;
	}

	inline static int32_t get_offset_of_MaxListenPort_5() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___MaxListenPort_5)); }
	inline int32_t get_MaxListenPort_5() const { return ___MaxListenPort_5; }
	inline int32_t* get_address_of_MaxListenPort_5() { return &___MaxListenPort_5; }
	inline void set_MaxListenPort_5(int32_t value)
	{
		___MaxListenPort_5 = value;
	}

	inline static int32_t get_offset_of_linger_timeout_8() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___linger_timeout_8)); }
	inline int32_t get_linger_timeout_8() const { return ___linger_timeout_8; }
	inline int32_t* get_address_of_linger_timeout_8() { return &___linger_timeout_8; }
	inline void set_linger_timeout_8(int32_t value)
	{
		___linger_timeout_8 = value;
	}

	inline static int32_t get_offset_of_socket_9() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socket_9)); }
	inline intptr_t get_socket_9() const { return ___socket_9; }
	inline intptr_t* get_address_of_socket_9() { return &___socket_9; }
	inline void set_socket_9(intptr_t value)
	{
		___socket_9 = value;
	}

	inline static int32_t get_offset_of_address_family_10() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___address_family_10)); }
	inline int32_t get_address_family_10() const { return ___address_family_10; }
	inline int32_t* get_address_of_address_family_10() { return &___address_family_10; }
	inline void set_address_family_10(int32_t value)
	{
		___address_family_10 = value;
	}

	inline static int32_t get_offset_of_socket_type_11() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___socket_type_11)); }
	inline int32_t get_socket_type_11() const { return ___socket_type_11; }
	inline int32_t* get_address_of_socket_type_11() { return &___socket_type_11; }
	inline void set_socket_type_11(int32_t value)
	{
		___socket_type_11 = value;
	}

	inline static int32_t get_offset_of_protocol_type_12() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___protocol_type_12)); }
	inline int32_t get_protocol_type_12() const { return ___protocol_type_12; }
	inline int32_t* get_address_of_protocol_type_12() { return &___protocol_type_12; }
	inline void set_protocol_type_12(int32_t value)
	{
		___protocol_type_12 = value;
	}

	inline static int32_t get_offset_of_blocking_13() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___blocking_13)); }
	inline bool get_blocking_13() const { return ___blocking_13; }
	inline bool* get_address_of_blocking_13() { return &___blocking_13; }
	inline void set_blocking_13(bool value)
	{
		___blocking_13 = value;
	}

	inline static int32_t get_offset_of_blocking_thread_14() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___blocking_thread_14)); }
	inline Thread_t2300836069 * get_blocking_thread_14() const { return ___blocking_thread_14; }
	inline Thread_t2300836069 ** get_address_of_blocking_thread_14() { return &___blocking_thread_14; }
	inline void set_blocking_thread_14(Thread_t2300836069 * value)
	{
		___blocking_thread_14 = value;
		Il2CppCodeGenWriteBarrier((&___blocking_thread_14), value);
	}

	inline static int32_t get_offset_of_isbound_15() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___isbound_15)); }
	inline bool get_isbound_15() const { return ___isbound_15; }
	inline bool* get_address_of_isbound_15() { return &___isbound_15; }
	inline void set_isbound_15(bool value)
	{
		___isbound_15 = value;
	}

	inline static int32_t get_offset_of_max_bind_count_17() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___max_bind_count_17)); }
	inline int32_t get_max_bind_count_17() const { return ___max_bind_count_17; }
	inline int32_t* get_address_of_max_bind_count_17() { return &___max_bind_count_17; }
	inline void set_max_bind_count_17(int32_t value)
	{
		___max_bind_count_17 = value;
	}

	inline static int32_t get_offset_of_connected_18() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___connected_18)); }
	inline bool get_connected_18() const { return ___connected_18; }
	inline bool* get_address_of_connected_18() { return &___connected_18; }
	inline void set_connected_18(bool value)
	{
		___connected_18 = value;
	}

	inline static int32_t get_offset_of_closed_19() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___closed_19)); }
	inline bool get_closed_19() const { return ___closed_19; }
	inline bool* get_address_of_closed_19() { return &___closed_19; }
	inline void set_closed_19(bool value)
	{
		___closed_19 = value;
	}

	inline static int32_t get_offset_of_disposed_20() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___disposed_20)); }
	inline bool get_disposed_20() const { return ___disposed_20; }
	inline bool* get_address_of_disposed_20() { return &___disposed_20; }
	inline void set_disposed_20(bool value)
	{
		___disposed_20 = value;
	}

	inline static int32_t get_offset_of_seed_endpoint_21() { return static_cast<int32_t>(offsetof(Socket_t1119025450, ___seed_endpoint_21)); }
	inline EndPoint_t982345378 * get_seed_endpoint_21() const { return ___seed_endpoint_21; }
	inline EndPoint_t982345378 ** get_address_of_seed_endpoint_21() { return &___seed_endpoint_21; }
	inline void set_seed_endpoint_21(EndPoint_t982345378 * value)
	{
		___seed_endpoint_21 = value;
		Il2CppCodeGenWriteBarrier((&___seed_endpoint_21), value);
	}
};

struct Socket_t1119025450_StaticFields
{
public:
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_6;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_7;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_16;
	// System.Reflection.MethodInfo System.Net.Sockets.Socket::check_socket_policy
	MethodInfo_t * ___check_socket_policy_22;

public:
	inline static int32_t get_offset_of_ipv4Supported_6() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ipv4Supported_6)); }
	inline int32_t get_ipv4Supported_6() const { return ___ipv4Supported_6; }
	inline int32_t* get_address_of_ipv4Supported_6() { return &___ipv4Supported_6; }
	inline void set_ipv4Supported_6(int32_t value)
	{
		___ipv4Supported_6 = value;
	}

	inline static int32_t get_offset_of_ipv6Supported_7() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___ipv6Supported_7)); }
	inline int32_t get_ipv6Supported_7() const { return ___ipv6Supported_7; }
	inline int32_t* get_address_of_ipv6Supported_7() { return &___ipv6Supported_7; }
	inline void set_ipv6Supported_7(int32_t value)
	{
		___ipv6Supported_7 = value;
	}

	inline static int32_t get_offset_of_current_bind_count_16() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___current_bind_count_16)); }
	inline int32_t get_current_bind_count_16() const { return ___current_bind_count_16; }
	inline int32_t* get_address_of_current_bind_count_16() { return &___current_bind_count_16; }
	inline void set_current_bind_count_16(int32_t value)
	{
		___current_bind_count_16 = value;
	}

	inline static int32_t get_offset_of_check_socket_policy_22() { return static_cast<int32_t>(offsetof(Socket_t1119025450_StaticFields, ___check_socket_policy_22)); }
	inline MethodInfo_t * get_check_socket_policy_22() const { return ___check_socket_policy_22; }
	inline MethodInfo_t ** get_address_of_check_socket_policy_22() { return &___check_socket_policy_22; }
	inline void set_check_socket_policy_22(MethodInfo_t * value)
	{
		___check_socket_policy_22 = value;
		Il2CppCodeGenWriteBarrier((&___check_socket_policy_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKET_T1119025450_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
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
#ifndef WIN32EXCEPTION_T3234146298_H
#define WIN32EXCEPTION_T3234146298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t3234146298  : public ExternalException_t3544951457
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::native_error_code
	int32_t ___native_error_code_11;

public:
	inline static int32_t get_offset_of_native_error_code_11() { return static_cast<int32_t>(offsetof(Win32Exception_t3234146298, ___native_error_code_11)); }
	inline int32_t get_native_error_code_11() const { return ___native_error_code_11; }
	inline int32_t* get_address_of_native_error_code_11() { return &___native_error_code_11; }
	inline void set_native_error_code_11(int32_t value)
	{
		___native_error_code_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T3234146298_H
#ifndef MQTTCLIENTEXCEPTION_T1411037672_H
#define MQTTCLIENTEXCEPTION_T1411037672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException
struct  MqttClientException_t1411037672  : public ApplicationException_t2339761290
{
public:
	// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::errorCode
	int32_t ___errorCode_11;

public:
	inline static int32_t get_offset_of_errorCode_11() { return static_cast<int32_t>(offsetof(MqttClientException_t1411037672, ___errorCode_11)); }
	inline int32_t get_errorCode_11() const { return ___errorCode_11; }
	inline int32_t* get_address_of_errorCode_11() { return &___errorCode_11; }
	inline void set_errorCode_11(int32_t value)
	{
		___errorCode_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTCLIENTEXCEPTION_T1411037672_H
#ifndef MQTTMSGCONTEXTFINDER_T287101668_H
#define MQTTMSGCONTEXTFINDER_T287101668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder
struct  MqttMsgContextFinder_t287101668  : public RuntimeObject
{
public:
	// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::<MessageId>k__BackingField
	uint16_t ___U3CMessageIdU3Ek__BackingField_0;
	// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::<Flow>k__BackingField
	int32_t ___U3CFlowU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MqttMsgContextFinder_t287101668, ___U3CMessageIdU3Ek__BackingField_0)); }
	inline uint16_t get_U3CMessageIdU3Ek__BackingField_0() const { return ___U3CMessageIdU3Ek__BackingField_0; }
	inline uint16_t* get_address_of_U3CMessageIdU3Ek__BackingField_0() { return &___U3CMessageIdU3Ek__BackingField_0; }
	inline void set_U3CMessageIdU3Ek__BackingField_0(uint16_t value)
	{
		___U3CMessageIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFlowU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MqttMsgContextFinder_t287101668, ___U3CFlowU3Ek__BackingField_1)); }
	inline int32_t get_U3CFlowU3Ek__BackingField_1() const { return ___U3CFlowU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFlowU3Ek__BackingField_1() { return &___U3CFlowU3Ek__BackingField_1; }
	inline void set_U3CFlowU3Ek__BackingField_1(int32_t value)
	{
		___U3CFlowU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGCONTEXTFINDER_T287101668_H
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
#ifndef AUTORESETEVENT_T1333520283_H
#define AUTORESETEVENT_T1333520283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t1333520283  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T1333520283_H
#ifndef MQTTMSGDISCONNECTEVENTHANDLER_T848571114_H
#define MQTTMSGDISCONNECTEVENTHANDLER_T848571114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler
struct  MqttMsgDisconnectEventHandler_t848571114  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGDISCONNECTEVENTHANDLER_T848571114_H
#ifndef SOCKETEXCEPTION_T3852068672_H
#define SOCKETEXCEPTION_T3852068672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Sockets.SocketException
struct  SocketException_t3852068672  : public Win32Exception_t3234146298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETEXCEPTION_T3852068672_H
#ifndef MQTTMSGUNSUBSCRIBEDEVENTHANDLER_T2087605283_H
#define MQTTMSGUNSUBSCRIBEDEVENTHANDLER_T2087605283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler
struct  MqttMsgUnsubscribedEventHandler_t2087605283  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGUNSUBSCRIBEDEVENTHANDLER_T2087605283_H
#ifndef QUEUEPREDICATE_T1615372677_H
#define QUEUEPREDICATE_T1615372677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate
struct  QueuePredicate_t1615372677  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUEUEPREDICATE_T1615372677_H
#ifndef WRITETRACE_T3974110851_H
#define WRITETRACE_T3974110851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.Utility.WriteTrace
struct  WriteTrace_t3974110851  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITETRACE_T3974110851_H
#ifndef THREADSTART_T1006689297_H
#define THREADSTART_T1006689297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1006689297  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1006689297_H
#ifndef MQTTMSGPUBLISHEDEVENTHANDLER_T3860164542_H
#define MQTTMSGPUBLISHEDEVENTHANDLER_T3860164542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler
struct  MqttMsgPublishedEventHandler_t3860164542  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGPUBLISHEDEVENTHANDLER_T3860164542_H
#ifndef MQTTMSGSUBSCRIBEDEVENTHANDLER_T2042141578_H
#define MQTTMSGSUBSCRIBEDEVENTHANDLER_T2042141578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler
struct  MqttMsgSubscribedEventHandler_t2042141578  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTMSGSUBSCRIBEDEVENTHANDLER_T2042141578_H
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
#ifndef MQTTTEST_T759171104_H
#define MQTTTEST_T759171104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// mqttTest
struct  mqttTest_t759171104  : public MonoBehaviour_t3962482529
{
public:
	// uPLibrary.Networking.M2Mqtt.MqttClient mqttTest::client
	MqttClient_t1237157870 * ___client_2;

public:
	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(mqttTest_t759171104, ___client_2)); }
	inline MqttClient_t1237157870 * get_client_2() const { return ___client_2; }
	inline MqttClient_t1237157870 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(MqttClient_t1237157870 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier((&___client_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MQTTTEST_T759171104_H
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_t4116647657* m_Items[1];

public:
	inline ByteU5BU5D_t4116647657* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_t4116647657** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_t4116647657* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ByteU5BU5D_t4116647657* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_t4116647657** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_t4116647657* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t596328627  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) IPAddress_t241777590 * m_Items[1];

public:
	inline IPAddress_t241777590 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline IPAddress_t241777590 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, IPAddress_t241777590 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline IPAddress_t241777590 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline IPAddress_t241777590 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, IPAddress_t241777590 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
extern "C"  void List_1__ctor_m2032142263_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C"  IPAddress_t241777590 * IPAddress_Parse_m2200822423 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.Net.IPAddress,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient__ctor_m3990998280 (MqttClient_t1237157870 * __this, IPAddress_t241777590 * ___brokerIpAddress0, int32_t ___brokerPort1, bool ___secure2, X509Certificate_t713131622 * ___caCert3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgPublishEventHandler__ctor_m3294399465 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler)
extern "C"  void MqttClient_add_MqttMsgPublishReceived_m3145106695 (MqttClient_t1237157870 * __this, MqttMsgPublishEventHandler_t1923217352 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
extern "C"  Guid_t  Guid_NewGuid_m923091018 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
extern "C"  String_t* Guid_ToString_m3279186591 (Guid_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String)
extern "C"  uint8_t MqttClient_Connect_m1200615702 (MqttClient_t1237157870 * __this, String_t* ___clientId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Subscribe(System.String[],System.Byte[])
extern "C"  uint16_t MqttClient_Subscribe_m914342903 (MqttClient_t1237157870 * __this, StringU5BU5D_t1281789340* ___topics0, ByteU5BU5D_t4116647657* ___qosLevels1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Message()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPublishEventArgs_get_Message_m3404860665 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Rect__ctor_m2614021312 (Rect_t2360479859 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C"  bool GUI_Button_m1518979886 (RuntimeObject * __this /* static, unused */, Rect_t2360479859  p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Publish(System.String,System.Byte[],System.Byte,System.Boolean)
extern "C"  uint16_t MqttClient_Publish_m2947629173 (MqttClient_t1237157870 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, uint8_t ___qosLevel2, bool ___retain3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::RaiseLocalSdpReadytoSend(System.String,System.String)
extern "C"  void PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365 (RuntimeObject * __this /* static, unused */, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::RegisterCallbacks()
extern "C"  void PeerConnectioniOS_RegisterCallbacks_m1649261689 (PeerConnectioniOS_t1321012807 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr PeerConnectioniOS::CoMuLight_makeNative()
extern "C"  intptr_t PeerConnectioniOS_CoMuLight_makeNative_m4152358688 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::CoMuLogger_Log(System.String)
extern "C"  void PeerConnectioniOS_CoMuLogger_Log_m2834767156 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS/SDPREADY_Delegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SDPREADY_Delegate__ctor_m3757528741 (SDPREADY_Delegate_t94822726 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::CoMuLight_RegisterSdpReady(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_CoMuLight_RegisterSdpReady_m2451198377 (RuntimeObject * __this /* static, unused */, SDPREADY_Delegate_t94822726 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::add_onSdpReadyDelegate(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_add_onSdpReadyDelegate_m2735798781 (RuntimeObject * __this /* static, unused */, SDPREADY_Delegate_t94822726 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS::remove_onSdpReadyDelegate(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_remove_onSdpReadyDelegate_m2239559694 (RuntimeObject * __this /* static, unused */, SDPREADY_Delegate_t94822726 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PeerConnectioniOS/SDPREADY_Delegate::Invoke(System.String,System.String)
extern "C"  void SDPREADY_Delegate_Invoke_m984274266 (SDPREADY_Delegate_t94822726 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor()
extern "C"  void ApplicationException__ctor_m2557611022 (ApplicationException_t2339761290 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C"  void ApplicationException__ctor_m692455299 (ApplicationException_t2339761290 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C"  int32_t IPAddress_get_AddressFamily_m1010663936 (IPAddress_t241777590 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
extern "C"  void MqttMsgBase__ctor_m1645311330 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::.ctor()
extern "C"  void MqttMsgConnack__ctor_m1293679364 (MqttMsgConnack_t3695344180 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  int32_t MqttMsgBase_decodeRemainingLength_m1049822892 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___channel0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t MqttMsgBase_encodeRemainingLength_m152082486 (MqttMsgBase_t2321119380 * __this, int32_t ___remainingLength0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___index2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Object::ToString()
extern "C"  String_t* Object_ToString_m1740002499 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16)
extern "C"  void MqttMsgConnect__ctor_m1250605407 (MqttMsgConnect_t2841720955 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor()
extern "C"  void MqttMsgConnect__ctor_m3103498375 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
extern "C"  void MqttClientException__ctor_m3847753279 (MqttClientException_t1411037672 * __this, int32_t ___errorCode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect)
extern "C"  void MqttMsgConnectEventArgs_set_Message_m3951955234 (MqttMsgConnectEventArgs_t930364184 * __this, MqttMsgConnect_t2841720955 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::.ctor()
extern "C"  void MqttMsgDisconnect__ctor_m1701223112 (MqttMsgDisconnect_t4092039470 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::.ctor()
extern "C"  void MqttMsgPingReq__ctor_m4132750144 (MqttMsgPingReq_t516259338 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::.ctor()
extern "C"  void MqttMsgPingResp__ctor_m350567925 (MqttMsgPingResp_t2915329856 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::.ctor()
extern "C"  void MqttMsgPuback__ctor_m261856467 (MqttMsgPuback_t3000343258 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::.ctor()
extern "C"  void MqttMsgPubcomp__ctor_m2433696329 (MqttMsgPubcomp_t24488374 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
extern "C"  void MqttMsgPublish__ctor_m3530188858 (MqttMsgPublish_t1956840664 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m363431711 (String_t* __this, Il2CppChar p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor()
extern "C"  void MqttMsgPublish__ctor_m3222053250 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::.ctor()
extern "C"  void MqttMsgPubrec__ctor_m112381699 (MqttMsgPubrec_t1898486492 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
extern "C"  void MqttMsgPubrel__ctor_m151899907 (MqttMsgPubrel_t1897503452 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
extern "C"  void MqttMsgSuback__ctor_m2813373056 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor()
extern "C"  void MqttMsgSubscribe__ctor_m3965809934 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
#define List_1__ctor_m2032142263(__this, method) ((  void (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1__ctor_m2032142263_gshared)(__this, method)
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
extern "C"  void MqttMsgUnsuback__ctor_m3001340441 (MqttMsgUnsuback_t824663444 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor()
extern "C"  void MqttMsgUnsubscribe__ctor_m3638356312 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Init(System.String,System.Net.IPAddress,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient_Init_m2786449446 (MqttClient_t1237157870 * __this, String_t* ___brokerHostName0, IPAddress_t241777590 * ___brokerIpAddress1, int32_t ___brokerPort2, bool ___secure3, X509Certificate_t713131622 * ___caCert4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient__ctor_m2956131190 (MqttClient_t1237157870 * __this, String_t* ___brokerHostName0, int32_t ___brokerPort1, bool ___secure2, X509Certificate_t713131622 * ___caCert3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C"  IPHostEntry_t263743900 * Dns_GetHostEntry_m2165252375 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C"  IPAddressU5BU5D_t596328627* IPHostEntry_get_AddressList_m1351062776 (IPHostEntry_t263743900 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C"  void ApplicationException__ctor_m2517758450 (ApplicationException_t2339761290 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::get_Instance()
extern "C"  MqttSettings_t1362412725 * MqttSettings_get_Instance_m2044335333 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
extern "C"  void AutoResetEvent__ctor_m3710433672 (AutoResetEvent_t1333520283 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Queue::.ctor()
extern "C"  void Queue__ctor_m2030580699 (Queue_t3637523393 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16)
extern "C"  uint8_t MqttClient_Connect_m879571441 (MqttClient_t1237157870 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Net.IPAddress,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttNetworkChannel__ctor_m3461208760 (MqttNetworkChannel_t2078300306 * __this, String_t* ___remoteHostName0, IPAddress_t241777590 * ___remoteIpAddress1, int32_t ___remotePort2, bool ___secure3, X509Certificate_t713131622 * ___caCert4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException::.ctor(System.String,System.Exception)
extern "C"  void MqttConnectionException__ctor_m1103185096 (MqttConnectionException_t3570015742 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
extern "C"  void ThreadStart__ctor_m3250019360 (ThreadStart_t1006689297 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C"  void Thread__ctor_m777188137 (Thread_t2300836069 * __this, ThreadStart_t1006689297 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C"  void Thread_Start_m2860771284 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m1011753397 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::get_ReturnCode()
extern "C"  uint8_t MqttMsgConnack_get_ReturnCode_m1170617396 (MqttMsgConnack_t3695344180 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_ClientId(System.String)
extern "C"  void MqttClient_set_ClientId_m659083255 (MqttClient_t1237157870 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_CleanSession(System.Boolean)
extern "C"  void MqttClient_set_CleanSession_m1579075915 (MqttClient_t1237157870 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillFlag(System.Boolean)
extern "C"  void MqttClient_set_WillFlag_m4108952267 (MqttClient_t1237157870 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillTopic(System.String)
extern "C"  void MqttClient_set_WillTopic_m2625525473 (MqttClient_t1237157870 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillMessage(System.String)
extern "C"  void MqttClient_set_WillMessage_m783918025 (MqttClient_t1237157870 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillQosLevel(System.Byte)
extern "C"  void MqttClient_set_WillQosLevel_m3532803667 (MqttClient_t1237157870 * __this, uint8_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_IsConnected(System.Boolean)
extern "C"  void MqttClient_set_IsConnected_m2691633300 (MqttClient_t1237157870 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttClient_Send_m1996534700 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Close()
extern "C"  void MqttClient_Close_m2185175017 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C"  bool EventWaitHandle_Set_m2445193251 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Join()
extern "C"  void Thread_Join_m742107115 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Int32)
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m2152143786 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, int32_t ___timeout1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object)
extern "C"  void Trace_WriteLine_m1516194618 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor(System.String[],System.Byte[])
extern "C"  void MqttMsgSubscribe__ctor_m840732161 (MqttMsgSubscribe_t4232534475 * __this, StringU5BU5D_t1281789340* ___topics0, ByteU5BU5D_t4116647657* ___qosLevels1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::GetMessageId()
extern "C"  uint16_t MqttClient_GetMessageId_m3961671348 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_MessageId(System.UInt16)
extern "C"  void MqttMsgSubscribe_set_MessageId_m2993089582 (MqttMsgSubscribe_t4232534475 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInflight(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttClient_EnqueueInflight_m413130657 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, int32_t ___flow1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_MessageId()
extern "C"  uint16_t MqttMsgSubscribe_get_MessageId_m1906184073 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor(System.String[])
extern "C"  void MqttMsgUnsubscribe__ctor_m4175818348 (MqttMsgUnsubscribe_t3220791601 * __this, StringU5BU5D_t1281789340* ___topics0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::set_MessageId(System.UInt16)
extern "C"  void MqttMsgUnsubscribe_set_MessageId_m4272645186 (MqttMsgUnsubscribe_t3220791601 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::get_MessageId()
extern "C"  uint16_t MqttMsgUnsubscribe_get_MessageId_m1937183691 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPublish_set_MessageId_m1202353617 (MqttMsgPublish_t1956840664 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_MessageId()
extern "C"  uint16_t MqttMsgPublish_get_MessageId_m3957849214 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Topic()
extern "C"  String_t* MqttMsgPublish_get_Topic_m2553516360 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Message()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPublish_get_Message_m2120338431 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_DupFlag()
extern "C"  bool MqttMsgBase_get_DupFlag_m4167438242 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_QosLevel()
extern "C"  uint8_t MqttMsgBase_get_QosLevel_m772124759 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Retain()
extern "C"  bool MqttMsgBase_get_Retain_m2912767190 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
extern "C"  void MqttMsgPublishEventArgs__ctor_m4161232453 (MqttMsgPublishEventArgs_t2350602093 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
extern "C"  void MqttMsgPublishEventHandler_Invoke_m3753111200 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t2350602093 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16)
extern "C"  void MqttMsgPublishedEventArgs__ctor_m3198312214 (MqttMsgPublishedEventArgs_t90327050 * __this, uint16_t ___messageId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs)
extern "C"  void MqttMsgPublishedEventHandler_Invoke_m2649475026 (MqttMsgPublishedEventHandler_t3860164542 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_t90327050 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_MessageId()
extern "C"  uint16_t MqttMsgSuback_get_MessageId_m1708504470 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_GrantedQoSLevels()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSuback_get_GrantedQoSLevels_m1798944243 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::.ctor(System.UInt16,System.Byte[])
extern "C"  void MqttMsgSubscribedEventArgs__ctor_m4146728216 (MqttMsgSubscribedEventArgs_t3669420413 * __this, uint16_t ___messageId0, ByteU5BU5D_t4116647657* ___grantedQosLevels1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs)
extern "C"  void MqttMsgSubscribedEventHandler_Invoke_m4081086823 (MqttMsgSubscribedEventHandler_t2042141578 * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_t3669420413 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::.ctor(System.UInt16)
extern "C"  void MqttMsgUnsubscribedEventArgs__ctor_m1314859765 (MqttMsgUnsubscribedEventArgs_t2229036016 * __this, uint16_t ___messageId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs)
extern "C"  void MqttMsgUnsubscribedEventHandler_Invoke_m742089316 (MqttMsgUnsubscribedEventHandler_t2087605283 * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t2229036016 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler::Invoke(System.Object,System.EventArgs)
extern "C"  void MqttMsgDisconnectEventHandler_Invoke_m3562084123 (MqttMsgDisconnectEventHandler_t848571114 * __this, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Environment::get_TickCount()
extern "C"  int32_t Environment_get_TickCount_m2088073110 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor(System.Exception)
extern "C"  void MqttCommunicationException__ctor_m1765456204 (MqttCommunicationException_t2651452853 * __this, Exception_t * ___e0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(System.Byte[])
extern "C"  void MqttClient_Send_m1860928569 (MqttClient_t1237157870 * __this, ByteU5BU5D_t4116647657* ___msgBytes0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(System.Byte[],System.Int32)
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m3311807021 (MqttClient_t1237157870 * __this, ByteU5BU5D_t4116647657* ___msgBytes0, int32_t ___timeout1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C"  bool EventWaitHandle_Reset_m3348053200 (EventWaitHandle_t777845177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.SocketException::get_SocketErrorCode()
extern "C"  int32_t SocketException_get_SocketErrorCode_m2767669540 (SocketException_t3852068672 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor()
extern "C"  void MqttCommunicationException__ctor_m1053442800 (MqttCommunicationException_t2651452853 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Type()
extern "C"  uint8_t MqttMsgBase_get_Type_m2887293476 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::.ctor(System.UInt16,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttMsgContextFinder__ctor_m2481725027 (MqttMsgContextFinder_t287101668 * __this, uint16_t ___messageId0, int32_t ___flow1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate::.ctor(System.Object,System.IntPtr)
extern "C"  void QueuePredicate__ctor_m3657368705 (QueuePredicate_t1615372677 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object uPLibrary.Networking.M2Mqtt.QueueExtension::Get(System.Collections.Queue,uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate)
extern "C"  RuntimeObject * QueueExtension_Get_m3062141218 (RuntimeObject * __this /* static, unused */, Queue_t3637523393 * ___queue0, QueuePredicate_t1615372677 * ___predicate1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_State(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState)
extern "C"  void MqttMsgContext_set_State_m4162879748 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttMsgContext_set_Flow_m1961288458 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::.ctor()
extern "C"  void MqttMsgContext__ctor_m2737741963 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttMsgContext_set_Message_m3182675887 (MqttMsgContext_t1493973115 * __this, MqttMsgBase_t2321119380 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Attempt(System.Int32)
extern "C"  void MqttMsgContext_set_Attempt_m1220111819 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::get_MessageId()
extern "C"  uint16_t MqttMsgPubrel_get_MessageId_m3296907418 (MqttMsgPubrel_t1897503452 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPubcomp_set_MessageId_m3644641738 (MqttMsgPubcomp_t24488374 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C"  void Thread_Sleep_m483098292 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgConnack_t3695344180 * MqttMsgConnack_Parse_m1892427643 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPingResp_t2915329856 * MqttMsgPingResp_Parse_m2246319529 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgSuback_t3000343093 * MqttMsgSuback_Parse_m1993898496 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInternal(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttClient_EnqueueInternal_m3752534690 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPublish_t1956840664 * MqttMsgPublish_Parse_m1565802144 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPuback_t3000343258 * MqttMsgPuback_Parse_m3652376793 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPubrec_t1898486492 * MqttMsgPubrec_Parse_m1855442422 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPubrel_t1897503452 * MqttMsgPubrel_Parse_m230762409 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPubcomp_t24488374 * MqttMsgPubcomp_Parse_m3781949255 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgUnsuback_t824663444 * MqttMsgUnsuback_Parse_m428600086 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.MqttClient::Ping()
extern "C"  MqttMsgPingResp_t2915329856 * MqttClient_Ping_m4940654 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgDisconnected()
extern "C"  void MqttClient_OnMqttMsgDisconnected_m2996431297 (MqttClient_t1237157870 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgSubscribed(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback)
extern "C"  void MqttClient_OnMqttMsgSubscribed_m900306150 (MqttClient_t1237157870 * __this, MqttMsgSuback_t3000343093 * ___suback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish)
extern "C"  void MqttClient_OnMqttMsgPublishReceived_m1921064112 (MqttClient_t1237157870 * __this, MqttMsgPublish_t1956840664 * ___publish0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::get_MessageId()
extern "C"  uint16_t MqttMsgPuback_get_MessageId_m3009824526 (MqttMsgPuback_t3000343258 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublished(System.UInt16)
extern "C"  void MqttClient_OnMqttMsgPublished_m2419643168 (MqttClient_t1237157870 * __this, uint16_t ___messageId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::get_MessageId()
extern "C"  uint16_t MqttMsgPubcomp_get_MessageId_m3049482919 (MqttMsgPubcomp_t24488374 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::get_MessageId()
extern "C"  uint16_t MqttMsgUnsuback_get_MessageId_m455597113 (MqttMsgUnsuback_t824663444 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgUnsubscribed(System.UInt16)
extern "C"  void MqttClient_OnMqttMsgUnsubscribed_m3505407607 (MqttClient_t1237157870 * __this, uint16_t ___messageId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
extern "C"  MqttMsgBase_t2321119380 * MqttMsgContext_get_Message_m3976154556 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_State()
extern "C"  int32_t MqttMsgContext_get_State_m1931372396 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
extern "C"  int32_t MqttMsgContext_get_Flow_m2085309911 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgReceived(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttClient_OnMqttMsgReceived_m2172457511 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Timestamp(System.Int32)
extern "C"  void MqttMsgContext_set_Timestamp_m1658145452 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Attempt()
extern "C"  int32_t MqttMsgContext_get_Attempt_m45535592 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_DupFlag(System.Boolean)
extern "C"  void MqttMsgBase_set_DupFlag_m389342711 (MqttMsgBase_t2321119380 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_DelayOnRetry()
extern "C"  int32_t MqttSettings_get_DelayOnRetry_m3476805405 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Timestamp()
extern "C"  int32_t MqttMsgContext_get_Timestamp_m3667406389 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPuback_set_MessageId_m2796226297 (MqttMsgPuback_t3000343258 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPubrec_set_MessageId_m788277172 (MqttMsgPubrec_t1898486492 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_AttemptsOnRetry()
extern "C"  int32_t MqttSettings_get_AttemptsOnRetry_m3166769543 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::get_MessageId()
extern "C"  uint16_t MqttMsgPubrec_get_MessageId_m716168082 (MqttMsgPubrec_t1898486492 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPubrel_set_MessageId_m2333365791 (MqttMsgPubrel_t1897503452 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_MessageId(System.UInt16)
extern "C"  void MqttMsgContextFinder_set_MessageId_m1118013362 (MqttMsgContextFinder_t287101668 * __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttMsgContextFinder_set_Flow_m1894536514 (MqttMsgContextFinder_t287101668 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_MessageId()
extern "C"  uint16_t MqttMsgContextFinder_get_MessageId_m1973123580 (MqttMsgContextFinder_t287101668 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_Flow()
extern "C"  int32_t MqttMsgContextFinder_get_Flow_m1867549110 (MqttMsgContextFinder_t287101668 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_Available()
extern "C"  int32_t Socket_get_Available_m356510663 (Socket_t1119025450 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily uPLibrary.Networking.M2Mqtt.IPAddressUtility::GetAddressFamily(System.Net.IPAddress)
extern "C"  int32_t IPAddressUtility_GetAddressFamily_m2964101067 (RuntimeObject * __this /* static, unused */, IPAddress_t241777590 * ___ipAddress0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C"  void Socket__ctor_m3479084642 (Socket_t1119025450 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPEndPoint::.ctor(System.Net.IPAddress,System.Int32)
extern "C"  void IPEndPoint__ctor_m2833647099 (IPEndPoint_t3791887218 * __this, IPAddress_t241777590 * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C"  void Socket_Connect_m798630981 (Socket_t1119025450 * __this, EndPoint_t982345378 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Send_m2509318470 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Receive_m3794758455 (Socket_t1119025450 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C"  void Socket_Close_m3289097516 (Socket_t1119025450 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_Port(System.Int32)
extern "C"  void MqttSettings_set_Port_m2454531020 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_SslPort(System.Int32)
extern "C"  void MqttSettings_set_SslPort_m1128224035 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnReceiving(System.Int32)
extern "C"  void MqttSettings_set_TimeoutOnReceiving_m2707049880 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_AttemptsOnRetry(System.Int32)
extern "C"  void MqttSettings_set_AttemptsOnRetry_m2681444849 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_DelayOnRetry(System.Int32)
extern "C"  void MqttSettings_set_DelayOnRetry_m1897010279 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnConnection(System.Int32)
extern "C"  void MqttSettings_set_TimeoutOnConnection_m3854721898 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::.ctor()
extern "C"  void MqttSettings__ctor_m3493718773 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate::Invoke(System.Object)
extern "C"  bool QueuePredicate_Invoke_m3731427557 (QueuePredicate_t1615372677 * __this, RuntimeObject * ___item0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
extern "C"  void WriteTrace_Invoke_m303716756 (WriteTrace_t3974110851 * __this, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void mqttTest::.ctor()
extern "C"  void mqttTest__ctor_m2237375467 (mqttTest_t759171104 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mqttTest::Start()
extern "C"  void mqttTest_Start_m616292935 (mqttTest_t759171104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mqttTest_Start_m616292935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(IPAddress_t241777590_il2cpp_TypeInfo_var);
		IPAddress_t241777590 * L_0 = IPAddress_Parse_m2200822423(NULL /*static, unused*/, _stringLiteral899131938, /*hidden argument*/NULL);
		MqttClient_t1237157870 * L_1 = (MqttClient_t1237157870 *)il2cpp_codegen_object_new(MqttClient_t1237157870_il2cpp_TypeInfo_var);
		MqttClient__ctor_m3990998280(L_1, L_0, ((int32_t)8080), (bool)0, (X509Certificate_t713131622 *)NULL, /*hidden argument*/NULL);
		__this->set_client_2(L_1);
		MqttClient_t1237157870 * L_2 = __this->get_client_2();
		intptr_t L_3 = (intptr_t)mqttTest_client_MqttMsgPublishReceived_m384648285_RuntimeMethod_var;
		MqttMsgPublishEventHandler_t1923217352 * L_4 = (MqttMsgPublishEventHandler_t1923217352 *)il2cpp_codegen_object_new(MqttMsgPublishEventHandler_t1923217352_il2cpp_TypeInfo_var);
		MqttMsgPublishEventHandler__ctor_m3294399465(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		MqttClient_add_MqttMsgPublishReceived_m3145106695(L_2, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_5 = Guid_NewGuid_m923091018(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = Guid_ToString_m3279186591((&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
		MqttClient_t1237157870 * L_7 = __this->get_client_2();
		String_t* L_8 = V_0;
		NullCheck(L_7);
		MqttClient_Connect_m1200615702(L_7, L_8, /*hidden argument*/NULL);
		MqttClient_t1237157870 * L_9 = __this->get_client_2();
		StringU5BU5D_t1281789340* L_10 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral2640286824);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2640286824);
		ByteU5BU5D_t4116647657* L_11 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)2);
		NullCheck(L_9);
		MqttClient_Subscribe_m914342903(L_9, L_10, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mqttTest::client_MqttMsgPublishReceived(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
extern "C"  void mqttTest_client_MqttMsgPublishReceived_m384648285 (mqttTest_t759171104 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t2350602093 * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mqttTest_client_MqttMsgPublishReceived_m384648285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		MqttMsgPublishEventArgs_t2350602093 * L_1 = ___e1;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = MqttMsgPublishEventArgs_get_Message_m3404860665(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t4116647657* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1653617040, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void mqttTest::OnGUI()
extern "C"  void mqttTest_OnGUI_m3608614900 (mqttTest_t759171104 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mqttTest_OnGUI_m3608614900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rect_t2360479859  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m2614021312((&L_0), (20.0f), (40.0f), (80.0f), (20.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t1624858472_il2cpp_TypeInfo_var);
		bool L_1 = GUI_Button_m1518979886(NULL /*static, unused*/, L_0, _stringLiteral3716924571, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2864253782, /*hidden argument*/NULL);
		MqttClient_t1237157870 * L_2 = __this->get_client_2();
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_3 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_4 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, _stringLiteral906680396);
		NullCheck(L_2);
		MqttClient_Publish_m2947629173(L_2, _stringLiteral2640286824, L_4, (uint8_t)2, (bool)1, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3893727521, /*hidden argument*/NULL);
	}

IL_005e:
	{
		return;
	}
}
// System.Void mqttTest::Update()
extern "C"  void mqttTest_Update_m3983981721 (mqttTest_t759171104 * __this, const RuntimeMethod* method)
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
extern "C" void CDECL ReversePInvokeWrapper_PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365(char* ___type0, char* ___sdp1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___type0' to managed representation
	String_t* ____type0_unmarshaled = NULL;
	____type0_unmarshaled = il2cpp_codegen_marshal_string_result(___type0);

	// Marshaling of parameter '___sdp1' to managed representation
	String_t* ____sdp1_unmarshaled = NULL;
	____sdp1_unmarshaled = il2cpp_codegen_marshal_string_result(___sdp1);

	// Managed method invocation
	PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365(NULL, ____type0_unmarshaled, ____sdp1_unmarshaled, NULL);

}
// System.Void PeerConnectioniOS::.ctor()
extern "C"  void PeerConnectioniOS__ctor_m695293517 (PeerConnectioniOS_t1321012807 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		PeerConnectioniOS_RegisterCallbacks_m1649261689(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL CoMuLogger_Log(char*);
// System.Void PeerConnectioniOS::CoMuLogger_Log(System.String)
extern "C"  void PeerConnectioniOS_CoMuLogger_Log_m2834767156 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method)
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
extern "C" intptr_t DEFAULT_CALL CoMuLight_makeNative();
// System.IntPtr PeerConnectioniOS::CoMuLight_makeNative()
extern "C"  intptr_t PeerConnectioniOS_CoMuLight_makeNative_m4152358688 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(CoMuLight_makeNative)();

	return returnValue;
}
// System.Void PeerConnectioniOS::CallTest()
extern "C"  void PeerConnectioniOS_CallTest_m3021989603 (PeerConnectioniOS_t1321012807 * __this, const RuntimeMethod* method)
{
	{
		PeerConnectioniOS_CoMuLight_makeNative_m4152358688(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PeerConnectioniOS::RegisterCallbacks()
extern "C"  void PeerConnectioniOS_RegisterCallbacks_m1649261689 (PeerConnectioniOS_t1321012807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectioniOS_RegisterCallbacks_m1649261689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PeerConnectioniOS_CoMuLogger_Log_m2834767156(NULL /*static, unused*/, _stringLiteral2639446077, /*hidden argument*/NULL);
		SDPREADY_Delegate_t94822726 * L_0 = ((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		if (L_0)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_1 = (intptr_t)PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365_RuntimeMethod_var;
		SDPREADY_Delegate_t94822726 * L_2 = (SDPREADY_Delegate_t94822726 *)il2cpp_codegen_object_new(SDPREADY_Delegate_t94822726_il2cpp_TypeInfo_var);
		SDPREADY_Delegate__ctor_m3757528741(L_2, NULL, L_1, /*hidden argument*/NULL);
		((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_1(L_2);
	}

IL_0022:
	{
		SDPREADY_Delegate_t94822726 * L_3 = ((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_1();
		PeerConnectioniOS_CoMuLight_RegisterSdpReady_m2451198377(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PeerConnectioniOS::add_onSdpReadyDelegate(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_add_onSdpReadyDelegate_m2735798781 (RuntimeObject * __this /* static, unused */, SDPREADY_Delegate_t94822726 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectioniOS_add_onSdpReadyDelegate_m2735798781_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SDPREADY_Delegate_t94822726 * V_0 = NULL;
	SDPREADY_Delegate_t94822726 * V_1 = NULL;
	{
		SDPREADY_Delegate_t94822726 * L_0 = ((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_onSdpReadyDelegate_0();
		V_0 = L_0;
	}

IL_0006:
	{
		SDPREADY_Delegate_t94822726 * L_1 = V_0;
		V_1 = L_1;
		SDPREADY_Delegate_t94822726 * L_2 = V_1;
		SDPREADY_Delegate_t94822726 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		SDPREADY_Delegate_t94822726 * L_5 = V_0;
		SDPREADY_Delegate_t94822726 * L_6 = InterlockedCompareExchangeImpl<SDPREADY_Delegate_t94822726 *>((((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_address_of_onSdpReadyDelegate_0()), ((SDPREADY_Delegate_t94822726 *)CastclassSealed((RuntimeObject*)L_4, SDPREADY_Delegate_t94822726_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		SDPREADY_Delegate_t94822726 * L_7 = V_0;
		SDPREADY_Delegate_t94822726 * L_8 = V_1;
		if ((!(((RuntimeObject*)(SDPREADY_Delegate_t94822726 *)L_7) == ((RuntimeObject*)(SDPREADY_Delegate_t94822726 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PeerConnectioniOS::remove_onSdpReadyDelegate(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_remove_onSdpReadyDelegate_m2239559694 (RuntimeObject * __this /* static, unused */, SDPREADY_Delegate_t94822726 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectioniOS_remove_onSdpReadyDelegate_m2239559694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SDPREADY_Delegate_t94822726 * V_0 = NULL;
	SDPREADY_Delegate_t94822726 * V_1 = NULL;
	{
		SDPREADY_Delegate_t94822726 * L_0 = ((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_onSdpReadyDelegate_0();
		V_0 = L_0;
	}

IL_0006:
	{
		SDPREADY_Delegate_t94822726 * L_1 = V_0;
		V_1 = L_1;
		SDPREADY_Delegate_t94822726 * L_2 = V_1;
		SDPREADY_Delegate_t94822726 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		SDPREADY_Delegate_t94822726 * L_5 = V_0;
		SDPREADY_Delegate_t94822726 * L_6 = InterlockedCompareExchangeImpl<SDPREADY_Delegate_t94822726 *>((((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_address_of_onSdpReadyDelegate_0()), ((SDPREADY_Delegate_t94822726 *)CastclassSealed((RuntimeObject*)L_4, SDPREADY_Delegate_t94822726_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		SDPREADY_Delegate_t94822726 * L_7 = V_0;
		SDPREADY_Delegate_t94822726 * L_8 = V_1;
		if ((!(((RuntimeObject*)(SDPREADY_Delegate_t94822726 *)L_7) == ((RuntimeObject*)(SDPREADY_Delegate_t94822726 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PeerConnectioniOS::add_OnLocalSdpReady(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_add_OnLocalSdpReady_m2462805725 (PeerConnectioniOS_t1321012807 * __this, SDPREADY_Delegate_t94822726 * ___value0, const RuntimeMethod* method)
{
	{
		SDPREADY_Delegate_t94822726 * L_0 = ___value0;
		PeerConnectioniOS_add_onSdpReadyDelegate_m2735798781(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PeerConnectioniOS::remove_OnLocalSdpReady(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_remove_OnLocalSdpReady_m4028346000 (PeerConnectioniOS_t1321012807 * __this, SDPREADY_Delegate_t94822726 * ___value0, const RuntimeMethod* method)
{
	{
		SDPREADY_Delegate_t94822726 * L_0 = ___value0;
		PeerConnectioniOS_remove_onSdpReadyDelegate_m2239559694(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL CoMuLight_RegisterSdpReady(Il2CppMethodPointer);
// System.Void PeerConnectioniOS::CoMuLight_RegisterSdpReady(PeerConnectioniOS/SDPREADY_Delegate)
extern "C"  void PeerConnectioniOS_CoMuLight_RegisterSdpReady_m2451198377 (RuntimeObject * __this /* static, unused */, SDPREADY_Delegate_t94822726 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(CoMuLight_RegisterSdpReady)(____callback0_marshaled);

}
// System.Void PeerConnectioniOS::RaiseLocalSdpReadytoSend(System.String,System.String)
extern "C"  void PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365 (RuntimeObject * __this /* static, unused */, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PeerConnectioniOS_RaiseLocalSdpReadytoSend_m409749365_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SDPREADY_Delegate_t94822726 * L_0 = ((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_onSdpReadyDelegate_0();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SDPREADY_Delegate_t94822726 * L_1 = ((PeerConnectioniOS_t1321012807_StaticFields*)il2cpp_codegen_static_fields_for(PeerConnectioniOS_t1321012807_il2cpp_TypeInfo_var))->get_onSdpReadyDelegate_0();
		String_t* L_2 = ___type0;
		String_t* L_3 = ___sdp1;
		NullCheck(L_1);
		SDPREADY_Delegate_Invoke_m984274266(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0016:
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
extern "C"  void DelegatePInvokeWrapper_SDPREADY_Delegate_t94822726 (SDPREADY_Delegate_t94822726 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
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
// System.Void PeerConnectioniOS/SDPREADY_Delegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SDPREADY_Delegate__ctor_m3757528741 (SDPREADY_Delegate_t94822726 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PeerConnectioniOS/SDPREADY_Delegate::Invoke(System.String,System.String)
extern "C"  void SDPREADY_Delegate_Invoke_m984274266 (SDPREADY_Delegate_t94822726 * __this, String_t* ___type0, String_t* ___sdp1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SDPREADY_Delegate_Invoke_m984274266((SDPREADY_Delegate_t94822726 *)__this->get_prev_9(), ___type0, ___sdp1, method);
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
// System.IAsyncResult PeerConnectioniOS/SDPREADY_Delegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SDPREADY_Delegate_BeginInvoke_m2218590839 (SDPREADY_Delegate_t94822726 * __this, String_t* ___type0, String_t* ___sdp1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___type0;
	__d_args[1] = ___sdp1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void PeerConnectioniOS/SDPREADY_Delegate::EndInvoke(System.IAsyncResult)
extern "C"  void SDPREADY_Delegate_EndInvoke_m2077723116 (SDPREADY_Delegate_t94822726 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::.ctor(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
extern "C"  void MqttClientException__ctor_m3847753279 (MqttClientException_t1411037672 * __this, int32_t ___errorCode0, const RuntimeMethod* method)
{
	{
		ApplicationException__ctor_m2557611022(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___errorCode0;
		__this->set_errorCode_11(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::get_ErrorCode()
extern "C"  int32_t MqttClientException_get_ErrorCode_m4021853184 (MqttClientException_t1411037672 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_errorCode_11();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientException::set_ErrorCode(uPLibrary.Networking.M2Mqtt.Exceptions.MqttClientErrorCode)
extern "C"  void MqttClientException_set_ErrorCode_m1638506912 (MqttClientException_t1411037672 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_errorCode_11(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor()
extern "C"  void MqttCommunicationException__ctor_m1053442800 (MqttCommunicationException_t2651452853 * __this, const RuntimeMethod* method)
{
	{
		ApplicationException__ctor_m2557611022(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException::.ctor(System.Exception)
extern "C"  void MqttCommunicationException__ctor_m1765456204 (MqttCommunicationException_t2651452853 * __this, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttCommunicationException__ctor_m1765456204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		Exception_t * L_1 = ___e0;
		ApplicationException__ctor_m692455299(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttConnectionException::.ctor(System.String,System.Exception)
extern "C"  void MqttConnectionException__ctor_m1103185096 (MqttConnectionException_t3570015742 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		ApplicationException__ctor_m692455299(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.Exceptions.MqttTimeoutException::.ctor()
extern "C"  void MqttTimeoutException__ctor_m3245917528 (MqttTimeoutException_t738756372 * __this, const RuntimeMethod* method)
{
	{
		ApplicationException__ctor_m2557611022(__this, /*hidden argument*/NULL);
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
// System.Net.Sockets.AddressFamily uPLibrary.Networking.M2Mqtt.IPAddressUtility::GetAddressFamily(System.Net.IPAddress)
extern "C"  int32_t IPAddressUtility_GetAddressFamily_m2964101067 (RuntimeObject * __this /* static, unused */, IPAddress_t241777590 * ___ipAddress0, const RuntimeMethod* method)
{
	{
		IPAddress_t241777590 * L_0 = ___ipAddress0;
		NullCheck(L_0);
		int32_t L_1 = IPAddress_get_AddressFamily_m1010663936(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::.ctor()
extern "C"  void MqttMsgBase__ctor_m1645311330 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Type()
extern "C"  uint8_t MqttMsgBase_get_Type_m2887293476 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_type_32();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_Type(System.Byte)
extern "C"  void MqttMsgBase_set_Type_m1927520842 (MqttMsgBase_t2321119380 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_type_32(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_DupFlag()
extern "C"  bool MqttMsgBase_get_DupFlag_m4167438242 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_dupFlag_33();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_DupFlag(System.Boolean)
extern "C"  void MqttMsgBase_set_DupFlag_m389342711 (MqttMsgBase_t2321119380 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_dupFlag_33(L_0);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_QosLevel()
extern "C"  uint8_t MqttMsgBase_get_QosLevel_m772124759 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_qosLevel_34();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_QosLevel(System.Byte)
extern "C"  void MqttMsgBase_set_QosLevel_m380187242 (MqttMsgBase_t2321119380 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_qosLevel_34(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::get_Retain()
extern "C"  bool MqttMsgBase_get_Retain_m2912767190 (MqttMsgBase_t2321119380 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_retain_35();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::set_Retain(System.Boolean)
extern "C"  void MqttMsgBase_set_Retain_m3373016848 (MqttMsgBase_t2321119380 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_retain_35(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::encodeRemainingLength(System.Int32,System.Byte[],System.Int32)
extern "C"  int32_t MqttMsgBase_encodeRemainingLength_m152082486 (MqttMsgBase_t2321119380 * __this, int32_t ___remainingLength0, ByteU5BU5D_t4116647657* ___buffer1, int32_t ___index2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		int32_t L_0 = ___remainingLength0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)128)));
		int32_t L_1 = ___remainingLength0;
		___remainingLength0 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)128)));
		int32_t L_2 = ___remainingLength0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)((int32_t)128)));
	}

IL_0022:
	{
		ByteU5BU5D_t4116647657* L_4 = ___buffer1;
		int32_t L_5 = ___index2;
		int32_t L_6 = L_5;
		___index2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		int32_t L_7 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)(((int32_t)((uint8_t)L_7))));
		int32_t L_8 = ___remainingLength0;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_9 = ___index2;
		return L_9;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::decodeRemainingLength(uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  int32_t MqttMsgBase_decodeRemainingLength_m1049822892 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgBase_decodeRemainingLength_m1049822892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = 0;
		V_3 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1));
	}

IL_000d:
	{
		RuntimeObject* L_0 = ___channel0;
		ByteU5BU5D_t4116647657* L_1 = V_3;
		NullCheck(L_0);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_0, L_1);
		ByteU5BU5D_t4116647657* L_2 = V_3;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)127))), (int32_t)L_7))));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)128)));
		int32_t L_9 = V_2;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)128))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::.ctor()
extern "C"  void MqttMsgConnack__ctor_m1293679364 (MqttMsgConnack_t3695344180 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)2);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::get_ReturnCode()
extern "C"  uint8_t MqttMsgConnack_get_ReturnCode_m1170617396 (MqttMsgConnack_t3695344180 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_returnCode_46();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::set_ReturnCode(System.Byte)
extern "C"  void MqttMsgConnack_set_ReturnCode_m1875330635 (MqttMsgConnack_t3695344180 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_returnCode_46(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgConnack_t3695344180 * MqttMsgConnack_Parse_m1892427643 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnack_Parse_m1892427643_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	MqttMsgConnack_t3695344180 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		MqttMsgConnack_t3695344180 * L_0 = (MqttMsgConnack_t3695344180 *)il2cpp_codegen_object_new(MqttMsgConnack_t3695344180_il2cpp_TypeInfo_var);
		MqttMsgConnack__ctor_m1293679364(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgConnack_t3695344180 * L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_6);
		L_6->set_returnCode_46(L_9);
		MqttMsgConnack_t3695344180 * L_10 = V_1;
		return L_10;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgConnack_GetBytes_m2955880752 (MqttMsgConnack_t3695344180 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnack_GetBytes_m2955880752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)32));
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_3;
		ByteU5BU5D_t4116647657* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)0);
		ByteU5BU5D_t4116647657* L_21 = V_4;
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		uint8_t L_24 = __this->get_returnCode_46();
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_24);
		ByteU5BU5D_t4116647657* L_25 = V_4;
		return L_25;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnack::ToString()
extern "C"  String_t* MqttMsgConnack_ToString_m1812530405 (MqttMsgConnack_t3695344180 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor()
extern "C"  void MqttMsgConnect__ctor_m3103498375 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect__ctor_m3103498375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)1);
		__this->set_protocolName_64(_stringLiteral2957079594);
		__this->set_protocolVersion_65((uint8_t)3);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String)
extern "C"  void MqttMsgConnect__ctor_m3578634637 (MqttMsgConnect_t2841720955 * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clientId0;
		MqttMsgConnect__ctor_m1250605407(__this, L_0, (String_t*)NULL, (String_t*)NULL, (bool)0, (uint8_t)1, (bool)0, (String_t*)NULL, (String_t*)NULL, (bool)1, (uint16_t)((int32_t)60), /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::.ctor(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16)
extern "C"  void MqttMsgConnect__ctor_m1250605407 (MqttMsgConnect_t2841720955 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect__ctor_m1250605407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)1);
		__this->set_protocolName_64(_stringLiteral2957079594);
		__this->set_protocolVersion_65((uint8_t)3);
		String_t* L_0 = ___clientId0;
		__this->set_clientId_66(L_0);
		String_t* L_1 = ___username1;
		__this->set_username_72(L_1);
		String_t* L_2 = ___password2;
		__this->set_password_73(L_2);
		bool L_3 = ___willRetain3;
		__this->set_willRetain_67(L_3);
		uint8_t L_4 = ___willQosLevel4;
		__this->set_willQosLevel_68(L_4);
		bool L_5 = ___willFlag5;
		__this->set_willFlag_69(L_5);
		String_t* L_6 = ___willTopic6;
		__this->set_willTopic_70(L_6);
		String_t* L_7 = ___willMessage7;
		__this->set_willMessage_71(L_7);
		bool L_8 = ___cleanSession8;
		__this->set_cleanSession_74(L_8);
		uint16_t L_9 = ___keepAlivePeriod9;
		__this->set_keepAlivePeriod_75(L_9);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_ProtocolName()
extern "C"  String_t* MqttMsgConnect_get_ProtocolName_m1755094217 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_protocolName_64();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_ProtocolName(System.String)
extern "C"  void MqttMsgConnect_set_ProtocolName_m3269697698 (MqttMsgConnect_t2841720955 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_protocolName_64(L_0);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_ProtocolVersion()
extern "C"  uint8_t MqttMsgConnect_get_ProtocolVersion_m3496685105 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_protocolVersion_65();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_ProtocolVersion(System.Byte)
extern "C"  void MqttMsgConnect_set_ProtocolVersion_m812662833 (MqttMsgConnect_t2841720955 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_protocolVersion_65(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_ClientId()
extern "C"  String_t* MqttMsgConnect_get_ClientId_m2547751909 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_clientId_66();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_ClientId(System.String)
extern "C"  void MqttMsgConnect_set_ClientId_m1800731624 (MqttMsgConnect_t2841720955 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_clientId_66(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillRetain()
extern "C"  bool MqttMsgConnect_get_WillRetain_m2305736970 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_willRetain_67();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillRetain(System.Boolean)
extern "C"  void MqttMsgConnect_set_WillRetain_m4122259621 (MqttMsgConnect_t2841720955 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_willRetain_67(L_0);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillQosLevel()
extern "C"  uint8_t MqttMsgConnect_get_WillQosLevel_m2036225541 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_willQosLevel_68();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillQosLevel(System.Byte)
extern "C"  void MqttMsgConnect_set_WillQosLevel_m2713608940 (MqttMsgConnect_t2841720955 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_willQosLevel_68(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillFlag()
extern "C"  bool MqttMsgConnect_get_WillFlag_m2019499259 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_willFlag_69();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillFlag(System.Boolean)
extern "C"  void MqttMsgConnect_set_WillFlag_m4036092219 (MqttMsgConnect_t2841720955 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_willFlag_69(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillTopic()
extern "C"  String_t* MqttMsgConnect_get_WillTopic_m3139793322 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_willTopic_70();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillTopic(System.String)
extern "C"  void MqttMsgConnect_set_WillTopic_m68137615 (MqttMsgConnect_t2841720955 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_willTopic_70(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_WillMessage()
extern "C"  String_t* MqttMsgConnect_get_WillMessage_m2159495185 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_willMessage_71();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_WillMessage(System.String)
extern "C"  void MqttMsgConnect_set_WillMessage_m3932299459 (MqttMsgConnect_t2841720955 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_willMessage_71(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_Username()
extern "C"  String_t* MqttMsgConnect_get_Username_m423497727 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_username_72();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_Username(System.String)
extern "C"  void MqttMsgConnect_set_Username_m1526771816 (MqttMsgConnect_t2841720955 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_username_72(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_Password()
extern "C"  String_t* MqttMsgConnect_get_Password_m2510491664 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_password_73();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_Password(System.String)
extern "C"  void MqttMsgConnect_set_Password_m294579319 (MqttMsgConnect_t2841720955 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_password_73(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_CleanSession()
extern "C"  bool MqttMsgConnect_get_CleanSession_m2794921409 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_cleanSession_74();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_CleanSession(System.Boolean)
extern "C"  void MqttMsgConnect_set_CleanSession_m357791611 (MqttMsgConnect_t2841720955 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_cleanSession_74(L_0);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::get_KeepAlivePeriod()
extern "C"  uint16_t MqttMsgConnect_get_KeepAlivePeriod_m1491447345 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_keepAlivePeriod_75();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::set_KeepAlivePeriod(System.UInt16)
extern "C"  void MqttMsgConnect_set_KeepAlivePeriod_m2651867569 (MqttMsgConnect_t2841720955 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_keepAlivePeriod_75(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgConnect_t2841720955 * MqttMsgConnect_Parse_m3265014861 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect_Parse_m3265014861_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	int32_t V_8 = 0;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	int32_t V_10 = 0;
	ByteU5BU5D_t4116647657* V_11 = NULL;
	int32_t V_12 = 0;
	ByteU5BU5D_t4116647657* V_13 = NULL;
	int32_t V_14 = 0;
	ByteU5BU5D_t4116647657* V_15 = NULL;
	MqttMsgConnect_t2841720955 * V_16 = NULL;
	int32_t V_17 = 0;
	{
		V_1 = 0;
		MqttMsgConnect_t2841720955 * L_0 = (MqttMsgConnect_t2841720955 *)il2cpp_codegen_object_new(MqttMsgConnect_t2841720955_il2cpp_TypeInfo_var);
		MqttMsgConnect__ctor_m3103498375(L_0, /*hidden argument*/NULL);
		V_16 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_17 = L_2;
		int32_t L_3 = V_17;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = ((int32_t)((int32_t)((int32_t)((int32_t)L_10<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_11 = V_2;
		ByteU5BU5D_t4116647657* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		NullCheck(L_12);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = ((int32_t)((int32_t)L_11|(int32_t)L_16));
		int32_t L_17 = V_2;
		V_3 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_17));
		ByteU5BU5D_t4116647657* L_18 = V_0;
		int32_t L_19 = V_1;
		ByteU5BU5D_t4116647657* L_20 = V_3;
		int32_t L_21 = V_2;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_18, L_19, (RuntimeArray *)(RuntimeArray *)L_20, 0, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
		MqttMsgConnect_t2841720955 * L_24 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_25 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_26 = V_3;
		NullCheck(L_25);
		CharU5BU5D_t3528271667* L_27 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_25, L_26);
		String_t* L_28 = String_CreateString_m2818852475(NULL, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_protocolName_64(L_28);
		MqttMsgConnect_t2841720955 * L_29 = V_16;
		ByteU5BU5D_t4116647657* L_30 = V_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_29);
		L_29->set_protocolVersion_65(L_33);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
		ByteU5BU5D_t4116647657* L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_38&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		ByteU5BU5D_t4116647657* L_39 = V_0;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_42&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		MqttMsgConnect_t2841720955 * L_43 = V_16;
		ByteU5BU5D_t4116647657* L_44 = V_0;
		int32_t L_45 = V_1;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		uint8_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_43);
		L_43->set_willRetain_67((bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_47&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		MqttMsgConnect_t2841720955 * L_48 = V_16;
		ByteU5BU5D_t4116647657* L_49 = V_0;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_48);
		L_48->set_willQosLevel_68((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_52&(int32_t)((int32_t)24)))>>(int32_t)3))))));
		MqttMsgConnect_t2841720955 * L_53 = V_16;
		ByteU5BU5D_t4116647657* L_54 = V_0;
		int32_t L_55 = V_1;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint8_t L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_53);
		L_53->set_willFlag_69((bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_57&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		MqttMsgConnect_t2841720955 * L_58 = V_16;
		ByteU5BU5D_t4116647657* L_59 = V_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_58);
		L_58->set_cleanSession_74((bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_62&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		MqttMsgConnect_t2841720955 * L_64 = V_16;
		ByteU5BU5D_t4116647657* L_65 = V_0;
		int32_t L_66 = V_1;
		int32_t L_67 = L_66;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		NullCheck(L_65);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_64);
		L_64->set_keepAlivePeriod_75((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_69<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgConnect_t2841720955 * L_70 = V_16;
		MqttMsgConnect_t2841720955 * L_71 = L_70;
		NullCheck(L_71);
		uint16_t L_72 = L_71->get_keepAlivePeriod_75();
		ByteU5BU5D_t4116647657* L_73 = V_0;
		int32_t L_74 = V_1;
		int32_t L_75 = L_74;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
		NullCheck(L_73);
		int32_t L_76 = L_75;
		uint8_t L_77 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_71);
		L_71->set_keepAlivePeriod_75((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_72|(int32_t)L_77))))));
		ByteU5BU5D_t4116647657* L_78 = V_0;
		int32_t L_79 = V_1;
		int32_t L_80 = L_79;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)1));
		NullCheck(L_78);
		int32_t L_81 = L_80;
		uint8_t L_82 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_82<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_83 = V_6;
		ByteU5BU5D_t4116647657* L_84 = V_0;
		int32_t L_85 = V_1;
		int32_t L_86 = L_85;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		NullCheck(L_84);
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_6 = ((int32_t)((int32_t)L_83|(int32_t)L_88));
		int32_t L_89 = V_6;
		V_7 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_89));
		ByteU5BU5D_t4116647657* L_90 = V_0;
		int32_t L_91 = V_1;
		ByteU5BU5D_t4116647657* L_92 = V_7;
		int32_t L_93 = V_6;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_90, L_91, (RuntimeArray *)(RuntimeArray *)L_92, 0, L_93, /*hidden argument*/NULL);
		int32_t L_94 = V_1;
		int32_t L_95 = V_6;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)L_95));
		MqttMsgConnect_t2841720955 * L_96 = V_16;
		Encoding_t1523322056 * L_97 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_98 = V_7;
		NullCheck(L_97);
		CharU5BU5D_t3528271667* L_99 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_97, L_98);
		String_t* L_100 = String_CreateString_m2818852475(NULL, L_99, /*hidden argument*/NULL);
		NullCheck(L_96);
		L_96->set_clientId_66(L_100);
		MqttMsgConnect_t2841720955 * L_101 = V_16;
		NullCheck(L_101);
		bool L_102 = L_101->get_willFlag_69();
		if (!L_102)
		{
			goto IL_0205;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_103 = V_0;
		int32_t L_104 = V_1;
		int32_t L_105 = L_104;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, (int32_t)1));
		NullCheck(L_103);
		int32_t L_106 = L_105;
		uint8_t L_107 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_8 = ((int32_t)((int32_t)((int32_t)((int32_t)L_107<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_108 = V_8;
		ByteU5BU5D_t4116647657* L_109 = V_0;
		int32_t L_110 = V_1;
		int32_t L_111 = L_110;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1));
		NullCheck(L_109);
		int32_t L_112 = L_111;
		uint8_t L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_8 = ((int32_t)((int32_t)L_108|(int32_t)L_113));
		int32_t L_114 = V_8;
		V_9 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_114));
		ByteU5BU5D_t4116647657* L_115 = V_0;
		int32_t L_116 = V_1;
		ByteU5BU5D_t4116647657* L_117 = V_9;
		int32_t L_118 = V_8;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_115, L_116, (RuntimeArray *)(RuntimeArray *)L_117, 0, L_118, /*hidden argument*/NULL);
		int32_t L_119 = V_1;
		int32_t L_120 = V_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, (int32_t)L_120));
		MqttMsgConnect_t2841720955 * L_121 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_122 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_123 = V_9;
		NullCheck(L_122);
		CharU5BU5D_t3528271667* L_124 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_122, L_123);
		String_t* L_125 = String_CreateString_m2818852475(NULL, L_124, /*hidden argument*/NULL);
		NullCheck(L_121);
		L_121->set_willTopic_70(L_125);
		ByteU5BU5D_t4116647657* L_126 = V_0;
		int32_t L_127 = V_1;
		int32_t L_128 = L_127;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
		NullCheck(L_126);
		int32_t L_129 = L_128;
		uint8_t L_130 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)L_130<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_131 = V_10;
		ByteU5BU5D_t4116647657* L_132 = V_0;
		int32_t L_133 = V_1;
		int32_t L_134 = L_133;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)1));
		NullCheck(L_132);
		int32_t L_135 = L_134;
		uint8_t L_136 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		V_10 = ((int32_t)((int32_t)L_131|(int32_t)L_136));
		int32_t L_137 = V_10;
		V_11 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_137));
		ByteU5BU5D_t4116647657* L_138 = V_0;
		int32_t L_139 = V_1;
		ByteU5BU5D_t4116647657* L_140 = V_11;
		int32_t L_141 = V_10;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_138, L_139, (RuntimeArray *)(RuntimeArray *)L_140, 0, L_141, /*hidden argument*/NULL);
		int32_t L_142 = V_1;
		int32_t L_143 = V_10;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)L_143));
		MqttMsgConnect_t2841720955 * L_144 = V_16;
		Encoding_t1523322056 * L_145 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_146 = V_11;
		NullCheck(L_145);
		CharU5BU5D_t3528271667* L_147 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_145, L_146);
		String_t* L_148 = String_CreateString_m2818852475(NULL, L_147, /*hidden argument*/NULL);
		NullCheck(L_144);
		L_144->set_willMessage_71(L_148);
	}

IL_0205:
	{
		bool L_149 = V_4;
		if (!L_149)
		{
			goto IL_025b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_150 = V_0;
		int32_t L_151 = V_1;
		int32_t L_152 = L_151;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_152, (int32_t)1));
		NullCheck(L_150);
		int32_t L_153 = L_152;
		uint8_t L_154 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		V_12 = ((int32_t)((int32_t)((int32_t)((int32_t)L_154<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_155 = V_12;
		ByteU5BU5D_t4116647657* L_156 = V_0;
		int32_t L_157 = V_1;
		int32_t L_158 = L_157;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1));
		NullCheck(L_156);
		int32_t L_159 = L_158;
		uint8_t L_160 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		V_12 = ((int32_t)((int32_t)L_155|(int32_t)L_160));
		int32_t L_161 = V_12;
		V_13 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_161));
		ByteU5BU5D_t4116647657* L_162 = V_0;
		int32_t L_163 = V_1;
		ByteU5BU5D_t4116647657* L_164 = V_13;
		int32_t L_165 = V_12;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_162, L_163, (RuntimeArray *)(RuntimeArray *)L_164, 0, L_165, /*hidden argument*/NULL);
		int32_t L_166 = V_1;
		int32_t L_167 = V_12;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, (int32_t)L_167));
		MqttMsgConnect_t2841720955 * L_168 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_169 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_170 = V_13;
		NullCheck(L_169);
		CharU5BU5D_t3528271667* L_171 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_169, L_170);
		String_t* L_172 = String_CreateString_m2818852475(NULL, L_171, /*hidden argument*/NULL);
		NullCheck(L_168);
		L_168->set_username_72(L_172);
	}

IL_025b:
	{
		bool L_173 = V_5;
		if (!L_173)
		{
			goto IL_02b1;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_174 = V_0;
		int32_t L_175 = V_1;
		int32_t L_176 = L_175;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, (int32_t)1));
		NullCheck(L_174);
		int32_t L_177 = L_176;
		uint8_t L_178 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_178<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_179 = V_14;
		ByteU5BU5D_t4116647657* L_180 = V_0;
		int32_t L_181 = V_1;
		int32_t L_182 = L_181;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_182, (int32_t)1));
		NullCheck(L_180);
		int32_t L_183 = L_182;
		uint8_t L_184 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		V_14 = ((int32_t)((int32_t)L_179|(int32_t)L_184));
		int32_t L_185 = V_14;
		V_15 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_185));
		ByteU5BU5D_t4116647657* L_186 = V_0;
		int32_t L_187 = V_1;
		ByteU5BU5D_t4116647657* L_188 = V_15;
		int32_t L_189 = V_14;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_186, L_187, (RuntimeArray *)(RuntimeArray *)L_188, 0, L_189, /*hidden argument*/NULL);
		int32_t L_190 = V_1;
		int32_t L_191 = V_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_190, (int32_t)L_191));
		MqttMsgConnect_t2841720955 * L_192 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_193 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_194 = V_15;
		NullCheck(L_193);
		CharU5BU5D_t3528271667* L_195 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_193, L_194);
		String_t* L_196 = String_CreateString_m2818852475(NULL, L_195, /*hidden argument*/NULL);
		NullCheck(L_192);
		L_192->set_password_73(L_196);
	}

IL_02b1:
	{
		MqttMsgConnect_t2841720955 * L_197 = V_16;
		return L_197;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgConnect_GetBytes_m35920527 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnect_GetBytes_m35920527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	ByteU5BU5D_t4116647657* V_8 = NULL;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	ByteU5BU5D_t4116647657* G_B3_0 = NULL;
	ByteU5BU5D_t4116647657* G_B6_0 = NULL;
	ByteU5BU5D_t4116647657* G_B9_0 = NULL;
	ByteU5BU5D_t4116647657* G_B12_0 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B29_1 = 0;
	uint8_t G_B33_0 = 0x0;
	uint8_t G_B32_0 = 0x0;
	int32_t G_B34_0 = 0;
	uint8_t G_B34_1 = 0x0;
	uint8_t G_B36_0 = 0x0;
	uint8_t G_B35_0 = 0x0;
	int32_t G_B37_0 = 0;
	uint8_t G_B37_1 = 0x0;
	uint8_t G_B39_0 = 0x0;
	uint8_t G_B38_0 = 0x0;
	int32_t G_B40_0 = 0;
	uint8_t G_B40_1 = 0x0;
	uint8_t G_B42_0 = 0x0;
	uint8_t G_B41_0 = 0x0;
	int32_t G_B43_0 = 0;
	uint8_t G_B43_1 = 0x0;
	uint8_t G_B45_0 = 0x0;
	uint8_t G_B44_0 = 0x0;
	int32_t G_B46_0 = 0;
	uint8_t G_B46_1 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_clientId_66();
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_6 = L_2;
		String_t* L_3 = __this->get_willTopic_70();
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_4 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = __this->get_willTopic_70();
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		G_B3_0 = L_6;
		goto IL_003e;
	}

IL_003d:
	{
		G_B3_0 = ((ByteU5BU5D_t4116647657*)(NULL));
	}

IL_003e:
	{
		V_7 = G_B3_0;
		String_t* L_7 = __this->get_willMessage_71();
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_8 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_9 = __this->get_willMessage_71();
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_10 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, L_9);
		G_B6_0 = L_10;
		goto IL_0061;
	}

IL_0060:
	{
		G_B6_0 = ((ByteU5BU5D_t4116647657*)(NULL));
	}

IL_0061:
	{
		V_8 = G_B6_0;
		String_t* L_11 = __this->get_username_72();
		if (!L_11)
		{
			goto IL_0083;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_12 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_13 = __this->get_username_72();
		NullCheck(L_12);
		ByteU5BU5D_t4116647657* L_14 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, L_13);
		G_B9_0 = L_14;
		goto IL_0084;
	}

IL_0083:
	{
		G_B9_0 = ((ByteU5BU5D_t4116647657*)(NULL));
	}

IL_0084:
	{
		V_9 = G_B9_0;
		String_t* L_15 = __this->get_password_73();
		if (!L_15)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_16 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_password_73();
		NullCheck(L_16);
		ByteU5BU5D_t4116647657* L_18 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		G_B12_0 = L_18;
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B12_0 = ((ByteU5BU5D_t4116647657*)(NULL));
	}

IL_00a7:
	{
		V_10 = G_B12_0;
		bool L_19 = __this->get_willFlag_69();
		if (!L_19)
		{
			goto IL_00c4;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))
		{
			goto IL_00c4;
		}
	}
	{
		MqttClientException_t1411037672 * L_21 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_21, 1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21,MqttMsgConnect_GetBytes_m35920527_RuntimeMethod_var);
	}

IL_00c4:
	{
		uint16_t L_22 = __this->get_keepAlivePeriod_75();
		if ((((int32_t)L_22) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_00db;
		}
	}
	{
		MqttClientException_t1411037672 * L_23 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_23, 2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23,MqttMsgConnect_GetBytes_m35920527_RuntimeMethod_var);
	}

IL_00db:
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)8));
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)2));
		int32_t L_28 = V_2;
		ByteU5BU5D_t4116647657* L_29 = V_6;
		NullCheck(L_29);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))), (int32_t)2))));
		int32_t L_30 = V_2;
		ByteU5BU5D_t4116647657* L_31 = V_7;
		G_B18_0 = L_30;
		if (!L_31)
		{
			G_B19_0 = L_30;
			goto IL_0107;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_32 = V_7;
		NullCheck(L_32);
		G_B20_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))), (int32_t)2));
		G_B20_1 = G_B18_0;
		goto IL_0108;
	}

IL_0107:
	{
		G_B20_0 = 0;
		G_B20_1 = G_B19_0;
	}

IL_0108:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B20_1, (int32_t)G_B20_0));
		int32_t L_33 = V_2;
		ByteU5BU5D_t4116647657* L_34 = V_8;
		G_B21_0 = L_33;
		if (!L_34)
		{
			G_B22_0 = L_33;
			goto IL_011d;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_35 = V_8;
		NullCheck(L_35);
		G_B23_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length)))), (int32_t)2));
		G_B23_1 = G_B21_0;
		goto IL_011e;
	}

IL_011d:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
	}

IL_011e:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B23_1, (int32_t)G_B23_0));
		int32_t L_36 = V_2;
		ByteU5BU5D_t4116647657* L_37 = V_9;
		G_B24_0 = L_36;
		if (!L_37)
		{
			G_B25_0 = L_36;
			goto IL_0133;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_38 = V_9;
		NullCheck(L_38);
		G_B26_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))), (int32_t)2));
		G_B26_1 = G_B24_0;
		goto IL_0134;
	}

IL_0133:
	{
		G_B26_0 = 0;
		G_B26_1 = G_B25_0;
	}

IL_0134:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B26_1, (int32_t)G_B26_0));
		int32_t L_39 = V_2;
		ByteU5BU5D_t4116647657* L_40 = V_10;
		G_B27_0 = L_39;
		if (!L_40)
		{
			G_B28_0 = L_39;
			goto IL_0149;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = V_10;
		NullCheck(L_41);
		G_B29_0 = ((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_41)->max_length)))), (int32_t)2));
		G_B29_1 = G_B27_0;
		goto IL_014a;
	}

IL_0149:
	{
		G_B29_0 = 0;
		G_B29_1 = G_B28_0;
	}

IL_014a:
	{
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)G_B29_1, (int32_t)G_B29_0));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		int32_t L_44 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44))));
		V_0 = 1;
		int32_t L_45 = V_3;
		V_11 = L_45;
	}

IL_0157:
	{
		int32_t L_46 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
		int32_t L_47 = V_11;
		V_11 = ((int32_t)((int32_t)L_47/(int32_t)((int32_t)128)));
		int32_t L_48 = V_11;
		if ((((int32_t)L_48) > ((int32_t)0)))
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_49 = V_0;
		int32_t L_50 = V_1;
		int32_t L_51 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50)), (int32_t)L_51))));
		ByteU5BU5D_t4116647657* L_52 = V_4;
		int32_t L_53 = V_5;
		int32_t L_54 = L_53;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)((int32_t)16));
		int32_t L_55 = V_3;
		ByteU5BU5D_t4116647657* L_56 = V_4;
		int32_t L_57 = V_5;
		int32_t L_58 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_55, L_56, L_57, /*hidden argument*/NULL);
		V_5 = L_58;
		ByteU5BU5D_t4116647657* L_59 = V_4;
		int32_t L_60 = V_5;
		int32_t L_61 = L_60;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)0);
		ByteU5BU5D_t4116647657* L_62 = V_4;
		int32_t L_63 = V_5;
		int32_t L_64 = L_63;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_64), (uint8_t)6);
		ByteU5BU5D_t4116647657* L_65 = V_4;
		int32_t L_66 = V_5;
		int32_t L_67 = L_66;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)((int32_t)77));
		ByteU5BU5D_t4116647657* L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = L_69;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint8_t)((int32_t)81));
		ByteU5BU5D_t4116647657* L_71 = V_4;
		int32_t L_72 = V_5;
		int32_t L_73 = L_72;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)((int32_t)73));
		ByteU5BU5D_t4116647657* L_74 = V_4;
		int32_t L_75 = V_5;
		int32_t L_76 = L_75;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (uint8_t)((int32_t)115));
		ByteU5BU5D_t4116647657* L_77 = V_4;
		int32_t L_78 = V_5;
		int32_t L_79 = L_78;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1));
		NullCheck(L_77);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (uint8_t)((int32_t)100));
		ByteU5BU5D_t4116647657* L_80 = V_4;
		int32_t L_81 = V_5;
		int32_t L_82 = L_81;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_82), (uint8_t)((int32_t)112));
		ByteU5BU5D_t4116647657* L_83 = V_4;
		int32_t L_84 = V_5;
		int32_t L_85 = L_84;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (uint8_t)3);
		V_12 = (uint8_t)0;
		uint8_t L_86 = V_12;
		String_t* L_87 = __this->get_username_72();
		G_B32_0 = L_86;
		if (!L_87)
		{
			G_B33_0 = L_86;
			goto IL_0215;
		}
	}
	{
		G_B34_0 = ((int32_t)128);
		G_B34_1 = G_B32_0;
		goto IL_0216;
	}

IL_0215:
	{
		G_B34_0 = 0;
		G_B34_1 = G_B33_0;
	}

IL_0216:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B34_1|(int32_t)G_B34_0)))));
		uint8_t L_88 = V_12;
		String_t* L_89 = __this->get_password_73();
		G_B35_0 = L_88;
		if (!L_89)
		{
			G_B36_0 = L_88;
			goto IL_022e;
		}
	}
	{
		G_B37_0 = ((int32_t)64);
		G_B37_1 = G_B35_0;
		goto IL_022f;
	}

IL_022e:
	{
		G_B37_0 = 0;
		G_B37_1 = G_B36_0;
	}

IL_022f:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B37_1|(int32_t)G_B37_0)))));
		uint8_t L_90 = V_12;
		bool L_91 = __this->get_willRetain_67();
		G_B38_0 = L_90;
		if (!L_91)
		{
			G_B39_0 = L_90;
			goto IL_0247;
		}
	}
	{
		G_B40_0 = ((int32_t)32);
		G_B40_1 = G_B38_0;
		goto IL_0248;
	}

IL_0247:
	{
		G_B40_0 = 0;
		G_B40_1 = G_B39_0;
	}

IL_0248:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B40_1|(int32_t)G_B40_0)))));
		uint8_t L_92 = V_12;
		uint8_t L_93 = __this->get_willQosLevel_68();
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_92|(int32_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_93<<(int32_t)3))))))))));
		uint8_t L_94 = V_12;
		bool L_95 = __this->get_willFlag_69();
		G_B41_0 = L_94;
		if (!L_95)
		{
			G_B42_0 = L_94;
			goto IL_026e;
		}
	}
	{
		G_B43_0 = 4;
		G_B43_1 = G_B41_0;
		goto IL_026f;
	}

IL_026e:
	{
		G_B43_0 = 0;
		G_B43_1 = G_B42_0;
	}

IL_026f:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B43_1|(int32_t)G_B43_0)))));
		uint8_t L_96 = V_12;
		bool L_97 = __this->get_cleanSession_74();
		G_B44_0 = L_96;
		if (!L_97)
		{
			G_B45_0 = L_96;
			goto IL_0286;
		}
	}
	{
		G_B46_0 = 2;
		G_B46_1 = G_B44_0;
		goto IL_0287;
	}

IL_0286:
	{
		G_B46_0 = 0;
		G_B46_1 = G_B45_0;
	}

IL_0287:
	{
		V_12 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B46_1|(int32_t)G_B46_0)))));
		ByteU5BU5D_t4116647657* L_98 = V_4;
		int32_t L_99 = V_5;
		int32_t L_100 = L_99;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)1));
		uint8_t L_101 = V_12;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (uint8_t)L_101);
		ByteU5BU5D_t4116647657* L_102 = V_4;
		int32_t L_103 = V_5;
		int32_t L_104 = L_103;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)1));
		uint16_t L_105 = __this->get_keepAlivePeriod_75();
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_105>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_106 = V_4;
		int32_t L_107 = V_5;
		int32_t L_108 = L_107;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
		uint16_t L_109 = __this->get_keepAlivePeriod_75();
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_108), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_109&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_110 = V_4;
		int32_t L_111 = V_5;
		int32_t L_112 = L_111;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)1));
		ByteU5BU5D_t4116647657* L_113 = V_6;
		NullCheck(L_113);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_113)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_114 = V_4;
		int32_t L_115 = V_5;
		int32_t L_116 = L_115;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1));
		ByteU5BU5D_t4116647657* L_117 = V_6;
		NullCheck(L_117);
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_117)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_118 = V_6;
		ByteU5BU5D_t4116647657* L_119 = V_4;
		int32_t L_120 = V_5;
		ByteU5BU5D_t4116647657* L_121 = V_6;
		NullCheck(L_121);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_118, 0, (RuntimeArray *)(RuntimeArray *)L_119, L_120, (((int32_t)((int32_t)(((RuntimeArray *)L_121)->max_length)))), /*hidden argument*/NULL);
		int32_t L_122 = V_5;
		ByteU5BU5D_t4116647657* L_123 = V_6;
		NullCheck(L_123);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_123)->max_length))))));
		bool L_124 = __this->get_willFlag_69();
		if (!L_124)
		{
			goto IL_0367;
		}
	}
	{
		String_t* L_125 = __this->get_willTopic_70();
		if (!L_125)
		{
			goto IL_0367;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_126 = V_4;
		int32_t L_127 = V_5;
		int32_t L_128 = L_127;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, (int32_t)1));
		ByteU5BU5D_t4116647657* L_129 = V_7;
		NullCheck(L_129);
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(L_128), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_129)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_130 = V_4;
		int32_t L_131 = V_5;
		int32_t L_132 = L_131;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_132, (int32_t)1));
		ByteU5BU5D_t4116647657* L_133 = V_7;
		NullCheck(L_133);
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_133)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_134 = V_7;
		ByteU5BU5D_t4116647657* L_135 = V_4;
		int32_t L_136 = V_5;
		ByteU5BU5D_t4116647657* L_137 = V_7;
		NullCheck(L_137);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_134, 0, (RuntimeArray *)(RuntimeArray *)L_135, L_136, (((int32_t)((int32_t)(((RuntimeArray *)L_137)->max_length)))), /*hidden argument*/NULL);
		int32_t L_138 = V_5;
		ByteU5BU5D_t4116647657* L_139 = V_7;
		NullCheck(L_139);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_139)->max_length))))));
	}

IL_0367:
	{
		bool L_140 = __this->get_willFlag_69();
		if (!L_140)
		{
			goto IL_03c2;
		}
	}
	{
		String_t* L_141 = __this->get_willMessage_71();
		if (!L_141)
		{
			goto IL_03c2;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_142 = V_4;
		int32_t L_143 = V_5;
		int32_t L_144 = L_143;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_144, (int32_t)1));
		ByteU5BU5D_t4116647657* L_145 = V_8;
		NullCheck(L_145);
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_145)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_146 = V_4;
		int32_t L_147 = V_5;
		int32_t L_148 = L_147;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, (int32_t)1));
		ByteU5BU5D_t4116647657* L_149 = V_8;
		NullCheck(L_149);
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(L_148), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_149)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_150 = V_8;
		ByteU5BU5D_t4116647657* L_151 = V_4;
		int32_t L_152 = V_5;
		ByteU5BU5D_t4116647657* L_153 = V_8;
		NullCheck(L_153);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_150, 0, (RuntimeArray *)(RuntimeArray *)L_151, L_152, (((int32_t)((int32_t)(((RuntimeArray *)L_153)->max_length)))), /*hidden argument*/NULL);
		int32_t L_154 = V_5;
		ByteU5BU5D_t4116647657* L_155 = V_8;
		NullCheck(L_155);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_155)->max_length))))));
	}

IL_03c2:
	{
		String_t* L_156 = __this->get_username_72();
		if (!L_156)
		{
			goto IL_0412;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_157 = V_4;
		int32_t L_158 = V_5;
		int32_t L_159 = L_158;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
		ByteU5BU5D_t4116647657* L_160 = V_9;
		NullCheck(L_160);
		NullCheck(L_157);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(L_159), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_160)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_161 = V_4;
		int32_t L_162 = V_5;
		int32_t L_163 = L_162;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
		ByteU5BU5D_t4116647657* L_164 = V_9;
		NullCheck(L_164);
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(L_163), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_164)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_165 = V_9;
		ByteU5BU5D_t4116647657* L_166 = V_4;
		int32_t L_167 = V_5;
		ByteU5BU5D_t4116647657* L_168 = V_9;
		NullCheck(L_168);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_165, 0, (RuntimeArray *)(RuntimeArray *)L_166, L_167, (((int32_t)((int32_t)(((RuntimeArray *)L_168)->max_length)))), /*hidden argument*/NULL);
		int32_t L_169 = V_5;
		ByteU5BU5D_t4116647657* L_170 = V_9;
		NullCheck(L_170);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_169, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_170)->max_length))))));
	}

IL_0412:
	{
		String_t* L_171 = __this->get_password_73();
		if (!L_171)
		{
			goto IL_0462;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_172 = V_4;
		int32_t L_173 = V_5;
		int32_t L_174 = L_173;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_174, (int32_t)1));
		ByteU5BU5D_t4116647657* L_175 = V_10;
		NullCheck(L_175);
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_175)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_176 = V_4;
		int32_t L_177 = V_5;
		int32_t L_178 = L_177;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)1));
		ByteU5BU5D_t4116647657* L_179 = V_10;
		NullCheck(L_179);
		NullCheck(L_176);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(L_178), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_179)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_180 = V_10;
		ByteU5BU5D_t4116647657* L_181 = V_4;
		int32_t L_182 = V_5;
		ByteU5BU5D_t4116647657* L_183 = V_10;
		NullCheck(L_183);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_180, 0, (RuntimeArray *)(RuntimeArray *)L_181, L_182, (((int32_t)((int32_t)(((RuntimeArray *)L_183)->max_length)))), /*hidden argument*/NULL);
		int32_t L_184 = V_5;
		ByteU5BU5D_t4116647657* L_185 = V_10;
		NullCheck(L_185);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_184, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_185)->max_length))))));
	}

IL_0462:
	{
		ByteU5BU5D_t4116647657* L_186 = V_4;
		return L_186;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect::ToString()
extern "C"  String_t* MqttMsgConnect_ToString_m2224489458 (MqttMsgConnect_t2841720955 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::.ctor(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect)
extern "C"  void MqttMsgConnectEventArgs__ctor_m192086192 (MqttMsgConnectEventArgs_t930364184 * __this, MqttMsgConnect_t2841720955 * ___connect0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgConnectEventArgs__ctor_m192086192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		MqttMsgConnect_t2841720955 * L_0 = ___connect0;
		MqttMsgConnectEventArgs_set_Message_m3951955234(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::get_Message()
extern "C"  MqttMsgConnect_t2841720955 * MqttMsgConnectEventArgs_get_Message_m2583281210 (MqttMsgConnectEventArgs_t930364184 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgConnect_t2841720955 * L_0 = __this->get_U3CMessageU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnectEventArgs::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgConnect)
extern "C"  void MqttMsgConnectEventArgs_set_Message_m3951955234 (MqttMsgConnectEventArgs_t930364184 * __this, MqttMsgConnect_t2841720955 * ___value0, const RuntimeMethod* method)
{
	{
		MqttMsgConnect_t2841720955 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_1(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::.ctor()
extern "C"  void MqttMsgContext__ctor_m2737741963 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Message()
extern "C"  MqttMsgBase_t2321119380 * MqttMsgContext_get_Message_m3976154556 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t2321119380 * L_0 = __this->get_U3CMessageU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Message(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttMsgContext_set_Message_m3182675887 (MqttMsgContext_t1493973115 * __this, MqttMsgBase_t2321119380 * ___value0, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t2321119380 * L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_State()
extern "C"  int32_t MqttMsgContext_get_State_m1931372396 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_State(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgState)
extern "C"  void MqttMsgContext_set_State_m4162879748 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_1(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Flow()
extern "C"  int32_t MqttMsgContext_get_Flow_m2085309911 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttMsgContext_set_Flow_m1961288458 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Timestamp()
extern "C"  int32_t MqttMsgContext_get_Timestamp_m3667406389 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimestampU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Timestamp(System.Int32)
extern "C"  void MqttMsgContext_set_Timestamp_m1658145452 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimestampU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::get_Attempt()
extern "C"  int32_t MqttMsgContext_get_Attempt_m45535592 (MqttMsgContext_t1493973115 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttemptU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgContext::set_Attempt(System.Int32)
extern "C"  void MqttMsgContext_set_Attempt_m1220111819 (MqttMsgContext_t1493973115 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptU3Ek__BackingField_4(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::.ctor()
extern "C"  void MqttMsgDisconnect__ctor_m1701223112 (MqttMsgDisconnect_t4092039470 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)14));
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgDisconnect_t4092039470 * MqttMsgDisconnect_Parse_m1470563858 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgDisconnect_Parse_m1470563858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgDisconnect_t4092039470 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		MqttMsgDisconnect_t4092039470 * L_0 = (MqttMsgDisconnect_t4092039470 *)il2cpp_codegen_object_new(MqttMsgDisconnect_t4092039470_il2cpp_TypeInfo_var);
		MqttMsgDisconnect__ctor_m1701223112(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		MqttMsgDisconnect_t4092039470 * L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgDisconnect_GetBytes_m1932598212 (MqttMsgDisconnect_t4092039470 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgDisconnect_GetBytes_m1932598212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2));
		V_1 = 0;
		ByteU5BU5D_t4116647657* L_0 = V_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)224));
		ByteU5BU5D_t4116647657* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		return L_6;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgDisconnect::ToString()
extern "C"  String_t* MqttMsgDisconnect_ToString_m4149151446 (MqttMsgDisconnect_t4092039470 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::.ctor()
extern "C"  void MqttMsgPingReq__ctor_m4132750144 (MqttMsgPingReq_t516259338 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)12));
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPingReq_GetBytes_m2597301524 (MqttMsgPingReq_t516259338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingReq_GetBytes_m2597301524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2));
		V_1 = 0;
		ByteU5BU5D_t4116647657* L_0 = V_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)192));
		ByteU5BU5D_t4116647657* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		return L_6;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPingReq_t516259338 * MqttMsgPingReq_Parse_m253756983 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingReq_Parse_m253756983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingReq_t516259338 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		MqttMsgPingReq_t516259338 * L_0 = (MqttMsgPingReq_t516259338 *)il2cpp_codegen_object_new(MqttMsgPingReq_t516259338_il2cpp_TypeInfo_var);
		MqttMsgPingReq__ctor_m4132750144(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		MqttMsgPingReq_t516259338 * L_3 = V_0;
		return L_3;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingReq::ToString()
extern "C"  String_t* MqttMsgPingReq_ToString_m2444232098 (MqttMsgPingReq_t516259338 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::.ctor()
extern "C"  void MqttMsgPingResp__ctor_m350567925 (MqttMsgPingResp_t2915329856 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)13));
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPingResp_t2915329856 * MqttMsgPingResp_Parse_m2246319529 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingResp_Parse_m2246319529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingResp_t2915329856 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		MqttMsgPingResp_t2915329856 * L_0 = (MqttMsgPingResp_t2915329856 *)il2cpp_codegen_object_new(MqttMsgPingResp_t2915329856_il2cpp_TypeInfo_var);
		MqttMsgPingResp__ctor_m350567925(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		MqttMsgPingResp_t2915329856 * L_3 = V_0;
		return L_3;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPingResp_GetBytes_m969592971 (MqttMsgPingResp_t2915329856 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPingResp_GetBytes_m969592971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)2));
		V_1 = 0;
		ByteU5BU5D_t4116647657* L_0 = V_0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)208));
		ByteU5BU5D_t4116647657* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		ByteU5BU5D_t4116647657* L_6 = V_0;
		return L_6;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp::ToString()
extern "C"  String_t* MqttMsgPingResp_ToString_m1889708031 (MqttMsgPingResp_t2915329856 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::.ctor()
extern "C"  void MqttMsgPuback__ctor_m261856467 (MqttMsgPuback_t3000343258 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)4);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::get_MessageId()
extern "C"  uint16_t MqttMsgPuback_get_MessageId_m3009824526 (MqttMsgPuback_t3000343258 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPuback_set_MessageId_m2796226297 (MqttMsgPuback_t3000343258 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPuback_GetBytes_m2327354666 (MqttMsgPuback_t3000343258 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPuback_GetBytes_m2327354666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = V_4;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)64));
		int32_t L_14 = V_3;
		ByteU5BU5D_t4116647657* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		uint16_t L_21 = __this->get_messageId_36();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		uint16_t L_25 = __this->get_messageId_36();
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_26 = V_4;
		return L_26;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPuback_t3000343258 * MqttMsgPuback_Parse_m3652376793 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPuback_Parse_m3652376793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPuback_t3000343258 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_1 = 0;
		MqttMsgPuback_t3000343258 * L_0 = (MqttMsgPuback_t3000343258 *)il2cpp_codegen_object_new(MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var);
		MqttMsgPuback__ctor_m261856467(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgPuback_t3000343258 * L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		L_6->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPuback_t3000343258 * L_12 = V_2;
		MqttMsgPuback_t3000343258 * L_13 = L_12;
		NullCheck(L_13);
		uint16_t L_14 = L_13->get_messageId_36();
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		L_13->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_14|(int32_t)L_19))))));
		MqttMsgPuback_t3000343258 * L_20 = V_2;
		return L_20;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPuback::ToString()
extern "C"  String_t* MqttMsgPuback_ToString_m2128802001 (MqttMsgPuback_t3000343258 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::.ctor()
extern "C"  void MqttMsgPubcomp__ctor_m2433696329 (MqttMsgPubcomp_t24488374 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)7);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::get_MessageId()
extern "C"  uint16_t MqttMsgPubcomp_get_MessageId_m3049482919 (MqttMsgPubcomp_t24488374 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPubcomp_set_MessageId_m3644641738 (MqttMsgPubcomp_t24488374 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPubcomp_GetBytes_m2679862602 (MqttMsgPubcomp_t24488374 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubcomp_GetBytes_m2679862602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = V_4;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)112));
		int32_t L_14 = V_3;
		ByteU5BU5D_t4116647657* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		uint16_t L_21 = __this->get_messageId_36();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		uint16_t L_25 = __this->get_messageId_36();
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_26 = V_4;
		return L_26;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPubcomp_t24488374 * MqttMsgPubcomp_Parse_m3781949255 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubcomp_Parse_m3781949255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubcomp_t24488374 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_1 = 0;
		MqttMsgPubcomp_t24488374 * L_0 = (MqttMsgPubcomp_t24488374 *)il2cpp_codegen_object_new(MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var);
		MqttMsgPubcomp__ctor_m2433696329(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgPubcomp_t24488374 * L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		L_6->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPubcomp_t24488374 * L_12 = V_2;
		MqttMsgPubcomp_t24488374 * L_13 = L_12;
		NullCheck(L_13);
		uint16_t L_14 = L_13->get_messageId_36();
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		L_13->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_14|(int32_t)L_19))))));
		MqttMsgPubcomp_t24488374 * L_20 = V_2;
		return L_20;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubcomp::ToString()
extern "C"  String_t* MqttMsgPubcomp_ToString_m4280437646 (MqttMsgPubcomp_t24488374 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor()
extern "C"  void MqttMsgPublish__ctor_m3222053250 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)3);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[])
extern "C"  void MqttMsgPublish__ctor_m1006687556 (MqttMsgPublish_t1956840664 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___topic0;
		ByteU5BU5D_t4116647657* L_1 = ___message1;
		MqttMsgPublish__ctor_m3530188858(__this, L_0, L_1, (bool)0, (uint8_t)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
extern "C"  void MqttMsgPublish__ctor_m3530188858 (MqttMsgPublish_t1956840664 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)3);
		String_t* L_0 = ___topic0;
		__this->set_topic_36(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___message1;
		__this->set_message_37(L_1);
		bool L_2 = ___dupFlag2;
		((MqttMsgBase_t2321119380 *)__this)->set_dupFlag_33(L_2);
		uint8_t L_3 = ___qosLevel3;
		((MqttMsgBase_t2321119380 *)__this)->set_qosLevel_34(L_3);
		bool L_4 = ___retain4;
		((MqttMsgBase_t2321119380 *)__this)->set_retain_35(L_4);
		__this->set_messageId_38((uint16_t)0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Topic()
extern "C"  String_t* MqttMsgPublish_get_Topic_m2553516360 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_topic_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::set_Topic(System.String)
extern "C"  void MqttMsgPublish_set_Topic_m3176804163 (MqttMsgPublish_t1956840664 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_topic_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_Message()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPublish_get_Message_m2120338431 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_message_37();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::set_Message(System.Byte[])
extern "C"  void MqttMsgPublish_set_Message_m2783926433 (MqttMsgPublish_t1956840664 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_message_37(L_0);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::get_MessageId()
extern "C"  uint16_t MqttMsgPublish_get_MessageId_m3957849214 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_38();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPublish_set_MessageId_m1202353617 (MqttMsgPublish_t1956840664 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_38(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPublish_GetBytes_m3062953436 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublish_GetBytes_m3062953436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B15_0 = 0;
	uint8_t* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	uint8_t* G_B14_1 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	uint8_t* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	uint8_t* G_B18_1 = NULL;
	int32_t G_B17_0 = 0;
	uint8_t* G_B17_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	uint8_t* G_B19_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		String_t* L_0 = __this->get_topic_36();
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m363431711(L_0, ((int32_t)35), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_2 = __this->get_topic_36();
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m363431711(L_2, ((int32_t)43), /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0038;
		}
	}

IL_0031:
	{
		MqttClientException_t1411037672 * L_4 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_4, 3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4,MqttMsgPublish_GetBytes_m3062953436_RuntimeMethod_var);
	}

IL_0038:
	{
		String_t* L_5 = __this->get_topic_36();
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_7 = __this->get_topic_36();
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m3847582255(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0065;
		}
	}

IL_005e:
	{
		MqttClientException_t1411037672 * L_9 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_9, 4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,MqttMsgPublish_GetBytes_m3062953436_RuntimeMethod_var);
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_10 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_topic_36();
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_12 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_11);
		V_6 = L_12;
		int32_t L_13 = V_1;
		ByteU5BU5D_t4116647657* L_14 = V_6;
		NullCheck(L_14);
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), (int32_t)2))));
		uint8_t L_15 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		if ((((int32_t)L_15) == ((int32_t)1)))
		{
			goto IL_0098;
		}
	}
	{
		uint8_t L_16 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_009c;
		}
	}

IL_0098:
	{
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)2));
	}

IL_009c:
	{
		ByteU5BU5D_t4116647657* L_18 = __this->get_message_37();
		if (!L_18)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_19 = V_2;
		ByteU5BU5D_t4116647657* L_20 = __this->get_message_37();
		NullCheck(L_20);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length))))));
	}

IL_00b2:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_1;
		int32_t L_23 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23))));
		V_0 = 1;
		int32_t L_24 = V_3;
		V_7 = L_24;
	}

IL_00bd:
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		int32_t L_26 = V_7;
		V_7 = ((int32_t)((int32_t)L_26/(int32_t)((int32_t)128)));
		int32_t L_27 = V_7;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), (int32_t)L_30))));
		ByteU5BU5D_t4116647657* L_31 = V_4;
		int32_t L_32 = V_5;
		uint8_t L_33 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)48)|(int32_t)((int32_t)((int32_t)L_33<<(int32_t)1))))))));
		ByteU5BU5D_t4116647657* L_34 = V_4;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		uint8_t* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)));
		bool L_37 = ((MqttMsgBase_t2321119380 *)__this)->get_dupFlag_33();
		G_B14_0 = (*((uint8_t*)L_36));
		G_B14_1 = L_36;
		if (!L_37)
		{
			G_B15_0 = (*((uint8_t*)L_36));
			G_B15_1 = L_36;
			goto IL_010c;
		}
	}
	{
		G_B16_0 = 8;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_010d;
	}

IL_010c:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_010d:
	{
		*((int8_t*)(G_B16_2)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B16_1|(int32_t)G_B16_0)))));
		ByteU5BU5D_t4116647657* L_38 = V_4;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		uint8_t* L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)));
		bool L_41 = ((MqttMsgBase_t2321119380 *)__this)->get_retain_35();
		G_B17_0 = (*((uint8_t*)L_40));
		G_B17_1 = L_40;
		if (!L_41)
		{
			G_B18_0 = (*((uint8_t*)L_40));
			G_B18_1 = L_40;
			goto IL_012c;
		}
	}
	{
		G_B19_0 = 1;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_012d;
	}

IL_012c:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_012d:
	{
		*((int8_t*)(G_B19_2)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B19_1|(int32_t)G_B19_0)))));
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
		int32_t L_43 = V_3;
		ByteU5BU5D_t4116647657* L_44 = V_4;
		int32_t L_45 = V_5;
		int32_t L_46 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_43, L_44, L_45, /*hidden argument*/NULL);
		V_5 = L_46;
		ByteU5BU5D_t4116647657* L_47 = V_4;
		int32_t L_48 = V_5;
		int32_t L_49 = L_48;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
		ByteU5BU5D_t4116647657* L_50 = V_6;
		NullCheck(L_50);
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_50)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = L_52;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		ByteU5BU5D_t4116647657* L_54 = V_6;
		NullCheck(L_54);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_55 = V_6;
		ByteU5BU5D_t4116647657* L_56 = V_4;
		int32_t L_57 = V_5;
		ByteU5BU5D_t4116647657* L_58 = V_6;
		NullCheck(L_58);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_55, 0, (RuntimeArray *)(RuntimeArray *)L_56, L_57, (((int32_t)((int32_t)(((RuntimeArray *)L_58)->max_length)))), /*hidden argument*/NULL);
		int32_t L_59 = V_5;
		ByteU5BU5D_t4116647657* L_60 = V_6;
		NullCheck(L_60);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_60)->max_length))))));
		uint8_t L_61 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		if ((((int32_t)L_61) == ((int32_t)1)))
		{
			goto IL_01a0;
		}
	}
	{
		uint8_t L_62 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		if ((!(((uint32_t)L_62) == ((uint32_t)2))))
		{
			goto IL_01e3;
		}
	}

IL_01a0:
	{
		uint16_t L_63 = __this->get_messageId_38();
		if (L_63)
		{
			goto IL_01b3;
		}
	}
	{
		MqttClientException_t1411037672 * L_64 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_64, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64,MqttMsgPublish_GetBytes_m3062953436_RuntimeMethod_var);
	}

IL_01b3:
	{
		ByteU5BU5D_t4116647657* L_65 = V_4;
		int32_t L_66 = V_5;
		int32_t L_67 = L_66;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		uint16_t L_68 = __this->get_messageId_38();
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_68>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_69 = V_4;
		int32_t L_70 = V_5;
		int32_t L_71 = L_70;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
		uint16_t L_72 = __this->get_messageId_38();
		NullCheck(L_69);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_72&(int32_t)((int32_t)255)))))));
	}

IL_01e3:
	{
		ByteU5BU5D_t4116647657* L_73 = __this->get_message_37();
		if (!L_73)
		{
			goto IL_0213;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_74 = __this->get_message_37();
		ByteU5BU5D_t4116647657* L_75 = V_4;
		int32_t L_76 = V_5;
		ByteU5BU5D_t4116647657* L_77 = __this->get_message_37();
		NullCheck(L_77);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_74, 0, (RuntimeArray *)(RuntimeArray *)L_75, L_76, (((int32_t)((int32_t)(((RuntimeArray *)L_77)->max_length)))), /*hidden argument*/NULL);
		int32_t L_78 = V_5;
		ByteU5BU5D_t4116647657* L_79 = __this->get_message_37();
		NullCheck(L_79);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_79)->max_length))))));
	}

IL_0213:
	{
		ByteU5BU5D_t4116647657* L_80 = V_4;
		return L_80;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPublish_t1956840664 * MqttMsgPublish_Parse_m1565802144 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublish_Parse_m1565802144_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgPublish_t1956840664 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		V_1 = 0;
		MqttMsgPublish_t1956840664 * L_0 = (MqttMsgPublish_t1956840664 *)il2cpp_codegen_object_new(MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var);
		MqttMsgPublish__ctor_m3222053250(L_0, /*hidden argument*/NULL);
		V_4 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		int32_t L_3 = V_5;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		V_6 = L_6;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_12 = V_3;
		ByteU5BU5D_t4116647657* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = ((int32_t)((int32_t)L_12|(int32_t)L_17));
		int32_t L_18 = V_3;
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_18));
		ByteU5BU5D_t4116647657* L_19 = V_0;
		int32_t L_20 = V_1;
		ByteU5BU5D_t4116647657* L_21 = V_2;
		int32_t L_22 = V_3;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, L_20, (RuntimeArray *)(RuntimeArray *)L_21, 0, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		int32_t L_24 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)L_24));
		MqttMsgPublish_t1956840664 * L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_26 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_27 = V_2;
		NullCheck(L_26);
		CharU5BU5D_t3528271667* L_28 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_26, L_27);
		String_t* L_29 = String_CreateString_m2818852475(NULL, L_28, /*hidden argument*/NULL);
		NullCheck(L_25);
		L_25->set_topic_36(L_29);
		MqttMsgPublish_t1956840664 * L_30 = V_4;
		uint8_t L_31 = ___fixedHeaderFirstByte0;
		NullCheck(L_30);
		((MqttMsgBase_t2321119380 *)L_30)->set_qosLevel_34((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_31&(int32_t)6))>>(int32_t)1))))));
		MqttMsgPublish_t1956840664 * L_32 = V_4;
		uint8_t L_33 = ___fixedHeaderFirstByte0;
		NullCheck(L_32);
		((MqttMsgBase_t2321119380 *)L_32)->set_dupFlag_33((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_33&(int32_t)8))>>(int32_t)3))) == ((int32_t)1))? 1 : 0));
		MqttMsgPublish_t1956840664 * L_34 = V_4;
		uint8_t L_35 = ___fixedHeaderFirstByte0;
		NullCheck(L_34);
		((MqttMsgBase_t2321119380 *)L_34)->set_retain_35((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_35&(int32_t)1))>>(int32_t)0))) == ((int32_t)1))? 1 : 0));
		MqttMsgPublish_t1956840664 * L_36 = V_4;
		NullCheck(L_36);
		uint8_t L_37 = ((MqttMsgBase_t2321119380 *)L_36)->get_qosLevel_34();
		if ((((int32_t)L_37) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		MqttMsgPublish_t1956840664 * L_38 = V_4;
		NullCheck(L_38);
		uint8_t L_39 = ((MqttMsgBase_t2321119380 *)L_38)->get_qosLevel_34();
		if ((!(((uint32_t)L_39) == ((uint32_t)2))))
		{
			goto IL_00da;
		}
	}

IL_00ad:
	{
		MqttMsgPublish_t1956840664 * L_40 = V_4;
		ByteU5BU5D_t4116647657* L_41 = V_0;
		int32_t L_42 = V_1;
		int32_t L_43 = L_42;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		NullCheck(L_41);
		int32_t L_44 = L_43;
		uint8_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		NullCheck(L_40);
		L_40->set_messageId_38((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_45<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPublish_t1956840664 * L_46 = V_4;
		MqttMsgPublish_t1956840664 * L_47 = L_46;
		NullCheck(L_47);
		uint16_t L_48 = L_47->get_messageId_38();
		ByteU5BU5D_t4116647657* L_49 = V_0;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
		NullCheck(L_49);
		int32_t L_52 = L_51;
		uint8_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_47);
		L_47->set_messageId_38((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_48|(int32_t)L_53))))));
	}

IL_00da:
	{
		int32_t L_54 = V_5;
		int32_t L_55 = V_1;
		V_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_55));
		int32_t L_56 = V_7;
		V_8 = L_56;
		V_9 = 0;
		MqttMsgPublish_t1956840664 * L_57 = V_4;
		int32_t L_58 = V_7;
		NullCheck(L_57);
		L_57->set_message_37(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_58)));
		ByteU5BU5D_t4116647657* L_59 = V_0;
		int32_t L_60 = V_1;
		MqttMsgPublish_t1956840664 * L_61 = V_4;
		NullCheck(L_61);
		ByteU5BU5D_t4116647657* L_62 = L_61->get_message_37();
		int32_t L_63 = V_9;
		int32_t L_64 = V_6;
		int32_t L_65 = V_1;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_59, L_60, (RuntimeArray *)(RuntimeArray *)L_62, L_63, ((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)L_65)), /*hidden argument*/NULL);
		int32_t L_66 = V_8;
		int32_t L_67 = V_6;
		int32_t L_68 = V_1;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)L_68))));
		int32_t L_69 = V_9;
		int32_t L_70 = V_6;
		int32_t L_71 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_71))));
		goto IL_0149;
	}

IL_0120:
	{
		RuntimeObject* L_72 = ___channel1;
		ByteU5BU5D_t4116647657* L_73 = V_0;
		NullCheck(L_72);
		int32_t L_74 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_72, L_73);
		V_6 = L_74;
		ByteU5BU5D_t4116647657* L_75 = V_0;
		MqttMsgPublish_t1956840664 * L_76 = V_4;
		NullCheck(L_76);
		ByteU5BU5D_t4116647657* L_77 = L_76->get_message_37();
		int32_t L_78 = V_9;
		int32_t L_79 = V_6;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_75, 0, (RuntimeArray *)(RuntimeArray *)L_77, L_78, L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_8;
		int32_t L_81 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)L_81));
		int32_t L_82 = V_9;
		int32_t L_83 = V_6;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)L_83));
	}

IL_0149:
	{
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) > ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		MqttMsgPublish_t1956840664 * L_85 = V_4;
		return L_85;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish::ToString()
extern "C"  String_t* MqttMsgPublish_ToString_m3335665535 (MqttMsgPublish_t1956840664 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::.ctor(System.UInt16)
extern "C"  void MqttMsgPublishedEventArgs__ctor_m3198312214 (MqttMsgPublishedEventArgs_t90327050 * __this, uint16_t ___messageId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublishedEventArgs__ctor_m3198312214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::get_MessageId()
extern "C"  uint16_t MqttMsgPublishedEventArgs_get_MessageId_m3152624752 (MqttMsgPublishedEventArgs_t90327050 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPublishedEventArgs_set_MessageId_m455263063 (MqttMsgPublishedEventArgs_t90327050 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_1(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::.ctor(System.String,System.Byte[],System.Boolean,System.Byte,System.Boolean)
extern "C"  void MqttMsgPublishEventArgs__ctor_m4161232453 (MqttMsgPublishEventArgs_t2350602093 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, bool ___dupFlag2, uint8_t ___qosLevel3, bool ___retain4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPublishEventArgs__ctor_m4161232453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___topic0;
		__this->set_topic_1(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___message1;
		__this->set_message_2(L_1);
		bool L_2 = ___dupFlag2;
		__this->set_dupFlag_3(L_2);
		uint8_t L_3 = ___qosLevel3;
		__this->set_qosLevel_4(L_3);
		bool L_4 = ___retain4;
		__this->set_retain_5(L_4);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Topic()
extern "C"  String_t* MqttMsgPublishEventArgs_get_Topic_m763780921 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_topic_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_Topic(System.String)
extern "C"  void MqttMsgPublishEventArgs_set_Topic_m1921498331 (MqttMsgPublishEventArgs_t2350602093 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_topic_1(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Message()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPublishEventArgs_get_Message_m3404860665 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_message_2();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_Message(System.Byte[])
extern "C"  void MqttMsgPublishEventArgs_set_Message_m1954149283 (MqttMsgPublishEventArgs_t2350602093 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_message_2(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_DupFlag()
extern "C"  bool MqttMsgPublishEventArgs_get_DupFlag_m4078215118 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_dupFlag_3();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_DupFlag(System.Boolean)
extern "C"  void MqttMsgPublishEventArgs_set_DupFlag_m2447264040 (MqttMsgPublishEventArgs_t2350602093 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_dupFlag_3(L_0);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_QosLevel()
extern "C"  uint8_t MqttMsgPublishEventArgs_get_QosLevel_m977477009 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_qosLevel_4();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_QosLevel(System.Byte)
extern "C"  void MqttMsgPublishEventArgs_set_QosLevel_m2331804331 (MqttMsgPublishEventArgs_t2350602093 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_qosLevel_4(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::get_Retain()
extern "C"  bool MqttMsgPublishEventArgs_get_Retain_m2816325415 (MqttMsgPublishEventArgs_t2350602093 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_retain_5();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs::set_Retain(System.Boolean)
extern "C"  void MqttMsgPublishEventArgs_set_Retain_m483315055 (MqttMsgPublishEventArgs_t2350602093 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_retain_5(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::.ctor()
extern "C"  void MqttMsgPubrec__ctor_m112381699 (MqttMsgPubrec_t1898486492 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)5);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::get_MessageId()
extern "C"  uint16_t MqttMsgPubrec_get_MessageId_m716168082 (MqttMsgPubrec_t1898486492 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPubrec_set_MessageId_m788277172 (MqttMsgPubrec_t1898486492 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPubrec_GetBytes_m2518781433 (MqttMsgPubrec_t1898486492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrec_GetBytes_m2518781433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = V_4;
		int32_t L_12 = V_5;
		int32_t L_13 = L_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)80));
		int32_t L_14 = V_3;
		ByteU5BU5D_t4116647657* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		uint16_t L_21 = __this->get_messageId_36();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		uint16_t L_25 = __this->get_messageId_36();
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_26 = V_4;
		return L_26;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPubrec_t1898486492 * MqttMsgPubrec_Parse_m1855442422 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrec_Parse_m1855442422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrec_t1898486492 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_1 = 0;
		MqttMsgPubrec_t1898486492 * L_0 = (MqttMsgPubrec_t1898486492 *)il2cpp_codegen_object_new(MqttMsgPubrec_t1898486492_il2cpp_TypeInfo_var);
		MqttMsgPubrec__ctor_m112381699(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgPubrec_t1898486492 * L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		L_6->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPubrec_t1898486492 * L_12 = V_2;
		MqttMsgPubrec_t1898486492 * L_13 = L_12;
		NullCheck(L_13);
		uint16_t L_14 = L_13->get_messageId_36();
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		L_13->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_14|(int32_t)L_19))))));
		MqttMsgPubrec_t1898486492 * L_20 = V_2;
		return L_20;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrec::ToString()
extern "C"  String_t* MqttMsgPubrec_ToString_m1271306781 (MqttMsgPubrec_t1898486492 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::.ctor()
extern "C"  void MqttMsgPubrel__ctor_m151899907 (MqttMsgPubrel_t1897503452 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)6);
		((MqttMsgBase_t2321119380 *)__this)->set_qosLevel_34((uint8_t)1);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::get_MessageId()
extern "C"  uint16_t MqttMsgPubrel_get_MessageId_m3296907418 (MqttMsgPubrel_t1897503452 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::set_MessageId(System.UInt16)
extern "C"  void MqttMsgPubrel_set_MessageId_m2333365791 (MqttMsgPubrel_t1897503452 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgPubrel_GetBytes_m2674691587 (MqttMsgPubrel_t1897503452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrel_GetBytes_m2674691587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B4_0 = 0;
	uint8_t* G_B4_1 = NULL;
	int32_t G_B3_0 = 0;
	uint8_t* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	uint8_t* G_B5_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = V_4;
		int32_t L_12 = V_5;
		uint8_t L_13 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)96)|(int32_t)((int32_t)((int32_t)L_13<<(int32_t)1))))))));
		ByteU5BU5D_t4116647657* L_14 = V_4;
		int32_t L_15 = V_5;
		NullCheck(L_14);
		uint8_t* L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)));
		bool L_17 = ((MqttMsgBase_t2321119380 *)__this)->get_dupFlag_33();
		G_B3_0 = (*((uint8_t*)L_16));
		G_B3_1 = L_16;
		if (!L_17)
		{
			G_B4_0 = (*((uint8_t*)L_16));
			G_B4_1 = L_16;
			goto IL_0069;
		}
	}
	{
		G_B5_0 = 8;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_006a;
	}

IL_0069:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_006a:
	{
		*((int8_t*)(G_B5_2)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B5_1|(int32_t)G_B5_0)))));
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_3;
		ByteU5BU5D_t4116647657* L_20 = V_4;
		int32_t L_21 = V_5;
		int32_t L_22 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_19, L_20, L_21, /*hidden argument*/NULL);
		V_5 = L_22;
		ByteU5BU5D_t4116647657* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		uint16_t L_26 = __this->get_messageId_36();
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_26>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		uint16_t L_30 = __this->get_messageId_36();
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_30&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_31 = V_4;
		return L_31;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgPubrel_t1897503452 * MqttMsgPubrel_Parse_m230762409 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgPubrel_Parse_m230762409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgPubrel_t1897503452 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_1 = 0;
		MqttMsgPubrel_t1897503452 * L_0 = (MqttMsgPubrel_t1897503452 *)il2cpp_codegen_object_new(MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var);
		MqttMsgPubrel__ctor_m151899907(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgPubrel_t1897503452 * L_6 = V_2;
		uint8_t L_7 = ___fixedHeaderFirstByte0;
		NullCheck(L_6);
		((MqttMsgBase_t2321119380 *)L_6)->set_qosLevel_34((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_7&(int32_t)6))>>(int32_t)1))))));
		MqttMsgPubrel_t1897503452 * L_8 = V_2;
		uint8_t L_9 = ___fixedHeaderFirstByte0;
		NullCheck(L_8);
		((MqttMsgBase_t2321119380 *)L_8)->set_dupFlag_33((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)8))>>(int32_t)3))) == ((int32_t)1))? 1 : 0));
		MqttMsgPubrel_t1897503452 * L_10 = V_2;
		ByteU5BU5D_t4116647657* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		NullCheck(L_11);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		L_10->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgPubrel_t1897503452 * L_16 = V_2;
		MqttMsgPubrel_t1897503452 * L_17 = L_16;
		NullCheck(L_17);
		uint16_t L_18 = L_17->get_messageId_36();
		ByteU5BU5D_t4116647657* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		NullCheck(L_19);
		int32_t L_22 = L_21;
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		L_17->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_18|(int32_t)L_23))))));
		MqttMsgPubrel_t1897503452 * L_24 = V_2;
		return L_24;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPubrel::ToString()
extern "C"  String_t* MqttMsgPubrel_ToString_m3616250311 (MqttMsgPubrel_t1897503452 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::.ctor()
extern "C"  void MqttMsgSuback__ctor_m2813373056 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)9));
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_MessageId()
extern "C"  uint16_t MqttMsgSuback_get_MessageId_m1708504470 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::set_MessageId(System.UInt16)
extern "C"  void MqttMsgSuback_set_MessageId_m2706525957 (MqttMsgSuback_t3000343093 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::get_GrantedQoSLevels()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSuback_get_GrantedQoSLevels_m1798944243 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_grantedQosLevels_37();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::set_GrantedQoSLevels(System.Byte[])
extern "C"  void MqttMsgSuback_set_GrantedQoSLevels_m2559959788 (MqttMsgSuback_t3000343093 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_grantedQosLevels_37(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgSuback_t3000343093 * MqttMsgSuback_Parse_m1993898496 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSuback_Parse_m1993898496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgSuback_t3000343093 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_1 = 0;
		MqttMsgSuback_t3000343093 * L_0 = (MqttMsgSuback_t3000343093 *)il2cpp_codegen_object_new(MqttMsgSuback_t3000343093_il2cpp_TypeInfo_var);
		MqttMsgSuback__ctor_m2813373056(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgSuback_t3000343093 * L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		L_6->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgSuback_t3000343093 * L_12 = V_2;
		MqttMsgSuback_t3000343093 * L_13 = L_12;
		NullCheck(L_13);
		uint16_t L_14 = L_13->get_messageId_36();
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		L_13->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_14|(int32_t)L_19))))));
		MqttMsgSuback_t3000343093 * L_20 = V_2;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		L_20->set_grantedQosLevels_37(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)2)))));
		V_4 = 0;
	}

IL_005a:
	{
		MqttMsgSuback_t3000343093 * L_22 = V_2;
		NullCheck(L_22);
		ByteU5BU5D_t4116647657* L_23 = L_22->get_grantedQosLevels_37();
		int32_t L_24 = V_4;
		int32_t L_25 = L_24;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
		ByteU5BU5D_t4116647657* L_26 = V_0;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		NullCheck(L_26);
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)L_30);
		int32_t L_31 = V_1;
		int32_t L_32 = V_3;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_005a;
		}
	}
	{
		MqttMsgSuback_t3000343093 * L_33 = V_2;
		return L_33;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSuback_GetBytes_m2354644435 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSuback_GetBytes_m2354644435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		V_6 = 0;
		V_6 = 0;
		goto IL_0024;
	}

IL_001a:
	{
		int32_t L_1 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
		int32_t L_2 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0024:
	{
		int32_t L_3 = V_6;
		ByteU5BU5D_t4116647657* L_4 = __this->get_grantedQosLevels_37();
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_5 = V_3;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7))));
		V_0 = 1;
		int32_t L_8 = V_3;
		V_7 = L_8;
	}

IL_003e:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		int32_t L_10 = V_7;
		V_7 = ((int32_t)((int32_t)L_10/(int32_t)((int32_t)128)));
		int32_t L_11 = V_7;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13)), (int32_t)L_14))));
		ByteU5BU5D_t4116647657* L_15 = V_4;
		int32_t L_16 = V_5;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)((int32_t)144));
		int32_t L_17 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		int32_t L_18 = V_3;
		ByteU5BU5D_t4116647657* L_19 = V_4;
		int32_t L_20 = V_5;
		int32_t L_21 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		ByteU5BU5D_t4116647657* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		uint16_t L_25 = __this->get_messageId_36();
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_25>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_26 = V_4;
		int32_t L_27 = V_5;
		int32_t L_28 = L_27;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		uint16_t L_29 = __this->get_messageId_36();
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)255)))))));
		V_6 = 0;
		goto IL_00ce;
	}

IL_00b5:
	{
		ByteU5BU5D_t4116647657* L_30 = V_4;
		int32_t L_31 = V_5;
		int32_t L_32 = L_31;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
		ByteU5BU5D_t4116647657* L_33 = __this->get_grantedQosLevels_37();
		int32_t L_34 = V_6;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (uint8_t)L_36);
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00ce:
	{
		int32_t L_38 = V_6;
		ByteU5BU5D_t4116647657* L_39 = __this->get_grantedQosLevels_37();
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_00b5;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_40 = V_4;
		return L_40;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback::ToString()
extern "C"  String_t* MqttMsgSuback_ToString_m2155122590 (MqttMsgSuback_t3000343093 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor()
extern "C"  void MqttMsgSubscribe__ctor_m3965809934 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)8);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::.ctor(System.String[],System.Byte[])
extern "C"  void MqttMsgSubscribe__ctor_m840732161 (MqttMsgSubscribe_t4232534475 * __this, StringU5BU5D_t1281789340* ___topics0, ByteU5BU5D_t4116647657* ___qosLevels1, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)8);
		StringU5BU5D_t1281789340* L_0 = ___topics0;
		__this->set_topics_36(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___qosLevels1;
		__this->set_qosLevels_37(L_1);
		((MqttMsgBase_t2321119380 *)__this)->set_qosLevel_34((uint8_t)1);
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_Topics()
extern "C"  StringU5BU5D_t1281789340* MqttMsgSubscribe_get_Topics_m306998482 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_topics_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_Topics(System.String[])
extern "C"  void MqttMsgSubscribe_set_Topics_m3850825804 (MqttMsgSubscribe_t4232534475 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_topics_36(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_QoSLevels()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSubscribe_get_QoSLevels_m322243240 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_qosLevels_37();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_QoSLevels(System.Byte[])
extern "C"  void MqttMsgSubscribe_set_QoSLevels_m79295515 (MqttMsgSubscribe_t4232534475 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_qosLevels_37(L_0);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::get_MessageId()
extern "C"  uint16_t MqttMsgSubscribe_get_MessageId_m1906184073 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_38();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::set_MessageId(System.UInt16)
extern "C"  void MqttMsgSubscribe_set_MessageId_m2993089582 (MqttMsgSubscribe_t4232534475 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_38(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgSubscribe_t4232534475 * MqttMsgSubscribe_Parse_m1720728324 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribe_Parse_m1720728324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgSubscribe_t4232534475 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	{
		V_1 = 0;
		MqttMsgSubscribe_t4232534475 * L_0 = (MqttMsgSubscribe_t4232534475 *)il2cpp_codegen_object_new(MqttMsgSubscribe_t4232534475_il2cpp_TypeInfo_var);
		MqttMsgSubscribe__ctor_m3965809934(L_0, /*hidden argument*/NULL);
		V_4 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		int32_t L_3 = V_5;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		V_6 = L_6;
		MqttMsgSubscribe_t4232534475 * L_7 = V_4;
		uint8_t L_8 = ___fixedHeaderFirstByte0;
		NullCheck(L_7);
		((MqttMsgBase_t2321119380 *)L_7)->set_qosLevel_34((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)6))>>(int32_t)1))))));
		MqttMsgSubscribe_t4232534475 * L_9 = V_4;
		uint8_t L_10 = ___fixedHeaderFirstByte0;
		NullCheck(L_9);
		((MqttMsgBase_t2321119380 *)L_9)->set_dupFlag_33((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10&(int32_t)8))>>(int32_t)3))) == ((int32_t)1))? 1 : 0));
		MqttMsgSubscribe_t4232534475 * L_11 = V_4;
		NullCheck(L_11);
		((MqttMsgBase_t2321119380 *)L_11)->set_retain_35((bool)0);
		MqttMsgSubscribe_t4232534475 * L_12 = V_4;
		ByteU5BU5D_t4116647657* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		L_12->set_messageId_38((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgSubscribe_t4232534475 * L_18 = V_4;
		MqttMsgSubscribe_t4232534475 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = L_19->get_messageId_38();
		ByteU5BU5D_t4116647657* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		L_19->set_messageId_38((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		List_1_t3319525431 * L_26 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_26, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_7 = (RuntimeObject*)L_26;
		List_1_t2606371118 * L_27 = (List_1_t2606371118 *)il2cpp_codegen_object_new(List_1_t2606371118_il2cpp_TypeInfo_var);
		List_1__ctor_m2032142263(L_27, /*hidden argument*/List_1__ctor_m2032142263_RuntimeMethod_var);
		V_8 = (RuntimeObject*)L_27;
	}

IL_0081:
	{
		ByteU5BU5D_t4116647657* L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
		NullCheck(L_28);
		int32_t L_31 = L_30;
		uint8_t L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_32<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_33 = V_3;
		ByteU5BU5D_t4116647657* L_34 = V_0;
		int32_t L_35 = V_1;
		int32_t L_36 = L_35;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		NullCheck(L_34);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_3 = ((int32_t)((int32_t)L_33|(int32_t)L_38));
		int32_t L_39 = V_3;
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_39));
		ByteU5BU5D_t4116647657* L_40 = V_0;
		int32_t L_41 = V_1;
		ByteU5BU5D_t4116647657* L_42 = V_2;
		int32_t L_43 = V_3;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_40, L_41, (RuntimeArray *)(RuntimeArray *)L_42, 0, L_43, /*hidden argument*/NULL);
		int32_t L_44 = V_1;
		int32_t L_45 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45));
		RuntimeObject* L_46 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_47 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_48 = V_2;
		NullCheck(L_47);
		CharU5BU5D_t3528271667* L_49 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_47, L_48);
		String_t* L_50 = String_CreateString_m2818852475(NULL, L_49, /*hidden argument*/NULL);
		NullCheck(L_46);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_46, L_50);
		RuntimeObject* L_51 = V_8;
		ByteU5BU5D_t4116647657* L_52 = V_0;
		int32_t L_53 = V_1;
		int32_t L_54 = L_53;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
		NullCheck(L_52);
		int32_t L_55 = L_54;
		uint8_t L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		InterfaceActionInvoker1< uint8_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::Add(!0) */, ICollection_1_t3962448610_il2cpp_TypeInfo_var, L_51, L_56);
		int32_t L_57 = V_1;
		int32_t L_58 = V_5;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0081;
		}
	}
	{
		MqttMsgSubscribe_t4232534475 * L_59 = V_4;
		RuntimeObject* L_60 = V_7;
		NullCheck(L_60);
		int32_t L_61 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_60);
		NullCheck(L_59);
		L_59->set_topics_36(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_61)));
		MqttMsgSubscribe_t4232534475 * L_62 = V_4;
		RuntimeObject* L_63 = V_8;
		NullCheck(L_63);
		int32_t L_64 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t3962448610_il2cpp_TypeInfo_var, L_63);
		NullCheck(L_62);
		L_62->set_qosLevels_37(((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_64)));
		V_9 = 0;
		goto IL_0137;
	}

IL_010b:
	{
		MqttMsgSubscribe_t4232534475 * L_65 = V_4;
		NullCheck(L_65);
		StringU5BU5D_t1281789340* L_66 = L_65->get_topics_36();
		int32_t L_67 = V_9;
		RuntimeObject* L_68 = V_7;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		String_t* L_70 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t3662770472_il2cpp_TypeInfo_var, L_68, L_69);
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_70);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (String_t*)L_70);
		MqttMsgSubscribe_t4232534475 * L_71 = V_4;
		NullCheck(L_71);
		ByteU5BU5D_t4116647657* L_72 = L_71->get_qosLevels_37();
		int32_t L_73 = V_9;
		RuntimeObject* L_74 = V_8;
		int32_t L_75 = V_9;
		NullCheck(L_74);
		uint8_t L_76 = InterfaceFuncInvoker1< uint8_t, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.Byte>::get_Item(System.Int32) */, IList_1_t2949616159_il2cpp_TypeInfo_var, L_74, L_75);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (uint8_t)L_76);
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_0137:
	{
		int32_t L_78 = V_9;
		RuntimeObject* L_79 = V_7;
		NullCheck(L_79);
		int32_t L_80 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_79);
		if ((((int32_t)L_78) < ((int32_t)L_80)))
		{
			goto IL_010b;
		}
	}
	{
		MqttMsgSubscribe_t4232534475 * L_81 = V_4;
		return L_81;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSubscribe_GetBytes_m4164398511 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribe_GetBytes_m4164398511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t457913172* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B18_0 = 0;
	uint8_t* G_B18_1 = NULL;
	int32_t G_B17_0 = 0;
	uint8_t* G_B17_1 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	uint8_t* G_B19_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		StringU5BU5D_t1281789340* L_0 = __this->get_topics_36();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		StringU5BU5D_t1281789340* L_1 = __this->get_topics_36();
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_002a;
		}
	}

IL_0023:
	{
		MqttClientException_t1411037672 * L_2 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_2, 6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,MqttMsgSubscribe_GetBytes_m4164398511_RuntimeMethod_var);
	}

IL_002a:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_qosLevels_37();
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_4 = __this->get_qosLevels_37();
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0049;
		}
	}

IL_0042:
	{
		MqttClientException_t1411037672 * L_5 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_5, 7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5,MqttMsgSubscribe_GetBytes_m4164398511_RuntimeMethod_var);
	}

IL_0049:
	{
		StringU5BU5D_t1281789340* L_6 = __this->get_topics_36();
		NullCheck(L_6);
		ByteU5BU5D_t4116647657* L_7 = __this->get_qosLevels_37();
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0065;
		}
	}
	{
		MqttClientException_t1411037672 * L_8 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_8, 8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8,MqttMsgSubscribe_GetBytes_m4164398511_RuntimeMethod_var);
	}

IL_0065:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)2));
		V_6 = 0;
		StringU5BU5D_t1281789340* L_10 = __this->get_topics_36();
		NullCheck(L_10);
		V_7 = ((ByteU5BU5DU5BU5D_t457913172*)SZArrayNew(ByteU5BU5DU5BU5D_t457913172_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))));
		V_6 = 0;
		goto IL_00e6;
	}

IL_0083:
	{
		StringU5BU5D_t1281789340* L_11 = __this->get_topics_36();
		int32_t L_12 = V_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m3847582255(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_00af;
		}
	}
	{
		StringU5BU5D_t1281789340* L_16 = __this->get_topics_36();
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m3847582255(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_00b6;
		}
	}

IL_00af:
	{
		MqttClientException_t1411037672 * L_21 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_21, 4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21,MqttMsgSubscribe_GetBytes_m4164398511_RuntimeMethod_var);
	}

IL_00b6:
	{
		ByteU5BU5DU5BU5D_t457913172* L_22 = V_7;
		int32_t L_23 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_24 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_25 = __this->get_topics_36();
		int32_t L_26 = V_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_24);
		ByteU5BU5D_t4116647657* L_29 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_24, L_28);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_29);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (ByteU5BU5D_t4116647657*)L_29);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2));
		int32_t L_31 = V_2;
		ByteU5BU5DU5BU5D_t457913172* L_32 = V_7;
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		ByteU5BU5D_t4116647657* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_35)->max_length))))));
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00e6:
	{
		int32_t L_38 = V_6;
		StringU5BU5D_t1281789340* L_39 = __this->get_topics_36();
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_39)->max_length)))))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)L_42))));
		V_0 = 1;
		int32_t L_43 = V_3;
		V_8 = L_43;
	}

IL_0100:
	{
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
		int32_t L_45 = V_8;
		V_8 = ((int32_t)((int32_t)L_45/(int32_t)((int32_t)128)));
		int32_t L_46 = V_8;
		if ((((int32_t)L_46) > ((int32_t)0)))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_47 = V_0;
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48)), (int32_t)L_49))));
		ByteU5BU5D_t4116647657* L_50 = V_4;
		int32_t L_51 = V_5;
		uint8_t L_52 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)128)|(int32_t)((int32_t)((int32_t)L_52<<(int32_t)1))))))));
		ByteU5BU5D_t4116647657* L_53 = V_4;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		uint8_t* L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)));
		bool L_56 = ((MqttMsgBase_t2321119380 *)__this)->get_dupFlag_33();
		G_B17_0 = (*((uint8_t*)L_55));
		G_B17_1 = L_55;
		if (!L_56)
		{
			G_B18_0 = (*((uint8_t*)L_55));
			G_B18_1 = L_55;
			goto IL_0152;
		}
	}
	{
		G_B19_0 = 8;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		goto IL_0153;
	}

IL_0152:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
	}

IL_0153:
	{
		*((int8_t*)(G_B19_2)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B19_1|(int32_t)G_B19_0)))));
		int32_t L_57 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
		int32_t L_58 = V_3;
		ByteU5BU5D_t4116647657* L_59 = V_4;
		int32_t L_60 = V_5;
		int32_t L_61 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_58, L_59, L_60, /*hidden argument*/NULL);
		V_5 = L_61;
		uint16_t L_62 = __this->get_messageId_38();
		if (L_62)
		{
			goto IL_017c;
		}
	}
	{
		MqttClientException_t1411037672 * L_63 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_63, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63,MqttMsgSubscribe_GetBytes_m4164398511_RuntimeMethod_var);
	}

IL_017c:
	{
		ByteU5BU5D_t4116647657* L_64 = V_4;
		int32_t L_65 = V_5;
		int32_t L_66 = L_65;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		uint16_t L_67 = __this->get_messageId_38();
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_67>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_68 = V_4;
		int32_t L_69 = V_5;
		int32_t L_70 = L_69;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		uint16_t L_71 = __this->get_messageId_38();
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_70), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_71&(int32_t)((int32_t)255)))))));
		V_6 = 0;
		V_6 = 0;
		goto IL_0224;
	}

IL_01b7:
	{
		ByteU5BU5D_t4116647657* L_72 = V_4;
		int32_t L_73 = V_5;
		int32_t L_74 = L_73;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		ByteU5BU5DU5BU5D_t457913172* L_75 = V_7;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		ByteU5BU5D_t4116647657* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_78)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_79 = V_4;
		int32_t L_80 = V_5;
		int32_t L_81 = L_80;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		ByteU5BU5DU5BU5D_t457913172* L_82 = V_7;
		int32_t L_83 = V_6;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		ByteU5BU5D_t4116647657* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_85)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5DU5BU5D_t457913172* L_86 = V_7;
		int32_t L_87 = V_6;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		ByteU5BU5D_t4116647657* L_89 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		ByteU5BU5D_t4116647657* L_90 = V_4;
		int32_t L_91 = V_5;
		ByteU5BU5DU5BU5D_t457913172* L_92 = V_7;
		int32_t L_93 = V_6;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		ByteU5BU5D_t4116647657* L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_89, 0, (RuntimeArray *)(RuntimeArray *)L_90, L_91, (((int32_t)((int32_t)(((RuntimeArray *)L_95)->max_length)))), /*hidden argument*/NULL);
		int32_t L_96 = V_5;
		ByteU5BU5DU5BU5D_t457913172* L_97 = V_7;
		int32_t L_98 = V_6;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		ByteU5BU5D_t4116647657* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_100)->max_length))))));
		ByteU5BU5D_t4116647657* L_101 = V_4;
		int32_t L_102 = V_5;
		int32_t L_103 = L_102;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
		ByteU5BU5D_t4116647657* L_104 = __this->get_qosLevels_37();
		int32_t L_105 = V_6;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		uint8_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (uint8_t)L_107);
		int32_t L_108 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1));
	}

IL_0224:
	{
		int32_t L_109 = V_6;
		StringU5BU5D_t1281789340* L_110 = __this->get_topics_36();
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_110)->max_length)))))))
		{
			goto IL_01b7;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_111 = V_4;
		return L_111;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribe::ToString()
extern "C"  String_t* MqttMsgSubscribe_ToString_m641919733 (MqttMsgSubscribe_t4232534475 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::.ctor(System.UInt16,System.Byte[])
extern "C"  void MqttMsgSubscribedEventArgs__ctor_m4146728216 (MqttMsgSubscribedEventArgs_t3669420413 * __this, uint16_t ___messageId0, ByteU5BU5D_t4116647657* ___grantedQosLevels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribedEventArgs__ctor_m4146728216_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___grantedQosLevels1;
		__this->set_grantedQosLevels_2(L_1);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::get_MessageId()
extern "C"  uint16_t MqttMsgSubscribedEventArgs_get_MessageId_m1509963792 (MqttMsgSubscribedEventArgs_t3669420413 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::set_MessageId(System.UInt16)
extern "C"  void MqttMsgSubscribedEventArgs_set_MessageId_m971319452 (MqttMsgSubscribedEventArgs_t3669420413 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_1(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::get_GrantedQoSLevels()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSubscribedEventArgs_get_GrantedQoSLevels_m1370615131 (MqttMsgSubscribedEventArgs_t3669420413 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_grantedQosLevels_2();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs::set_GrantedQoSLevels(System.Byte[])
extern "C"  void MqttMsgSubscribedEventArgs_set_GrantedQoSLevels_m122376862 (MqttMsgSubscribedEventArgs_t3669420413 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_grantedQosLevels_2(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::.ctor(System.UInt16,System.String[],System.Byte[])
extern "C"  void MqttMsgSubscribeEventArgs__ctor_m2622934437 (MqttMsgSubscribeEventArgs_t3581658625 * __this, uint16_t ___messageId0, StringU5BU5D_t1281789340* ___topics1, ByteU5BU5D_t4116647657* ___qosLevels2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgSubscribeEventArgs__ctor_m2622934437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		StringU5BU5D_t1281789340* L_1 = ___topics1;
		__this->set_topics_2(L_1);
		ByteU5BU5D_t4116647657* L_2 = ___qosLevels2;
		__this->set_qosLevels_3(L_2);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_MessageId()
extern "C"  uint16_t MqttMsgSubscribeEventArgs_get_MessageId_m2493248373 (MqttMsgSubscribeEventArgs_t3581658625 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_MessageId(System.UInt16)
extern "C"  void MqttMsgSubscribeEventArgs_set_MessageId_m293228711 (MqttMsgSubscribeEventArgs_t3581658625 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_1(L_0);
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_Topics()
extern "C"  StringU5BU5D_t1281789340* MqttMsgSubscribeEventArgs_get_Topics_m2691803505 (MqttMsgSubscribeEventArgs_t3581658625 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_topics_2();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_Topics(System.String[])
extern "C"  void MqttMsgSubscribeEventArgs_set_Topics_m960203828 (MqttMsgSubscribeEventArgs_t3581658625 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_topics_2(L_0);
		return;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::get_QoSLevels()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgSubscribeEventArgs_get_QoSLevels_m2542310898 (MqttMsgSubscribeEventArgs_t3581658625 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_qosLevels_3();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribeEventArgs::set_QoSLevels(System.Byte[])
extern "C"  void MqttMsgSubscribeEventArgs_set_QoSLevels_m542802103 (MqttMsgSubscribeEventArgs_t3581658625 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_qosLevels_3(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::.ctor()
extern "C"  void MqttMsgUnsuback__ctor_m3001340441 (MqttMsgUnsuback_t824663444 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)11));
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::get_MessageId()
extern "C"  uint16_t MqttMsgUnsuback_get_MessageId_m455597113 (MqttMsgUnsuback_t824663444 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::set_MessageId(System.UInt16)
extern "C"  void MqttMsgUnsuback_set_MessageId_m761080339 (MqttMsgUnsuback_t824663444 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_36(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgUnsuback_t824663444 * MqttMsgUnsuback_Parse_m428600086 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsuback_Parse_m428600086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	MqttMsgUnsuback_t824663444 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_1 = 0;
		MqttMsgUnsuback_t824663444 * L_0 = (MqttMsgUnsuback_t824663444 *)il2cpp_codegen_object_new(MqttMsgUnsuback_t824663444_il2cpp_TypeInfo_var);
		MqttMsgUnsuback__ctor_m3001340441(L_0, /*hidden argument*/NULL);
		V_2 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		int32_t L_3 = V_3;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		MqttMsgUnsuback_t824663444 * L_6 = V_2;
		ByteU5BU5D_t4116647657* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		NullCheck(L_7);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		L_6->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgUnsuback_t824663444 * L_12 = V_2;
		MqttMsgUnsuback_t824663444 * L_13 = L_12;
		NullCheck(L_13);
		uint16_t L_14 = L_13->get_messageId_36();
		ByteU5BU5D_t4116647657* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		L_13->set_messageId_36((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_14|(int32_t)L_19))))));
		MqttMsgUnsuback_t824663444 * L_20 = V_2;
		return L_20;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgUnsuback_GetBytes_m1109522372 (MqttMsgUnsuback_t824663444 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsuback_GetBytes_m1109522372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		int32_t L_0 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)2));
		int32_t L_1 = V_3;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))));
		V_0 = 1;
		int32_t L_4 = V_3;
		V_6 = L_4;
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		int32_t L_6 = V_6;
		V_6 = ((int32_t)((int32_t)L_6/(int32_t)((int32_t)128)));
		int32_t L_7 = V_6;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)), (int32_t)L_10))));
		ByteU5BU5D_t4116647657* L_11 = V_4;
		int32_t L_12 = V_5;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)176));
		int32_t L_13 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		int32_t L_14 = V_3;
		ByteU5BU5D_t4116647657* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_14, L_15, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		ByteU5BU5D_t4116647657* L_18 = V_4;
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		uint16_t L_21 = __this->get_messageId_36();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_21>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_22 = V_4;
		int32_t L_23 = V_5;
		int32_t L_24 = L_23;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		uint16_t L_25 = __this->get_messageId_36();
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_26 = V_4;
		return L_26;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsuback::ToString()
extern "C"  String_t* MqttMsgUnsuback_ToString_m1150575795 (MqttMsgUnsuback_t824663444 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor()
extern "C"  void MqttMsgUnsubscribe__ctor_m3638356312 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)10));
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::.ctor(System.String[])
extern "C"  void MqttMsgUnsubscribe__ctor_m4175818348 (MqttMsgUnsubscribe_t3220791601 * __this, StringU5BU5D_t1281789340* ___topics0, const RuntimeMethod* method)
{
	{
		MqttMsgBase__ctor_m1645311330(__this, /*hidden argument*/NULL);
		((MqttMsgBase_t2321119380 *)__this)->set_type_32((uint8_t)((int32_t)10));
		StringU5BU5D_t1281789340* L_0 = ___topics0;
		__this->set_topics_36(L_0);
		((MqttMsgBase_t2321119380 *)__this)->set_qosLevel_34((uint8_t)1);
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::get_Topics()
extern "C"  StringU5BU5D_t1281789340* MqttMsgUnsubscribe_get_Topics_m1658138934 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_topics_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::set_Topics(System.String[])
extern "C"  void MqttMsgUnsubscribe_set_Topics_m3857170405 (MqttMsgUnsubscribe_t3220791601 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_topics_36(L_0);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::get_MessageId()
extern "C"  uint16_t MqttMsgUnsubscribe_get_MessageId_m1937183691 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_37();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::set_MessageId(System.UInt16)
extern "C"  void MqttMsgUnsubscribe_set_MessageId_m4272645186 (MqttMsgUnsubscribe_t3220791601 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_37(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::Parse(System.Byte,uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel)
extern "C"  MqttMsgUnsubscribe_t3220791601 * MqttMsgUnsubscribe_Parse_m3035319983 (RuntimeObject * __this /* static, unused */, uint8_t ___fixedHeaderFirstByte0, RuntimeObject* ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsubscribe_Parse_m3035319983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	int32_t V_3 = 0;
	MqttMsgUnsubscribe_t3220791601 * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	{
		V_1 = 0;
		MqttMsgUnsubscribe_t3220791601 * L_0 = (MqttMsgUnsubscribe_t3220791601 *)il2cpp_codegen_object_new(MqttMsgUnsubscribe_t3220791601_il2cpp_TypeInfo_var);
		MqttMsgUnsubscribe__ctor_m3638356312(L_0, /*hidden argument*/NULL);
		V_4 = L_0;
		RuntimeObject* L_1 = ___channel1;
		int32_t L_2 = MqttMsgBase_decodeRemainingLength_m1049822892(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_5 = L_2;
		int32_t L_3 = V_5;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_3));
		RuntimeObject* L_4 = ___channel1;
		ByteU5BU5D_t4116647657* L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_4, L_5);
		V_6 = L_6;
		MqttMsgUnsubscribe_t3220791601 * L_7 = V_4;
		uint8_t L_8 = ___fixedHeaderFirstByte0;
		NullCheck(L_7);
		((MqttMsgBase_t2321119380 *)L_7)->set_qosLevel_34((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)6))>>(int32_t)1))))));
		MqttMsgUnsubscribe_t3220791601 * L_9 = V_4;
		uint8_t L_10 = ___fixedHeaderFirstByte0;
		NullCheck(L_9);
		((MqttMsgBase_t2321119380 *)L_9)->set_dupFlag_33((bool)((((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10&(int32_t)8))>>(int32_t)3))) == ((int32_t)1))? 1 : 0));
		MqttMsgUnsubscribe_t3220791601 * L_11 = V_4;
		NullCheck(L_11);
		((MqttMsgBase_t2321119380 *)L_11)->set_retain_35((bool)0);
		MqttMsgUnsubscribe_t3220791601 * L_12 = V_4;
		ByteU5BU5D_t4116647657* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		NullCheck(L_13);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_12);
		L_12->set_messageId_37((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17<<(int32_t)8))&(int32_t)((int32_t)65280)))))));
		MqttMsgUnsubscribe_t3220791601 * L_18 = V_4;
		MqttMsgUnsubscribe_t3220791601 * L_19 = L_18;
		NullCheck(L_19);
		uint16_t L_20 = L_19->get_messageId_37();
		ByteU5BU5D_t4116647657* L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = L_22;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		NullCheck(L_21);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_19);
		L_19->set_messageId_37((uint16_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_20|(int32_t)L_25))))));
		List_1_t3319525431 * L_26 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_26, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_7 = (RuntimeObject*)L_26;
	}

IL_007a:
	{
		ByteU5BU5D_t4116647657* L_27 = V_0;
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		NullCheck(L_27);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int32_t)((int32_t)((int32_t)((int32_t)L_31<<(int32_t)8))&(int32_t)((int32_t)65280)));
		int32_t L_32 = V_3;
		ByteU5BU5D_t4116647657* L_33 = V_0;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
		NullCheck(L_33);
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = ((int32_t)((int32_t)L_32|(int32_t)L_37));
		int32_t L_38 = V_3;
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_38));
		ByteU5BU5D_t4116647657* L_39 = V_0;
		int32_t L_40 = V_1;
		ByteU5BU5D_t4116647657* L_41 = V_2;
		int32_t L_42 = V_3;
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_39, L_40, (RuntimeArray *)(RuntimeArray *)L_41, 0, L_42, /*hidden argument*/NULL);
		int32_t L_43 = V_1;
		int32_t L_44 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)L_44));
		RuntimeObject* L_45 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_46 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_47 = V_2;
		NullCheck(L_46);
		CharU5BU5D_t3528271667* L_48 = VirtFuncInvoker1< CharU5BU5D_t3528271667*, ByteU5BU5D_t4116647657* >::Invoke(16 /* System.Char[] System.Text.Encoding::GetChars(System.Byte[]) */, L_46, L_47);
		String_t* L_49 = String_CreateString_m2818852475(NULL, L_48, /*hidden argument*/NULL);
		NullCheck(L_45);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.String>::Add(!0) */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_45, L_49);
		int32_t L_50 = V_1;
		int32_t L_51 = V_5;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_007a;
		}
	}
	{
		MqttMsgUnsubscribe_t3220791601 * L_52 = V_4;
		RuntimeObject* L_53 = V_7;
		NullCheck(L_53);
		int32_t L_54 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_53);
		NullCheck(L_52);
		L_52->set_topics_36(((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_54)));
		V_8 = 0;
		goto IL_00fc;
	}

IL_00e3:
	{
		MqttMsgUnsubscribe_t3220791601 * L_55 = V_4;
		NullCheck(L_55);
		StringU5BU5D_t1281789340* L_56 = L_55->get_topics_36();
		int32_t L_57 = V_8;
		RuntimeObject* L_58 = V_7;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		String_t* L_60 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(3 /* !0 System.Collections.Generic.IList`1<System.String>::get_Item(System.Int32) */, IList_1_t3662770472_il2cpp_TypeInfo_var, L_58, L_59);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_60);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (String_t*)L_60);
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_00fc:
	{
		int32_t L_62 = V_8;
		RuntimeObject* L_63 = V_7;
		NullCheck(L_63);
		int32_t L_64 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t380635627_il2cpp_TypeInfo_var, L_63);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_00e3;
		}
	}
	{
		MqttMsgUnsubscribe_t3220791601 * L_65 = V_4;
		return L_65;
	}
}
// System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::GetBytes()
extern "C"  ByteU5BU5D_t4116647657* MqttMsgUnsubscribe_GetBytes_m97634205 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsubscribe_GetBytes_m97634205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5DU5BU5D_t457913172* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t G_B13_0 = 0;
	uint8_t* G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	uint8_t* G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	uint8_t* G_B14_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_5 = 0;
		StringU5BU5D_t1281789340* L_0 = __this->get_topics_36();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		StringU5BU5D_t1281789340* L_1 = __this->get_topics_36();
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_002a;
		}
	}

IL_0023:
	{
		MqttClientException_t1411037672 * L_2 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_2, 6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2,MqttMsgUnsubscribe_GetBytes_m97634205_RuntimeMethod_var);
	}

IL_002a:
	{
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)2));
		V_6 = 0;
		StringU5BU5D_t1281789340* L_4 = __this->get_topics_36();
		NullCheck(L_4);
		V_7 = ((ByteU5BU5DU5BU5D_t457913172*)SZArrayNew(ByteU5BU5DU5BU5D_t457913172_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))));
		V_6 = 0;
		goto IL_00a7;
	}

IL_0048:
	{
		StringU5BU5D_t1281789340* L_5 = __this->get_topics_36();
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)1)))
		{
			goto IL_0074;
		}
	}
	{
		StringU5BU5D_t1281789340* L_10 = __this->get_topics_36();
		int32_t L_11 = V_6;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_007b;
		}
	}

IL_0074:
	{
		MqttClientException_t1411037672 * L_15 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_15, 4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15,MqttMsgUnsubscribe_GetBytes_m97634205_RuntimeMethod_var);
	}

IL_007b:
	{
		ByteU5BU5DU5BU5D_t457913172* L_16 = V_7;
		int32_t L_17 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_18 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_19 = __this->get_topics_36();
		int32_t L_20 = V_6;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_18);
		ByteU5BU5D_t4116647657* L_23 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_18, L_22);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_23);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (ByteU5BU5D_t4116647657*)L_23);
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)2));
		int32_t L_25 = V_2;
		ByteU5BU5DU5BU5D_t457913172* L_26 = V_7;
		int32_t L_27 = V_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ByteU5BU5D_t4116647657* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length))))));
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_31 = V_6;
		StringU5BU5D_t1281789340* L_32 = __this->get_topics_36();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_33 = V_3;
		int32_t L_34 = V_1;
		int32_t L_35 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)L_35))));
		V_0 = 1;
		int32_t L_36 = V_3;
		V_8 = L_36;
	}

IL_00c1:
	{
		int32_t L_37 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
		int32_t L_38 = V_8;
		V_8 = ((int32_t)((int32_t)L_38/(int32_t)((int32_t)128)));
		int32_t L_39 = V_8;
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)L_41)), (int32_t)L_42))));
		ByteU5BU5D_t4116647657* L_43 = V_4;
		int32_t L_44 = V_5;
		uint8_t L_45 = ((MqttMsgBase_t2321119380 *)__this)->get_qosLevel_34();
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)160)|(int32_t)((int32_t)((int32_t)L_45<<(int32_t)1))))))));
		ByteU5BU5D_t4116647657* L_46 = V_4;
		int32_t L_47 = V_5;
		NullCheck(L_46);
		uint8_t* L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)));
		bool L_49 = ((MqttMsgBase_t2321119380 *)__this)->get_dupFlag_33();
		G_B12_0 = (*((uint8_t*)L_48));
		G_B12_1 = L_48;
		if (!L_49)
		{
			G_B13_0 = (*((uint8_t*)L_48));
			G_B13_1 = L_48;
			goto IL_0113;
		}
	}
	{
		G_B14_0 = 8;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_0114;
	}

IL_0113:
	{
		G_B14_0 = 0;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_0114:
	{
		*((int8_t*)(G_B14_2)) = (int8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)G_B14_1|(int32_t)G_B14_0)))));
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_3;
		ByteU5BU5D_t4116647657* L_52 = V_4;
		int32_t L_53 = V_5;
		int32_t L_54 = MqttMsgBase_encodeRemainingLength_m152082486(__this, L_51, L_52, L_53, /*hidden argument*/NULL);
		V_5 = L_54;
		uint16_t L_55 = __this->get_messageId_37();
		if (L_55)
		{
			goto IL_013d;
		}
	}
	{
		MqttClientException_t1411037672 * L_56 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_56, ((int32_t)10), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56,MqttMsgUnsubscribe_GetBytes_m97634205_RuntimeMethod_var);
	}

IL_013d:
	{
		ByteU5BU5D_t4116647657* L_57 = V_4;
		int32_t L_58 = V_5;
		int32_t L_59 = L_58;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
		uint16_t L_60 = __this->get_messageId_37();
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_60>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_61 = V_4;
		int32_t L_62 = V_5;
		int32_t L_63 = L_62;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
		uint16_t L_64 = __this->get_messageId_37();
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_64&(int32_t)((int32_t)255)))))));
		V_6 = 0;
		V_6 = 0;
		goto IL_01d2;
	}

IL_0178:
	{
		ByteU5BU5D_t4116647657* L_65 = V_4;
		int32_t L_66 = V_5;
		int32_t L_67 = L_66;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		ByteU5BU5DU5BU5D_t457913172* L_68 = V_7;
		int32_t L_69 = V_6;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		ByteU5BU5D_t4116647657* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_71)->max_length))))>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t4116647657* L_72 = V_4;
		int32_t L_73 = V_5;
		int32_t L_74 = L_73;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
		ByteU5BU5DU5BU5D_t457913172* L_75 = V_7;
		int32_t L_76 = V_6;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		ByteU5BU5D_t4116647657* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_74), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_78)->max_length))))&(int32_t)((int32_t)255)))))));
		ByteU5BU5DU5BU5D_t457913172* L_79 = V_7;
		int32_t L_80 = V_6;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		ByteU5BU5D_t4116647657* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_t4116647657* L_83 = V_4;
		int32_t L_84 = V_5;
		ByteU5BU5DU5BU5D_t457913172* L_85 = V_7;
		int32_t L_86 = V_6;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		ByteU5BU5D_t4116647657* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_82, 0, (RuntimeArray *)(RuntimeArray *)L_83, L_84, (((int32_t)((int32_t)(((RuntimeArray *)L_88)->max_length)))), /*hidden argument*/NULL);
		int32_t L_89 = V_5;
		ByteU5BU5DU5BU5D_t457913172* L_90 = V_7;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		ByteU5BU5D_t4116647657* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_93)->max_length))))));
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_01d2:
	{
		int32_t L_95 = V_6;
		StringU5BU5D_t1281789340* L_96 = __this->get_topics_36();
		NullCheck(L_96);
		if ((((int32_t)L_95) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_96)->max_length)))))))
		{
			goto IL_0178;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_97 = V_4;
		return L_97;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribe::ToString()
extern "C"  String_t* MqttMsgUnsubscribe_ToString_m1751456955 (MqttMsgUnsubscribe_t3220791601 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = Object_ToString_m1740002499(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::.ctor(System.UInt16)
extern "C"  void MqttMsgUnsubscribedEventArgs__ctor_m1314859765 (MqttMsgUnsubscribedEventArgs_t2229036016 * __this, uint16_t ___messageId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsubscribedEventArgs__ctor_m1314859765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::get_MessageId()
extern "C"  uint16_t MqttMsgUnsubscribedEventArgs_get_MessageId_m1594409052 (MqttMsgUnsubscribedEventArgs_t2229036016 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs::set_MessageId(System.UInt16)
extern "C"  void MqttMsgUnsubscribedEventArgs_set_MessageId_m466906311 (MqttMsgUnsubscribedEventArgs_t2229036016 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_1(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::.ctor(System.UInt16,System.String[])
extern "C"  void MqttMsgUnsubscribeEventArgs__ctor_m1128426959 (MqttMsgUnsubscribeEventArgs_t147345733 * __this, uint16_t ___messageId0, StringU5BU5D_t1281789340* ___topics1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgUnsubscribeEventArgs__ctor_m1128426959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		__this->set_messageId_1(L_0);
		StringU5BU5D_t1281789340* L_1 = ___topics1;
		__this->set_topics_2(L_1);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::get_MessageId()
extern "C"  uint16_t MqttMsgUnsubscribeEventArgs_get_MessageId_m2960235910 (MqttMsgUnsubscribeEventArgs_t147345733 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_messageId_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::set_MessageId(System.UInt16)
extern "C"  void MqttMsgUnsubscribeEventArgs_set_MessageId_m1810890883 (MqttMsgUnsubscribeEventArgs_t147345733 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_messageId_1(L_0);
		return;
	}
}
// System.String[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::get_Topics()
extern "C"  StringU5BU5D_t1281789340* MqttMsgUnsubscribeEventArgs_get_Topics_m3959536329 (MqttMsgUnsubscribeEventArgs_t147345733 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_topics_2();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribeEventArgs::set_Topics(System.String[])
extern "C"  void MqttMsgUnsubscribeEventArgs_set_Topics_m354262881 (MqttMsgUnsubscribeEventArgs_t147345733 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_topics_2(L_0);
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.Net.IPAddress)
extern "C"  void MqttClient__ctor_m1572141208 (MqttClient_t1237157870 * __this, IPAddress_t241777590 * ___brokerIpAddress0, const RuntimeMethod* method)
{
	{
		IPAddress_t241777590 * L_0 = ___brokerIpAddress0;
		MqttClient__ctor_m3990998280(__this, L_0, ((int32_t)1883), (bool)0, (X509Certificate_t713131622 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.Net.IPAddress,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient__ctor_m3990998280 (MqttClient_t1237157870 * __this, IPAddress_t241777590 * ___brokerIpAddress0, int32_t ___brokerPort1, bool ___secure2, X509Certificate_t713131622 * ___caCert3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IPAddress_t241777590 * L_0 = ___brokerIpAddress0;
		int32_t L_1 = ___brokerPort1;
		bool L_2 = ___secure2;
		X509Certificate_t713131622 * L_3 = ___caCert3;
		MqttClient_Init_m2786449446(__this, (String_t*)NULL, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String)
extern "C"  void MqttClient__ctor_m3366812096 (MqttClient_t1237157870 * __this, String_t* ___brokerHostName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___brokerHostName0;
		MqttClient__ctor_m2956131190(__this, L_0, ((int32_t)1883), (bool)0, (X509Certificate_t713131622 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::.ctor(System.String,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient__ctor_m2956131190 (MqttClient_t1237157870 * __this, String_t* ___brokerHostName0, int32_t ___brokerPort1, bool ___secure2, X509Certificate_t713131622 * ___caCert3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient__ctor_m2956131190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IPHostEntry_t263743900 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___brokerHostName0;
		IL2CPP_RUNTIME_CLASS_INIT(Dns_t384099571_il2cpp_TypeInfo_var);
		IPHostEntry_t263743900 * L_1 = Dns_GetHostEntry_m2165252375(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IPHostEntry_t263743900 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0051;
		}
	}
	{
		IPHostEntry_t263743900 * L_3 = V_0;
		NullCheck(L_3);
		IPAddressU5BU5D_t596328627* L_4 = IPHostEntry_get_AddressList_m1351062776(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		V_1 = 0;
		goto IL_002c;
	}

IL_0028:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002c:
	{
		IPHostEntry_t263743900 * L_6 = V_0;
		NullCheck(L_6);
		IPAddressU5BU5D_t596328627* L_7 = IPHostEntry_get_AddressList_m1351062776(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		IPAddress_t241777590 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if (!L_10)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_11 = ___brokerHostName0;
		IPHostEntry_t263743900 * L_12 = V_0;
		NullCheck(L_12);
		IPAddressU5BU5D_t596328627* L_13 = IPHostEntry_get_AddressList_m1351062776(L_12, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		IPAddress_t241777590 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ___brokerPort1;
		bool L_18 = ___secure2;
		X509Certificate_t713131622 * L_19 = ___caCert3;
		MqttClient_Init_m2786449446(__this, L_11, L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		goto IL_005c;
	}

IL_0051:
	{
		ApplicationException_t2339761290 * L_20 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m2517758450(L_20, _stringLiteral160928716, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20,MqttClient__ctor_m2956131190_RuntimeMethod_var);
	}

IL_005c:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler)
extern "C"  void MqttClient_add_MqttMsgPublishReceived_m3145106695 (MqttClient_t1237157870 * __this, MqttMsgPublishEventHandler_t1923217352 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_add_MqttMsgPublishReceived_m3145106695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublishEventHandler_t1923217352 * V_0 = NULL;
	MqttMsgPublishEventHandler_t1923217352 * V_1 = NULL;
	{
		MqttMsgPublishEventHandler_t1923217352 * L_0 = __this->get_MqttMsgPublishReceived_19();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgPublishEventHandler_t1923217352 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgPublishEventHandler_t1923217352 ** L_2 = __this->get_address_of_MqttMsgPublishReceived_19();
		MqttMsgPublishEventHandler_t1923217352 * L_3 = V_1;
		MqttMsgPublishEventHandler_t1923217352 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgPublishEventHandler_t1923217352 * L_6 = V_0;
		MqttMsgPublishEventHandler_t1923217352 * L_7 = InterlockedCompareExchangeImpl<MqttMsgPublishEventHandler_t1923217352 *>(L_2, ((MqttMsgPublishEventHandler_t1923217352 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgPublishEventHandler_t1923217352_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgPublishEventHandler_t1923217352 * L_8 = V_0;
		MqttMsgPublishEventHandler_t1923217352 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgPublishEventHandler_t1923217352 *)L_8) == ((RuntimeObject*)(MqttMsgPublishEventHandler_t1923217352 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::remove_MqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler)
extern "C"  void MqttClient_remove_MqttMsgPublishReceived_m2298416518 (MqttClient_t1237157870 * __this, MqttMsgPublishEventHandler_t1923217352 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_remove_MqttMsgPublishReceived_m2298416518_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublishEventHandler_t1923217352 * V_0 = NULL;
	MqttMsgPublishEventHandler_t1923217352 * V_1 = NULL;
	{
		MqttMsgPublishEventHandler_t1923217352 * L_0 = __this->get_MqttMsgPublishReceived_19();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgPublishEventHandler_t1923217352 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgPublishEventHandler_t1923217352 ** L_2 = __this->get_address_of_MqttMsgPublishReceived_19();
		MqttMsgPublishEventHandler_t1923217352 * L_3 = V_1;
		MqttMsgPublishEventHandler_t1923217352 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgPublishEventHandler_t1923217352 * L_6 = V_0;
		MqttMsgPublishEventHandler_t1923217352 * L_7 = InterlockedCompareExchangeImpl<MqttMsgPublishEventHandler_t1923217352 *>(L_2, ((MqttMsgPublishEventHandler_t1923217352 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgPublishEventHandler_t1923217352_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgPublishEventHandler_t1923217352 * L_8 = V_0;
		MqttMsgPublishEventHandler_t1923217352 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgPublishEventHandler_t1923217352 *)L_8) == ((RuntimeObject*)(MqttMsgPublishEventHandler_t1923217352 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgPublished(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler)
extern "C"  void MqttClient_add_MqttMsgPublished_m1785871629 (MqttClient_t1237157870 * __this, MqttMsgPublishedEventHandler_t3860164542 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_add_MqttMsgPublished_m1785871629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublishedEventHandler_t3860164542 * V_0 = NULL;
	MqttMsgPublishedEventHandler_t3860164542 * V_1 = NULL;
	{
		MqttMsgPublishedEventHandler_t3860164542 * L_0 = __this->get_MqttMsgPublished_20();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgPublishedEventHandler_t3860164542 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgPublishedEventHandler_t3860164542 ** L_2 = __this->get_address_of_MqttMsgPublished_20();
		MqttMsgPublishedEventHandler_t3860164542 * L_3 = V_1;
		MqttMsgPublishedEventHandler_t3860164542 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgPublishedEventHandler_t3860164542 * L_6 = V_0;
		MqttMsgPublishedEventHandler_t3860164542 * L_7 = InterlockedCompareExchangeImpl<MqttMsgPublishedEventHandler_t3860164542 *>(L_2, ((MqttMsgPublishedEventHandler_t3860164542 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgPublishedEventHandler_t3860164542_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgPublishedEventHandler_t3860164542 * L_8 = V_0;
		MqttMsgPublishedEventHandler_t3860164542 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgPublishedEventHandler_t3860164542 *)L_8) == ((RuntimeObject*)(MqttMsgPublishedEventHandler_t3860164542 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::remove_MqttMsgPublished(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler)
extern "C"  void MqttClient_remove_MqttMsgPublished_m3228096211 (MqttClient_t1237157870 * __this, MqttMsgPublishedEventHandler_t3860164542 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_remove_MqttMsgPublished_m3228096211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublishedEventHandler_t3860164542 * V_0 = NULL;
	MqttMsgPublishedEventHandler_t3860164542 * V_1 = NULL;
	{
		MqttMsgPublishedEventHandler_t3860164542 * L_0 = __this->get_MqttMsgPublished_20();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgPublishedEventHandler_t3860164542 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgPublishedEventHandler_t3860164542 ** L_2 = __this->get_address_of_MqttMsgPublished_20();
		MqttMsgPublishedEventHandler_t3860164542 * L_3 = V_1;
		MqttMsgPublishedEventHandler_t3860164542 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgPublishedEventHandler_t3860164542 * L_6 = V_0;
		MqttMsgPublishedEventHandler_t3860164542 * L_7 = InterlockedCompareExchangeImpl<MqttMsgPublishedEventHandler_t3860164542 *>(L_2, ((MqttMsgPublishedEventHandler_t3860164542 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgPublishedEventHandler_t3860164542_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgPublishedEventHandler_t3860164542 * L_8 = V_0;
		MqttMsgPublishedEventHandler_t3860164542 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgPublishedEventHandler_t3860164542 *)L_8) == ((RuntimeObject*)(MqttMsgPublishedEventHandler_t3860164542 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgSubscribed(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler)
extern "C"  void MqttClient_add_MqttMsgSubscribed_m1687370795 (MqttClient_t1237157870 * __this, MqttMsgSubscribedEventHandler_t2042141578 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_add_MqttMsgSubscribed_m1687370795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgSubscribedEventHandler_t2042141578 * V_0 = NULL;
	MqttMsgSubscribedEventHandler_t2042141578 * V_1 = NULL;
	{
		MqttMsgSubscribedEventHandler_t2042141578 * L_0 = __this->get_MqttMsgSubscribed_21();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgSubscribedEventHandler_t2042141578 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgSubscribedEventHandler_t2042141578 ** L_2 = __this->get_address_of_MqttMsgSubscribed_21();
		MqttMsgSubscribedEventHandler_t2042141578 * L_3 = V_1;
		MqttMsgSubscribedEventHandler_t2042141578 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgSubscribedEventHandler_t2042141578 * L_6 = V_0;
		MqttMsgSubscribedEventHandler_t2042141578 * L_7 = InterlockedCompareExchangeImpl<MqttMsgSubscribedEventHandler_t2042141578 *>(L_2, ((MqttMsgSubscribedEventHandler_t2042141578 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgSubscribedEventHandler_t2042141578_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgSubscribedEventHandler_t2042141578 * L_8 = V_0;
		MqttMsgSubscribedEventHandler_t2042141578 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgSubscribedEventHandler_t2042141578 *)L_8) == ((RuntimeObject*)(MqttMsgSubscribedEventHandler_t2042141578 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::remove_MqttMsgSubscribed(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler)
extern "C"  void MqttClient_remove_MqttMsgSubscribed_m198036731 (MqttClient_t1237157870 * __this, MqttMsgSubscribedEventHandler_t2042141578 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_remove_MqttMsgSubscribed_m198036731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgSubscribedEventHandler_t2042141578 * V_0 = NULL;
	MqttMsgSubscribedEventHandler_t2042141578 * V_1 = NULL;
	{
		MqttMsgSubscribedEventHandler_t2042141578 * L_0 = __this->get_MqttMsgSubscribed_21();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgSubscribedEventHandler_t2042141578 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgSubscribedEventHandler_t2042141578 ** L_2 = __this->get_address_of_MqttMsgSubscribed_21();
		MqttMsgSubscribedEventHandler_t2042141578 * L_3 = V_1;
		MqttMsgSubscribedEventHandler_t2042141578 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgSubscribedEventHandler_t2042141578 * L_6 = V_0;
		MqttMsgSubscribedEventHandler_t2042141578 * L_7 = InterlockedCompareExchangeImpl<MqttMsgSubscribedEventHandler_t2042141578 *>(L_2, ((MqttMsgSubscribedEventHandler_t2042141578 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgSubscribedEventHandler_t2042141578_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgSubscribedEventHandler_t2042141578 * L_8 = V_0;
		MqttMsgSubscribedEventHandler_t2042141578 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgSubscribedEventHandler_t2042141578 *)L_8) == ((RuntimeObject*)(MqttMsgSubscribedEventHandler_t2042141578 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgUnsubscribed(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler)
extern "C"  void MqttClient_add_MqttMsgUnsubscribed_m1685940580 (MqttClient_t1237157870 * __this, MqttMsgUnsubscribedEventHandler_t2087605283 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_add_MqttMsgUnsubscribed_m1685940580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgUnsubscribedEventHandler_t2087605283 * V_0 = NULL;
	MqttMsgUnsubscribedEventHandler_t2087605283 * V_1 = NULL;
	{
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_0 = __this->get_MqttMsgUnsubscribed_22();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgUnsubscribedEventHandler_t2087605283 ** L_2 = __this->get_address_of_MqttMsgUnsubscribed_22();
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_3 = V_1;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_6 = V_0;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_7 = InterlockedCompareExchangeImpl<MqttMsgUnsubscribedEventHandler_t2087605283 *>(L_2, ((MqttMsgUnsubscribedEventHandler_t2087605283 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgUnsubscribedEventHandler_t2087605283_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_8 = V_0;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgUnsubscribedEventHandler_t2087605283 *)L_8) == ((RuntimeObject*)(MqttMsgUnsubscribedEventHandler_t2087605283 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::remove_MqttMsgUnsubscribed(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler)
extern "C"  void MqttClient_remove_MqttMsgUnsubscribed_m989251321 (MqttClient_t1237157870 * __this, MqttMsgUnsubscribedEventHandler_t2087605283 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_remove_MqttMsgUnsubscribed_m989251321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgUnsubscribedEventHandler_t2087605283 * V_0 = NULL;
	MqttMsgUnsubscribedEventHandler_t2087605283 * V_1 = NULL;
	{
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_0 = __this->get_MqttMsgUnsubscribed_22();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgUnsubscribedEventHandler_t2087605283 ** L_2 = __this->get_address_of_MqttMsgUnsubscribed_22();
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_3 = V_1;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_6 = V_0;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_7 = InterlockedCompareExchangeImpl<MqttMsgUnsubscribedEventHandler_t2087605283 *>(L_2, ((MqttMsgUnsubscribedEventHandler_t2087605283 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgUnsubscribedEventHandler_t2087605283_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_8 = V_0;
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgUnsubscribedEventHandler_t2087605283 *)L_8) == ((RuntimeObject*)(MqttMsgUnsubscribedEventHandler_t2087605283 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::add_MqttMsgDisconnected(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler)
extern "C"  void MqttClient_add_MqttMsgDisconnected_m743914860 (MqttClient_t1237157870 * __this, MqttMsgDisconnectEventHandler_t848571114 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_add_MqttMsgDisconnected_m743914860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgDisconnectEventHandler_t848571114 * V_0 = NULL;
	MqttMsgDisconnectEventHandler_t848571114 * V_1 = NULL;
	{
		MqttMsgDisconnectEventHandler_t848571114 * L_0 = __this->get_MqttMsgDisconnected_23();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgDisconnectEventHandler_t848571114 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgDisconnectEventHandler_t848571114 ** L_2 = __this->get_address_of_MqttMsgDisconnected_23();
		MqttMsgDisconnectEventHandler_t848571114 * L_3 = V_1;
		MqttMsgDisconnectEventHandler_t848571114 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgDisconnectEventHandler_t848571114 * L_6 = V_0;
		MqttMsgDisconnectEventHandler_t848571114 * L_7 = InterlockedCompareExchangeImpl<MqttMsgDisconnectEventHandler_t848571114 *>(L_2, ((MqttMsgDisconnectEventHandler_t848571114 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgDisconnectEventHandler_t848571114_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgDisconnectEventHandler_t848571114 * L_8 = V_0;
		MqttMsgDisconnectEventHandler_t848571114 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgDisconnectEventHandler_t848571114 *)L_8) == ((RuntimeObject*)(MqttMsgDisconnectEventHandler_t848571114 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::remove_MqttMsgDisconnected(uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler)
extern "C"  void MqttClient_remove_MqttMsgDisconnected_m1493069520 (MqttClient_t1237157870 * __this, MqttMsgDisconnectEventHandler_t848571114 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_remove_MqttMsgDisconnected_m1493069520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgDisconnectEventHandler_t848571114 * V_0 = NULL;
	MqttMsgDisconnectEventHandler_t848571114 * V_1 = NULL;
	{
		MqttMsgDisconnectEventHandler_t848571114 * L_0 = __this->get_MqttMsgDisconnected_23();
		V_0 = L_0;
	}

IL_0007:
	{
		MqttMsgDisconnectEventHandler_t848571114 * L_1 = V_0;
		V_1 = L_1;
		MqttMsgDisconnectEventHandler_t848571114 ** L_2 = __this->get_address_of_MqttMsgDisconnected_23();
		MqttMsgDisconnectEventHandler_t848571114 * L_3 = V_1;
		MqttMsgDisconnectEventHandler_t848571114 * L_4 = ___value0;
		Delegate_t1188392813 * L_5 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		MqttMsgDisconnectEventHandler_t848571114 * L_6 = V_0;
		MqttMsgDisconnectEventHandler_t848571114 * L_7 = InterlockedCompareExchangeImpl<MqttMsgDisconnectEventHandler_t848571114 *>(L_2, ((MqttMsgDisconnectEventHandler_t848571114 *)CastclassSealed((RuntimeObject*)L_5, MqttMsgDisconnectEventHandler_t848571114_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		MqttMsgDisconnectEventHandler_t848571114 * L_8 = V_0;
		MqttMsgDisconnectEventHandler_t848571114 * L_9 = V_1;
		if ((!(((RuntimeObject*)(MqttMsgDisconnectEventHandler_t848571114 *)L_8) == ((RuntimeObject*)(MqttMsgDisconnectEventHandler_t848571114 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::get_IsConnected()
extern "C"  bool MqttClient_get_IsConnected_m3984152883 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsConnectedU3Ek__BackingField_30();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_IsConnected(System.Boolean)
extern "C"  void MqttClient_set_IsConnected_m2691633300 (MqttClient_t1237157870 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsConnectedU3Ek__BackingField_30(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.MqttClient::get_ClientId()
extern "C"  String_t* MqttClient_get_ClientId_m1266538281 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CClientIdU3Ek__BackingField_31();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_ClientId(System.String)
extern "C"  void MqttClient_set_ClientId_m659083255 (MqttClient_t1237157870 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CClientIdU3Ek__BackingField_31(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::get_CleanSession()
extern "C"  bool MqttClient_get_CleanSession_m1731833481 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCleanSessionU3Ek__BackingField_32();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_CleanSession(System.Boolean)
extern "C"  void MqttClient_set_CleanSession_m1579075915 (MqttClient_t1237157870 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CCleanSessionU3Ek__BackingField_32(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient::get_WillFlag()
extern "C"  bool MqttClient_get_WillFlag_m2439600740 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CWillFlagU3Ek__BackingField_33();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillFlag(System.Boolean)
extern "C"  void MqttClient_set_WillFlag_m4108952267 (MqttClient_t1237157870 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CWillFlagU3Ek__BackingField_33(L_0);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::get_WillQosLevel()
extern "C"  uint8_t MqttClient_get_WillQosLevel_m755532495 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_U3CWillQosLevelU3Ek__BackingField_34();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillQosLevel(System.Byte)
extern "C"  void MqttClient_set_WillQosLevel_m3532803667 (MqttClient_t1237157870 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_U3CWillQosLevelU3Ek__BackingField_34(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.MqttClient::get_WillTopic()
extern "C"  String_t* MqttClient_get_WillTopic_m2032017691 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CWillTopicU3Ek__BackingField_35();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillTopic(System.String)
extern "C"  void MqttClient_set_WillTopic_m2625525473 (MqttClient_t1237157870 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CWillTopicU3Ek__BackingField_35(L_0);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.MqttClient::get_WillMessage()
extern "C"  String_t* MqttClient_get_WillMessage_m1910281732 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CWillMessageU3Ek__BackingField_36();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::set_WillMessage(System.String)
extern "C"  void MqttClient_set_WillMessage_m783918025 (MqttClient_t1237157870 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CWillMessageU3Ek__BackingField_36(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Init(System.String,System.Net.IPAddress,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttClient_Init_m2786449446 (MqttClient_t1237157870 * __this, String_t* ___brokerHostName0, IPAddress_t241777590 * ___brokerIpAddress1, int32_t ___brokerPort2, bool ___secure3, X509Certificate_t713131622 * ___caCert4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Init_m2786449446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___secure3;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral346343835, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1,MqttClient_Init_m2786449446_RuntimeMethod_var);
	}

IL_0012:
	{
		String_t* L_2 = ___brokerHostName0;
		__this->set_brokerHostName_1(L_2);
		String_t* L_3 = __this->get_brokerHostName_1();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		IPAddress_t241777590 * L_4 = ___brokerIpAddress1;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		__this->set_brokerHostName_1(L_5);
	}

IL_0030:
	{
		IPAddress_t241777590 * L_6 = ___brokerIpAddress1;
		__this->set_brokerIpAddress_2(L_6);
		int32_t L_7 = ___brokerPort2;
		__this->set_brokerPort_3(L_7);
		bool L_8 = ___secure3;
		__this->set_secure_4(L_8);
		MqttSettings_t1362412725 * L_9 = MqttSettings_get_Instance_m2044335333(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_settings_28(L_9);
		AutoResetEvent_t1333520283 * L_10 = (AutoResetEvent_t1333520283 *)il2cpp_codegen_object_new(AutoResetEvent_t1333520283_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m3710433672(L_10, (bool)0, /*hidden argument*/NULL);
		__this->set_syncEndReceiving_11(L_10);
		AutoResetEvent_t1333520283 * L_11 = (AutoResetEvent_t1333520283 *)il2cpp_codegen_object_new(AutoResetEvent_t1333520283_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m3710433672(L_11, (bool)0, /*hidden argument*/NULL);
		__this->set_keepAliveEvent_16(L_11);
		AutoResetEvent_t1333520283 * L_12 = (AutoResetEvent_t1333520283 *)il2cpp_codegen_object_new(AutoResetEvent_t1333520283_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m3710433672(L_12, (bool)0, /*hidden argument*/NULL);
		__this->set_inflightWaitHandle_10(L_12);
		Queue_t3637523393 * L_13 = (Queue_t3637523393 *)il2cpp_codegen_object_new(Queue_t3637523393_il2cpp_TypeInfo_var);
		Queue__ctor_m2030580699(L_13, /*hidden argument*/NULL);
		__this->set_inflightQueue_25(L_13);
		AutoResetEvent_t1333520283 * L_14 = (AutoResetEvent_t1333520283 *)il2cpp_codegen_object_new(AutoResetEvent_t1333520283_il2cpp_TypeInfo_var);
		AutoResetEvent__ctor_m3710433672(L_14, (bool)0, /*hidden argument*/NULL);
		__this->set_receiveEventWaitHandle_8(L_14);
		Queue_t3637523393 * L_15 = (Queue_t3637523393 *)il2cpp_codegen_object_new(Queue_t3637523393_il2cpp_TypeInfo_var);
		Queue__ctor_m2030580699(L_15, /*hidden argument*/NULL);
		__this->set_receiveQueue_27(L_15);
		Queue_t3637523393 * L_16 = (Queue_t3637523393 *)il2cpp_codegen_object_new(Queue_t3637523393_il2cpp_TypeInfo_var);
		Queue__ctor_m2030580699(L_16, /*hidden argument*/NULL);
		__this->set_internalQueue_26(L_16);
		return;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String)
extern "C"  uint8_t MqttClient_Connect_m1200615702 (MqttClient_t1237157870 * __this, String_t* ___clientId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clientId0;
		uint8_t L_1 = MqttClient_Connect_m879571441(__this, L_0, (String_t*)NULL, (String_t*)NULL, (bool)0, (uint8_t)0, (bool)0, (String_t*)NULL, (String_t*)NULL, (bool)1, (uint16_t)((int32_t)60), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String,System.String,System.String)
extern "C"  uint8_t MqttClient_Connect_m3606494216 (MqttClient_t1237157870 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clientId0;
		String_t* L_1 = ___username1;
		String_t* L_2 = ___password2;
		uint8_t L_3 = MqttClient_Connect_m879571441(__this, L_0, L_1, L_2, (bool)0, (uint8_t)0, (bool)0, (String_t*)NULL, (String_t*)NULL, (bool)1, (uint16_t)((int32_t)60), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String,System.String,System.String,System.Boolean,System.UInt16)
extern "C"  uint8_t MqttClient_Connect_m1117051864 (MqttClient_t1237157870 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___cleanSession3, uint16_t ___keepAlivePeriod4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___clientId0;
		String_t* L_1 = ___username1;
		String_t* L_2 = ___password2;
		bool L_3 = ___cleanSession3;
		uint16_t L_4 = ___keepAlivePeriod4;
		uint8_t L_5 = MqttClient_Connect_m879571441(__this, L_0, L_1, L_2, (bool)0, (uint8_t)0, (bool)0, (String_t*)NULL, (String_t*)NULL, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Byte uPLibrary.Networking.M2Mqtt.MqttClient::Connect(System.String,System.String,System.String,System.Boolean,System.Byte,System.Boolean,System.String,System.String,System.Boolean,System.UInt16)
extern "C"  uint8_t MqttClient_Connect_m879571441 (MqttClient_t1237157870 * __this, String_t* ___clientId0, String_t* ___username1, String_t* ___password2, bool ___willRetain3, uint8_t ___willQosLevel4, bool ___willFlag5, String_t* ___willTopic6, String_t* ___willMessage7, bool ___cleanSession8, uint16_t ___keepAlivePeriod9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Connect_m879571441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgConnect_t2841720955 * V_0 = NULL;
	Exception_t * V_1 = NULL;
	MqttMsgConnack_t3695344180 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___clientId0;
		String_t* L_1 = ___username1;
		String_t* L_2 = ___password2;
		bool L_3 = ___willRetain3;
		uint8_t L_4 = ___willQosLevel4;
		bool L_5 = ___willFlag5;
		String_t* L_6 = ___willTopic6;
		String_t* L_7 = ___willMessage7;
		bool L_8 = ___cleanSession8;
		uint16_t L_9 = ___keepAlivePeriod9;
		MqttMsgConnect_t2841720955 * L_10 = (MqttMsgConnect_t2841720955 *)il2cpp_codegen_object_new(MqttMsgConnect_t2841720955_il2cpp_TypeInfo_var);
		MqttMsgConnect__ctor_m1250605407(L_10, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		String_t* L_11 = __this->get_brokerHostName_1();
		IPAddress_t241777590 * L_12 = __this->get_brokerIpAddress_2();
		int32_t L_13 = __this->get_brokerPort_3();
		bool L_14 = __this->get_secure_4();
		X509Certificate_t713131622 * L_15 = __this->get_caCert_0();
		MqttNetworkChannel_t2078300306 * L_16 = (MqttNetworkChannel_t2078300306 *)il2cpp_codegen_object_new(MqttNetworkChannel_t2078300306_il2cpp_TypeInfo_var);
		MqttNetworkChannel__ctor_m3461208760(L_16, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		__this->set_channel_24(L_16);
		RuntimeObject* L_17 = __this->get_channel_24();
		NullCheck(L_17);
		InterfaceActionInvoker0::Invoke(4 /* System.Void uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Connect() */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_17);
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0050;
		throw e;
	}

CATCH_0050:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_18 = V_1;
		MqttConnectionException_t3570015742 * L_19 = (MqttConnectionException_t3570015742 *)il2cpp_codegen_object_new(MqttConnectionException_t3570015742_il2cpp_TypeInfo_var);
		MqttConnectionException__ctor_m1103185096(L_19, _stringLiteral279580675, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19,MqttClient_Connect_m879571441_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_005d:
	{
		__this->set_lastCommTime_18((((int64_t)((int64_t)0))));
		__this->set_isRunning_7((bool)1);
		intptr_t L_20 = (intptr_t)MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_21 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_21, __this, L_20, /*hidden argument*/NULL);
		Thread_t2300836069 * L_22 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_22, L_21, /*hidden argument*/NULL);
		__this->set_receiveThread_5(L_22);
		Thread_t2300836069 * L_23 = __this->get_receiveThread_5();
		NullCheck(L_23);
		Thread_Start_m2860771284(L_23, /*hidden argument*/NULL);
		MqttMsgConnect_t2841720955 * L_24 = V_0;
		MqttMsgBase_t2321119380 * L_25 = MqttClient_SendReceive_m1011753397(__this, L_24, /*hidden argument*/NULL);
		V_2 = ((MqttMsgConnack_t3695344180 *)CastclassClass((RuntimeObject*)L_25, MqttMsgConnack_t3695344180_il2cpp_TypeInfo_var));
		MqttMsgConnack_t3695344180 * L_26 = V_2;
		NullCheck(L_26);
		uint8_t L_27 = MqttMsgConnack_get_ReturnCode_m1170617396(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_0150;
		}
	}
	{
		String_t* L_28 = ___clientId0;
		MqttClient_set_ClientId_m659083255(__this, L_28, /*hidden argument*/NULL);
		bool L_29 = ___cleanSession8;
		MqttClient_set_CleanSession_m1579075915(__this, L_29, /*hidden argument*/NULL);
		bool L_30 = ___willFlag5;
		MqttClient_set_WillFlag_m4108952267(__this, L_30, /*hidden argument*/NULL);
		String_t* L_31 = ___willTopic6;
		MqttClient_set_WillTopic_m2625525473(__this, L_31, /*hidden argument*/NULL);
		String_t* L_32 = ___willMessage7;
		MqttClient_set_WillMessage_m783918025(__this, L_32, /*hidden argument*/NULL);
		uint8_t L_33 = ___willQosLevel4;
		MqttClient_set_WillQosLevel_m3532803667(__this, L_33, /*hidden argument*/NULL);
		uint16_t L_34 = ___keepAlivePeriod9;
		__this->set_keepAlivePeriod_14(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)((int32_t)1000))));
		intptr_t L_35 = (intptr_t)MqttClient_KeepAliveThread_m2335153006_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_36 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_36, __this, L_35, /*hidden argument*/NULL);
		Thread_t2300836069 * L_37 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_37, L_36, /*hidden argument*/NULL);
		__this->set_keepAliveThread_15(L_37);
		Thread_t2300836069 * L_38 = __this->get_keepAliveThread_15();
		NullCheck(L_38);
		Thread_Start_m2860771284(L_38, /*hidden argument*/NULL);
		intptr_t L_39 = (intptr_t)MqttClient_ReceiveEventThread_m2433938138_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_40 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_40, __this, L_39, /*hidden argument*/NULL);
		Thread_t2300836069 * L_41 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_41, L_40, /*hidden argument*/NULL);
		__this->set_receiveEventThread_6(L_41);
		Thread_t2300836069 * L_42 = __this->get_receiveEventThread_6();
		NullCheck(L_42);
		Thread_Start_m2860771284(L_42, /*hidden argument*/NULL);
		intptr_t L_43 = (intptr_t)MqttClient_ProcessInflightThread_m3241873423_RuntimeMethod_var;
		ThreadStart_t1006689297 * L_44 = (ThreadStart_t1006689297 *)il2cpp_codegen_object_new(ThreadStart_t1006689297_il2cpp_TypeInfo_var);
		ThreadStart__ctor_m3250019360(L_44, __this, L_43, /*hidden argument*/NULL);
		Thread_t2300836069 * L_45 = (Thread_t2300836069 *)il2cpp_codegen_object_new(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread__ctor_m777188137(L_45, L_44, /*hidden argument*/NULL);
		__this->set_processInflightThread_9(L_45);
		Thread_t2300836069 * L_46 = __this->get_processInflightThread_9();
		NullCheck(L_46);
		Thread_Start_m2860771284(L_46, /*hidden argument*/NULL);
		MqttClient_set_IsConnected_m2691633300(__this, (bool)1, /*hidden argument*/NULL);
	}

IL_0150:
	{
		MqttMsgConnack_t3695344180 * L_47 = V_2;
		NullCheck(L_47);
		uint8_t L_48 = MqttMsgConnack_get_ReturnCode_m1170617396(L_47, /*hidden argument*/NULL);
		return L_48;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Disconnect()
extern "C"  void MqttClient_Disconnect_m1914667810 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Disconnect_m1914667810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgDisconnect_t4092039470 * V_0 = NULL;
	{
		MqttMsgDisconnect_t4092039470 * L_0 = (MqttMsgDisconnect_t4092039470 *)il2cpp_codegen_object_new(MqttMsgDisconnect_t4092039470_il2cpp_TypeInfo_var);
		MqttMsgDisconnect__ctor_m1701223112(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MqttMsgDisconnect_t4092039470 * L_1 = V_0;
		MqttClient_Send_m1996534700(__this, L_1, /*hidden argument*/NULL);
		MqttClient_Close_m2185175017(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Close()
extern "C"  void MqttClient_Close_m2185175017 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Close_m2185175017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_isRunning_7((bool)0);
		Thread_t2300836069 * L_0 = __this->get_receiveEventThread_6();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		AutoResetEvent_t1333520283 * L_1 = __this->get_receiveEventWaitHandle_8();
		NullCheck(L_1);
		EventWaitHandle_Set_m2445193251(L_1, /*hidden argument*/NULL);
	}

IL_001e:
	{
		Thread_t2300836069 * L_2 = __this->get_processInflightThread_9();
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		AutoResetEvent_t1333520283 * L_3 = __this->get_inflightWaitHandle_10();
		NullCheck(L_3);
		EventWaitHandle_Set_m2445193251(L_3, /*hidden argument*/NULL);
	}

IL_0035:
	{
		bool L_4 = __this->get_isKeepAliveTimeout_17();
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		AutoResetEvent_t1333520283 * L_5 = __this->get_keepAliveEvent_16();
		NullCheck(L_5);
		EventWaitHandle_Set_m2445193251(L_5, /*hidden argument*/NULL);
		Thread_t2300836069 * L_6 = __this->get_keepAliveThread_15();
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		Thread_t2300836069 * L_7 = __this->get_keepAliveThread_15();
		NullCheck(L_7);
		Thread_Join_m742107115(L_7, /*hidden argument*/NULL);
	}

IL_0062:
	{
		RuntimeObject* L_8 = __this->get_channel_24();
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(3 /* System.Void uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Close() */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_8);
		bool L_9 = __this->get_isKeepAliveTimeout_17();
		if (L_9)
		{
			goto IL_007f;
		}
	}
	{
		MqttClient_set_IsConnected_m2691633300(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_007f:
	{
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPingResp uPLibrary.Networking.M2Mqtt.MqttClient::Ping()
extern "C"  MqttMsgPingResp_t2915329856 * MqttClient_Ping_m4940654 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Ping_m4940654_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPingReq_t516259338 * V_0 = NULL;
	MqttMsgPingResp_t2915329856 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		MqttMsgPingReq_t516259338 * L_0 = (MqttMsgPingReq_t516259338 *)il2cpp_codegen_object_new(MqttMsgPingReq_t516259338_il2cpp_TypeInfo_var);
		MqttMsgPingReq__ctor_m4132750144(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		MqttMsgPingReq_t516259338 * L_1 = V_0;
		int32_t L_2 = __this->get_keepAlivePeriod_14();
		MqttMsgBase_t2321119380 * L_3 = MqttClient_SendReceive_m2152143786(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = ((MqttMsgPingResp_t2915329856 *)CastclassClass((RuntimeObject*)L_3, MqttMsgPingResp_t2915329856_il2cpp_TypeInfo_var));
		goto IL_0044;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_4 = V_2;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		Trace_WriteLine_m1516194618(NULL /*static, unused*/, 1, _stringLiteral3029892227, L_5, /*hidden argument*/NULL);
		__this->set_isKeepAliveTimeout_17((bool)1);
		MqttClient_Close_m2185175017(__this, /*hidden argument*/NULL);
		V_1 = (MqttMsgPingResp_t2915329856 *)NULL;
		goto IL_0044;
	} // end catch (depth: 1)

IL_0044:
	{
		MqttMsgPingResp_t2915329856 * L_6 = V_1;
		return L_6;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Subscribe(System.String[],System.Byte[])
extern "C"  uint16_t MqttClient_Subscribe_m914342903 (MqttClient_t1237157870 * __this, StringU5BU5D_t1281789340* ___topics0, ByteU5BU5D_t4116647657* ___qosLevels1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Subscribe_m914342903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgSubscribe_t4232534475 * V_0 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ___topics0;
		ByteU5BU5D_t4116647657* L_1 = ___qosLevels1;
		MqttMsgSubscribe_t4232534475 * L_2 = (MqttMsgSubscribe_t4232534475 *)il2cpp_codegen_object_new(MqttMsgSubscribe_t4232534475_il2cpp_TypeInfo_var);
		MqttMsgSubscribe__ctor_m840732161(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		MqttMsgSubscribe_t4232534475 * L_3 = V_0;
		uint16_t L_4 = MqttClient_GetMessageId_m3961671348(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		MqttMsgSubscribe_set_MessageId_m2993089582(L_3, L_4, /*hidden argument*/NULL);
		MqttMsgSubscribe_t4232534475 * L_5 = V_0;
		MqttClient_EnqueueInflight_m413130657(__this, L_5, 0, /*hidden argument*/NULL);
		MqttMsgSubscribe_t4232534475 * L_6 = V_0;
		NullCheck(L_6);
		uint16_t L_7 = MqttMsgSubscribe_get_MessageId_m1906184073(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Unsubscribe(System.String[])
extern "C"  uint16_t MqttClient_Unsubscribe_m2827046529 (MqttClient_t1237157870 * __this, StringU5BU5D_t1281789340* ___topics0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Unsubscribe_m2827046529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgUnsubscribe_t3220791601 * V_0 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ___topics0;
		MqttMsgUnsubscribe_t3220791601 * L_1 = (MqttMsgUnsubscribe_t3220791601 *)il2cpp_codegen_object_new(MqttMsgUnsubscribe_t3220791601_il2cpp_TypeInfo_var);
		MqttMsgUnsubscribe__ctor_m4175818348(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MqttMsgUnsubscribe_t3220791601 * L_2 = V_0;
		uint16_t L_3 = MqttClient_GetMessageId_m3961671348(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		MqttMsgUnsubscribe_set_MessageId_m4272645186(L_2, L_3, /*hidden argument*/NULL);
		MqttMsgUnsubscribe_t3220791601 * L_4 = V_0;
		MqttClient_EnqueueInflight_m413130657(__this, L_4, 0, /*hidden argument*/NULL);
		MqttMsgUnsubscribe_t3220791601 * L_5 = V_0;
		NullCheck(L_5);
		uint16_t L_6 = MqttMsgUnsubscribe_get_MessageId_m1937183691(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Publish(System.String,System.Byte[])
extern "C"  uint16_t MqttClient_Publish_m3008566903 (MqttClient_t1237157870 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___topic0;
		ByteU5BU5D_t4116647657* L_1 = ___message1;
		uint16_t L_2 = MqttClient_Publish_m2947629173(__this, L_0, L_1, (uint8_t)0, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::Publish(System.String,System.Byte[],System.Byte,System.Boolean)
extern "C"  uint16_t MqttClient_Publish_m2947629173 (MqttClient_t1237157870 * __this, String_t* ___topic0, ByteU5BU5D_t4116647657* ___message1, uint8_t ___qosLevel2, bool ___retain3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Publish_m2947629173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgPublish_t1956840664 * V_0 = NULL;
	{
		String_t* L_0 = ___topic0;
		ByteU5BU5D_t4116647657* L_1 = ___message1;
		uint8_t L_2 = ___qosLevel2;
		bool L_3 = ___retain3;
		MqttMsgPublish_t1956840664 * L_4 = (MqttMsgPublish_t1956840664 *)il2cpp_codegen_object_new(MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var);
		MqttMsgPublish__ctor_m3530188858(L_4, L_0, L_1, (bool)0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		MqttMsgPublish_t1956840664 * L_5 = V_0;
		uint16_t L_6 = MqttClient_GetMessageId_m3961671348(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		MqttMsgPublish_set_MessageId_m1202353617(L_5, L_6, /*hidden argument*/NULL);
		MqttMsgPublish_t1956840664 * L_7 = V_0;
		MqttClient_EnqueueInflight_m413130657(__this, L_7, 0, /*hidden argument*/NULL);
		MqttMsgPublish_t1956840664 * L_8 = V_0;
		NullCheck(L_8);
		uint16_t L_9 = MqttMsgPublish_get_MessageId_m3957849214(L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgReceived(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttClient_OnMqttMsgReceived_m2172457511 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_t3637523393 * L_0 = __this->get_receiveQueue_27();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		Queue_t3637523393 * L_2 = __this->get_receiveQueue_27();
		MqttMsgBase_t2321119380 * L_3 = ___msg0;
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_2, L_3);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		AutoResetEvent_t1333520283 * L_5 = __this->get_receiveEventWaitHandle_8();
		NullCheck(L_5);
		EventWaitHandle_Set_m2445193251(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublishReceived(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublish)
extern "C"  void MqttClient_OnMqttMsgPublishReceived_m1921064112 (MqttClient_t1237157870 * __this, MqttMsgPublish_t1956840664 * ___publish0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgPublishReceived_m1921064112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgPublishEventHandler_t1923217352 * L_0 = __this->get_MqttMsgPublishReceived_19();
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		MqttMsgPublishEventHandler_t1923217352 * L_1 = __this->get_MqttMsgPublishReceived_19();
		MqttMsgPublish_t1956840664 * L_2 = ___publish0;
		NullCheck(L_2);
		String_t* L_3 = MqttMsgPublish_get_Topic_m2553516360(L_2, /*hidden argument*/NULL);
		MqttMsgPublish_t1956840664 * L_4 = ___publish0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = MqttMsgPublish_get_Message_m2120338431(L_4, /*hidden argument*/NULL);
		MqttMsgPublish_t1956840664 * L_6 = ___publish0;
		NullCheck(L_6);
		bool L_7 = MqttMsgBase_get_DupFlag_m4167438242(L_6, /*hidden argument*/NULL);
		MqttMsgPublish_t1956840664 * L_8 = ___publish0;
		NullCheck(L_8);
		uint8_t L_9 = MqttMsgBase_get_QosLevel_m772124759(L_8, /*hidden argument*/NULL);
		MqttMsgPublish_t1956840664 * L_10 = ___publish0;
		NullCheck(L_10);
		bool L_11 = MqttMsgBase_get_Retain_m2912767190(L_10, /*hidden argument*/NULL);
		MqttMsgPublishEventArgs_t2350602093 * L_12 = (MqttMsgPublishEventArgs_t2350602093 *)il2cpp_codegen_object_new(MqttMsgPublishEventArgs_t2350602093_il2cpp_TypeInfo_var);
		MqttMsgPublishEventArgs__ctor_m4161232453(L_12, L_3, L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_1);
		MqttMsgPublishEventHandler_Invoke_m3753111200(L_1, __this, L_12, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgPublished(System.UInt16)
extern "C"  void MqttClient_OnMqttMsgPublished_m2419643168 (MqttClient_t1237157870 * __this, uint16_t ___messageId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgPublished_m2419643168_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgPublishedEventHandler_t3860164542 * L_0 = __this->get_MqttMsgPublished_20();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		MqttMsgPublishedEventHandler_t3860164542 * L_1 = __this->get_MqttMsgPublished_20();
		uint16_t L_2 = ___messageId0;
		MqttMsgPublishedEventArgs_t90327050 * L_3 = (MqttMsgPublishedEventArgs_t90327050 *)il2cpp_codegen_object_new(MqttMsgPublishedEventArgs_t90327050_il2cpp_TypeInfo_var);
		MqttMsgPublishedEventArgs__ctor_m3198312214(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MqttMsgPublishedEventHandler_Invoke_m2649475026(L_1, __this, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgSubscribed(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSuback)
extern "C"  void MqttClient_OnMqttMsgSubscribed_m900306150 (MqttClient_t1237157870 * __this, MqttMsgSuback_t3000343093 * ___suback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgSubscribed_m900306150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgSubscribedEventHandler_t2042141578 * L_0 = __this->get_MqttMsgSubscribed_21();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		MqttMsgSubscribedEventHandler_t2042141578 * L_1 = __this->get_MqttMsgSubscribed_21();
		MqttMsgSuback_t3000343093 * L_2 = ___suback0;
		NullCheck(L_2);
		uint16_t L_3 = MqttMsgSuback_get_MessageId_m1708504470(L_2, /*hidden argument*/NULL);
		MqttMsgSuback_t3000343093 * L_4 = ___suback0;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = MqttMsgSuback_get_GrantedQoSLevels_m1798944243(L_4, /*hidden argument*/NULL);
		MqttMsgSubscribedEventArgs_t3669420413 * L_6 = (MqttMsgSubscribedEventArgs_t3669420413 *)il2cpp_codegen_object_new(MqttMsgSubscribedEventArgs_t3669420413_il2cpp_TypeInfo_var);
		MqttMsgSubscribedEventArgs__ctor_m4146728216(L_6, L_3, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		MqttMsgSubscribedEventHandler_Invoke_m4081086823(L_1, __this, L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgUnsubscribed(System.UInt16)
extern "C"  void MqttClient_OnMqttMsgUnsubscribed_m3505407607 (MqttClient_t1237157870 * __this, uint16_t ___messageId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgUnsubscribed_m3505407607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_0 = __this->get_MqttMsgUnsubscribed_22();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		MqttMsgUnsubscribedEventHandler_t2087605283 * L_1 = __this->get_MqttMsgUnsubscribed_22();
		uint16_t L_2 = ___messageId0;
		MqttMsgUnsubscribedEventArgs_t2229036016 * L_3 = (MqttMsgUnsubscribedEventArgs_t2229036016 *)il2cpp_codegen_object_new(MqttMsgUnsubscribedEventArgs_t2229036016_il2cpp_TypeInfo_var);
		MqttMsgUnsubscribedEventArgs__ctor_m1314859765(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		MqttMsgUnsubscribedEventHandler_Invoke_m742089316(L_1, __this, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::OnMqttMsgDisconnected()
extern "C"  void MqttClient_OnMqttMsgDisconnected_m2996431297 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_OnMqttMsgDisconnected_m2996431297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgDisconnectEventHandler_t848571114 * L_0 = __this->get_MqttMsgDisconnected_23();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		MqttMsgDisconnectEventHandler_t848571114 * L_1 = __this->get_MqttMsgDisconnected_23();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs_t3591816995 * L_2 = ((EventArgs_t3591816995_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t3591816995_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_1);
		MqttMsgDisconnectEventHandler_Invoke_m3562084123(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(System.Byte[])
extern "C"  void MqttClient_Send_m1860928569 (MqttClient_t1237157870 * __this, ByteU5BU5D_t4116647657* ___msgBytes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Send_m1860928569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_0 = __this->get_channel_24();
		ByteU5BU5D_t4116647657* L_1 = ___msgBytes0;
		NullCheck(L_0);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(2 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Send(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_2 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastCommTime_18((((int64_t)((int64_t)L_2))));
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001e;
		throw e;
	}

CATCH_001e:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		Trace_WriteLine_m1516194618(NULL /*static, unused*/, 1, _stringLiteral3029892227, L_4, /*hidden argument*/NULL);
		Exception_t * L_5 = V_0;
		MqttCommunicationException_t2651452853 * L_6 = (MqttCommunicationException_t2651452853 *)il2cpp_codegen_object_new(MqttCommunicationException_t2651452853_il2cpp_TypeInfo_var);
		MqttCommunicationException__ctor_m1765456204(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6,MqttClient_Send_m1860928569_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::Send(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttClient_Send_m1996534700 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_Send_m1996534700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgBase_t2321119380 * L_0 = ___msg0;
		Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2438014197, L_0, /*hidden argument*/NULL);
		MqttMsgBase_t2321119380 * L_1 = ___msg0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetBytes() */, L_1);
		MqttClient_Send_m1860928569(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(System.Byte[])
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m473303993 (MqttClient_t1237157870 * __this, ByteU5BU5D_t4116647657* ___msgBytes0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___msgBytes0;
		MqttMsgBase_t2321119380 * L_1 = MqttClient_SendReceive_m3311807021(__this, L_0, ((int32_t)5000), /*hidden argument*/NULL);
		return L_1;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(System.Byte[],System.Int32)
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m3311807021 (MqttClient_t1237157870 * __this, ByteU5BU5D_t4116647657* ___msgBytes0, int32_t ___timeout1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_SendReceive_m3311807021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SocketException_t3852068672 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		AutoResetEvent_t1333520283 * L_0 = __this->get_syncEndReceiving_11();
		NullCheck(L_0);
		EventWaitHandle_Reset_m3348053200(L_0, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_1 = __this->get_channel_24();
		ByteU5BU5D_t4116647657* L_2 = ___msgBytes0;
		NullCheck(L_1);
		InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(2 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Send(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_1, L_2);
		int32_t L_3 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastCommTime_18((((int64_t)((int64_t)L_3))));
		goto IL_005a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (SocketException_t3852068672_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Net.Sockets.SocketException)
		{
			V_0 = ((SocketException_t3852068672 *)__exception_local);
			SocketException_t3852068672 * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = SocketException_get_SocketErrorCode_m2767669540(L_4, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)10054)))))
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			MqttClient_set_IsConnected_m2691633300(__this, (bool)0, /*hidden argument*/NULL);
		}

IL_0042:
		{
			SocketException_t3852068672 * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, 1, _stringLiteral3029892227, L_7, /*hidden argument*/NULL);
			SocketException_t3852068672 * L_8 = V_0;
			MqttCommunicationException_t2651452853 * L_9 = (MqttCommunicationException_t2651452853 *)il2cpp_codegen_object_new(MqttCommunicationException_t2651452853_il2cpp_TypeInfo_var);
			MqttCommunicationException__ctor_m1765456204(L_9, L_8, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9,MqttClient_SendReceive_m3311807021_RuntimeMethod_var);
		}
	} // end catch (depth: 1)

IL_005a:
	{
		AutoResetEvent_t1333520283 * L_10 = __this->get_syncEndReceiving_11();
		int32_t L_11 = ___timeout1;
		NullCheck(L_10);
		bool L_12 = VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_10, L_11);
		if (!L_12)
		{
			goto IL_0084;
		}
	}
	{
		Exception_t * L_13 = __this->get_exReceiving_13();
		if (L_13)
		{
			goto IL_007d;
		}
	}
	{
		MqttMsgBase_t2321119380 * L_14 = __this->get_msgReceived_12();
		return L_14;
	}

IL_007d:
	{
		Exception_t * L_15 = __this->get_exReceiving_13();
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15,MqttClient_SendReceive_m3311807021_RuntimeMethod_var);
	}

IL_0084:
	{
		MqttCommunicationException_t2651452853 * L_16 = (MqttCommunicationException_t2651452853 *)il2cpp_codegen_object_new(MqttCommunicationException_t2651452853_il2cpp_TypeInfo_var);
		MqttCommunicationException__ctor_m1053442800(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,MqttClient_SendReceive_m3311807021_RuntimeMethod_var);
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m1011753397 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method)
{
	{
		MqttMsgBase_t2321119380 * L_0 = ___msg0;
		MqttMsgBase_t2321119380 * L_1 = MqttClient_SendReceive_m2152143786(__this, L_0, ((int32_t)5000), /*hidden argument*/NULL);
		return L_1;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase uPLibrary.Networking.M2Mqtt.MqttClient::SendReceive(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,System.Int32)
extern "C"  MqttMsgBase_t2321119380 * MqttClient_SendReceive_m2152143786 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, int32_t ___timeout1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_SendReceive_m2152143786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttMsgBase_t2321119380 * L_0 = ___msg0;
		Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2438014197, L_0, /*hidden argument*/NULL);
		MqttMsgBase_t2321119380 * L_1 = ___msg0;
		NullCheck(L_1);
		ByteU5BU5D_t4116647657* L_2 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(4 /* System.Byte[] uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase::GetBytes() */, L_1);
		int32_t L_3 = ___timeout1;
		MqttMsgBase_t2321119380 * L_4 = MqttClient_SendReceive_m3311807021(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInflight(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttClient_EnqueueInflight_m413130657 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, int32_t ___flow1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_EnqueueInflight_m413130657_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	MqttMsgContextFinder_t287101668 * V_2 = NULL;
	MqttMsgContext_t1493973115 * V_3 = NULL;
	int32_t V_4 = 0;
	uint8_t V_5 = 0x0;
	MqttMsgContext_t1493973115 * V_6 = NULL;
	MqttMsgContext_t1493973115 * V_7 = NULL;
	RuntimeObject * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		MqttMsgBase_t2321119380 * L_0 = ___msg0;
		NullCheck(L_0);
		uint8_t L_1 = MqttMsgBase_get_Type_m2887293476(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_0078;
		}
	}
	{
		MqttMsgBase_t2321119380 * L_2 = ___msg0;
		NullCheck(L_2);
		uint8_t L_3 = MqttMsgBase_get_QosLevel_m772124759(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0078;
		}
	}
	{
		Queue_t3637523393 * L_4 = __this->get_inflightQueue_25();
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			MqttMsgBase_t2321119380 * L_6 = ___msg0;
			NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_6, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
			uint16_t L_7 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_6, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			MqttMsgContextFinder_t287101668 * L_8 = (MqttMsgContextFinder_t287101668 *)il2cpp_codegen_object_new(MqttMsgContextFinder_t287101668_il2cpp_TypeInfo_var);
			MqttMsgContextFinder__ctor_m2481725027(L_8, L_7, 1, /*hidden argument*/NULL);
			V_2 = L_8;
			Queue_t3637523393 * L_9 = __this->get_inflightQueue_25();
			MqttMsgContextFinder_t287101668 * L_10 = V_2;
			intptr_t L_11 = (intptr_t)MqttMsgContextFinder_Find_m939155610_RuntimeMethod_var;
			QueuePredicate_t1615372677 * L_12 = (QueuePredicate_t1615372677 *)il2cpp_codegen_object_new(QueuePredicate_t1615372677_il2cpp_TypeInfo_var);
			QueuePredicate__ctor_m3657368705(L_12, L_10, L_11, /*hidden argument*/NULL);
			RuntimeObject * L_13 = QueueExtension_Get_m3062141218(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
			V_3 = ((MqttMsgContext_t1493973115 *)CastclassClass((RuntimeObject*)L_13, MqttMsgContext_t1493973115_il2cpp_TypeInfo_var));
			MqttMsgContext_t1493973115 * L_14 = V_3;
			if (!L_14)
			{
				goto IL_006c;
			}
		}

IL_005c:
		{
			MqttMsgContext_t1493973115 * L_15 = V_3;
			NullCheck(L_15);
			MqttMsgContext_set_State_m4162879748(L_15, 2, /*hidden argument*/NULL);
			MqttMsgContext_t1493973115 * L_16 = V_3;
			NullCheck(L_16);
			MqttMsgContext_set_Flow_m1961288458(L_16, 1, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x78, FINALLY_0071);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0071;
	}

FINALLY_0071:
	{ // begin finally (depth: 1)
		RuntimeObject * L_17 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(113)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(113)
	{
		IL2CPP_JUMP_TBL(0x78, IL_0078)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0078:
	{
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_0112;
		}
	}
	{
		V_4 = 0;
		MqttMsgBase_t2321119380 * L_19 = ___msg0;
		NullCheck(L_19);
		uint8_t L_20 = MqttMsgBase_get_QosLevel_m772124759(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		uint8_t L_21 = V_5;
		if (!L_21)
		{
			goto IL_00a5;
		}
	}
	{
		uint8_t L_22 = V_5;
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_00ad;
		}
	}
	{
		uint8_t L_23 = V_5;
		if ((((int32_t)L_23) == ((int32_t)2)))
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00bd;
	}

IL_00a5:
	{
		V_4 = 0;
		goto IL_00bd;
	}

IL_00ad:
	{
		V_4 = 1;
		goto IL_00bd;
	}

IL_00b5:
	{
		V_4 = 2;
		goto IL_00bd;
	}

IL_00bd:
	{
		MqttMsgContext_t1493973115 * L_24 = (MqttMsgContext_t1493973115 *)il2cpp_codegen_object_new(MqttMsgContext_t1493973115_il2cpp_TypeInfo_var);
		MqttMsgContext__ctor_m2737741963(L_24, /*hidden argument*/NULL);
		V_7 = L_24;
		MqttMsgContext_t1493973115 * L_25 = V_7;
		MqttMsgBase_t2321119380 * L_26 = ___msg0;
		NullCheck(L_25);
		MqttMsgContext_set_Message_m3182675887(L_25, L_26, /*hidden argument*/NULL);
		MqttMsgContext_t1493973115 * L_27 = V_7;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		MqttMsgContext_set_State_m4162879748(L_27, L_28, /*hidden argument*/NULL);
		MqttMsgContext_t1493973115 * L_29 = V_7;
		int32_t L_30 = ___flow1;
		NullCheck(L_29);
		MqttMsgContext_set_Flow_m1961288458(L_29, L_30, /*hidden argument*/NULL);
		MqttMsgContext_t1493973115 * L_31 = V_7;
		NullCheck(L_31);
		MqttMsgContext_set_Attempt_m1220111819(L_31, 0, /*hidden argument*/NULL);
		MqttMsgContext_t1493973115 * L_32 = V_7;
		V_6 = L_32;
		Queue_t3637523393 * L_33 = __this->get_inflightQueue_25();
		V_8 = L_33;
		RuntimeObject * L_34 = V_8;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
	}

IL_00f8:
	try
	{ // begin try (depth: 1)
		Queue_t3637523393 * L_35 = __this->get_inflightQueue_25();
		MqttMsgContext_t1493973115 * L_36 = V_6;
		NullCheck(L_35);
		VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_35, L_36);
		IL2CPP_LEAVE(0x112, FINALLY_010a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010a;
	}

FINALLY_010a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_37 = V_8;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_37, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(266)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(266)
	{
		IL2CPP_JUMP_TBL(0x112, IL_0112)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0112:
	{
		AutoResetEvent_t1333520283 * L_38 = __this->get_inflightWaitHandle_10();
		NullCheck(L_38);
		EventWaitHandle_Set_m2445193251(L_38, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::EnqueueInternal(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgBase)
extern "C"  void MqttClient_EnqueueInternal_m3752534690 (MqttClient_t1237157870 * __this, MqttMsgBase_t2321119380 * ___msg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_EnqueueInternal_m3752534690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	MqttMsgContextFinder_t287101668 * V_2 = NULL;
	MqttMsgContext_t1493973115 * V_3 = NULL;
	MqttMsgPubcomp_t24488374 * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		MqttMsgBase_t2321119380 * L_0 = ___msg0;
		NullCheck(L_0);
		uint8_t L_1 = MqttMsgBase_get_Type_m2887293476(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)6))))
		{
			goto IL_007f;
		}
	}
	{
		Queue_t3637523393 * L_2 = __this->get_inflightQueue_25();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			MqttMsgBase_t2321119380 * L_4 = ___msg0;
			NullCheck(((MqttMsgPubrel_t1897503452 *)CastclassClass((RuntimeObject*)L_4, MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var)));
			uint16_t L_5 = MqttMsgPubrel_get_MessageId_m3296907418(((MqttMsgPubrel_t1897503452 *)CastclassClass((RuntimeObject*)L_4, MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			MqttMsgContextFinder_t287101668 * L_6 = (MqttMsgContextFinder_t287101668 *)il2cpp_codegen_object_new(MqttMsgContextFinder_t287101668_il2cpp_TypeInfo_var);
			MqttMsgContextFinder__ctor_m2481725027(L_6, L_5, 1, /*hidden argument*/NULL);
			V_2 = L_6;
			Queue_t3637523393 * L_7 = __this->get_inflightQueue_25();
			MqttMsgContextFinder_t287101668 * L_8 = V_2;
			intptr_t L_9 = (intptr_t)MqttMsgContextFinder_Find_m939155610_RuntimeMethod_var;
			QueuePredicate_t1615372677 * L_10 = (QueuePredicate_t1615372677 *)il2cpp_codegen_object_new(QueuePredicate_t1615372677_il2cpp_TypeInfo_var);
			QueuePredicate__ctor_m3657368705(L_10, L_8, L_9, /*hidden argument*/NULL);
			RuntimeObject * L_11 = QueueExtension_Get_m3062141218(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
			V_3 = ((MqttMsgContext_t1493973115 *)CastclassClass((RuntimeObject*)L_11, MqttMsgContext_t1493973115_il2cpp_TypeInfo_var));
			MqttMsgContext_t1493973115 * L_12 = V_3;
			if (L_12)
			{
				goto IL_0073;
			}
		}

IL_0050:
		{
			MqttMsgPubcomp_t24488374 * L_13 = (MqttMsgPubcomp_t24488374 *)il2cpp_codegen_object_new(MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var);
			MqttMsgPubcomp__ctor_m2433696329(L_13, /*hidden argument*/NULL);
			V_4 = L_13;
			MqttMsgPubcomp_t24488374 * L_14 = V_4;
			MqttMsgBase_t2321119380 * L_15 = ___msg0;
			NullCheck(((MqttMsgPubrel_t1897503452 *)CastclassClass((RuntimeObject*)L_15, MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var)));
			uint16_t L_16 = MqttMsgPubrel_get_MessageId_m3296907418(((MqttMsgPubrel_t1897503452 *)CastclassClass((RuntimeObject*)L_15, MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_14);
			MqttMsgPubcomp_set_MessageId_m3644641738(L_14, L_16, /*hidden argument*/NULL);
			MqttMsgPubcomp_t24488374 * L_17 = V_4;
			MqttClient_Send_m1996534700(__this, L_17, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x7F, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		RuntimeObject * L_18 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		bool L_19 = V_0;
		if (!L_19)
		{
			goto IL_00b9;
		}
	}
	{
		Queue_t3637523393 * L_20 = __this->get_internalQueue_26();
		V_5 = L_20;
		RuntimeObject * L_21 = V_5;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
	}

IL_0094:
	try
	{ // begin try (depth: 1)
		Queue_t3637523393 * L_22 = __this->get_internalQueue_26();
		MqttMsgBase_t2321119380 * L_23 = ___msg0;
		NullCheck(L_22);
		VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_22, L_23);
		AutoResetEvent_t1333520283 * L_24 = __this->get_inflightWaitHandle_10();
		NullCheck(L_24);
		EventWaitHandle_Set_m2445193251(L_24, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xB9, FINALLY_00b1);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		RuntimeObject * L_25 = V_5;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b9:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::ReceiveThread()
extern "C"  void MqttClient_ReceiveThread_m3895413313 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_ReceiveThread_m3895413313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	uint8_t V_2 = 0x0;
	MqttMsgSuback_t3000343093 * V_3 = NULL;
	MqttMsgPublish_t1956840664 * V_4 = NULL;
	MqttMsgPuback_t3000343258 * V_5 = NULL;
	MqttMsgPubrec_t1898486492 * V_6 = NULL;
	MqttMsgPubrel_t1897503452 * V_7 = NULL;
	MqttMsgPubcomp_t24488374 * V_8 = NULL;
	MqttMsgUnsuback_t824663444 * V_9 = NULL;
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)1));
		goto IL_028d;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject* L_0 = __this->get_channel_24();
			NullCheck(L_0);
			bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::get_DataAvailable() */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_0);
			if (!L_1)
			{
				goto IL_0030;
			}
		}

IL_001e:
		{
			RuntimeObject* L_2 = __this->get_channel_24();
			ByteU5BU5D_t4116647657* L_3 = V_1;
			NullCheck(L_2);
			int32_t L_4 = InterfaceFuncInvoker1< int32_t, ByteU5BU5D_t4116647657* >::Invoke(1 /* System.Int32 uPLibrary.Networking.M2Mqtt.IMqttNetworkChannel::Receive(System.Byte[]) */, IMqttNetworkChannel_t3555245973_il2cpp_TypeInfo_var, L_2, L_3);
			V_0 = L_4;
			goto IL_0039;
		}

IL_0030:
		{
			V_0 = 0;
			IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
			Thread_Sleep_m483098292(NULL /*static, unused*/, ((int32_t)10), /*hidden argument*/NULL);
		}

IL_0039:
		{
			int32_t L_5 = V_0;
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0262;
			}
		}

IL_0040:
		{
			ByteU5BU5D_t4116647657* L_6 = V_1;
			NullCheck(L_6);
			int32_t L_7 = 0;
			uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
			V_2 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)240)))>>(int32_t)4)))));
			uint8_t L_9 = V_2;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
			{
				case 0:
				{
					goto IL_0092;
				}
				case 1:
				{
					goto IL_009a;
				}
				case 2:
				{
					goto IL_0140;
				}
				case 3:
				{
					goto IL_016c;
				}
				case 4:
				{
					goto IL_0197;
				}
				case 5:
				{
					goto IL_01c2;
				}
				case 6:
				{
					goto IL_01ed;
				}
				case 7:
				{
					goto IL_0110;
				}
				case 8:
				{
					goto IL_0118;
				}
				case 9:
				{
					goto IL_0218;
				}
				case 10:
				{
					goto IL_0220;
				}
				case 11:
				{
					goto IL_00d1;
				}
				case 12:
				{
					goto IL_00d9;
				}
				case 13:
				{
					goto IL_024b;
				}
			}
		}

IL_008d:
		{
			goto IL_0253;
		}

IL_0092:
		{
			MqttClientException_t1411037672 * L_10 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
			MqttClientException__ctor_m3847753279(L_10, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10,MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var);
		}

IL_009a:
		{
			ByteU5BU5D_t4116647657* L_11 = V_1;
			NullCheck(L_11);
			int32_t L_12 = 0;
			uint8_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
			RuntimeObject* L_14 = __this->get_channel_24();
			MqttMsgConnack_t3695344180 * L_15 = MqttMsgConnack_Parse_m1892427643(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
			__this->set_msgReceived_12(L_15);
			MqttMsgBase_t2321119380 * L_16 = __this->get_msgReceived_12();
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_16, /*hidden argument*/NULL);
			AutoResetEvent_t1333520283 * L_17 = __this->get_syncEndReceiving_11();
			NullCheck(L_17);
			EventWaitHandle_Set_m2445193251(L_17, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_00d1:
		{
			MqttClientException_t1411037672 * L_18 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
			MqttClientException__ctor_m3847753279(L_18, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_18,MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var);
		}

IL_00d9:
		{
			ByteU5BU5D_t4116647657* L_19 = V_1;
			NullCheck(L_19);
			int32_t L_20 = 0;
			uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
			RuntimeObject* L_22 = __this->get_channel_24();
			MqttMsgPingResp_t2915329856 * L_23 = MqttMsgPingResp_Parse_m2246319529(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
			__this->set_msgReceived_12(L_23);
			MqttMsgBase_t2321119380 * L_24 = __this->get_msgReceived_12();
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_24, /*hidden argument*/NULL);
			AutoResetEvent_t1333520283 * L_25 = __this->get_syncEndReceiving_11();
			NullCheck(L_25);
			EventWaitHandle_Set_m2445193251(L_25, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_0110:
		{
			MqttClientException_t1411037672 * L_26 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
			MqttClientException__ctor_m3847753279(L_26, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26,MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var);
		}

IL_0118:
		{
			ByteU5BU5D_t4116647657* L_27 = V_1;
			NullCheck(L_27);
			int32_t L_28 = 0;
			uint8_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			RuntimeObject* L_30 = __this->get_channel_24();
			MqttMsgSuback_t3000343093 * L_31 = MqttMsgSuback_Parse_m1993898496(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
			V_3 = L_31;
			MqttMsgSuback_t3000343093 * L_32 = V_3;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_32, /*hidden argument*/NULL);
			MqttMsgSuback_t3000343093 * L_33 = V_3;
			MqttClient_EnqueueInternal_m3752534690(__this, L_33, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_0140:
		{
			ByteU5BU5D_t4116647657* L_34 = V_1;
			NullCheck(L_34);
			int32_t L_35 = 0;
			uint8_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			RuntimeObject* L_37 = __this->get_channel_24();
			MqttMsgPublish_t1956840664 * L_38 = MqttMsgPublish_Parse_m1565802144(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
			V_4 = L_38;
			MqttMsgPublish_t1956840664 * L_39 = V_4;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_39, /*hidden argument*/NULL);
			MqttMsgPublish_t1956840664 * L_40 = V_4;
			MqttClient_EnqueueInflight_m413130657(__this, L_40, 1, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_016c:
		{
			ByteU5BU5D_t4116647657* L_41 = V_1;
			NullCheck(L_41);
			int32_t L_42 = 0;
			uint8_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
			RuntimeObject* L_44 = __this->get_channel_24();
			MqttMsgPuback_t3000343258 * L_45 = MqttMsgPuback_Parse_m3652376793(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
			V_5 = L_45;
			MqttMsgPuback_t3000343258 * L_46 = V_5;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_46, /*hidden argument*/NULL);
			MqttMsgPuback_t3000343258 * L_47 = V_5;
			MqttClient_EnqueueInternal_m3752534690(__this, L_47, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_0197:
		{
			ByteU5BU5D_t4116647657* L_48 = V_1;
			NullCheck(L_48);
			int32_t L_49 = 0;
			uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
			RuntimeObject* L_51 = __this->get_channel_24();
			MqttMsgPubrec_t1898486492 * L_52 = MqttMsgPubrec_Parse_m1855442422(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
			V_6 = L_52;
			MqttMsgPubrec_t1898486492 * L_53 = V_6;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_53, /*hidden argument*/NULL);
			MqttMsgPubrec_t1898486492 * L_54 = V_6;
			MqttClient_EnqueueInternal_m3752534690(__this, L_54, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_01c2:
		{
			ByteU5BU5D_t4116647657* L_55 = V_1;
			NullCheck(L_55);
			int32_t L_56 = 0;
			uint8_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
			RuntimeObject* L_58 = __this->get_channel_24();
			MqttMsgPubrel_t1897503452 * L_59 = MqttMsgPubrel_Parse_m230762409(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
			V_7 = L_59;
			MqttMsgPubrel_t1897503452 * L_60 = V_7;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_60, /*hidden argument*/NULL);
			MqttMsgPubrel_t1897503452 * L_61 = V_7;
			MqttClient_EnqueueInternal_m3752534690(__this, L_61, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_01ed:
		{
			ByteU5BU5D_t4116647657* L_62 = V_1;
			NullCheck(L_62);
			int32_t L_63 = 0;
			uint8_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
			RuntimeObject* L_65 = __this->get_channel_24();
			MqttMsgPubcomp_t24488374 * L_66 = MqttMsgPubcomp_Parse_m3781949255(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
			V_8 = L_66;
			MqttMsgPubcomp_t24488374 * L_67 = V_8;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_67, /*hidden argument*/NULL);
			MqttMsgPubcomp_t24488374 * L_68 = V_8;
			MqttClient_EnqueueInternal_m3752534690(__this, L_68, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_0218:
		{
			MqttClientException_t1411037672 * L_69 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
			MqttClientException__ctor_m3847753279(L_69, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_69,MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var);
		}

IL_0220:
		{
			ByteU5BU5D_t4116647657* L_70 = V_1;
			NullCheck(L_70);
			int32_t L_71 = 0;
			uint8_t L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
			RuntimeObject* L_73 = __this->get_channel_24();
			MqttMsgUnsuback_t824663444 * L_74 = MqttMsgUnsuback_Parse_m428600086(NULL /*static, unused*/, L_72, L_73, /*hidden argument*/NULL);
			V_9 = L_74;
			MqttMsgUnsuback_t824663444 * L_75 = V_9;
			Trace_WriteLine_m1516194618(NULL /*static, unused*/, ((int32_t)16), _stringLiteral2475173501, L_75, /*hidden argument*/NULL);
			MqttMsgUnsuback_t824663444 * L_76 = V_9;
			MqttClient_EnqueueInternal_m3752534690(__this, L_76, /*hidden argument*/NULL);
			goto IL_025b;
		}

IL_024b:
		{
			MqttClientException_t1411037672 * L_77 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
			MqttClientException__ctor_m3847753279(L_77, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_77,MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var);
		}

IL_0253:
		{
			MqttClientException_t1411037672 * L_78 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
			MqttClientException__ctor_m3847753279(L_78, ((int32_t)9), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_78,MqttClient_ReceiveThread_m3895413313_RuntimeMethod_var);
		}

IL_025b:
		{
			__this->set_exReceiving_13((Exception_t *)NULL);
		}

IL_0262:
		{
			goto IL_028d;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0267;
		throw e;
	}

CATCH_0267:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		Exception_t * L_79 = V_10;
		NullCheck(L_79);
		String_t* L_80 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_79);
		Trace_WriteLine_m1516194618(NULL /*static, unused*/, 1, _stringLiteral3029892227, L_80, /*hidden argument*/NULL);
		Exception_t * L_81 = V_10;
		MqttCommunicationException_t2651452853 * L_82 = (MqttCommunicationException_t2651452853 *)il2cpp_codegen_object_new(MqttCommunicationException_t2651452853_il2cpp_TypeInfo_var);
		MqttCommunicationException__ctor_m1765456204(L_82, L_81, /*hidden argument*/NULL);
		__this->set_exReceiving_13(L_82);
		goto IL_028d;
	} // end catch (depth: 1)

IL_028d:
	{
		bool L_83 = __this->get_isRunning_7();
		if (L_83)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::KeepAliveThread()
extern "C"  void MqttClient_KeepAliveThread_m2335153006 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = (((int64_t)((int64_t)0)));
		int32_t L_0 = __this->get_keepAlivePeriod_14();
		V_1 = L_0;
		__this->set_isKeepAliveTimeout_17((bool)0);
		goto IL_006e;
	}

IL_0016:
	{
		AutoResetEvent_t1333520283 * L_1 = __this->get_keepAliveEvent_16();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_1, L_2);
		bool L_3 = __this->get_isRunning_7();
		if (!L_3)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_4 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)L_4)));
		int64_t L_5 = V_0;
		int64_t L_6 = __this->get_lastCommTime_18();
		int32_t L_7 = __this->get_keepAlivePeriod_14();
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_6))) < ((int64_t)(((int64_t)((int64_t)L_7))))))
		{
			goto IL_005c;
		}
	}
	{
		MqttClient_Ping_m4940654(__this, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_keepAlivePeriod_14();
		V_1 = L_8;
		goto IL_006e;
	}

IL_005c:
	{
		int32_t L_9 = __this->get_keepAlivePeriod_14();
		int64_t L_10 = V_0;
		int64_t L_11 = __this->get_lastCommTime_18();
		V_1 = (((int32_t)((int32_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((int64_t)L_9))), (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_10, (int64_t)L_11)))))));
	}

IL_006e:
	{
		bool L_12 = __this->get_isRunning_7();
		if (L_12)
		{
			goto IL_0016;
		}
	}
	{
		bool L_13 = __this->get_isKeepAliveTimeout_17();
		if (!L_13)
		{
			goto IL_0091;
		}
	}
	{
		MqttClient_set_IsConnected_m2691633300(__this, (bool)0, /*hidden argument*/NULL);
		MqttClient_OnMqttMsgDisconnected_m2996431297(__this, /*hidden argument*/NULL);
	}

IL_0091:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::ReceiveEventThread()
extern "C"  void MqttClient_ReceiveEventThread_m2433938138 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_ReceiveEventThread_m2433938138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgBase_t2321119380 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	uint8_t V_2 = 0x0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		goto IL_0150;
	}

IL_0005:
	{
		Queue_t3637523393 * L_0 = __this->get_receiveQueue_27();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_0);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		AutoResetEvent_t1333520283 * L_2 = __this->get_receiveEventWaitHandle_8();
		NullCheck(L_2);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_2);
	}

IL_0021:
	{
		bool L_3 = __this->get_isRunning_7();
		if (!L_3)
		{
			goto IL_0150;
		}
	}
	{
		V_0 = (MqttMsgBase_t2321119380 *)NULL;
		Queue_t3637523393 * L_4 = __this->get_receiveQueue_27();
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_003b:
	try
	{ // begin try (depth: 1)
		{
			Queue_t3637523393 * L_6 = __this->get_receiveQueue_27();
			NullCheck(L_6);
			int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_6);
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_005d;
			}
		}

IL_004c:
		{
			Queue_t3637523393 * L_8 = __this->get_receiveQueue_27();
			NullCheck(L_8);
			RuntimeObject * L_9 = VirtFuncInvoker0< RuntimeObject * >::Invoke(16 /* System.Object System.Collections.Queue::Dequeue() */, L_8);
			V_0 = ((MqttMsgBase_t2321119380 *)CastclassClass((RuntimeObject*)L_9, MqttMsgBase_t2321119380_il2cpp_TypeInfo_var));
		}

IL_005d:
		{
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		MqttMsgBase_t2321119380 * L_11 = V_0;
		if (!L_11)
		{
			goto IL_0150;
		}
	}
	{
		MqttMsgBase_t2321119380 * L_12 = V_0;
		NullCheck(L_12);
		uint8_t L_13 = MqttMsgBase_get_Type_m2887293476(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		uint8_t L_14 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_0150;
			}
			case 2:
			{
				goto IL_00dc;
			}
			case 3:
			{
				goto IL_00ed;
			}
			case 4:
			{
				goto IL_0150;
			}
			case 5:
			{
				goto IL_0103;
			}
			case 6:
			{
				goto IL_0114;
			}
			case 7:
			{
				goto IL_00c3;
			}
			case 8:
			{
				goto IL_00cb;
			}
			case 9:
			{
				goto IL_012a;
			}
			case 10:
			{
				goto IL_0132;
			}
			case 11:
			{
				goto IL_0150;
			}
			case 12:
			{
				goto IL_0150;
			}
			case 13:
			{
				goto IL_0148;
			}
		}
	}
	{
		goto IL_0150;
	}

IL_00bb:
	{
		MqttClientException_t1411037672 * L_15 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_15, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15,MqttClient_ReceiveEventThread_m2433938138_RuntimeMethod_var);
	}

IL_00c3:
	{
		MqttClientException_t1411037672 * L_16 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_16, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16,MqttClient_ReceiveEventThread_m2433938138_RuntimeMethod_var);
	}

IL_00cb:
	{
		MqttMsgBase_t2321119380 * L_17 = V_0;
		MqttClient_OnMqttMsgSubscribed_m900306150(__this, ((MqttMsgSuback_t3000343093 *)CastclassClass((RuntimeObject*)L_17, MqttMsgSuback_t3000343093_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00dc:
	{
		MqttMsgBase_t2321119380 * L_18 = V_0;
		MqttClient_OnMqttMsgPublishReceived_m1921064112(__this, ((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_18, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_00ed:
	{
		MqttMsgBase_t2321119380 * L_19 = V_0;
		NullCheck(((MqttMsgPuback_t3000343258 *)CastclassClass((RuntimeObject*)L_19, MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var)));
		uint16_t L_20 = MqttMsgPuback_get_MessageId_m3009824526(((MqttMsgPuback_t3000343258 *)CastclassClass((RuntimeObject*)L_19, MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		MqttClient_OnMqttMsgPublished_m2419643168(__this, L_20, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_0103:
	{
		MqttMsgBase_t2321119380 * L_21 = V_0;
		MqttClient_OnMqttMsgPublishReceived_m1921064112(__this, ((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_21, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_0114:
	{
		MqttMsgBase_t2321119380 * L_22 = V_0;
		NullCheck(((MqttMsgPubcomp_t24488374 *)CastclassClass((RuntimeObject*)L_22, MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var)));
		uint16_t L_23 = MqttMsgPubcomp_get_MessageId_m3049482919(((MqttMsgPubcomp_t24488374 *)CastclassClass((RuntimeObject*)L_22, MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		MqttClient_OnMqttMsgPublished_m2419643168(__this, L_23, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_012a:
	{
		MqttClientException_t1411037672 * L_24 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_24, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24,MqttClient_ReceiveEventThread_m2433938138_RuntimeMethod_var);
	}

IL_0132:
	{
		MqttMsgBase_t2321119380 * L_25 = V_0;
		NullCheck(((MqttMsgUnsuback_t824663444 *)CastclassClass((RuntimeObject*)L_25, MqttMsgUnsuback_t824663444_il2cpp_TypeInfo_var)));
		uint16_t L_26 = MqttMsgUnsuback_get_MessageId_m455597113(((MqttMsgUnsuback_t824663444 *)CastclassClass((RuntimeObject*)L_25, MqttMsgUnsuback_t824663444_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		MqttClient_OnMqttMsgUnsubscribed_m3505407607(__this, L_26, /*hidden argument*/NULL);
		goto IL_0150;
	}

IL_0148:
	{
		MqttClientException_t1411037672 * L_27 = (MqttClientException_t1411037672 *)il2cpp_codegen_object_new(MqttClientException_t1411037672_il2cpp_TypeInfo_var);
		MqttClientException__ctor_m3847753279(L_27, ((int32_t)9), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27,MqttClient_ReceiveEventThread_m2433938138_RuntimeMethod_var);
	}

IL_0150:
	{
		bool L_28 = __this->get_isRunning_7();
		if (L_28)
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient::ProcessInflightThread()
extern "C"  void MqttClient_ProcessInflightThread_m3241873423 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttClient_ProcessInflightThread_m3241873423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgContext_t1493973115 * V_0 = NULL;
	MqttMsgBase_t2321119380 * V_1 = NULL;
	MqttMsgBase_t2321119380 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	RuntimeObject * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	MqttMsgPuback_t3000343258 * V_9 = NULL;
	int32_t V_10 = 0;
	MqttMsgPubrec_t1898486492 * V_11 = NULL;
	RuntimeObject * V_12 = NULL;
	RuntimeObject * V_13 = NULL;
	int32_t V_14 = 0;
	RuntimeObject * V_15 = NULL;
	RuntimeObject * V_16 = NULL;
	MqttMsgPubrel_t1897503452 * V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	RuntimeObject * V_20 = NULL;
	RuntimeObject * V_21 = NULL;
	MqttMsgPubcomp_t24488374 * V_22 = NULL;
	RuntimeObject * V_23 = NULL;
	RuntimeObject * V_24 = NULL;
	int32_t V_25 = 0;
	MqttMsgPubrel_t1897503452 * V_26 = NULL;
	int32_t V_27 = 0;
	MqttCommunicationException_t2651452853 * V_28 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B24_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B66_0 = 0;
	int32_t G_B83_0 = 0;
	int32_t G_B92_0 = 0;
	int32_t G_B132_0 = 0;
	int32_t G_B141_0 = 0;
	{
		V_0 = (MqttMsgContext_t1493973115 *)NULL;
		V_1 = (MqttMsgBase_t2321119380 *)NULL;
		V_2 = (MqttMsgBase_t2321119380 *)NULL;
		V_3 = (bool)0;
		V_4 = (-1);
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0907;
		}

IL_0010:
		{
			AutoResetEvent_t1333520283 * L_0 = __this->get_inflightWaitHandle_10();
			int32_t L_1 = V_4;
			NullCheck(L_0);
			VirtFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_0, L_1);
			bool L_2 = __this->get_isRunning_7();
			if (!L_2)
			{
				goto IL_0907;
			}
		}

IL_0029:
		{
			Queue_t3637523393 * L_3 = __this->get_inflightQueue_25();
			V_5 = L_3;
			RuntimeObject * L_4 = V_5;
			Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		}

IL_0038:
		try
		{ // begin try (depth: 2)
			{
				V_4 = ((int32_t)2147483647LL);
				Queue_t3637523393 * L_5 = __this->get_inflightQueue_25();
				NullCheck(L_5);
				int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_5);
				V_6 = L_6;
				goto IL_08e3;
			}

IL_0051:
			{
				int32_t L_7 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1));
				V_3 = (bool)0;
				V_2 = (MqttMsgBase_t2321119380 *)NULL;
				Queue_t3637523393 * L_8 = __this->get_inflightQueue_25();
				NullCheck(L_8);
				RuntimeObject * L_9 = VirtFuncInvoker0< RuntimeObject * >::Invoke(16 /* System.Object System.Collections.Queue::Dequeue() */, L_8);
				V_0 = ((MqttMsgContext_t1493973115 *)CastclassClass((RuntimeObject*)L_9, MqttMsgContext_t1493973115_il2cpp_TypeInfo_var));
				MqttMsgContext_t1493973115 * L_10 = V_0;
				NullCheck(L_10);
				MqttMsgBase_t2321119380 * L_11 = MqttMsgContext_get_Message_m3976154556(L_10, /*hidden argument*/NULL);
				V_1 = L_11;
				MqttMsgContext_t1493973115 * L_12 = V_0;
				NullCheck(L_12);
				int32_t L_13 = MqttMsgContext_get_State_m1931372396(L_12, /*hidden argument*/NULL);
				V_7 = L_13;
				int32_t L_14 = V_7;
				switch (L_14)
				{
					case 0:
					{
						goto IL_00bb;
					}
					case 1:
					{
						goto IL_00ea;
					}
					case 2:
					{
						goto IL_01e6;
					}
					case 3:
					{
						goto IL_02af;
					}
					case 4:
					{
						goto IL_045f;
					}
					case 5:
					{
						goto IL_0607;
					}
					case 6:
					{
						goto IL_06f5;
					}
					case 7:
					{
						goto IL_0830;
					}
					case 8:
					{
						goto IL_0835;
					}
					case 9:
					{
						goto IL_08d4;
					}
					case 10:
					{
						goto IL_08d9;
					}
					case 11:
					{
						goto IL_02af;
					}
					case 12:
					{
						goto IL_02af;
					}
				}
			}

IL_00b6:
			{
				goto IL_08de;
			}

IL_00bb:
			{
				MqttMsgContext_t1493973115 * L_15 = V_0;
				NullCheck(L_15);
				int32_t L_16 = MqttMsgContext_get_Flow_m2085309911(L_15, /*hidden argument*/NULL);
				if (L_16)
				{
					goto IL_00d2;
				}
			}

IL_00c6:
			{
				MqttMsgBase_t2321119380 * L_17 = V_1;
				MqttClient_Send_m1996534700(__this, L_17, /*hidden argument*/NULL);
				goto IL_00e5;
			}

IL_00d2:
			{
				MqttMsgContext_t1493973115 * L_18 = V_0;
				NullCheck(L_18);
				int32_t L_19 = MqttMsgContext_get_Flow_m2085309911(L_18, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_19) == ((uint32_t)1))))
				{
					goto IL_00e5;
				}
			}

IL_00de:
			{
				MqttMsgBase_t2321119380 * L_20 = V_1;
				MqttClient_OnMqttMsgReceived_m2172457511(__this, L_20, /*hidden argument*/NULL);
			}

IL_00e5:
			{
				goto IL_08e3;
			}

IL_00ea:
			{
				MqttMsgContext_t1493973115 * L_21 = V_0;
				NullCheck(L_21);
				int32_t L_22 = MqttMsgContext_get_Flow_m2085309911(L_21, /*hidden argument*/NULL);
				if (L_22)
				{
					goto IL_01ad;
				}
			}

IL_00f5:
			{
				MqttMsgBase_t2321119380 * L_23 = V_1;
				NullCheck(L_23);
				uint8_t L_24 = MqttMsgBase_get_Type_m2887293476(L_23, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_24) == ((uint32_t)3))))
				{
					goto IL_010d;
				}
			}

IL_0101:
			{
				MqttMsgContext_t1493973115 * L_25 = V_0;
				NullCheck(L_25);
				MqttMsgContext_set_State_m4162879748(L_25, 3, /*hidden argument*/NULL);
				goto IL_013b;
			}

IL_010d:
			{
				MqttMsgBase_t2321119380 * L_26 = V_1;
				NullCheck(L_26);
				uint8_t L_27 = MqttMsgBase_get_Type_m2887293476(L_26, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_27) == ((uint32_t)8))))
				{
					goto IL_0126;
				}
			}

IL_0119:
			{
				MqttMsgContext_t1493973115 * L_28 = V_0;
				NullCheck(L_28);
				MqttMsgContext_set_State_m4162879748(L_28, ((int32_t)11), /*hidden argument*/NULL);
				goto IL_013b;
			}

IL_0126:
			{
				MqttMsgBase_t2321119380 * L_29 = V_1;
				NullCheck(L_29);
				uint8_t L_30 = MqttMsgBase_get_Type_m2887293476(L_29, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_30) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_013b;
				}
			}

IL_0133:
			{
				MqttMsgContext_t1493973115 * L_31 = V_0;
				NullCheck(L_31);
				MqttMsgContext_set_State_m4162879748(L_31, ((int32_t)12), /*hidden argument*/NULL);
			}

IL_013b:
			{
				MqttMsgContext_t1493973115 * L_32 = V_0;
				int32_t L_33 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				NullCheck(L_32);
				MqttMsgContext_set_Timestamp_m1658145452(L_32, L_33, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_34 = V_0;
				MqttMsgContext_t1493973115 * L_35 = L_34;
				NullCheck(L_35);
				int32_t L_36 = MqttMsgContext_get_Attempt_m45535592(L_35, /*hidden argument*/NULL);
				NullCheck(L_35);
				MqttMsgContext_set_Attempt_m1220111819(L_35, ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)), /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_37 = V_0;
				NullCheck(L_37);
				int32_t L_38 = MqttMsgContext_get_Attempt_m45535592(L_37, /*hidden argument*/NULL);
				if ((((int32_t)L_38) <= ((int32_t)1)))
				{
					goto IL_0167;
				}
			}

IL_0160:
			{
				MqttMsgBase_t2321119380 * L_39 = V_1;
				NullCheck(L_39);
				MqttMsgBase_set_DupFlag_m389342711(L_39, (bool)1, /*hidden argument*/NULL);
			}

IL_0167:
			{
				MqttMsgBase_t2321119380 * L_40 = V_1;
				MqttClient_Send_m1996534700(__this, L_40, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_41 = __this->get_settings_28();
				NullCheck(L_41);
				int32_t L_42 = MqttSettings_get_DelayOnRetry_m3476805405(L_41, /*hidden argument*/NULL);
				int32_t L_43 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_44 = V_0;
				NullCheck(L_44);
				int32_t L_45 = MqttMsgContext_get_Timestamp_m3667406389(L_44, /*hidden argument*/NULL);
				V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_42, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)L_45))));
				int32_t L_46 = V_8;
				int32_t L_47 = V_4;
				if ((((int32_t)L_46) >= ((int32_t)L_47)))
				{
					goto IL_0198;
				}
			}

IL_0191:
			{
				int32_t L_48 = V_8;
				G_B24_0 = L_48;
				goto IL_019a;
			}

IL_0198:
			{
				int32_t L_49 = V_4;
				G_B24_0 = L_49;
			}

IL_019a:
			{
				V_4 = G_B24_0;
				Queue_t3637523393 * L_50 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_51 = V_0;
				NullCheck(L_50);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_50, L_51);
				goto IL_01e1;
			}

IL_01ad:
			{
				MqttMsgContext_t1493973115 * L_52 = V_0;
				NullCheck(L_52);
				int32_t L_53 = MqttMsgContext_get_Flow_m2085309911(L_52, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_53) == ((uint32_t)1))))
				{
					goto IL_01e1;
				}
			}

IL_01b9:
			{
				MqttMsgPuback_t3000343258 * L_54 = (MqttMsgPuback_t3000343258 *)il2cpp_codegen_object_new(MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var);
				MqttMsgPuback__ctor_m261856467(L_54, /*hidden argument*/NULL);
				V_9 = L_54;
				MqttMsgPuback_t3000343258 * L_55 = V_9;
				MqttMsgBase_t2321119380 * L_56 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_56, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_57 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_56, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				NullCheck(L_55);
				MqttMsgPuback_set_MessageId_m2796226297(L_55, L_57, /*hidden argument*/NULL);
				MqttMsgPuback_t3000343258 * L_58 = V_9;
				MqttClient_Send_m1996534700(__this, L_58, /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_59 = V_1;
				MqttClient_OnMqttMsgReceived_m2172457511(__this, L_59, /*hidden argument*/NULL);
			}

IL_01e1:
			{
				goto IL_08e3;
			}

IL_01e6:
			{
				MqttMsgContext_t1493973115 * L_60 = V_0;
				NullCheck(L_60);
				int32_t L_61 = MqttMsgContext_get_Flow_m2085309911(L_60, /*hidden argument*/NULL);
				if (L_61)
				{
					goto IL_026a;
				}
			}

IL_01f1:
			{
				MqttMsgContext_t1493973115 * L_62 = V_0;
				NullCheck(L_62);
				MqttMsgContext_set_State_m4162879748(L_62, 4, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_63 = V_0;
				int32_t L_64 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				NullCheck(L_63);
				MqttMsgContext_set_Timestamp_m1658145452(L_63, L_64, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_65 = V_0;
				MqttMsgContext_t1493973115 * L_66 = L_65;
				NullCheck(L_66);
				int32_t L_67 = MqttMsgContext_get_Attempt_m45535592(L_66, /*hidden argument*/NULL);
				NullCheck(L_66);
				MqttMsgContext_set_Attempt_m1220111819(L_66, ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1)), /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_68 = V_0;
				NullCheck(L_68);
				int32_t L_69 = MqttMsgContext_get_Attempt_m45535592(L_68, /*hidden argument*/NULL);
				if ((((int32_t)L_69) <= ((int32_t)1)))
				{
					goto IL_0224;
				}
			}

IL_021d:
			{
				MqttMsgBase_t2321119380 * L_70 = V_1;
				NullCheck(L_70);
				MqttMsgBase_set_DupFlag_m389342711(L_70, (bool)1, /*hidden argument*/NULL);
			}

IL_0224:
			{
				MqttMsgBase_t2321119380 * L_71 = V_1;
				MqttClient_Send_m1996534700(__this, L_71, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_72 = __this->get_settings_28();
				NullCheck(L_72);
				int32_t L_73 = MqttSettings_get_DelayOnRetry_m3476805405(L_72, /*hidden argument*/NULL);
				int32_t L_74 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_75 = V_0;
				NullCheck(L_75);
				int32_t L_76 = MqttMsgContext_get_Timestamp_m3667406389(L_75, /*hidden argument*/NULL);
				V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_74, (int32_t)L_76))));
				int32_t L_77 = V_10;
				int32_t L_78 = V_4;
				if ((((int32_t)L_77) >= ((int32_t)L_78)))
				{
					goto IL_0255;
				}
			}

IL_024e:
			{
				int32_t L_79 = V_10;
				G_B34_0 = L_79;
				goto IL_0257;
			}

IL_0255:
			{
				int32_t L_80 = V_4;
				G_B34_0 = L_80;
			}

IL_0257:
			{
				V_4 = G_B34_0;
				Queue_t3637523393 * L_81 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_82 = V_0;
				NullCheck(L_81);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_81, L_82);
				goto IL_02aa;
			}

IL_026a:
			{
				MqttMsgContext_t1493973115 * L_83 = V_0;
				NullCheck(L_83);
				int32_t L_84 = MqttMsgContext_get_Flow_m2085309911(L_83, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_84) == ((uint32_t)1))))
				{
					goto IL_02aa;
				}
			}

IL_0276:
			{
				MqttMsgPubrec_t1898486492 * L_85 = (MqttMsgPubrec_t1898486492 *)il2cpp_codegen_object_new(MqttMsgPubrec_t1898486492_il2cpp_TypeInfo_var);
				MqttMsgPubrec__ctor_m112381699(L_85, /*hidden argument*/NULL);
				V_11 = L_85;
				MqttMsgPubrec_t1898486492 * L_86 = V_11;
				MqttMsgBase_t2321119380 * L_87 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_87, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_88 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_87, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				NullCheck(L_86);
				MqttMsgPubrec_set_MessageId_m788277172(L_86, L_88, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_89 = V_0;
				NullCheck(L_89);
				MqttMsgContext_set_State_m4162879748(L_89, 5, /*hidden argument*/NULL);
				MqttMsgPubrec_t1898486492 * L_90 = V_11;
				MqttClient_Send_m1996534700(__this, L_90, /*hidden argument*/NULL);
				Queue_t3637523393 * L_91 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_92 = V_0;
				NullCheck(L_91);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_91, L_92);
			}

IL_02aa:
			{
				goto IL_08e3;
			}

IL_02af:
			{
				MqttMsgContext_t1493973115 * L_93 = V_0;
				NullCheck(L_93);
				int32_t L_94 = MqttMsgContext_get_Flow_m2085309911(L_93, /*hidden argument*/NULL);
				if (L_94)
				{
					goto IL_045a;
				}
			}

IL_02ba:
			{
				V_3 = (bool)0;
				Queue_t3637523393 * L_95 = __this->get_internalQueue_26();
				V_12 = L_95;
				RuntimeObject * L_96 = V_12;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_96, /*hidden argument*/NULL);
			}

IL_02cb:
			try
			{ // begin try (depth: 3)
				{
					Queue_t3637523393 * L_97 = __this->get_internalQueue_26();
					NullCheck(L_97);
					int32_t L_98 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_97);
					if ((((int32_t)L_98) <= ((int32_t)0)))
					{
						goto IL_02ed;
					}
				}

IL_02dc:
				{
					Queue_t3637523393 * L_99 = __this->get_internalQueue_26();
					NullCheck(L_99);
					RuntimeObject * L_100 = VirtFuncInvoker0< RuntimeObject * >::Invoke(18 /* System.Object System.Collections.Queue::Peek() */, L_99);
					V_2 = ((MqttMsgBase_t2321119380 *)CastclassClass((RuntimeObject*)L_100, MqttMsgBase_t2321119380_il2cpp_TypeInfo_var));
				}

IL_02ed:
				{
					IL2CPP_LEAVE(0x2FA, FINALLY_02f2);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_02f2;
			}

FINALLY_02f2:
			{ // begin finally (depth: 3)
				RuntimeObject * L_101 = V_12;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(754)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(754)
			{
				IL2CPP_JUMP_TBL(0x2FA, IL_02fa)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_02fa:
			{
				MqttMsgBase_t2321119380 * L_102 = V_2;
				if (!L_102)
				{
					goto IL_03cd;
				}
			}

IL_0300:
			{
				MqttMsgBase_t2321119380 * L_103 = V_2;
				NullCheck(L_103);
				uint8_t L_104 = MqttMsgBase_get_Type_m2887293476(L_103, /*hidden argument*/NULL);
				if ((((int32_t)L_104) == ((int32_t)4)))
				{
					goto IL_0326;
				}
			}

IL_030c:
			{
				MqttMsgBase_t2321119380 * L_105 = V_2;
				NullCheck(L_105);
				uint8_t L_106 = MqttMsgBase_get_Type_m2887293476(L_105, /*hidden argument*/NULL);
				if ((((int32_t)L_106) == ((int32_t)((int32_t)9))))
				{
					goto IL_0326;
				}
			}

IL_0319:
			{
				MqttMsgBase_t2321119380 * L_107 = V_2;
				NullCheck(L_107);
				uint8_t L_108 = MqttMsgBase_get_Type_m2887293476(L_107, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_108) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_03cd;
				}
			}

IL_0326:
			{
				MqttMsgBase_t2321119380 * L_109 = V_1;
				NullCheck(L_109);
				uint8_t L_110 = MqttMsgBase_get_Type_m2887293476(L_109, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_110) == ((uint32_t)3))))
				{
					goto IL_034d;
				}
			}

IL_0332:
			{
				MqttMsgBase_t2321119380 * L_111 = V_2;
				NullCheck(((MqttMsgPuback_t3000343258 *)CastclassClass((RuntimeObject*)L_111, MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var)));
				uint16_t L_112 = MqttMsgPuback_get_MessageId_m3009824526(((MqttMsgPuback_t3000343258 *)CastclassClass((RuntimeObject*)L_111, MqttMsgPuback_t3000343258_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_113 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_113, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_114 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_113, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				if ((((int32_t)L_112) == ((int32_t)L_114)))
				{
					goto IL_039c;
				}
			}

IL_034d:
			{
				MqttMsgBase_t2321119380 * L_115 = V_1;
				NullCheck(L_115);
				uint8_t L_116 = MqttMsgBase_get_Type_m2887293476(L_115, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_116) == ((uint32_t)8))))
				{
					goto IL_0374;
				}
			}

IL_0359:
			{
				MqttMsgBase_t2321119380 * L_117 = V_2;
				NullCheck(((MqttMsgSuback_t3000343093 *)CastclassClass((RuntimeObject*)L_117, MqttMsgSuback_t3000343093_il2cpp_TypeInfo_var)));
				uint16_t L_118 = MqttMsgSuback_get_MessageId_m1708504470(((MqttMsgSuback_t3000343093 *)CastclassClass((RuntimeObject*)L_117, MqttMsgSuback_t3000343093_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_119 = V_1;
				NullCheck(((MqttMsgSubscribe_t4232534475 *)CastclassClass((RuntimeObject*)L_119, MqttMsgSubscribe_t4232534475_il2cpp_TypeInfo_var)));
				uint16_t L_120 = MqttMsgSubscribe_get_MessageId_m1906184073(((MqttMsgSubscribe_t4232534475 *)CastclassClass((RuntimeObject*)L_119, MqttMsgSubscribe_t4232534475_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				if ((((int32_t)L_118) == ((int32_t)L_120)))
				{
					goto IL_039c;
				}
			}

IL_0374:
			{
				MqttMsgBase_t2321119380 * L_121 = V_1;
				NullCheck(L_121);
				uint8_t L_122 = MqttMsgBase_get_Type_m2887293476(L_121, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_122) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_03cd;
				}
			}

IL_0381:
			{
				MqttMsgBase_t2321119380 * L_123 = V_2;
				NullCheck(((MqttMsgUnsuback_t824663444 *)CastclassClass((RuntimeObject*)L_123, MqttMsgUnsuback_t824663444_il2cpp_TypeInfo_var)));
				uint16_t L_124 = MqttMsgUnsuback_get_MessageId_m455597113(((MqttMsgUnsuback_t824663444 *)CastclassClass((RuntimeObject*)L_123, MqttMsgUnsuback_t824663444_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_125 = V_1;
				NullCheck(((MqttMsgUnsubscribe_t3220791601 *)CastclassClass((RuntimeObject*)L_125, MqttMsgUnsubscribe_t3220791601_il2cpp_TypeInfo_var)));
				uint16_t L_126 = MqttMsgUnsubscribe_get_MessageId_m1937183691(((MqttMsgUnsubscribe_t3220791601 *)CastclassClass((RuntimeObject*)L_125, MqttMsgUnsubscribe_t3220791601_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_124) == ((uint32_t)L_126))))
				{
					goto IL_03cd;
				}
			}

IL_039c:
			{
				Queue_t3637523393 * L_127 = __this->get_internalQueue_26();
				V_13 = L_127;
				RuntimeObject * L_128 = V_13;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_128, /*hidden argument*/NULL);
			}

IL_03ab:
			try
			{ // begin try (depth: 3)
				Queue_t3637523393 * L_129 = __this->get_internalQueue_26();
				NullCheck(L_129);
				VirtFuncInvoker0< RuntimeObject * >::Invoke(16 /* System.Object System.Collections.Queue::Dequeue() */, L_129);
				V_3 = (bool)1;
				IL2CPP_LEAVE(0x3C6, FINALLY_03be);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_03be;
			}

FINALLY_03be:
			{ // begin finally (depth: 3)
				RuntimeObject * L_130 = V_13;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_130, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(958)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(958)
			{
				IL2CPP_JUMP_TBL(0x3C6, IL_03c6)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_03c6:
			{
				MqttMsgBase_t2321119380 * L_131 = V_2;
				MqttClient_OnMqttMsgReceived_m2172457511(__this, L_131, /*hidden argument*/NULL);
			}

IL_03cd:
			{
				bool L_132 = V_3;
				if (L_132)
				{
					goto IL_045a;
				}
			}

IL_03d3:
			{
				int32_t L_133 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_134 = V_0;
				NullCheck(L_134);
				int32_t L_135 = MqttMsgContext_get_Timestamp_m3667406389(L_134, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_136 = __this->get_settings_28();
				NullCheck(L_136);
				int32_t L_137 = MqttSettings_get_DelayOnRetry_m3476805405(L_136, /*hidden argument*/NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_133, (int32_t)L_135))) < ((int32_t)L_137)))
				{
					goto IL_0420;
				}
			}

IL_03ef:
			{
				MqttMsgContext_t1493973115 * L_138 = V_0;
				NullCheck(L_138);
				int32_t L_139 = MqttMsgContext_get_Attempt_m45535592(L_138, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_140 = __this->get_settings_28();
				NullCheck(L_140);
				int32_t L_141 = MqttSettings_get_AttemptsOnRetry_m3166769543(L_140, /*hidden argument*/NULL);
				if ((((int32_t)L_139) > ((int32_t)L_141)))
				{
					goto IL_041b;
				}
			}

IL_0405:
			{
				MqttMsgContext_t1493973115 * L_142 = V_0;
				NullCheck(L_142);
				MqttMsgContext_set_State_m4162879748(L_142, 1, /*hidden argument*/NULL);
				Queue_t3637523393 * L_143 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_144 = V_0;
				NullCheck(L_143);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_143, L_144);
				V_4 = 0;
			}

IL_041b:
			{
				goto IL_045a;
			}

IL_0420:
			{
				Queue_t3637523393 * L_145 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_146 = V_0;
				NullCheck(L_145);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_145, L_146);
				MqttSettings_t1362412725 * L_147 = __this->get_settings_28();
				NullCheck(L_147);
				int32_t L_148 = MqttSettings_get_DelayOnRetry_m3476805405(L_147, /*hidden argument*/NULL);
				int32_t L_149 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_150 = V_0;
				NullCheck(L_150);
				int32_t L_151 = MqttMsgContext_get_Timestamp_m3667406389(L_150, /*hidden argument*/NULL);
				V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_148, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)L_151))));
				int32_t L_152 = V_14;
				int32_t L_153 = V_4;
				if ((((int32_t)L_152) >= ((int32_t)L_153)))
				{
					goto IL_0456;
				}
			}

IL_044f:
			{
				int32_t L_154 = V_14;
				G_B66_0 = L_154;
				goto IL_0458;
			}

IL_0456:
			{
				int32_t L_155 = V_4;
				G_B66_0 = L_155;
			}

IL_0458:
			{
				V_4 = G_B66_0;
			}

IL_045a:
			{
				goto IL_08e3;
			}

IL_045f:
			{
				MqttMsgContext_t1493973115 * L_156 = V_0;
				NullCheck(L_156);
				int32_t L_157 = MqttMsgContext_get_Flow_m2085309911(L_156, /*hidden argument*/NULL);
				if (L_157)
				{
					goto IL_0602;
				}
			}

IL_046a:
			{
				V_3 = (bool)0;
				Queue_t3637523393 * L_158 = __this->get_internalQueue_26();
				V_15 = L_158;
				RuntimeObject * L_159 = V_15;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_159, /*hidden argument*/NULL);
			}

IL_047b:
			try
			{ // begin try (depth: 3)
				{
					Queue_t3637523393 * L_160 = __this->get_internalQueue_26();
					NullCheck(L_160);
					int32_t L_161 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_160);
					if ((((int32_t)L_161) <= ((int32_t)0)))
					{
						goto IL_049d;
					}
				}

IL_048c:
				{
					Queue_t3637523393 * L_162 = __this->get_internalQueue_26();
					NullCheck(L_162);
					RuntimeObject * L_163 = VirtFuncInvoker0< RuntimeObject * >::Invoke(18 /* System.Object System.Collections.Queue::Peek() */, L_162);
					V_2 = ((MqttMsgBase_t2321119380 *)CastclassClass((RuntimeObject*)L_163, MqttMsgBase_t2321119380_il2cpp_TypeInfo_var));
				}

IL_049d:
				{
					IL2CPP_LEAVE(0x4AA, FINALLY_04a2);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_04a2;
			}

FINALLY_04a2:
			{ // begin finally (depth: 3)
				RuntimeObject * L_164 = V_15;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_164, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(1186)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1186)
			{
				IL2CPP_JUMP_TBL(0x4AA, IL_04aa)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_04aa:
			{
				MqttMsgBase_t2321119380 * L_165 = V_2;
				if (!L_165)
				{
					goto IL_0575;
				}
			}

IL_04b0:
			{
				MqttMsgBase_t2321119380 * L_166 = V_2;
				NullCheck(L_166);
				uint8_t L_167 = MqttMsgBase_get_Type_m2887293476(L_166, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_167) == ((uint32_t)5))))
				{
					goto IL_0575;
				}
			}

IL_04bc:
			{
				MqttMsgBase_t2321119380 * L_168 = V_2;
				NullCheck(((MqttMsgPubrec_t1898486492 *)CastclassClass((RuntimeObject*)L_168, MqttMsgPubrec_t1898486492_il2cpp_TypeInfo_var)));
				uint16_t L_169 = MqttMsgPubrec_get_MessageId_m716168082(((MqttMsgPubrec_t1898486492 *)CastclassClass((RuntimeObject*)L_168, MqttMsgPubrec_t1898486492_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_170 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_170, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_171 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_170, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_169) == ((uint32_t)L_171))))
				{
					goto IL_0575;
				}
			}

IL_04d7:
			{
				Queue_t3637523393 * L_172 = __this->get_internalQueue_26();
				V_16 = L_172;
				RuntimeObject * L_173 = V_16;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_173, /*hidden argument*/NULL);
			}

IL_04e6:
			try
			{ // begin try (depth: 3)
				Queue_t3637523393 * L_174 = __this->get_internalQueue_26();
				NullCheck(L_174);
				VirtFuncInvoker0< RuntimeObject * >::Invoke(16 /* System.Object System.Collections.Queue::Dequeue() */, L_174);
				V_3 = (bool)1;
				IL2CPP_LEAVE(0x501, FINALLY_04f9);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_04f9;
			}

FINALLY_04f9:
			{ // begin finally (depth: 3)
				RuntimeObject * L_175 = V_16;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_175, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(1273)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1273)
			{
				IL2CPP_JUMP_TBL(0x501, IL_0501)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0501:
			{
				MqttMsgPubrel_t1897503452 * L_176 = (MqttMsgPubrel_t1897503452 *)il2cpp_codegen_object_new(MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var);
				MqttMsgPubrel__ctor_m151899907(L_176, /*hidden argument*/NULL);
				V_17 = L_176;
				MqttMsgPubrel_t1897503452 * L_177 = V_17;
				MqttMsgBase_t2321119380 * L_178 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_178, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_179 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_178, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				NullCheck(L_177);
				MqttMsgPubrel_set_MessageId_m2333365791(L_177, L_179, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_180 = V_0;
				NullCheck(L_180);
				MqttMsgContext_set_State_m4162879748(L_180, 6, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_181 = V_0;
				int32_t L_182 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				NullCheck(L_181);
				MqttMsgContext_set_Timestamp_m1658145452(L_181, L_182, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_183 = V_0;
				NullCheck(L_183);
				MqttMsgContext_set_Attempt_m1220111819(L_183, 1, /*hidden argument*/NULL);
				MqttMsgPubrel_t1897503452 * L_184 = V_17;
				MqttClient_Send_m1996534700(__this, L_184, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_185 = __this->get_settings_28();
				NullCheck(L_185);
				int32_t L_186 = MqttSettings_get_DelayOnRetry_m3476805405(L_185, /*hidden argument*/NULL);
				int32_t L_187 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_188 = V_0;
				NullCheck(L_188);
				int32_t L_189 = MqttMsgContext_get_Timestamp_m3667406389(L_188, /*hidden argument*/NULL);
				V_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_186, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_187, (int32_t)L_189))));
				int32_t L_190 = V_18;
				int32_t L_191 = V_4;
				if ((((int32_t)L_190) >= ((int32_t)L_191)))
				{
					goto IL_0565;
				}
			}

IL_055e:
			{
				int32_t L_192 = V_18;
				G_B83_0 = L_192;
				goto IL_0567;
			}

IL_0565:
			{
				int32_t L_193 = V_4;
				G_B83_0 = L_193;
			}

IL_0567:
			{
				V_4 = G_B83_0;
				Queue_t3637523393 * L_194 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_195 = V_0;
				NullCheck(L_194);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_194, L_195);
			}

IL_0575:
			{
				bool L_196 = V_3;
				if (L_196)
				{
					goto IL_0602;
				}
			}

IL_057b:
			{
				int32_t L_197 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_198 = V_0;
				NullCheck(L_198);
				int32_t L_199 = MqttMsgContext_get_Timestamp_m3667406389(L_198, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_200 = __this->get_settings_28();
				NullCheck(L_200);
				int32_t L_201 = MqttSettings_get_DelayOnRetry_m3476805405(L_200, /*hidden argument*/NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_197, (int32_t)L_199))) < ((int32_t)L_201)))
				{
					goto IL_05c8;
				}
			}

IL_0597:
			{
				MqttMsgContext_t1493973115 * L_202 = V_0;
				NullCheck(L_202);
				int32_t L_203 = MqttMsgContext_get_Attempt_m45535592(L_202, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_204 = __this->get_settings_28();
				NullCheck(L_204);
				int32_t L_205 = MqttSettings_get_AttemptsOnRetry_m3166769543(L_204, /*hidden argument*/NULL);
				if ((((int32_t)L_203) > ((int32_t)L_205)))
				{
					goto IL_05c3;
				}
			}

IL_05ad:
			{
				MqttMsgContext_t1493973115 * L_206 = V_0;
				NullCheck(L_206);
				MqttMsgContext_set_State_m4162879748(L_206, 2, /*hidden argument*/NULL);
				Queue_t3637523393 * L_207 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_208 = V_0;
				NullCheck(L_207);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_207, L_208);
				V_4 = 0;
			}

IL_05c3:
			{
				goto IL_0602;
			}

IL_05c8:
			{
				Queue_t3637523393 * L_209 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_210 = V_0;
				NullCheck(L_209);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_209, L_210);
				MqttSettings_t1362412725 * L_211 = __this->get_settings_28();
				NullCheck(L_211);
				int32_t L_212 = MqttSettings_get_DelayOnRetry_m3476805405(L_211, /*hidden argument*/NULL);
				int32_t L_213 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_214 = V_0;
				NullCheck(L_214);
				int32_t L_215 = MqttMsgContext_get_Timestamp_m3667406389(L_214, /*hidden argument*/NULL);
				V_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_212, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_213, (int32_t)L_215))));
				int32_t L_216 = V_19;
				int32_t L_217 = V_4;
				if ((((int32_t)L_216) >= ((int32_t)L_217)))
				{
					goto IL_05fe;
				}
			}

IL_05f7:
			{
				int32_t L_218 = V_19;
				G_B92_0 = L_218;
				goto IL_0600;
			}

IL_05fe:
			{
				int32_t L_219 = V_4;
				G_B92_0 = L_219;
			}

IL_0600:
			{
				V_4 = G_B92_0;
			}

IL_0602:
			{
				goto IL_08e3;
			}

IL_0607:
			{
				MqttMsgContext_t1493973115 * L_220 = V_0;
				NullCheck(L_220);
				int32_t L_221 = MqttMsgContext_get_Flow_m2085309911(L_220, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_221) == ((uint32_t)1))))
				{
					goto IL_06f0;
				}
			}

IL_0613:
			{
				Queue_t3637523393 * L_222 = __this->get_internalQueue_26();
				V_20 = L_222;
				RuntimeObject * L_223 = V_20;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_223, /*hidden argument*/NULL);
			}

IL_0622:
			try
			{ // begin try (depth: 3)
				{
					Queue_t3637523393 * L_224 = __this->get_internalQueue_26();
					NullCheck(L_224);
					int32_t L_225 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_224);
					if ((((int32_t)L_225) <= ((int32_t)0)))
					{
						goto IL_0644;
					}
				}

IL_0633:
				{
					Queue_t3637523393 * L_226 = __this->get_internalQueue_26();
					NullCheck(L_226);
					RuntimeObject * L_227 = VirtFuncInvoker0< RuntimeObject * >::Invoke(18 /* System.Object System.Collections.Queue::Peek() */, L_226);
					V_2 = ((MqttMsgBase_t2321119380 *)CastclassClass((RuntimeObject*)L_227, MqttMsgBase_t2321119380_il2cpp_TypeInfo_var));
				}

IL_0644:
				{
					IL2CPP_LEAVE(0x651, FINALLY_0649);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0649;
			}

FINALLY_0649:
			{ // begin finally (depth: 3)
				RuntimeObject * L_228 = V_20;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_228, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(1609)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1609)
			{
				IL2CPP_JUMP_TBL(0x651, IL_0651)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0651:
			{
				MqttMsgBase_t2321119380 * L_229 = V_2;
				if (!L_229)
				{
					goto IL_06e4;
				}
			}

IL_0657:
			{
				MqttMsgBase_t2321119380 * L_230 = V_2;
				NullCheck(L_230);
				uint8_t L_231 = MqttMsgBase_get_Type_m2887293476(L_230, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_231) == ((uint32_t)6))))
				{
					goto IL_06e4;
				}
			}

IL_0663:
			{
				MqttMsgBase_t2321119380 * L_232 = V_2;
				NullCheck(((MqttMsgPubrel_t1897503452 *)CastclassClass((RuntimeObject*)L_232, MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var)));
				uint16_t L_233 = MqttMsgPubrel_get_MessageId_m3296907418(((MqttMsgPubrel_t1897503452 *)CastclassClass((RuntimeObject*)L_232, MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_234 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_234, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_235 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_234, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_233) == ((uint32_t)L_235))))
				{
					goto IL_06d3;
				}
			}

IL_067e:
			{
				Queue_t3637523393 * L_236 = __this->get_internalQueue_26();
				V_21 = L_236;
				RuntimeObject * L_237 = V_21;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_237, /*hidden argument*/NULL);
			}

IL_068d:
			try
			{ // begin try (depth: 3)
				Queue_t3637523393 * L_238 = __this->get_internalQueue_26();
				NullCheck(L_238);
				VirtFuncInvoker0< RuntimeObject * >::Invoke(16 /* System.Object System.Collections.Queue::Dequeue() */, L_238);
				IL2CPP_LEAVE(0x6A6, FINALLY_069e);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_069e;
			}

FINALLY_069e:
			{ // begin finally (depth: 3)
				RuntimeObject * L_239 = V_21;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_239, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(1694)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1694)
			{
				IL2CPP_JUMP_TBL(0x6A6, IL_06a6)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_06a6:
			{
				MqttMsgPubcomp_t24488374 * L_240 = (MqttMsgPubcomp_t24488374 *)il2cpp_codegen_object_new(MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var);
				MqttMsgPubcomp__ctor_m2433696329(L_240, /*hidden argument*/NULL);
				V_22 = L_240;
				MqttMsgPubcomp_t24488374 * L_241 = V_22;
				MqttMsgBase_t2321119380 * L_242 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_242, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_243 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_242, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				NullCheck(L_241);
				MqttMsgPubcomp_set_MessageId_m3644641738(L_241, L_243, /*hidden argument*/NULL);
				MqttMsgPubcomp_t24488374 * L_244 = V_22;
				MqttClient_Send_m1996534700(__this, L_244, /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_245 = V_1;
				MqttClient_OnMqttMsgReceived_m2172457511(__this, L_245, /*hidden argument*/NULL);
				goto IL_06df;
			}

IL_06d3:
			{
				Queue_t3637523393 * L_246 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_247 = V_0;
				NullCheck(L_246);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_246, L_247);
			}

IL_06df:
			{
				goto IL_06f0;
			}

IL_06e4:
			{
				Queue_t3637523393 * L_248 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_249 = V_0;
				NullCheck(L_248);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_248, L_249);
			}

IL_06f0:
			{
				goto IL_08e3;
			}

IL_06f5:
			{
				MqttMsgContext_t1493973115 * L_250 = V_0;
				NullCheck(L_250);
				int32_t L_251 = MqttMsgContext_get_Flow_m2085309911(L_250, /*hidden argument*/NULL);
				if (L_251)
				{
					goto IL_082b;
				}
			}

IL_0700:
			{
				V_3 = (bool)0;
				Queue_t3637523393 * L_252 = __this->get_internalQueue_26();
				V_23 = L_252;
				RuntimeObject * L_253 = V_23;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_253, /*hidden argument*/NULL);
			}

IL_0711:
			try
			{ // begin try (depth: 3)
				{
					Queue_t3637523393 * L_254 = __this->get_internalQueue_26();
					NullCheck(L_254);
					int32_t L_255 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.Collections.Queue::get_Count() */, L_254);
					if ((((int32_t)L_255) <= ((int32_t)0)))
					{
						goto IL_0733;
					}
				}

IL_0722:
				{
					Queue_t3637523393 * L_256 = __this->get_internalQueue_26();
					NullCheck(L_256);
					RuntimeObject * L_257 = VirtFuncInvoker0< RuntimeObject * >::Invoke(18 /* System.Object System.Collections.Queue::Peek() */, L_256);
					V_2 = ((MqttMsgBase_t2321119380 *)CastclassClass((RuntimeObject*)L_257, MqttMsgBase_t2321119380_il2cpp_TypeInfo_var));
				}

IL_0733:
				{
					IL2CPP_LEAVE(0x740, FINALLY_0738);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0738;
			}

FINALLY_0738:
			{ // begin finally (depth: 3)
				RuntimeObject * L_258 = V_23;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_258, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(1848)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1848)
			{
				IL2CPP_JUMP_TBL(0x740, IL_0740)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0740:
			{
				MqttMsgBase_t2321119380 * L_259 = V_2;
				if (!L_259)
				{
					goto IL_079e;
				}
			}

IL_0746:
			{
				MqttMsgBase_t2321119380 * L_260 = V_2;
				NullCheck(L_260);
				uint8_t L_261 = MqttMsgBase_get_Type_m2887293476(L_260, /*hidden argument*/NULL);
				if ((!(((uint32_t)L_261) == ((uint32_t)7))))
				{
					goto IL_079e;
				}
			}

IL_0752:
			{
				MqttMsgBase_t2321119380 * L_262 = V_2;
				NullCheck(((MqttMsgPubcomp_t24488374 *)CastclassClass((RuntimeObject*)L_262, MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var)));
				uint16_t L_263 = MqttMsgPubcomp_get_MessageId_m3049482919(((MqttMsgPubcomp_t24488374 *)CastclassClass((RuntimeObject*)L_262, MqttMsgPubcomp_t24488374_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				MqttMsgBase_t2321119380 * L_264 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_264, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_265 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_264, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				if ((!(((uint32_t)L_263) == ((uint32_t)L_265))))
				{
					goto IL_079e;
				}
			}

IL_076d:
			{
				Queue_t3637523393 * L_266 = __this->get_internalQueue_26();
				V_24 = L_266;
				RuntimeObject * L_267 = V_24;
				Monitor_Enter_m2249409497(NULL /*static, unused*/, L_267, /*hidden argument*/NULL);
			}

IL_077c:
			try
			{ // begin try (depth: 3)
				Queue_t3637523393 * L_268 = __this->get_internalQueue_26();
				NullCheck(L_268);
				VirtFuncInvoker0< RuntimeObject * >::Invoke(16 /* System.Object System.Collections.Queue::Dequeue() */, L_268);
				V_3 = (bool)1;
				IL2CPP_LEAVE(0x797, FINALLY_078f);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_078f;
			}

FINALLY_078f:
			{ // begin finally (depth: 3)
				RuntimeObject * L_269 = V_24;
				Monitor_Exit_m3585316909(NULL /*static, unused*/, L_269, /*hidden argument*/NULL);
				IL2CPP_END_FINALLY(1935)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(1935)
			{
				IL2CPP_JUMP_TBL(0x797, IL_0797)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0797:
			{
				MqttMsgBase_t2321119380 * L_270 = V_2;
				MqttClient_OnMqttMsgReceived_m2172457511(__this, L_270, /*hidden argument*/NULL);
			}

IL_079e:
			{
				bool L_271 = V_3;
				if (L_271)
				{
					goto IL_082b;
				}
			}

IL_07a4:
			{
				int32_t L_272 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_273 = V_0;
				NullCheck(L_273);
				int32_t L_274 = MqttMsgContext_get_Timestamp_m3667406389(L_273, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_275 = __this->get_settings_28();
				NullCheck(L_275);
				int32_t L_276 = MqttSettings_get_DelayOnRetry_m3476805405(L_275, /*hidden argument*/NULL);
				if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_272, (int32_t)L_274))) < ((int32_t)L_276)))
				{
					goto IL_07f1;
				}
			}

IL_07c0:
			{
				MqttMsgContext_t1493973115 * L_277 = V_0;
				NullCheck(L_277);
				int32_t L_278 = MqttMsgContext_get_Attempt_m45535592(L_277, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_279 = __this->get_settings_28();
				NullCheck(L_279);
				int32_t L_280 = MqttSettings_get_AttemptsOnRetry_m3166769543(L_279, /*hidden argument*/NULL);
				if ((((int32_t)L_278) >= ((int32_t)L_280)))
				{
					goto IL_07ec;
				}
			}

IL_07d6:
			{
				MqttMsgContext_t1493973115 * L_281 = V_0;
				NullCheck(L_281);
				MqttMsgContext_set_State_m4162879748(L_281, 8, /*hidden argument*/NULL);
				Queue_t3637523393 * L_282 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_283 = V_0;
				NullCheck(L_282);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_282, L_283);
				V_4 = 0;
			}

IL_07ec:
			{
				goto IL_082b;
			}

IL_07f1:
			{
				Queue_t3637523393 * L_284 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_285 = V_0;
				NullCheck(L_284);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_284, L_285);
				MqttSettings_t1362412725 * L_286 = __this->get_settings_28();
				NullCheck(L_286);
				int32_t L_287 = MqttSettings_get_DelayOnRetry_m3476805405(L_286, /*hidden argument*/NULL);
				int32_t L_288 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_289 = V_0;
				NullCheck(L_289);
				int32_t L_290 = MqttMsgContext_get_Timestamp_m3667406389(L_289, /*hidden argument*/NULL);
				V_25 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_287, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_288, (int32_t)L_290))));
				int32_t L_291 = V_25;
				int32_t L_292 = V_4;
				if ((((int32_t)L_291) >= ((int32_t)L_292)))
				{
					goto IL_0827;
				}
			}

IL_0820:
			{
				int32_t L_293 = V_25;
				G_B132_0 = L_293;
				goto IL_0829;
			}

IL_0827:
			{
				int32_t L_294 = V_4;
				G_B132_0 = L_294;
			}

IL_0829:
			{
				V_4 = G_B132_0;
			}

IL_082b:
			{
				goto IL_08e3;
			}

IL_0830:
			{
				goto IL_08e3;
			}

IL_0835:
			{
				MqttMsgContext_t1493973115 * L_295 = V_0;
				NullCheck(L_295);
				int32_t L_296 = MqttMsgContext_get_Flow_m2085309911(L_295, /*hidden argument*/NULL);
				if (L_296)
				{
					goto IL_08cf;
				}
			}

IL_0840:
			{
				MqttMsgPubrel_t1897503452 * L_297 = (MqttMsgPubrel_t1897503452 *)il2cpp_codegen_object_new(MqttMsgPubrel_t1897503452_il2cpp_TypeInfo_var);
				MqttMsgPubrel__ctor_m151899907(L_297, /*hidden argument*/NULL);
				V_26 = L_297;
				MqttMsgPubrel_t1897503452 * L_298 = V_26;
				MqttMsgBase_t2321119380 * L_299 = V_1;
				NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_299, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
				uint16_t L_300 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_299, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
				NullCheck(L_298);
				MqttMsgPubrel_set_MessageId_m2333365791(L_298, L_300, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_301 = V_0;
				NullCheck(L_301);
				MqttMsgContext_set_State_m4162879748(L_301, 6, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_302 = V_0;
				int32_t L_303 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				NullCheck(L_302);
				MqttMsgContext_set_Timestamp_m1658145452(L_302, L_303, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_304 = V_0;
				MqttMsgContext_t1493973115 * L_305 = L_304;
				NullCheck(L_305);
				int32_t L_306 = MqttMsgContext_get_Attempt_m45535592(L_305, /*hidden argument*/NULL);
				NullCheck(L_305);
				MqttMsgContext_set_Attempt_m1220111819(L_305, ((int32_t)il2cpp_codegen_add((int32_t)L_306, (int32_t)1)), /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_307 = V_0;
				NullCheck(L_307);
				int32_t L_308 = MqttMsgContext_get_Attempt_m45535592(L_307, /*hidden argument*/NULL);
				if ((((int32_t)L_308) <= ((int32_t)1)))
				{
					goto IL_088d;
				}
			}

IL_0885:
			{
				MqttMsgPubrel_t1897503452 * L_309 = V_26;
				NullCheck(L_309);
				MqttMsgBase_set_DupFlag_m389342711(L_309, (bool)1, /*hidden argument*/NULL);
			}

IL_088d:
			{
				MqttMsgPubrel_t1897503452 * L_310 = V_26;
				MqttClient_Send_m1996534700(__this, L_310, /*hidden argument*/NULL);
				MqttSettings_t1362412725 * L_311 = __this->get_settings_28();
				NullCheck(L_311);
				int32_t L_312 = MqttSettings_get_DelayOnRetry_m3476805405(L_311, /*hidden argument*/NULL);
				int32_t L_313 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
				MqttMsgContext_t1493973115 * L_314 = V_0;
				NullCheck(L_314);
				int32_t L_315 = MqttMsgContext_get_Timestamp_m3667406389(L_314, /*hidden argument*/NULL);
				V_27 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_312, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_313, (int32_t)L_315))));
				int32_t L_316 = V_27;
				int32_t L_317 = V_4;
				if ((((int32_t)L_316) >= ((int32_t)L_317)))
				{
					goto IL_08bf;
				}
			}

IL_08b8:
			{
				int32_t L_318 = V_27;
				G_B141_0 = L_318;
				goto IL_08c1;
			}

IL_08bf:
			{
				int32_t L_319 = V_4;
				G_B141_0 = L_319;
			}

IL_08c1:
			{
				V_4 = G_B141_0;
				Queue_t3637523393 * L_320 = __this->get_inflightQueue_25();
				MqttMsgContext_t1493973115 * L_321 = V_0;
				NullCheck(L_320);
				VirtActionInvoker1< RuntimeObject * >::Invoke(17 /* System.Void System.Collections.Queue::Enqueue(System.Object) */, L_320, L_321);
			}

IL_08cf:
			{
				goto IL_08e3;
			}

IL_08d4:
			{
				goto IL_08e3;
			}

IL_08d9:
			{
				goto IL_08e3;
			}

IL_08de:
			{
				goto IL_08e3;
			}

IL_08e3:
			{
				int32_t L_322 = V_6;
				if ((((int32_t)L_322) > ((int32_t)0)))
				{
					goto IL_0051;
				}
			}

IL_08eb:
			{
				int32_t L_323 = V_4;
				if ((!(((uint32_t)L_323) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_08fa;
				}
			}

IL_08f7:
			{
				V_4 = (-1);
			}

IL_08fa:
			{
				IL2CPP_LEAVE(0x907, FINALLY_08ff);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_08ff;
		}

FINALLY_08ff:
		{ // begin finally (depth: 2)
			RuntimeObject * L_324 = V_5;
			Monitor_Exit_m3585316909(NULL /*static, unused*/, L_324, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(2303)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(2303)
		{
			IL2CPP_JUMP_TBL(0x907, IL_0907)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0907:
		{
			bool L_325 = __this->get_isRunning_7();
			if (L_325)
			{
				goto IL_0010;
			}
		}

IL_0912:
		{
			goto IL_093c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (MqttCommunicationException_t2651452853_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0917;
		throw e;
	}

CATCH_0917:
	{ // begin catch(uPLibrary.Networking.M2Mqtt.Exceptions.MqttCommunicationException)
		V_28 = ((MqttCommunicationException_t2651452853 *)__exception_local);
		MqttCommunicationException_t2651452853 * L_326 = V_28;
		NullCheck(L_326);
		String_t* L_327 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_326);
		Trace_WriteLine_m1516194618(NULL /*static, unused*/, 1, _stringLiteral3029892227, L_327, /*hidden argument*/NULL);
		MqttClient_Close_m2185175017(__this, /*hidden argument*/NULL);
		MqttClient_OnMqttMsgDisconnected_m2996431297(__this, /*hidden argument*/NULL);
		goto IL_093c;
	} // end catch (depth: 1)

IL_093c:
	{
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient::GetMessageId()
extern "C"  uint16_t MqttClient_GetMessageId_m3961671348 (MqttClient_t1237157870 * __this, const RuntimeMethod* method)
{
	MqttClient_t1237157870 * G_B4_0 = NULL;
	MqttClient_t1237157870 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	MqttClient_t1237157870 * G_B5_1 = NULL;
	{
		uint16_t L_0 = __this->get_messageIdCounter_29();
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		uint16_t L_1 = __this->get_messageIdCounter_29();
		__this->set_messageIdCounter_29((uint16_t)(((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1))))));
		goto IL_0045;
	}

IL_001f:
	{
		uint16_t L_2 = __this->get_messageIdCounter_29();
		G_B3_0 = __this;
		if (!((int32_t)((int32_t)L_2%(int32_t)((int32_t)65535))))
		{
			G_B4_0 = __this;
			goto IL_003f;
		}
	}
	{
		uint16_t L_3 = __this->get_messageIdCounter_29();
		G_B5_0 = (((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)))));
		G_B5_1 = G_B3_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_0040:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_messageIdCounter_29((uint16_t)G_B5_0);
	}

IL_0045:
	{
		uint16_t L_4 = __this->get_messageIdCounter_29();
		return L_4;
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::.ctor(System.UInt16,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttMsgContextFinder__ctor_m2481725027 (MqttMsgContextFinder_t287101668 * __this, uint16_t ___messageId0, int32_t ___flow1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		uint16_t L_0 = ___messageId0;
		MqttMsgContextFinder_set_MessageId_m1118013362(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___flow1;
		MqttMsgContextFinder_set_Flow_m1894536514(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt16 uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_MessageId()
extern "C"  uint16_t MqttMsgContextFinder_get_MessageId_m1973123580 (MqttMsgContextFinder_t287101668 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = __this->get_U3CMessageIdU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_MessageId(System.UInt16)
extern "C"  void MqttMsgContextFinder_set_MessageId_m1118013362 (MqttMsgContextFinder_t287101668 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_U3CMessageIdU3Ek__BackingField_0(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::get_Flow()
extern "C"  int32_t MqttMsgContextFinder_get_Flow_m1867549110 (MqttMsgContextFinder_t287101668 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CFlowU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::set_Flow(uPLibrary.Networking.M2Mqtt.Messages.MqttMsgFlow)
extern "C"  void MqttMsgContextFinder_set_Flow_m1894536514 (MqttMsgContextFinder_t287101668 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CFlowU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgContextFinder::Find(System.Object)
extern "C"  bool MqttMsgContextFinder_Find_m939155610 (MqttMsgContextFinder_t287101668 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttMsgContextFinder_Find_m939155610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MqttMsgContext_t1493973115 * V_0 = NULL;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		V_0 = ((MqttMsgContext_t1493973115 *)CastclassClass((RuntimeObject*)L_0, MqttMsgContext_t1493973115_il2cpp_TypeInfo_var));
		MqttMsgContext_t1493973115 * L_1 = V_0;
		NullCheck(L_1);
		MqttMsgBase_t2321119380 * L_2 = MqttMsgContext_get_Message_m3976154556(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint8_t L_3 = MqttMsgBase_get_Type_m2887293476(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0043;
		}
	}
	{
		MqttMsgContext_t1493973115 * L_4 = V_0;
		NullCheck(L_4);
		MqttMsgBase_t2321119380 * L_5 = MqttMsgContext_get_Message_m3976154556(L_4, /*hidden argument*/NULL);
		NullCheck(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_5, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)));
		uint16_t L_6 = MqttMsgPublish_get_MessageId_m3957849214(((MqttMsgPublish_t1956840664 *)CastclassClass((RuntimeObject*)L_5, MqttMsgPublish_t1956840664_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		uint16_t L_7 = MqttMsgContextFinder_get_MessageId_m1973123580(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		MqttMsgContext_t1493973115 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = MqttMsgContext_get_Flow_m2085309911(L_8, /*hidden argument*/NULL);
		int32_t L_10 = MqttMsgContextFinder_get_Flow_m1867549110(__this, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 0;
	}

IL_0044:
	{
		return (bool)G_B4_0;
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgDisconnectEventHandler__ctor_m1356882663 (MqttMsgDisconnectEventHandler_t848571114 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler::Invoke(System.Object,System.EventArgs)
extern "C"  void MqttMsgDisconnectEventHandler_Invoke_m3562084123 (MqttMsgDisconnectEventHandler_t848571114 * __this, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MqttMsgDisconnectEventHandler_Invoke_m3562084123((MqttMsgDisconnectEventHandler_t848571114 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, EventArgs_t3591816995 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, EventArgs_t3591816995 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, EventArgs_t3591816995 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, EventArgs_t3591816995 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< EventArgs_t3591816995 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< EventArgs_t3591816995 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< EventArgs_t3591816995 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< EventArgs_t3591816995 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, EventArgs_t3591816995 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MqttMsgDisconnectEventHandler_BeginInvoke_m2543063750 (MqttMsgDisconnectEventHandler_t848571114 * __this, RuntimeObject * ___sender0, EventArgs_t3591816995 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgDisconnectEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MqttMsgDisconnectEventHandler_EndInvoke_m595460627 (MqttMsgDisconnectEventHandler_t848571114 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgPublishedEventHandler__ctor_m3614608265 (MqttMsgPublishedEventHandler_t3860164542 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs)
extern "C"  void MqttMsgPublishedEventHandler_Invoke_m2649475026 (MqttMsgPublishedEventHandler_t3860164542 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_t90327050 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MqttMsgPublishedEventHandler_Invoke_m2649475026((MqttMsgPublishedEventHandler_t3860164542 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< MqttMsgPublishedEventArgs_t90327050 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgPublishedEventArgs_t90327050 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgPublishedEventArgs_t90327050 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgPublishedEventArgs_t90327050 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishedEventArgs_t90327050 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishedEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MqttMsgPublishedEventHandler_BeginInvoke_m3415620428 (MqttMsgPublishedEventHandler_t3860164542 * __this, RuntimeObject * ___sender0, MqttMsgPublishedEventArgs_t90327050 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MqttMsgPublishedEventHandler_EndInvoke_m1723320898 (MqttMsgPublishedEventHandler_t3860164542 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgPublishEventHandler__ctor_m3294399465 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs)
extern "C"  void MqttMsgPublishEventHandler_Invoke_m3753111200 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t2350602093 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MqttMsgPublishEventHandler_Invoke_m3753111200((MqttMsgPublishEventHandler_t1923217352 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< MqttMsgPublishEventArgs_t2350602093 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgPublishEventArgs_t2350602093 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgPublishEventArgs_t2350602093 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgPublishEventArgs_t2350602093 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgPublishEventArgs_t2350602093 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgPublishEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MqttMsgPublishEventHandler_BeginInvoke_m433143093 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject * ___sender0, MqttMsgPublishEventArgs_t2350602093 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgPublishEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MqttMsgPublishEventHandler_EndInvoke_m3096925268 (MqttMsgPublishEventHandler_t1923217352 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgSubscribedEventHandler__ctor_m310686553 (MqttMsgSubscribedEventHandler_t2042141578 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs)
extern "C"  void MqttMsgSubscribedEventHandler_Invoke_m4081086823 (MqttMsgSubscribedEventHandler_t2042141578 * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_t3669420413 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MqttMsgSubscribedEventHandler_Invoke_m4081086823((MqttMsgSubscribedEventHandler_t2042141578 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgSubscribedEventArgs_t3669420413 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgSubscribedEventArgs_t3669420413 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgSubscribedEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MqttMsgSubscribedEventHandler_BeginInvoke_m3539432752 (MqttMsgSubscribedEventHandler_t2042141578 * __this, RuntimeObject * ___sender0, MqttMsgSubscribedEventArgs_t3669420413 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgSubscribedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MqttMsgSubscribedEventHandler_EndInvoke_m3991840413 (MqttMsgSubscribedEventHandler_t2042141578 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void MqttMsgUnsubscribedEventHandler__ctor_m3037445177 (MqttMsgUnsubscribedEventHandler_t2087605283 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::Invoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs)
extern "C"  void MqttMsgUnsubscribedEventHandler_Invoke_m742089316 (MqttMsgUnsubscribedEventHandler_t2087605283 * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t2229036016 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MqttMsgUnsubscribedEventHandler_Invoke_m742089316((MqttMsgUnsubscribedEventHandler_t2087605283 *)__this->get_prev_9(), ___sender0, ___e1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
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
						GenericInterfaceActionInvoker1< MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< MqttMsgUnsubscribedEventArgs_t2229036016 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, MqttMsgUnsubscribedEventArgs_t2229036016 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::BeginInvoke(System.Object,uPLibrary.Networking.M2Mqtt.Messages.MqttMsgUnsubscribedEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* MqttMsgUnsubscribedEventHandler_BeginInvoke_m4258925654 (MqttMsgUnsubscribedEventHandler_t2087605283 * __this, RuntimeObject * ___sender0, MqttMsgUnsubscribedEventArgs_t2229036016 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttClient/MqttMsgUnsubscribedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void MqttMsgUnsubscribedEventHandler_EndInvoke_m2153365443 (MqttMsgUnsubscribedEventHandler_t2087605283 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.Net.Sockets.Socket)
extern "C"  void MqttNetworkChannel__ctor_m3556881019 (MqttNetworkChannel_t2078300306 * __this, Socket_t1119025450 * ___socket0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Socket_t1119025450 * L_0 = ___socket0;
		__this->set_socket_3(L_0);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Net.IPAddress,System.Int32)
extern "C"  void MqttNetworkChannel__ctor_m3460508966 (MqttNetworkChannel_t2078300306 * __this, String_t* ___remoteHostName0, IPAddress_t241777590 * ___remoteIpAddress1, int32_t ___remotePort2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___remoteHostName0;
		IPAddress_t241777590 * L_1 = ___remoteIpAddress1;
		int32_t L_2 = ___remotePort2;
		MqttNetworkChannel__ctor_m3461208760(__this, L_0, L_1, L_2, (bool)0, (X509Certificate_t713131622 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::.ctor(System.String,System.Net.IPAddress,System.Int32,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void MqttNetworkChannel__ctor_m3461208760 (MqttNetworkChannel_t2078300306 * __this, String_t* ___remoteHostName0, IPAddress_t241777590 * ___remoteIpAddress1, int32_t ___remotePort2, bool ___secure3, X509Certificate_t713131622 * ___caCert4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___remoteHostName0;
		__this->set_remoteHostName_0(L_0);
		IPAddress_t241777590 * L_1 = ___remoteIpAddress1;
		__this->set_remoteIpAddress_1(L_1);
		int32_t L_2 = ___remotePort2;
		__this->set_remotePort_2(L_2);
		bool L_3 = ___secure3;
		__this->set_secure_4(L_3);
		X509Certificate_t713131622 * L_4 = ___caCert4;
		__this->set_caCert_5(L_4);
		return;
	}
}
// System.String uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemoteHostName()
extern "C"  String_t* MqttNetworkChannel_get_RemoteHostName_m1610999626 (MqttNetworkChannel_t2078300306 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_remoteHostName_0();
		return L_0;
	}
}
// System.Net.IPAddress uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemoteIpAddress()
extern "C"  IPAddress_t241777590 * MqttNetworkChannel_get_RemoteIpAddress_m148902833 (MqttNetworkChannel_t2078300306 * __this, const RuntimeMethod* method)
{
	{
		IPAddress_t241777590 * L_0 = __this->get_remoteIpAddress_1();
		return L_0;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_RemotePort()
extern "C"  int32_t MqttNetworkChannel_get_RemotePort_m3475028842 (MqttNetworkChannel_t2078300306 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_remotePort_2();
		return L_0;
	}
}
// System.Boolean uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::get_DataAvailable()
extern "C"  bool MqttNetworkChannel_get_DataAvailable_m2469467462 (MqttNetworkChannel_t2078300306 * __this, const RuntimeMethod* method)
{
	{
		Socket_t1119025450 * L_0 = __this->get_socket_3();
		NullCheck(L_0);
		int32_t L_1 = Socket_get_Available_m356510663(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Connect()
extern "C"  void MqttNetworkChannel_Connect_m1033884514 (MqttNetworkChannel_t2078300306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttNetworkChannel_Connect_m1033884514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IPAddress_t241777590 * L_0 = __this->get_remoteIpAddress_1();
		int32_t L_1 = IPAddressUtility_GetAddressFamily_m2964101067(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Socket_t1119025450 * L_2 = (Socket_t1119025450 *)il2cpp_codegen_object_new(Socket_t1119025450_il2cpp_TypeInfo_var);
		Socket__ctor_m3479084642(L_2, L_1, 1, 6, /*hidden argument*/NULL);
		__this->set_socket_3(L_2);
		Socket_t1119025450 * L_3 = __this->get_socket_3();
		IPAddress_t241777590 * L_4 = __this->get_remoteIpAddress_1();
		int32_t L_5 = __this->get_remotePort_2();
		IPEndPoint_t3791887218 * L_6 = (IPEndPoint_t3791887218 *)il2cpp_codegen_object_new(IPEndPoint_t3791887218_il2cpp_TypeInfo_var);
		IPEndPoint__ctor_m2833647099(L_6, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Socket_Connect_m798630981(L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Send(System.Byte[])
extern "C"  int32_t MqttNetworkChannel_Send_m248110154 (MqttNetworkChannel_t2078300306 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method)
{
	{
		Socket_t1119025450 * L_0 = __this->get_socket_3();
		ByteU5BU5D_t4116647657* L_1 = ___buffer0;
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		NullCheck(L_2);
		NullCheck(L_0);
		int32_t L_3 = Socket_Send_m2509318470(L_0, L_1, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))), 0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Receive(System.Byte[])
extern "C"  int32_t MqttNetworkChannel_Receive_m3590129611 (MqttNetworkChannel_t2078300306 * __this, ByteU5BU5D_t4116647657* ___buffer0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001d;
	}

IL_0007:
	{
		int32_t L_0 = V_0;
		Socket_t1119025450 * L_1 = __this->get_socket_3();
		ByteU5BU5D_t4116647657* L_2 = ___buffer0;
		int32_t L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = ___buffer0;
		NullCheck(L_4);
		int32_t L_5 = V_0;
		NullCheck(L_1);
		int32_t L_6 = Socket_Receive_m3794758455(L_1, L_2, L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), (int32_t)L_5)), 0, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_6));
	}

IL_001d:
	{
		int32_t L_7 = V_0;
		ByteU5BU5D_t4116647657* L_8 = ___buffer0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_9 = ___buffer0;
		NullCheck(L_9);
		return (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))));
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttNetworkChannel::Close()
extern "C"  void MqttNetworkChannel_Close_m83917432 (MqttNetworkChannel_t2078300306 * __this, const RuntimeMethod* method)
{
	{
		Socket_t1119025450 * L_0 = __this->get_socket_3();
		NullCheck(L_0);
		Socket_Close_m3289097516(L_0, /*hidden argument*/NULL);
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
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::.ctor()
extern "C"  void MqttSettings__ctor_m3493718773 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		MqttSettings_set_Port_m2454531020(__this, ((int32_t)1883), /*hidden argument*/NULL);
		MqttSettings_set_SslPort_m1128224035(__this, ((int32_t)8883), /*hidden argument*/NULL);
		MqttSettings_set_TimeoutOnReceiving_m2707049880(__this, ((int32_t)5000), /*hidden argument*/NULL);
		MqttSettings_set_AttemptsOnRetry_m2681444849(__this, 3, /*hidden argument*/NULL);
		MqttSettings_set_DelayOnRetry_m1897010279(__this, ((int32_t)10000), /*hidden argument*/NULL);
		MqttSettings_set_TimeoutOnConnection_m3854721898(__this, ((int32_t)5000), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_Port()
extern "C"  int32_t MqttSettings_get_Port_m579543544 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CPortU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_Port(System.Int32)
extern "C"  void MqttSettings_set_Port_m2454531020 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CPortU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_SslPort()
extern "C"  int32_t MqttSettings_get_SslPort_m2213736741 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CSslPortU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_SslPort(System.Int32)
extern "C"  void MqttSettings_set_SslPort_m1128224035 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CSslPortU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_TimeoutOnConnection()
extern "C"  int32_t MqttSettings_get_TimeoutOnConnection_m3103211964 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimeoutOnConnectionU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnConnection(System.Int32)
extern "C"  void MqttSettings_set_TimeoutOnConnection_m3854721898 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnConnectionU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_TimeoutOnReceiving()
extern "C"  int32_t MqttSettings_get_TimeoutOnReceiving_m170566938 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTimeoutOnReceivingU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_TimeoutOnReceiving(System.Int32)
extern "C"  void MqttSettings_set_TimeoutOnReceiving_m2707049880 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTimeoutOnReceivingU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_AttemptsOnRetry()
extern "C"  int32_t MqttSettings_get_AttemptsOnRetry_m3166769543 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CAttemptsOnRetryU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_AttemptsOnRetry(System.Int32)
extern "C"  void MqttSettings_set_AttemptsOnRetry_m2681444849 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CAttemptsOnRetryU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Int32 uPLibrary.Networking.M2Mqtt.MqttSettings::get_DelayOnRetry()
extern "C"  int32_t MqttSettings_get_DelayOnRetry_m3476805405 (MqttSettings_t1362412725 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDelayOnRetryU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.MqttSettings::set_DelayOnRetry(System.Int32)
extern "C"  void MqttSettings_set_DelayOnRetry_m1897010279 (MqttSettings_t1362412725 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDelayOnRetryU3Ek__BackingField_11(L_0);
		return;
	}
}
// uPLibrary.Networking.M2Mqtt.MqttSettings uPLibrary.Networking.M2Mqtt.MqttSettings::get_Instance()
extern "C"  MqttSettings_t1362412725 * MqttSettings_get_Instance_m2044335333 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MqttSettings_get_Instance_m2044335333_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MqttSettings_t1362412725 * L_0 = ((MqttSettings_t1362412725_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_t1362412725_il2cpp_TypeInfo_var))->get_instance_12();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MqttSettings_t1362412725 * L_1 = (MqttSettings_t1362412725 *)il2cpp_codegen_object_new(MqttSettings_t1362412725_il2cpp_TypeInfo_var);
		MqttSettings__ctor_m3493718773(L_1, /*hidden argument*/NULL);
		((MqttSettings_t1362412725_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_t1362412725_il2cpp_TypeInfo_var))->set_instance_12(L_1);
	}

IL_0014:
	{
		MqttSettings_t1362412725 * L_2 = ((MqttSettings_t1362412725_StaticFields*)il2cpp_codegen_static_fields_for(MqttSettings_t1362412725_il2cpp_TypeInfo_var))->get_instance_12();
		return L_2;
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
// System.Object uPLibrary.Networking.M2Mqtt.QueueExtension::Get(System.Collections.Queue,uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate)
extern "C"  RuntimeObject * QueueExtension_Get_m3062141218 (RuntimeObject * __this /* static, unused */, Queue_t3637523393 * ___queue0, QueuePredicate_t1615372677 * ___predicate1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QueueExtension_Get_m3062141218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_t3637523393 * L_0 = ___queue0;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(14 /* System.Collections.IEnumerator System.Collections.Queue::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0026;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			QueuePredicate_t1615372677 * L_4 = ___predicate1;
			RuntimeObject * L_5 = V_0;
			NullCheck(L_4);
			bool L_6 = QueuePredicate_Invoke_m3731427557(L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0026;
			}
		}

IL_001f:
		{
			RuntimeObject * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x4C, FINALLY_0036);
		}

IL_0026:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_000c;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			RuntimeObject* L_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_11;
			if (!L_11)
			{
				goto IL_0049;
			}
		}

IL_0043:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_12);
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(54)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		return NULL;
	}

IL_004c:
	{
		RuntimeObject * L_13 = V_2;
		return L_13;
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
// System.Void uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate::.ctor(System.Object,System.IntPtr)
extern "C"  void QueuePredicate__ctor_m3657368705 (QueuePredicate_t1615372677 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate::Invoke(System.Object)
extern "C"  bool QueuePredicate_Invoke_m3731427557 (QueuePredicate_t1615372677 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		QueuePredicate_Invoke_m3731427557((QueuePredicate_t1615372677 *)__this->get_prev_9(), ___item0, method);
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
				typedef bool (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___item0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___item0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___item0);
					else
						result = GenericVirtFuncInvoker1< bool, RuntimeObject * >::Invoke(targetMethod, targetThis, ___item0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___item0);
					else
						result = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___item0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___item0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___item0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___item0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___item0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___item0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___item0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* QueuePredicate_BeginInvoke_m820468505 (QueuePredicate_t1615372677 * __this, RuntimeObject * ___item0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___item0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean uPLibrary.Networking.M2Mqtt.QueueExtension/QueuePredicate::EndInvoke(System.IAsyncResult)
extern "C"  bool QueuePredicate_EndInvoke_m1994674054 (QueuePredicate_t1615372677 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::Debug(System.String,System.Object[])
extern "C"  void Trace_Debug_m2286156421 (RuntimeObject * __this /* static, unused */, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_Debug_m2286156421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriteTrace_t3974110851 * L_0 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		WriteTrace_t3974110851 * L_1 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_2 = ___format0;
		ObjectU5BU5D_t2843939325* L_3 = ___args1;
		NullCheck(L_1);
		WriteTrace_Invoke_m303716756(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String)
extern "C"  void Trace_WriteLine_m980167908 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___format1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m980167908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriteTrace_t3974110851 * L_0 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		WriteTrace_t3974110851 * L_3 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		NullCheck(L_3);
		WriteTrace_Invoke_m303716756(L_3, L_4, ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object)
extern "C"  void Trace_WriteLine_m1516194618 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m1516194618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriteTrace_t3974110851 * L_0 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		WriteTrace_t3974110851 * L_3 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1));
		RuntimeObject * L_6 = ___arg12;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_3);
		WriteTrace_Invoke_m303716756(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object,System.Object)
extern "C"  void Trace_WriteLine_m1827992788 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m1827992788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriteTrace_t3974110851 * L_0 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		WriteTrace_t3974110851 * L_3 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2));
		RuntimeObject * L_6 = ___arg12;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_5;
		RuntimeObject * L_8 = ___arg23;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_3);
		WriteTrace_Invoke_m303716756(L_3, L_4, L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.Trace::WriteLine(uPLibrary.Networking.M2Mqtt.Utility.TraceLevel,System.String,System.Object,System.Object,System.Object)
extern "C"  void Trace_WriteLine_m1537289973 (RuntimeObject * __this /* static, unused */, int32_t ___level0, String_t* ___format1, RuntimeObject * ___arg12, RuntimeObject * ___arg23, RuntimeObject * ___arg34, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Trace_WriteLine_m1537289973_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WriteTrace_t3974110851 * L_0 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = ___level0;
		int32_t L_2 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceLevel_0();
		if ((((int32_t)((int32_t)((int32_t)L_1&(int32_t)L_2))) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		WriteTrace_t3974110851 * L_3 = ((Trace_t376076007_StaticFields*)il2cpp_codegen_static_fields_for(Trace_t376076007_il2cpp_TypeInfo_var))->get_TraceListener_1();
		String_t* L_4 = ___format1;
		ObjectU5BU5D_t2843939325* L_5 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3));
		RuntimeObject * L_6 = ___arg12;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_5;
		RuntimeObject * L_8 = ___arg23;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		RuntimeObject * L_10 = ___arg34;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		NullCheck(L_3);
		WriteTrace_Invoke_m303716756(L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_0035:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteTrace__ctor_m672990861 (WriteTrace_t3974110851 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::Invoke(System.String,System.Object[])
extern "C"  void WriteTrace_Invoke_m303716756 (WriteTrace_t3974110851 * __this, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		WriteTrace_Invoke_m303716756((WriteTrace_t3974110851 *)__this->get_prev_9(), ___format0, ___args1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___format0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___format0, ___args1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___format0, ___args1);
					else
						GenericVirtActionInvoker2< String_t*, ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, targetThis, ___format0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___format0, ___args1);
					else
						VirtActionInvoker2< String_t*, ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___format0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___format0, ___args1, targetMethod);
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
						GenericInterfaceActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, ___format0, ___args1);
					else
						GenericVirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(targetMethod, ___format0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___format0, ___args1);
					else
						VirtActionInvoker1< ObjectU5BU5D_t2843939325* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___format0, ___args1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___format0, ___args1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::BeginInvoke(System.String,System.Object[],System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* WriteTrace_BeginInvoke_m2674271961 (WriteTrace_t3974110851 * __this, String_t* ___format0, ObjectU5BU5D_t2843939325* ___args1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___format0;
	__d_args[1] = ___args1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void uPLibrary.Networking.M2Mqtt.Utility.WriteTrace::EndInvoke(System.IAsyncResult)
extern "C"  void WriteTrace_EndInvoke_m3444254604 (WriteTrace_t3974110851 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
