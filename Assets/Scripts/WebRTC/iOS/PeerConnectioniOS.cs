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

	public Texture2D ReceivedTexture2D;

	private Color32[] pixels_output;
	private GCHandle pixelsHandle_output;
	private IntPtr pixelsPtr_output;

	[DllImport("__Internal")]
	private static extern void CoMuLight_MakePeer();

	[DllImport("__Internal")]
	private static extern void CoMuLight_InputMetalFrame(IntPtr frame);

	[DllImport("__Internal")]
	private static extern void CoMuLight_GetFrame(IntPtr frame);

	[DllImport("__Internal")]
	private static extern void CoMuLight_RegisterSdpReady(SDPREADY_Delegate callback);

	[DllImport("__Internal")]
	private static extern void CoMuLight_ReceivedSdp(string description, string message);


	[DllImport("__Internal")]
	private static extern void CoMuLogger_Log(string msg);


	public void MakePeer() {
		CoMuLight_MakePeer();
	}



	public PeerConnectioniOS()
	{		
		RegisterCallbacks();
	}
	public void SetReceivedTexture2D(Texture2D tex) {
		ReceivedTexture2D = tex;
		pixels_output = ReceivedTexture2D.GetPixels32();
		pixelsHandle_output = GCHandle.Alloc(pixels_output, GCHandleType.Pinned);
		pixelsPtr_output = pixelsHandle_output.AddrOfPinnedObject();
	}

	private void RegisterCallbacks()
	{
		CoMuLogger_Log("RegisterCallbacks");
		CoMuLight_RegisterSdpReady(RaiseLocalSdpReadytoSend);
	}


	public void ReceivedSdp(string description, string message) 
	{
		CoMuLight_ReceivedSdp(description, message);
	}

	public void InputFrame(Texture2D frame) 
	{
		CoMuLight_InputMetalFrame(frame.GetNativeTexturePtr());
	}

	public void Update() 
	{
		CoMuLight_GetFrame(pixelsPtr_output);
		ReceivedTexture2D.SetPixels32(pixels_output);
		ReceivedTexture2D.Apply();
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










