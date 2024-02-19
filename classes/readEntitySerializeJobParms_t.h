struct readEntitySerializeJobParms_t
{
    entitySerializeParms_t serializeParms; // Offset: 0x0

    idEntity* entityToSerialize; // Offset: 0x18

    idSnapShot::objectState_t* objectState; // Offset: 0x20

    int listIndex; // Offset: 0x28

    // Save/Restore state of serializer
    int bitMsgReadCount; // Offset: 0x2C

    int bitMsgReadBit; // Offset: 0x30

}; // Size: 0x38
