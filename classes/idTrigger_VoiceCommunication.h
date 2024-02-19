struct idTrigger_VoiceCommunication : idTrigger
{
    enum voFace_t : int
    {
        FACE_NONE = 0,
        FACE_SAMUAL = 1,
        FACE_VEGA = 2
    };

    struct voiceCommunicationInfo_t
    {
        // skip the incomming transimission and go straight to VO.
        bool skipIncommingTransmission; // Offset: 0x0

        // The person sending the voice communication
        idStrId personCommunicating; // Offset: 0x4

        // The VO sound to play.
        idSoundEvent* voSoundToPlay; // Offset: 0x8

        // face to show.
        idTrigger_VoiceCommunication::voFace_t face; // Offset: 0x10

        idSoundEntity* soundSpeaker; // Offset: 0x18

    }; // Size: 0x20

    // The voice communication data.
    idTrigger_VoiceCommunication::voiceCommunicationInfo_t voiceCommunicationInfo; // Offset: 0xC90

}; // Size: 0xCB0
