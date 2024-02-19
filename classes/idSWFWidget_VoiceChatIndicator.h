struct idSWFWidget_VoiceChatIndicator : idSWFWidget
{
    struct voiceChatIndicatorData_t
    {
        idHandle < int , chatLocalTalkerId_type , chatLocalTalkerId_type::CLTI_INVALID > localTalkerId; // Offset: 0x0

        idHandle < int , chatTalkerId_type , chatTalkerId_type::CTI_INVALID > talkerId; // Offset: 0x4

        idStr playerName; // Offset: 0x8

        bool isMuted; // Offset: 0x38

        idTypesafeTime < int , millisecondUnique_t , 1000 > expirationTime; // Offset: 0x3C

    }; // Size: 0x40

    idList < idSWFWidget_VoiceChatIndicator::voiceChatIndicatorData_t , TAG_IDLIST , false > indicatorData; // Offset: 0x180

    idSWFWidget_VoiceChatIndicatorItem* indicatorItems[8]; // Offset: 0x198

    bool onScreen; // Offset: 0x1D8

    bool needsUpdate; // Offset: 0x1D9

}; // Size: 0x1E0
