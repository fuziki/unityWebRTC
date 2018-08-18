using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RTCVideoFrame {

    public Texture2D texture2D;
    public long timestamp_us;
    public RTCVideoFrame(Texture2D tex, long  ts_us)
    {
        texture2D = tex;
        timestamp_us = ts_us;
    }
    public void SetTexture2DbyRenderTexture(RenderTexture rtex)
    {
        if (texture2D == null) texture2D = new Texture2D((int)rtex.width, (int)rtex.height, TextureFormat.ARGB32, false);
        RenderTexture currentRT = RenderTexture.active;
        RenderTexture.active = rtex;
        if (texture2D.width != rtex.width || texture2D.height != rtex.height)
        {
            texture2D = new Texture2D((int)rtex.width, (int)rtex.height, TextureFormat.ARGB32, false);
        }
        texture2D.ReadPixels(new Rect(0, 0, rtex.width, rtex.height), 0, 0);
        texture2D.Apply();
        RenderTexture.active = currentRT;
    }

}







