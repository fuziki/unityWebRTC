using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimplePeerConnectionM;
using System;
using System.Runtime.InteropServices;
using System.Threading;





public class WebRtcCoreWindows : WebRtcCore
{


    private PeerConnectionM peer;
    private WebRtcMsgExchanger msgExchanger;

    private byte[] receivedTextureBuffer;
    private bool receivedTextureBufferIsUpdated = false;



    IntPtr inputTexturePixlesPtr;
    Color32[] inputTexturePixels;
    GCHandle inputTextureHandle;

    public int UniquePeerId;

    public WebRtcCoreWindows()
    {
        Close();
        List<string> servers = new List<string>();
        servers.Add("stun: stun.l.google.com:19302");
        peer = new PeerConnectionM(servers, "", "");
        UniquePeerId = peer.GetUniqueId();


        peer.OnLocalSdpReadytoSend += OnLocalSdpReadytoSend;
        peer.OnIceCandiateReadytoSend += OnIceCandiateReadytoSend;
        peer.FramgeGate_onReceived += ReceivedRGBFrame;
        peer.OnFailureMessage += OnFailureMessage;



        peer.AddStream(false);

        ReceivedTexture2D = new Texture2D((int)480, (int)640, TextureFormat.ARGB32, false);
        



        receivedTextureBuffer = new byte[4 * ReceivedTexture2D.height * ReceivedTexture2D.width];

        Debug.Log("Created WebRTC Core for Windows x64");
    }




    public override void Close()
    {
        if (peer == null) return;
        peer.ClosePeerConnection();
        peer = null;
        Debug.Log("WebRTC Closed");
    }

    public override void CreateOffer()
    {
        if (peer == null) return;
        peer.CreateOffer();
        Debug.Log("WebRTC called peer.CreateOffer()");
    }

    public override void Update()
    {
        if (peer == null) return;
        if (receivedTextureBufferIsUpdated)
        {
            ReceivedTexture2D.LoadRawTextureData(receivedTextureBuffer);
            ReceivedTexture2D.Apply();
            receivedTextureBufferIsUpdated = false;
        }

    }


    public override void FrameGate_Input(Texture2D tex)
    {
        if (peer == null) return;
        if (receivedTextureBufferIsUpdated) return;
        inputTexturePixels = tex.GetPixels32();
        inputTextureHandle = GCHandle.Alloc(inputTexturePixels, GCHandleType.Pinned);
        inputTexturePixlesPtr = inputTextureHandle.AddrOfPinnedObject();
        peer.FramgeGate_Input(inputTexturePixlesPtr, (int)tex.width, (int)tex.height);

    }



    public void OnLocalSdpReadytoSend(int id, string type, string sdp)
    {
        Debug.Log("WebRTC OnLocalSdpReadytoSend called. id=" + id + " | type=" + type + " | sdp=" + sdp);
        MsgExchanger.RequiredSendingMessage(type, sdp);
    }

    [Serializable]
    class IceJson
    {
        public IceJson(string candidate, int sdpMlineIndex, string sdpMid)
        {
            Ice = candidate;
            Index = sdpMlineIndex;
            Mid = sdpMid;
        }
        public string Ice;
        public int Index;
        public string Mid;
    }
    public void OnIceCandiateReadytoSend(int id, string candidate, int sdpMlineIndex, string sdpMid)
    {
        MsgExchanger.RequiredSendingMessage("ice", candidate);

        IceJson iceJson = new IceJson(candidate, sdpMlineIndex, sdpMid);
        string jonStr = JsonUtility.ToJson(iceJson);
        MsgExchanger.RequiredSendingMessage("iceJson", jonStr);
    }

    public void ReceivedRGBFrame(int id, IntPtr rgb, uint width, uint height)
    {
        if (receivedTextureBufferIsUpdated) return;
        Marshal.Copy(rgb, receivedTextureBuffer, 0, (int)(4 * width * height));
        receivedTextureBufferIsUpdated = true;

    }



    public void OnFailureMessage(int id, string msg)
    {
        Debug.Log("WebRTC OnFailureMessage called! id=" + id + " msg=" + msg);
    }


    public override void ReceivedMessage(string description, string message)
    {
        if (description == "offer")
        {
            peer.SetRemoteDescription("offer", message);
            peer.CreateAnswer();
        }
        if (description == "answer")
        {
            peer.SetRemoteDescription("answer", message);
        }
        if (description == "ice")
        {
            //            peer.AddIceCandidate(message, 0, "video");
        }
        if (description == "iceJson")
        {
            IceJson iceJson = JsonUtility.FromJson(message, typeof(IceJson)) as IceJson;
            peer.AddIceCandidate(iceJson.Ice, iceJson.Index, iceJson.Mid);
            Debug.Log("WebRtcCtr, " + description + ", " + iceJson.Ice + iceJson.Index + iceJson.Mid);
        }

    }




}














