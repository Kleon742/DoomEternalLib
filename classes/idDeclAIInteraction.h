struct idDeclAIInteraction : idGameDeclTypeInfo
{
    enum interactionEvent_t : int
    {
        IEV_ACTIONSCRIPT = 0,
        IEV_MAX = 1
    };

    struct eventData_t
    {
        // type of the event
        idDeclAIInteraction::interactionEvent_t type; // Offset: 0x0

        // time after start of interaction when the event triggers
        milliToGameTime_t timeMS; // Offset: 0x8

        // duration of this event in milliseconds (not required -- intended for a interaction editing tool to set automatically)
        milliToGameTime_t durationMS; // Offset: 0x18

        // index of the actor this event is for
        int actorIndex; // Offset: 0x28

        // the action script the specified actor will play
        idComponentActionScript actionScriptComponent; // Offset: 0x30

    }; // Size: 0xB0

    // events in this interaction
    idList < idDeclAIInteraction::eventData_t , TAG_IDLIST , false > events; // Offset: 0x90

}; // Size: 0xA8
