using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimplePeerConnectionM;
using System;
using System.Runtime.InteropServices;
using System.Threading;

public class WebRtcController : MonoBehaviour
{

    public GameObject webRtcMsgExchanger;

    PeerConnectionM peer;


    WebRtcMsgExchanger MsgExchanger;

    public GameObject RenderingTarget;

    Texture2D tex;
    byte[] renderingBuffer;
    bool textureDataIsUpdated = false;

    public RenderTexture SubCameraTexture;
    Texture2D inputTexture;
    IntPtr texPixlesPtr;
    Color32[] pixels;
    GCHandle handle;

    // Use this for initialization
    void Start()
    {
        Debug.Log("WebRTC Sample.Start() + " + " thread: " + Thread.CurrentThread.ManagedThreadId + ":" + Thread.CurrentThread.Name);
        tex = new Texture2D((int)480, (int)640, TextureFormat.ARGB32, false);
        RenderingTarget.GetComponent<Renderer>().material.mainTexture = tex;
        renderingBuffer = new byte[4 * tex.height * tex.width];

        inputTexture = new Texture2D((int)480, (int)640, TextureFormat.ARGB32, false);

        Close();
        InitWebRTC();
    }

    public void InitWebRTC()
    {
        List<string> servers = new List<string>();
        servers.Add("stun: stun.l.google.com:19302");
        peer = new PeerConnectionM(servers, "", "");
        int id = peer.GetUniqueId();
        Debug.Log("WebRTC PeerConnectionM.GetUniqueId() : " + id);

        peer.OnLocalSdpReadytoSend += OnLocalSdpReadytoSend;
        peer.OnIceCandiateReadytoSend += OnIceCandiateReadytoSend;
        peer.FramgeGate_onRecieved += RecievedRGBFrame;
        peer.OnFailureMessage += OnFailureMessage;



        MsgExchanger = webRtcMsgExchanger.GetComponent<WebRtcMsgExchanger>();
        MsgExchanger.WebRtcCtr = this;
        peer.AddStream(false);

    }



    public void Close()
    {
        if (peer != null)
        {
            peer.ClosePeerConnection();
            peer = null;
        }
    }

    public void OfferWithCamera()
    {
//        Close();
//        InitWebRTC();
        if (peer != null)
        {
//            peer.AddStream(false);
            Debug.Log("WebRTC calling peer.CreateOffer()");
            peer.CreateOffer();
            Debug.Log("WebRTC called peer.CreateOffer()");
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (textureDataIsUpdated)
        {
            tex.LoadRawTextureData(renderingBuffer);
            tex.Apply();


            RenderTexture currentRT = RenderTexture.active;
            RenderTexture.active = SubCameraTexture;
            inputTexture.ReadPixels(new Rect(0, 0, SubCameraTexture.width, SubCameraTexture.height), 0, 0);
            inputTexture.Apply();
            RenderTexture.active = currentRT;
            pixels = inputTexture.GetPixels32();
            handle = GCHandle.Alloc(pixels, GCHandleType.Pinned);
            texPixlesPtr = handle.AddrOfPinnedObject();
            peer.FramgeGate_Input(texPixlesPtr, (int)tex.width, (int)tex.height);

            textureDataIsUpdated = false;
        }

    }
    private void OnDestroy()
    {
        if(peer != null)
            peer.ClosePeerConnection();
    }

    public void OnLocalSdpReadytoSend(int id, string type, string sdp)
    {
        Debug.Log("WebRTC OnLocalSdpReadytoSend called. id=" + id + " | type=" + type + " | sdp=" + sdp);
        // send offer
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
//        Debug.Log("WebRTC OnIceCandiateReadytoSend called. id=" + id + " candidate=" + candidate + " sdpMid=" + sdpMid + " sdpMlineIndex=" + sdpMlineIndex);
        MsgExchanger.RequiredSendingMessage("ice", candidate);


        IceJson iceJson = new IceJson(candidate, sdpMlineIndex, sdpMid);
        string jonStr = JsonUtility.ToJson(iceJson);

        Debug.Log("WebRTC ice json : " + jonStr);

        MsgExchanger.RequiredSendingMessage("iceJson", jonStr);


    }

    public void RecievedRGBFrame(int id, IntPtr rgb, uint width, uint height)
    {
        if (textureDataIsUpdated) return;
        Marshal.Copy(rgb, renderingBuffer, 0 , (int)(4 * width * height));
        textureDataIsUpdated = true;

    }



    public void OnFailureMessage(int id, string msg)
    {
        Debug.Log("WebRTC OnFailureMessage called! id=" + id + " msg=" + msg);
    }


    public void RecievedMessage(string description, string message)
    {
//        Debug.Log("WebRtcCtr, " + description + ", " + message);
        if(description == "offer")
        {
            peer.SetRemoteDescription("offer", message);
            peer.CreateAnswer();
        }
        if(description == "answer")
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





















