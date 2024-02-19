struct idSWFWidget_Button_Lockable : idSWFWidget_Button
{
    enum lockedState_t : int
    {
        LOCKED_STATE_LOCKED = -1,
        LOCKED_STATE_UNLOCKED = 0,
        LOCKED_STATE_PURCHASED = 1,
        LOCKED_STATE_DISABLED = 2
    };

    idSWFWidget_Button_CommandBar* inputButton; // Offset: 0x2A0

    bool inputButtonRightAligned; // Offset: 0x2A8

    bool changeFrameOnStateChange; // Offset: 0x2A9

    idSWFWidget_Button_Lockable::lockedState_t lockedState; // Offset: 0x2AC

}; // Size: 0x2B0
