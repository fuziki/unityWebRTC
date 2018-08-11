//
//  Shaders.metal
//  CoMuLight
//
//  Created by fuziki on 2018/07/01.
//  Copyright © 2018年 CoMuLight. All rights reserved.
//

#include <metal_stdlib>
using namespace metal;

//Compute shader for convert YUV to RBG
kernel void kernelYuvToRgb(texture2d<ushort, access::read> textureY[[texture(0)]],
                           texture2d<ushort, access::read> textureU[[texture(1)]],
                           texture2d<ushort, access::read> textureV[[texture(2)]],
                           texture2d<float, access::write> dest [[ texture(3) ]],
//                           device ushort *output [[ buffer(0) ]],
                           uint2 gid [[ thread_position_in_grid ]]) {
    float y = float(textureY.read(gid).r) / 255.f;  //ushort(0-255) -> unit(0f-1f)
    float u = float(textureU.read(uint2(gid.x/2, gid.y/2)).r) / 255.f - 0.5;
    float v = float(textureV.read(uint2(gid.x/2, gid.y/2)).r) / 255.f - 0.5;
    float r = y + 1.403 * v;            //yuv -> rbg
    float g = y - 0.344 * u - 0.714 * v;
    float b = y + 1.770 * u;
    r = pow(r, 1.1);    //gamma correction
    g = pow(g, 1.1);    //down blightness
    b = pow(b, 1.1);    //https://en.wikipedia.org/wiki/Gamma_correction
    dest.write(float4(r, g, b, 1.0), gid);
}







