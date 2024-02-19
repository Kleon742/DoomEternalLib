struct idAnimWebEvent
{
    enum priority_t : int
    {
        PRIORITY_LOW = 0,
        PRIORITY_MISC = 0,
        PRIORITY_TRIGGER_ON_INTERRUPT = 1,
        PRIORITY_TRIGGER_ON_INTERRUPT_OR_ALREADY_THERE = 2,
        PRIORITY_DEATH = 3,
        PRIORITY_MAX = 4
    };

    // index of the subweb that triggers the event
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > swi; // Offset: 0x0

    // index of the state that triggers the event
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > si; // Offset: 0x2

    // if the via subweb and state are set then the animweb must pass through the node they point to before an event will be triggered for the node represented by swi / si. optional via subweb
    idIndex < short , idAnimWeb::invalidSubWebIndex_t , - 1 > viaSwi; // Offset: 0x4

    // optional via state
    idIndex < short , idAnimWeb::invalidStateIndex_t , - 1 > viaSi; // Offset: 0x6

    // index of game event to trigger
    int eventNum; // Offset: 0x8

    // priority of this event
    idAnimWebEvent::priority_t priority; // Offset: 0xC

}; // Size: 0x10
