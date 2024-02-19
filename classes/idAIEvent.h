struct idAIEvent : idClass
{
    enum aiEventTrigger_t : int
    {
        TRIGGERS_NOTHING = 0,
        TRIGGERS_COMBAT = 1,
        TRIGGERS_SEARCH = 2,
        TRIGGERS_RELAXED = 4
    };

    enum aiEventUpdateResult_t : int
    {
        AIUPDATE_OK = 0,
        AIUPDATE_REMOVE = 1
    };

    // origin of the event {{ units = m }}
    idVec3 origin; // Offset: 0x10

    // location the event {{ units = m }}
    idVec3 stimulusOrigin; // Offset: 0x1C

    // entity that originated this event
    idManagedClassPtr < const idEntity > originator; // Offset: 0x28

    // entity that is the primary cause for this event
    idManagedClassPtr < const idEntity > instigator; // Offset: 0x48

    // Event definition
    idDeclAiEvent* eventDecl; // Offset: 0x68

    // time event occurred
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x70

    idHandle < int , invalidAIEvent_t , INVALID_AIEVENT > handle; // Offset: 0x78

    // if true, the event is enabled and will be set to relevant receivers
    bool enabled; // Offset: 0x7C

    // if false, event hasn't been through any update cycles
    bool processed; // Offset: 0x7D

}; // Size: 0x80
