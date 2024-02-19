struct idMidnightKeyPropFxEvent : idMidnightKeyProperties
{
    // name of Fx event
    idStr name; // Offset: 0x10

    // events to start
    idList < fxCondition_t , TAG_IDLIST , false > startEvents; // Offset: 0x40

    // events to stop
    idList < fxCondition_t , TAG_IDLIST , false > stopEvents; // Offset: 0x58

}; // Size: 0x70
