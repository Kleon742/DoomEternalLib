struct idPlayerBodyReactions
{
    // enable or disable the entire system
    bool enable; // Offset: 0x8

    idPlayer* owner; // Offset: 0x10

    // the reaction that is currently playing
    idPlayerBodyReaction_t* curReaction; // Offset: 0x18

    // the reaction state that is currently playing
    idPlayerBodyReactionState_t* curReactionState; // Offset: 0x20

    // the time the current reaction started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curReactionStartTime; // Offset: 0x28

    // the time the current reaction state started
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > curReactionStateStartTime; // Offset: 0x30

    int inhibitFlagsSave; // Offset: 0x38

    bool deferredBodySave; // Offset: 0x3C

    // tracks whether the current reaction is a test reaction
    bool isTestReaction; // Offset: 0x3D

    // store the view origin for collision testing {{ units = m }}
    idVec3 viewOrigin; // Offset: 0x40

    // tracks whether this mechanic hid the FP hands so it knows to unhide them
    bool hidFPHands; // Offset: 0x4C

    // save the start pos so that we can do a clipped trace to the endpos to be sure to end in a valid place {{ units = m }}
    idVec3 startPos; // Offset: 0x50

}; // Size: 0x60
