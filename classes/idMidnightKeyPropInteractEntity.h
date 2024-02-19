struct idMidnightKeyPropInteractEntity : idMidnightKeyProperties
{
    enum idInteractState_t : int
    {
        STATE_NONE = 0,
        STATE_OPEN_AHEAD = 1,
        STATE_OPEN_BEHIND = 2,
        STATE_CLOSE = 3,
        STATE_LOCKED = 4,
        STATE_UNLOCKED = 5
    };

    // The state we are aiming for
    idMidnightKeyPropInteractEntity::idInteractState_t gotoState; // Offset: 0x10

    // Only go to the state above if this is the current state of the interactable.
    idMidnightKeyPropInteractEntity::idInteractState_t checkState; // Offset: 0x14

}; // Size: 0x18
