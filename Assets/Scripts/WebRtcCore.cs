using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WebRtcCore
{
    
    
    public Texture2D RecievedTexture2D;


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

    virtual public void FrameGate_Input(Texture2D tex)
    {
    }
    virtual public void FrameGate_Input(RenderTexture tex)
    {
    }

    virtual public void Destroy()
    {
    }

    virtual public void RecievedMessage(string description, string message)
    {
    }
    








}




















