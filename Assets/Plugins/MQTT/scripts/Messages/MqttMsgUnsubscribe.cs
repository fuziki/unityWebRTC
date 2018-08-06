/*
M2Mqtt Project - MQTT Client Library for .Net and GnatMQ MQTT Broker for .NET
Copyright (c) 2014, Paolo Patierno, All rights reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3.0 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library.
*/

using System;
// if NOT .Net Micro Framework
#if (!MF_FRAMEWORK_VERSION_V4_2 && !MF_FRAMEWORK_VERSION_V4_3)
using System.Collections.Generic;
#endif
using System.Collections;
using System.Text;
using uPLibrary.Networking.M2Mqtt.Exceptions;

namespace uPLibrary.Networking.M2Mqtt.Messages
{
    /// <summary>
    /// Class for UNSUBSCRIBE message from client to broker
    /// </summary>
    public class MqttMsgUnsubscribe : MqttMsgBase
    {
        #region Properties...

        /// <summary>
        /// List of topics to unsubscribe
        /// </summary>
        public string[] Topics
        {
            get { return this.topics; }
            set { this.topics = value; }
        }

        /// <summary>
        /// Message identifier
        /// </summary>
        public ushort MessageId
        {
            get { return this.messageId; }
            set { this.messageId = value; }
        }

        #endregion

        // topics to unsubscribe
        string[] topics;
        // message identifier
        ushort messageId;

        /// <summary>
        /// Constructor
        /// </summary>
        public MqttMsgUnsubscribe()
        {
            this.type = MQTT_MSG_UNSUBSCRIBE_TYPE;
        }
        
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="topics">List of topics to unsubscribe</param>
        public MqttMsgUnsubscribe(string[] topics)
        {
            this.type = MQTT_MSG_UNSUBSCRIBE_TYPE;

            this.topics = topics;

            // UNSUBSCRIBE message uses QoS Level 1
            this.qosLevel = QOS_LEVEL_AT_LEAST_ONCE;
        }

        /// <summary>
        /// Parse bytes for a UNSUBSCRIBE message
        /// </summary>
        /// <param name="fixedHeaderFirstByte">First fixed header byte</param>
        /// <param name="channel">Channel connected to the broker</param>
        /// <returns>UNSUBSCRIBE message instance</returns>
        public static MqttMsgUnsubscribe Parse(byte fixedHeaderFirstByte, IMqttNetworkChannel channel)
        {
            byte[] buffer;
            int index = 0;
            byte[] topicUtf8;
            int topicUtf8Length;
            MqttMsgUnsubscribe msg = new MqttMsgUnsubscribe();

            // get remaining length and allocate buffer
            int remainingLength = MqttMsgBase.decodeRemainingLength(channel);
            buffer = new byte[remainingLength];

            // read bytes from socket...
            int received = channel.Receive(buffer);

            // read QoS level from fixed header
            msg.qosLevel = (byte)((fixedHeaderFirstByte & QOS_LEVEL_MASK) >> QOS_LEVEL_OFFSET);
            // read DUP flag from fixed header
            msg.dupFlag = (((fixedHeaderFirstByte & DUP_FLAG_MASK) >> DUP_FLAG_OFFSET) == 0x01);
            // retain flag not used
            msg.retain = false;

            // message id
            msg.messageId = (ushort)((buffer[index++] << 8) & 0xFF00);
            msg.messageId |= (buffer[index++]);

            // payload contains topics
            // NOTE : before, I don't know how many topics will be in the payload (so use List)

// if .Net Micro Framework
#if (MF_FRAMEWORK_VERSION_V4_2 || MF_FRAMEWORK_VERSION_V4_3)
            IList tmpTopics = new ArrayList();
// else other frameworks (.Net, .Net Compact, Mono, Windows Phone) 
#else
            IList<String> tmpTopics = new List<String>();
#endif
            do
            {
                // topic name
                topicUtf8Length = ((buffer[index++] << 8) & 0xFF00);
                topicUtf8Length |= buffer[index++];
                topicUtf8 = new byte[topicUtf8Length];
                Array.Copy(buffer, index, topicUtf8, 0, topicUtf8Length);
                index += topicUtf8Length;
                tmpTopics.Add(new String(Encoding.UTF8.GetChars(topicUtf8)));
            } while (index < remainingLength);

            // copy from list to array
            msg.topics = new string[tmpTopics.Count];
            for (int i = 0; i < tmpTopics.Count; i++)
            {
                msg.topics[i] = (string)tmpTopics[i];
            }

            return msg;
        }

        public override byte[] GetBytes()
        {
            int fixedHeaderSize = 0;
            int varHeaderSize = 0;
            int payloadSize = 0;
            int remainingLength = 0;
            byte[] buffer;
            int index = 0;

            // topics list empty
            if ((this.topics == null) || (this.topics.Length == 0))
                throw new MqttClientException(MqttClientErrorCode.TopicsEmpty);

            // message identifier
            varHeaderSize += MESSAGE_ID_SIZE;

            int topicIdx = 0;
            byte[][] topicsUtf8 = new byte[this.topics.Length][];

            for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
            {
                // check topic length
                if ((this.topics[topicIdx].Length < MIN_TOPIC_LENGTH) || (this.topics[topicIdx].Length > MAX_TOPIC_LENGTH))
                    throw new MqttClientException(MqttClientErrorCode.TopicLength);

                topicsUtf8[topicIdx] = Encoding.UTF8.GetBytes(this.topics[topicIdx]);
                payloadSize += 2; // topic size (MSB, LSB)
                payloadSize += topicsUtf8[topicIdx].Length;
            }

            remainingLength += (varHeaderSize + payloadSize);

            // first byte of fixed header
            fixedHeaderSize = 1;

            int temp = remainingLength;
            // increase fixed header size based on remaining length
            // (each remaining length byte can encode until 128)
            do
            {
                fixedHeaderSize++;
                temp = temp / 128;
            } while (temp > 0);

            // allocate buffer for message
            buffer = new byte[fixedHeaderSize + varHeaderSize + payloadSize];

            // first fixed header byte
            buffer[index] = (byte)((MQTT_MSG_UNSUBSCRIBE_TYPE << MSG_TYPE_OFFSET) |
                                   (this.qosLevel << QOS_LEVEL_OFFSET));
            buffer[index] |= this.dupFlag ? (byte)(1 << DUP_FLAG_OFFSET) : (byte)0x00;
            index++;

            // encode remaining length
            index = this.encodeRemainingLength(remainingLength, buffer, index);

            // check message identifier assigned
            if (this.messageId == 0)
                throw new MqttClientException(MqttClientErrorCode.WrongMessageId);
            buffer[index++] = (byte)((messageId >> 8) & 0x00FF); // MSB
            buffer[index++] = (byte)(messageId & 0x00FF); // LSB 

            topicIdx = 0;
            for (topicIdx = 0; topicIdx < this.topics.Length; topicIdx++)
            {
                // topic name
                buffer[index++] = (byte)((topicsUtf8[topicIdx].Length >> 8) & 0x00FF); // MSB
                buffer[index++] = (byte)(topicsUtf8[topicIdx].Length & 0x00FF); // LSB
                Array.Copy(topicsUtf8[topicIdx], 0, buffer, index, topicsUtf8[topicIdx].Length);
                index += topicsUtf8[topicIdx].Length;
            }
            
            return buffer;
        }

        public override string ToString()
        {
#if DEBUG
            return this.GetDebugString(
                "UNSUBSCRIBE",
                new object[] { "messageId", "topics" },
                new object[] { this.messageId, this.topics });
#else
            return base.ToString();
#endif
        }
    }
}
