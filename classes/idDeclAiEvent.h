struct idDeclAiEvent : idDeclTypeInfo
{
    struct clarityDistancePair_t
    {
        // the range this clarity applies to {{ units = m }}
        idRange < float > distanceRange; // Offset: 0x0

        // clarity
        aiPerceptClarity_t clarity; // Offset: 0x8

    }; // Size: 0xC

    // Initial pool size for this event type
    int initialPoolSize; // Offset: 0x88

    // Type of event
    aiEventClass_t eventClass; // Offset: 0x8C

    // Event priority
    aiEventPriority_t priority; // Offset: 0x90

    // Duration (in milliseconds), -1 = persistent
    milliToGameTime_t duration; // Offset: 0x98

    // Event is attached to the originator, and moves with it
    bool attached; // Offset: 0xA8

    // Stimulus origin comes from the instigator, rather than originator
    bool instigatorStimulus; // Offset: 0xA9

    // Time (sec) to project
    float lookAheadTime; // Offset: 0xAC

    // volume of sound between 0.0 and 1.0
    float volume; // Offset: 0xB0

    // arbitrary scale applied after falloff
    float intensityScale; // Offset: 0xB4

    // radius of sphere event affects {{ units = m }}
    float radius; // Offset: 0xB8

    // radius of potential vis trace {{ units = m }}
    float visRadius; // Offset: 0xBC

    // bounds to trace from, used for debug display only
    idBounds bounds; // Offset: 0xC0

    // trace distance {{ units = m }}
    float distance; // Offset: 0xD8

    // contents to clip against
    idContents clipMask; // Offset: 0xDC

    // width of the wedge arc in degrees
    float arcWidthDegrees; // Offset: 0xE0

    // height below the plane of the arc {{ units = m }}
    float heightMin; // Offset: 0xE4

    // height above the plane of the arc ( should be a positive number ) {{ units = m }}
    float heightMax; // Offset: 0xE8

    // voice message
    voiceMessageType_t voiceMessage; // Offset: 0xEC

    // delayed VO message
    voiceMsg_t delayedMessage; // Offset: 0xF0

    // how clear the event is, in terms of pinpointing location
    idList < idDeclAiEvent::clarityDistancePair_t , TAG_IDLIST , false > clarity_positions; // Offset: 0xF8

    // how clear the event is, in terms of pinpointing the originator type
    idList < idDeclAiEvent::clarityDistancePair_t , TAG_IDLIST , false > clarity_sources; // Offset: 0x110

}; // Size: 0x128
