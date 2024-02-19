struct idHUDEvent_SpeakerUpdate
{
    struct speakerInfo_t
    {
        idDeclSpeaker* speaker; // Offset: 0x0

        int duration; // Offset: 0x8

    }; // Size: 0x10

    idHUDEvent_SpeakerUpdate::speakerInfo_t info; // Offset: 0x0

}; // Size: 0x10
