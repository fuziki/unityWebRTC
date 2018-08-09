## �g����
### 1. MQTT Broker�𗧂Ă�
WebRTC�͍ŏ��ɃX�g���[����o�H�̏�����������K�v������܂��B
�T���v���ł�MQTT���g�p���Č������邽�߁AMQTT�̃u���[�J���K�v�ł��B
AWS EC2��ȂǂɁAMosquitto�Ȃǂ��C���X�g�[�����Ă��������B
Mosquitto
https://mosquitto.org/

### 2.MQTT�̃u���[�J�̃A�h���X��ݒ肷��
MqttController.cs��17�s��
 mqttClient = new MqttClient("192.168.3.4", 1883, false, null);
�̃A�h���X�A�|�[�g�����𗧂Ă��u���[�J�ɓK������悤�ɏ��������Ă��������B

### 3.Unity���N������
Unity�̃v���W�F�N�g���Q���PC�ŋN�����܂��B
�N������MQTT���T�[�o�Ǝ����I�ɐڑ����܂��B

### 4.Call Someone�{�^��������
�Q���PC��MQTT�ɐڑ����ꂽ���Ƃ��m�F���A�Е���Call Someone�{�^���������܂��B
�ڑ����m�������ƁA�f���ʐM���J�n���܂��B

## �l�C�e�B�u�v���O�C���̎g����
### WebRtcMsgExchanger
WebRTC��SDP��ICE�̌����̂��߂�WebRtcMsgExchanger���p�������I�u�W�F�N�g���K�v�ł��B
description��message�������[�g��PC�ɂ��̂܂ܑ��M���Ă��������B
���[�J����PC���瑗�M���ׂ����b�Z�[�W���������ꂽ�ꍇ��RequiredSendingMessage���Ă΂�܂��B
�����[�g�����烁�b�Z�[�W����M�����ꍇ�́AWebRtcCtr_ReceivedMessage���g����WebRTC�̃R���g���[���Ƀf�[�^��n���܂��B

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
�ڑ����ꂽpeer�Ƀt���[������́A�󂯎��ꍇ��FrameGate���g���܂��B

�E�t���[���̓��́F
 FramgeGate_Input(IntPtr image, int width, int height)
�t���[������͂�FramgeGate_Input���g���܂��B
image�ɑ��M�������摜��ARGB32�`����2�����z��A���A���������ꂼ��n���܂��B

�E�t���[���̎󂯎��F
FramgeGate_onReceived(IntPtr rgb, int width, int height)
�����[�g��PC����t���[������͂����ƁAFramgeGate_onReceived���Ă΂�܂��B
rgb�͎�M�����摜��2�����z��ł��B
LoadRawTextureData���g���āATexture2D�ɔ��f�����܂��B


## �Ή�OS
���i�K�ł�windows10, x64�ɂ̂ݑΉ����Ă��܂��B
����AiOS�͑Ή�����\��ł��B

