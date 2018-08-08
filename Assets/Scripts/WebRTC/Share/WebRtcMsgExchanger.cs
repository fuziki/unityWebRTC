using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WebRtcMsgExchanger: MonoBehaviour
{
//    public WebRtcController WebRtcCtr;
    virtual public void RequiredSendingMessage(string description, string message)
    {
//        Debug.Log("WebRtcMsgExchanger, " + description + ", " + message);
    }
    public void WebRtcCtr_RecievedMessage(string description, string message)
    {
//        Debug.Log("WebRtcMsgExchanger, " + description + ", " + message);
//        WebRtcCtr.RecievedMessage(description, message);
        RtcCore.RecievedMessage(description, message);
    }



    public WebRtcCore RtcCore;



}











