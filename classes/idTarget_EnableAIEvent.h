struct idTarget_EnableAIEvent : idTarget
{
    // true to enable the event, false to disable the event
    bool enableEvent; // Offset: 0xB88

    // flags for events to enable or disable on the target
    aiEventClass_t eventClassFlags; // Offset: 0xB8C

}; // Size: 0xB90
