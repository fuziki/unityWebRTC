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

//	public Texture2D ReceivedTexture2D;

    private RTCVideoFrame receivedVideoFrame;

	private Color32[] pixels_output;
	private GCHandle pixelsHandle_output;
	private IntPtr pixelsPtr_output;

	[DllImport("__Internal")]
	private static extern void CoMuLight_MakePeer();

	[DllImport("__Internal")]
	private static extern void CoMuLight_InputMetalFrame(IntPtr frame);

    [DllImport("__Internal")]
    private static extern void CoMuLight_GetFrame(IntPtr frame);

//    [DllImport("__Internal")]
//    private static extern int CoMuLight_GetFrameWidth();

//    [DllImport("__Internal")]
//    private static extern int CoMuLight_GetFrameHeight();

//    [DllImport("__Internal")]
//    private static extern long CoMuLight_GetFrame_timesatmp_us();


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
//        Texture2D ReceivedTexture2D = new Texture2D(480, 640, TextureFormat.RGBA32, false);
//        pixels_output = ReceivedTexture2D.GetPixels32();
//        pixelsHandle_output = GCHandle.Alloc(pixels_output, GCHandleType.Pinned);
//        pixelsPtr_output = pixelsHandle_output.AddrOfPinnedObject();
    }
    public RTCVideoFrame ReceivedVideoFrame {
        set{
            receivedVideoFrame = value;
            pixels_output = receivedVideoFrame.texture2D.GetPixels32();
            pixelsHandle_output = GCHandle.Alloc(pixels_output, GCHandleType.Pinned);
            pixelsPtr_output = pixelsHandle_output.AddrOfPinnedObject();
        }
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

	public void InputFrame(Texture2D frame, long timestamp_us) 
	{
		CoMuLight_InputMetalFrame(frame.GetNativeTexturePtr());
	}

	public void UpdateTexture(ref Texture2D tex)
	{
//        int width = CoMuLight_GetFrameWidth();
//        int height = CoMuLight_GetFrameHeight();
        int width = tex.width;
        int height = tex.height;
        if(width != tex.width || height != tex.height)
        {
            tex = new Texture2D(width, height, TextureFormat.RGBA32, false);
            pixels_output = tex.GetPixels32();
            pixelsHandle_output = GCHandle.Alloc(pixels_output, GCHandleType.Pinned);
            pixelsPtr_output = pixelsHandle_output.AddrOfPinnedObject();
        }

        CoMuLight_GetFrame(pixelsPtr_output);
        tex.SetPixels32(pixels_output);
        tex.Apply();
	}

    public void Update()
    {
        int width = receivedVideoFrame.texture2D.width;
        int height = receivedVideoFrame.texture2D.height;
        if (width != receivedVideoFrame.texture2D.width || height != receivedVideoFrame.texture2D.height)
        {
            receivedVideoFrame.texture2D = new Texture2D(width, height, TextureFormat.RGBA32, false);
            pixels_output = receivedVideoFrame.texture2D.GetPixels32();
            pixelsHandle_output = GCHandle.Alloc(pixels_output, GCHandleType.Pinned);
            pixelsPtr_output = pixelsHandle_output.AddrOfPinnedObject();
        }

        CoMuLight_GetFrame(pixelsPtr_output);
        receivedVideoFrame.texture2D.SetPixels32(pixels_output);
        receivedVideoFrame.texture2D.Apply();
    }

    public long ReceivedTexture2D_timesatmp_us
    {
        get
        {
//            return CoMuLight_GetFrame_timesatmp_us();
            return 0;
        }
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










