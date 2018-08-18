using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimplePeerConnectionM;
using System;
using System.Runtime.InteropServices;
using System.Threading;

public class WebRtcController : MonoBehaviour
{
    private WebRtcCore webRtcCore;

    public GameObject WebRtcMsgExchanger;


    public GameObject[] RenderingTargets;


    public RenderTexture SubCameraTexture;


    // Use this for initialization
    void Start()
    {
		#if UNITY_STANDALONE_WIN || UNITY_EDITOR
        webRtcCore = new WebRtcCoreWindows();
		#elif UNITY_IOS
		webRtcCore = new WebRtcCoreiOS();
		#endif

        webRtcCore.MsgExchanger = WebRtcMsgExchanger.GetComponent<WebRtcMsgExchanger>();

        foreach (GameObject tage in RenderingTargets)
        {
            tage.GetComponent<Renderer>().material.mainTexture = webRtcCore.ReceivedVideoFrame.texture2D;
        }
    }

    public void RequestCreateOffer()
    {
        webRtcCore.CreateOffer();
    }

    // Update is called once per frame
    void Update()
    {
        long timestamp_us = DateTime.Now.Ticks / 10;   //time stamp micro sec
        webRtcCore.FrameGate_Input(SubCameraTexture, timestamp_us);
        webRtcCore.Update();
//        Debug.Log("got frame timestamp is : " + webRtcCore.ReceivedTexture2D_timesatmp_us);
    }


    private void OnDestroy()
    {
        webRtcCore.Close();
    }

    








}



































