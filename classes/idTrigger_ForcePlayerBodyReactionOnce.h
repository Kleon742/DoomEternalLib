struct idTrigger_ForcePlayerBodyReactionOnce : idTrigger
{
    bool triggered; // Offset: 0xC90

    // force this body reaction once when this entity receives TriggerStuff
    idAtomicString triggerStuffBodyReactionName; // Offset: 0xC98

    // force this body reaction once when this entity receives StartTouch
    idAtomicString startTouchBodyReactionName; // Offset: 0xCA0

    // force this body reaction once when this entity receives Touch
    idAtomicString touchBodyReactionName; // Offset: 0xCA8

    // force this body reaction once when this entity receives Untouch
    idAtomicString untouchBodyReactionName; // Offset: 0xCB0

}; // Size: 0xCB8
