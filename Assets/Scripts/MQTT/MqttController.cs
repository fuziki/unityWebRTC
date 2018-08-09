using UnityEngine;
using System.Collections;
using System.Net;
using uPLibrary.Networking.M2Mqtt;
using uPLibrary.Networking.M2Mqtt.Messages;
using uPLibrary.Networking.M2Mqtt.Utility;
using uPLibrary.Networking.M2Mqtt.Exceptions;

using System;

public class MqttController : WebRtcMsgExchanger
{
    private MqttClient mqttClient;
    // Use this for initialization
    void Start()
    {
        mqttClient = new MqttClient("192.168.3.4", 1883, false, null);

        mqttClient.MqttMsgPublishReceived += ReceivedMessage;

        string clientId = Guid.NewGuid().ToString();
        mqttClient.Connect(clientId);

        mqttClient.Subscribe(new string[] { "fuziki/#" }, new byte[] { MqttMsgBase.QOS_LEVEL_AT_MOST_ONCE });

    }
    void ReceivedMessage(object sender, MqttMsgPublishEventArgs msgPublishEventArgs)
    {
        string[] args = msgPublishEventArgs.Topic.Split('/');
        if (args[1] != this.mqttClient.ClientId)
        {
//            Debug.Log("MQTT received message " + msgPublishEventArgs.Topic + ", "
//                + System.Text.Encoding.UTF8.GetString(msgPublishEventArgs.Message));
            this.WebRtcCtr_ReceivedMessage(args[2], System.Text.Encoding.UTF8.GetString(msgPublishEventArgs.Message));
        }
    }
    void SendMessage(string topic, string message)
    {
//        Debug.Log("MQTT send message " + topic + " " + message);
        mqttClient.Publish(topic, System.Text.Encoding.UTF8.GetBytes(message), MqttMsgBase.QOS_LEVEL_EXACTLY_ONCE, false);
    }




    // Update is called once per frame
    void Update()
    {

    }
    private void OnDestroy()
    {
        if (mqttClient == null) return;
        mqttClient.Disconnect();
    }

    public override void RequiredSendingMessage(string description, string message)
    {
//        Debug.Log("MQTT, " + description + ", " + message);
        if (mqttClient == null)
        {
            Debug.Log("MQTT err");
            return;
        }
        if (mqttClient.IsConnected)
            SendMessage("fuziki/" + mqttClient.ClientId + "/" + description, message);
    }





}













