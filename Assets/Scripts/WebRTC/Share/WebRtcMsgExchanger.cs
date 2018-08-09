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
    public void WebRtcCtr_ReceivedMessage(string description, string message)
    {
//        Debug.Log("WebRtcMsgExchanger, " + description + ", " + message);
//        WebRtcCtr.ReceivedMessage(description, message);
        RtcCore.ReceivedMessage(description, message);
    }



    public WebRtcCore RtcCore;



}











