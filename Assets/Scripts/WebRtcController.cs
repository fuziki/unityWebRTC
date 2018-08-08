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

    public GameObject webRtcMsgExchanger;


    public GameObject[] RenderingTargets;


    public RenderTexture SubCameraTexture;


    // Use this for initialization
    void Start()
    {
        webRtcCore = new WebRtcCoreWindows();

        webRtcCore.MsgExchanger = webRtcMsgExchanger.GetComponent<WebRtcMsgExchanger>();

        foreach (GameObject tage in RenderingTargets)
        {
            tage.GetComponent<Renderer>().material.mainTexture = webRtcCore.RecievedTexture2D;
        }
    }

    public void RequestCreateOffer()
    {
        webRtcCore.CreateOffer();
    }

    // Update is called once per frame
    void Update()
    {
        webRtcCore.FrameGate_Input(SubCameraTexture);
        webRtcCore.Update();
    }


    private void OnDestroy()
    {
        webRtcCore.Close();
    }

    








}



































