﻿using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace SimplePeerConnectionM
{


    // A managed wrapper up class for the native c style peer connection APIs.
    public class PeerConnectionM
    {
        private const string dllPath = "webrtc_unity_plugin";

        //create a peerconnection with turn servers
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern int CreatePeerConnection(string[] turnUrls, int noOfUrls,
            string username, string credential);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool ClosePeerConnection(int peerConnectionId);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool AddStream(int peerConnectionId, bool audioOnly);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool AddDataChannel(int peerConnectionId);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool CreateOffer(int peerConnectionId);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool CreateAnswer(int peerConnectionId);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool SendDataViaDataChannel(int peerConnectionId, string data);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool SetAudioControl(int peerConnectionId, bool isMute, bool isRecord);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void LocalDataChannelReadyInternalDelegate();
        public delegate void LocalDataChannelReadyDelegate(int id);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool RegisterOnLocalDataChannelReady(
            int peerConnectionId, LocalDataChannelReadyInternalDelegate callback);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void DataFromDataChannelReadyInternalDelegate(string s);
        public delegate void DataFromDataChannelReadyDelegate(int id, string s);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool RegisterOnDataFromDataChannelReady(
            int peerConnectionId, DataFromDataChannelReadyInternalDelegate callback);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void FailureMessageInternalDelegate(string msg);
        public delegate void FailureMessageDelegate(int id, string msg);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool RegisterOnFailure(int peerConnectionId,
            FailureMessageInternalDelegate callback);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void AudioBusReadyInternalDelegate(IntPtr data, int bitsPerSample,
            int sampleRate, int numberOfChannels, int numberOfFrames);
        public delegate void AudioBusReadyDelegate(int id, IntPtr data, int bitsPerSample,
            int sampleRate, int numberOfChannels, int numberOfFrames);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool RegisterOnAudioBusReady(int peerConnectionId,
            AudioBusReadyInternalDelegate callback);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void ReceivedRGBFrameInternalDelegate(
            IntPtr rgb, uint width, uint height);
        public delegate void ReceivedRGBFrameDelegate(int id,
            IntPtr rgb, uint width, uint height);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool FrameGate_RegisterOnReceived(int peerConnectionId,
            ReceivedRGBFrameInternalDelegate callback);


        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void LocalSdpReadytoSendInternalDelegate(string type, string sdp);
        public delegate void LocalSdpReadytoSendDelegate(int id, string type, string sdp);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool RegisterOnLocalSdpReadytoSend(int peerConnectionId,
            LocalSdpReadytoSendInternalDelegate callback);

        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        private delegate void IceCandiateReadytoSendInternalDelegate(
            string candidate, int sdpMlineIndex, string sdpMid);
        public delegate void IceCandiateReadytoSendDelegate(
            int id, string candidate, int sdpMlineIndex, string sdpMid);
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool RegisterOnIceCandiateReadytoSend(
            int peerConnectionId, IceCandiateReadytoSendInternalDelegate callback);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool SetRemoteDescription(int peerConnectionId, string type, string sdp);

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern bool AddIceCandidate(int peerConnectionId, string sdp,
          int sdpMlineindex, string sdpMid);



        //test function
        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern int TestFunction(int num);

        public int CallTestFunction(int num)
        {
            return TestFunction(num);
        }

        [DllImport(dllPath, CallingConvention = CallingConvention.Cdecl)]
        private static extern void FramgeGate_Input(int peer_connection_id, IntPtr image, int width, int height);
        public void FramgeGate_Input(IntPtr image, int width, int height)
        {
            FramgeGate_Input(mPeerConnectionId, image, width, height);
        }

        //

        public PeerConnectionM(List<string> turnUrls, string username, string credential)
        {
            string[] urls = turnUrls != null ? turnUrls.ToArray() : null;
            int length = turnUrls != null ? turnUrls.Count : 0;
            mPeerConnectionId = CreatePeerConnection(urls, length, username, credential);
            RegisterCallbacks();
        }

        public void ClosePeerConnection()
        {
            ClosePeerConnection(mPeerConnectionId);
            mPeerConnectionId = -1;
        }

        // Return -1 if Peerconnection is not available.
        public int GetUniqueId()
        {
            return mPeerConnectionId;
        }

        public void AddStream(bool audioOnly)
        {
            AddStream(mPeerConnectionId, audioOnly);
        }

        public void AddDataChannel()
        {
            AddDataChannel(mPeerConnectionId);
        }

        public void CreateOffer()
        {
            CreateOffer(mPeerConnectionId);
        }

        public void CreateAnswer()
        {
            CreateAnswer(mPeerConnectionId);
        }

        public void SendDataViaDataChannel(string data)
        {
            SendDataViaDataChannel(mPeerConnectionId, data);
        }

        public void SetAudioControl(bool isMute, bool isRecord)
        {
            SetAudioControl(mPeerConnectionId, isMute, isRecord);
        }

        public void SetRemoteDescription(string type, string sdp)
        {
            SetRemoteDescription(mPeerConnectionId, type, sdp);
        }

        public void AddIceCandidate(string candidate, int sdpMlineindex, string sdpMid)
        {
            AddIceCandidate(mPeerConnectionId, candidate, sdpMlineindex, sdpMid);
        }

        private void RegisterCallbacks()
        {
            localDataChannelReadyDelegate = new LocalDataChannelReadyInternalDelegate(
                RaiseLocalDataChannelReady);
            RegisterOnLocalDataChannelReady(mPeerConnectionId, localDataChannelReadyDelegate);

            dataFromDataChannelReadyDelegate = new DataFromDataChannelReadyInternalDelegate(
                RaiseDataFromDataChannelReady);
            RegisterOnDataFromDataChannelReady(mPeerConnectionId, dataFromDataChannelReadyDelegate);

            failureMessageDelegate = new FailureMessageInternalDelegate(RaiseFailureMessage);
            RegisterOnFailure(mPeerConnectionId, failureMessageDelegate);

            audioBusReadyDelegate = new AudioBusReadyInternalDelegate(RaiseAudioBusReady);
            RegisterOnAudioBusReady(mPeerConnectionId, audioBusReadyDelegate);

            FramgeGate_ReceivedDelegate = new ReceivedRGBFrameInternalDelegate(RaiseRGBVideoFrameReady);
            FrameGate_RegisterOnReceived(mPeerConnectionId, FramgeGate_ReceivedDelegate);

            localSdpReadytoSendDelegate = new LocalSdpReadytoSendInternalDelegate(
              RaiseLocalSdpReadytoSend);
            RegisterOnLocalSdpReadytoSend(mPeerConnectionId, localSdpReadytoSendDelegate);

            iceCandiateReadytoSendDelegate =
                new IceCandiateReadytoSendInternalDelegate(RaiseIceCandiateReadytoSend);
            RegisterOnIceCandiateReadytoSend(
                mPeerConnectionId, iceCandiateReadytoSendDelegate);
        }

        private void RaiseLocalDataChannelReady()
        {
            if (OnLocalDataChannelReady != null)
                OnLocalDataChannelReady(mPeerConnectionId);
        }

        private void RaiseDataFromDataChannelReady(string data)
        {
            if (OnDataFromDataChannelReady != null)
                OnDataFromDataChannelReady(mPeerConnectionId, data);
        }

        private void RaiseFailureMessage(string msg)
        {
            if (OnFailureMessage != null)
                OnFailureMessage(mPeerConnectionId, msg);
        }

        private void RaiseAudioBusReady(IntPtr data, int bitsPerSample,
          int sampleRate, int numberOfChannels, int numberOfFrames)
        {
            if (OnAudioBusReady != null)
                OnAudioBusReady(mPeerConnectionId, data, bitsPerSample, sampleRate,
                    numberOfChannels, numberOfFrames);
        }

        private void RaiseRGBVideoFrameReady(IntPtr rgb, uint width, uint height)
        {
            if (FramgeGate_onReceived != null)
                FramgeGate_onReceived(mPeerConnectionId, rgb, width, height);
        }


        private void RaiseLocalSdpReadytoSend(string type, string sdp)
        {
            if (OnLocalSdpReadytoSend != null)
                OnLocalSdpReadytoSend(mPeerConnectionId, type, sdp);
        }

        private void RaiseIceCandiateReadytoSend(string candidate, int sdpMlineIndex, string sdpMid)
        {
            if (OnIceCandiateReadytoSend != null)
                OnIceCandiateReadytoSend(mPeerConnectionId, candidate, sdpMlineIndex, sdpMid);
        }

        /*
        public void AddQueuedIceCandidate(List<IceCandidate> iceCandidateQueue)
        {
            if (iceCandidateQueue != null)
            {
                foreach (IceCandidate ic in iceCandidateQueue)
                {
                    AddIceCandidate(mPeerConnectionId, ic.Candidate, ic.SdpMlineIndex, ic.SdpMid);
                }
            }
        }*/

        private LocalDataChannelReadyInternalDelegate localDataChannelReadyDelegate = null;
        public event LocalDataChannelReadyDelegate OnLocalDataChannelReady;

        private DataFromDataChannelReadyInternalDelegate dataFromDataChannelReadyDelegate = null;
        public event DataFromDataChannelReadyDelegate OnDataFromDataChannelReady;

        private FailureMessageInternalDelegate failureMessageDelegate = null;
        public event FailureMessageDelegate OnFailureMessage;

        private AudioBusReadyInternalDelegate audioBusReadyDelegate = null;
        public event AudioBusReadyDelegate OnAudioBusReady;

        private ReceivedRGBFrameInternalDelegate FramgeGate_ReceivedDelegate = null;
        public event ReceivedRGBFrameDelegate FramgeGate_onReceived;


        private LocalSdpReadytoSendInternalDelegate localSdpReadytoSendDelegate = null;
        public event LocalSdpReadytoSendDelegate OnLocalSdpReadytoSend;

        private IceCandiateReadytoSendInternalDelegate iceCandiateReadytoSendDelegate = null;
        public event IceCandiateReadytoSendDelegate OnIceCandiateReadytoSend;

        private int mPeerConnectionId = -1;
    }






}
















