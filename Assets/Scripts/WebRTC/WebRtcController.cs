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
            tage.GetComponent<Renderer>().material.mainTexture = webRtcCore.ReceivedTexture2D;
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



































