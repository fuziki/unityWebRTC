using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;
using System.Threading;




public class WebRtcCoreiOS : WebRtcCore
{



	[DllImport("__Internal")]
	private static extern void CoMuLogger_Log(string msg);



	private PeerConnectioniOS peer;



	public void SdpReadyCallback(string type, string sdp)
	{
		CoMuLogger_Log("SdpReadyCallback is type, " + type + ", sdp " + sdp);
		MsgExchanger.RequiredSendingMessage(type, sdp);
	}


    public WebRtcCoreiOS()
    {		
		CoMuLogger_Log("WebRtcCoreiOS is creating");
		peer = new PeerConnectioniOS();
		peer.OnLocalSdpReady += SdpReadyCallback;
		CoMuLogger_Log("WebRtcCoreiOS is created");
        Texture2D tex = new Texture2D(480, 640, TextureFormat.RGBA32, false);
        ReceivedVideoFrame = new RTCVideoFrame(tex, 0);
        peer.ReceivedVideoFrame = this.ReceivedVideoFrame;
    }

    public override void Close()
    {
		CoMuLogger_Log("WebRtcCoreiOS is closed");
    }

    public override void CreateOffer()
    {
		CoMuLogger_Log("WebRtcCoreiOS is required creating offer");
		peer.MakePeer();
    }

    public override void Update()
    {
        peer.Update();
//        peer.UpdateTexture(ref ReceivedTexture2D);
//        this.ReceivedTexture2D_timesatmp_us = peer.ReceivedTexture2D_timesatmp_us;
    }

    public override void FrameGate_Input(Texture2D tex, long timestamp_us)
    {
		peer.InputFrame(tex, timestamp_us);
    }



    public override void ReceivedMessage(string description, string message)
    {
		peer.ReceivedSdp(description, message);
    }




}












