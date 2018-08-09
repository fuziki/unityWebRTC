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
		CoMuLogger_Log("this is callback " + type + ", " + sdp);
	}


    public WebRtcCoreiOS()
    {		
		CoMuLogger_Log("WebRtcCoreiOS is creating");
		peer = new PeerConnectioniOS();
		peer.OnLocalSdpReady += SdpReadyCallback;
		CoMuLogger_Log("WebRtcCoreiOS is created");
		peer.CallTest();
    }

    public override void Close()
    {
		CoMuLogger_Log("WebRtcCoreiOS is closed");
    }

    public override void CreateOffer()
    {
		CoMuLogger_Log("WebRtcCoreiOS is required creating offer");
    }

    public override void Update()
    {
    }

    public override void FrameGate_Input(RenderTexture rtex)
    {
    }

    public override void FrameGate_Input(Texture2D tex)
    {
    }



    public override void RecievedMessage(string description, string message)
    {
    }




}












