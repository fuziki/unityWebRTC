## 使い方
### 1. MQTT Brokerを立てる
WebRTCは最初にストリームや経路の情報を交換する必要があります。
サンプルではMQTTを使用して交換するため、MQTTのブローカが必要です。
AWS EC2上などに、Mosquittoなどをインストールしてください。
Mosquitto
https://mosquitto.org/

### 2.MQTTのブローカのアドレスを設定する
MqttController.csの17行目
 mqttClient = new MqttClient("192.168.3.4", 1883, false, null);
のアドレス、ポート部分を立てたブローカに適合するように書き直してください。

### 3.Unityを起動する
Unityのプロジェクトを２台のPCで起動します。
起動時にMQTTがサーバと自動的に接続します。

### 4.Call Someoneボタンを押す
２台のPCがMQTTに接続されたことを確認し、片方のCall Someoneボタンを押します。
接続が確立されると、映像通信が開始します。

## ネイティブプラグインの使い方
### WebRtcMsgExchanger
WebRTCのSDPとICEの交換のためにWebRtcMsgExchangerを継承したオブジェクトが必要です。
descriptionとmessageをリモートのPCにそのまま送信してください。
ローカル側PCから送信すべきメッセージが生成された場合はRequiredSendingMessageが呼ばれます。
リモート側からメッセージを受信した場合は、WebRtcCtr_ReceivedMessageを使ってWebRTCのコントローラにデータを渡します。

```csharp:WebRtcMsgExchanger.cs

public class WebRtcMsgExchanger: MonoBehaviour
{
    public WebRtcController WebRtcCtr;
    virtual public void RequiredSendingMessage(string description, string message)
    {
//        Debug.Log("WebRtcMsgExchanger, " + description + ", " + message);
    }
    public void WebRtcCtr_ReceivedMessage(string description, string message)
    {
//        Debug.Log("WebRtcMsgExchanger, " + description + ", " + message);
        WebRtcCtr.ReceivedMessage(description, message);
    }
}

```


### FrameGate
接続されたpeerにフレームを入力、受け取る場合はFrameGateを使います。

・フレームの入力：
 FramgeGate_Input(IntPtr image, int width, int height)
フレームを入力はFramgeGate_Inputを使います。
imageに送信したい画像のARGB32形式の2次元配列、幅、高さをそれぞれ渡します。

・フレームの受け取り：
FramgeGate_onReceived(IntPtr rgb, int width, int height)
リモートのPCからフレームを入力されると、FramgeGate_onReceivedが呼ばれます。
rgbは受信した画像の2次元配列です。
LoadRawTextureDataを使って、Texture2Dに反映させます。


## 対応OS
現段階ではwindows10, x64にのみ対応しています。
今後、iOSは対応する予定です。

