using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;
using System.Threading;
using AOT;


// A managed wrapper up class for the native c style peer connection APIs.
public class PeerConnectioniOS
{

	[DllImport("__Internal")]
	private static extern void CoMuLogger_Log(string msg);


	[DllImport("__Internal")]
	private static extern IntPtr CoMuLight_makeNative();



	[DllImport("__Internal")]
	private static extern void CoMuLight_RegisterSdpReady(SDPREADY_Delegate callback);


	public void CallTest() {
		CoMuLight_makeNative();
	}



	public PeerConnectioniOS()
	{
		RegisterCallbacks();
	}
	private void RegisterCallbacks()
	{
		CoMuLogger_Log("RegisterCallbacks");
		CoMuLight_RegisterSdpReady(RaiseLocalSdpReadytoSend);
	}





	//for callback system start //naga!
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	public delegate void SDPREADY_Delegate(string type, string sdp);
	private static event SDPREADY_Delegate onSdpReadyDelegate;
	public event SDPREADY_Delegate OnLocalSdpReady {
		add { onSdpReadyDelegate += value; }
		remove { onSdpReadyDelegate -= value; }
	}
	[MonoPInvokeCallback(typeof(SDPREADY_Delegate))]
	private static void RaiseLocalSdpReadytoSend(string type, string sdp)
	{
		if (onSdpReadyDelegate != null) onSdpReadyDelegate(type, sdp);
	}
	//end





}










