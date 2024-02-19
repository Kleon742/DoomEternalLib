struct idPacketProcessor
{
    typedef unsigned short sessionId_t;

    typedef unsigned short reliableMessageType_t;

    // Buffer used to reconstruct the msg
    unsigned char msgBuffer[28000]; // Offset: 0x0

    // Write position into the msg reconstruction buffer
    int msgWritePos; // Offset: 0x6D60

    // Fragment sequence number for writing
    int outgoingFragmentSequence; // Offset: 0x6D64

    // Fragment sequence number for reading
    int incomingFragmentSequence; // Offset: 0x6D68

    // Number of dropped fragments
    int droppedFrags; // Offset: 0x6D6C

    // Used to determine if the current send requires fragmenting
    bool fragmentedSend; // Offset: 0x6D70

    // list of unacknowledged reliable messages
    idDataQueue < 28000 > unAckReliables; // Offset: 0x6D78

    // sequence number of the next reliable packet we're going to send to this peer
    int reliableSequenceSend; // Offset: 0xDAF8

    // sequence number of the last reliable packet we've potentially sent
    int reliableSequenceSent; // Offset: 0xDAFC

    // sequence number of the last reliable packet we received from this peer
    int reliableSequenceRecv; // Offset: 0xDB00

    // These are for receiving reliables, you need to get these before the next process call or they will get cleared
    int numReliable; // Offset: 0xDB04

    // We shouldn't have to hold more than this
    unsigned char reliableBuffer[28000]; // Offset: 0xDB08

    idList < const unsigned char * , TAG_IDLIST , false > reliableMsgPtrs; // Offset: 0x14868

    idList < int , TAG_IDLIST , false > reliableMsgSize; // Offset: 0x14880

    // Used to piggy back on the next send to ack reliables
    int queuedReliableAck; // Offset: 0x14898

    idBitMsg unsentMsg; // Offset: 0x148A0

    // Buffer used hold the current msg until it's all sent
    unsigned char unsentBuffer[28000]; // Offset: 0x148D0

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > lastSendTime; // Offset: 0x1B630

    // variables to keep track of the rates
    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > outgoingRateTime; // Offset: 0x1B638

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > outgoingReliableRateTime; // Offset: 0x1B640

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > incomingRateTime; // Offset: 0x1B648

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > incomingReliableRateTime; // Offset: 0x1B650

    int outgoingBytes; // Offset: 0x1B658

    int incomingBytes; // Offset: 0x1B65C

    idArray < float , 6 > rateStats; // Offset: 0x1B660

    int currentOutgoingRate; // Offset: 0x1B678

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > lastOutgoingRateTime; // Offset: 0x1B680

    int lastOutgoingBytes; // Offset: 0x1B688

    int currentIncomingRate; // Offset: 0x1B68C

    idTypestrictTimePoint < typestrictMonotonicTimestampUnique > lastIncomingRateTime; // Offset: 0x1B690

    int lastIncomingBytes; // Offset: 0x1B698

    // counts max size packets we are sending for the net debug hud
    int fragmentAccumulator; // Offset: 0x1B69C

    int packetSentNumber; // Offset: 0x1B6A0

    int packetRecievedNumber; // Offset: 0x1B6A4

    int packetLossCount; // Offset: 0x1B6A8

}; // Size: 0x1B6B0
