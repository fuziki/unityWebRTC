using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WebRtcCore
{


    public Texture2D ReceivedTexture2D;
    public long ReceivedTexture2D_timesatmp_us;
    private Texture2D inputTexture = null;

    private WebRtcMsgExchanger msgExchanger;
    public WebRtcMsgExchanger MsgExchanger
    {
        set
        {
            this.msgExchanger = value;
            this.msgExchanger.RtcCore = this;
        }
        get
        {
            return this.msgExchanger;
        }
    }

    virtual public void Close()
    {
    }

    virtual public void CreateOffer()
    {
    }


    virtual public void Update()
    {
    }

    virtual public void FrameGate_Input(Texture2D tex, long timestamp_us)
    {
    }
    public void FrameGate_Input(RenderTexture rtex, long timestamp_us)
    {
        if(inputTexture == null) inputTexture = new Texture2D((int)rtex.width, (int)rtex.height, TextureFormat.ARGB32, false);
        RenderTexture currentRT = RenderTexture.active;
        RenderTexture.active = rtex;
        //Now Abailable to send only 480 x 640
        if (inputTexture.width != rtex.width || inputTexture.height != rtex.height)
        {
            inputTexture = new Texture2D((int)rtex.width, (int)rtex.height, TextureFormat.ARGB32, false);
        }
        inputTexture.ReadPixels(new Rect(0, 0, rtex.width, rtex.height), 0, 0);
        inputTexture.Apply();
        RenderTexture.active = currentRT;
        FrameGate_Input(inputTexture, timestamp_us);
    }

    virtual public void Destroy()
    {
    }

    virtual public void ReceivedMessage(string description, string message)
    {
    }
    








}




















