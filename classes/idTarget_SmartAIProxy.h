struct idTarget_SmartAIProxy : idTarget_AIProxy
{
    // Whether or not this can be hit at all, on or off
    bool canBeActivated; // Offset: 0xB98

    // Whether the meat hook is currently connected.
    bool meatHookConnected; // Offset: 0xB99

    // Whether the rocket launcher is currently locked on.
    bool lockedOn; // Offset: 0xB9A

    // Whether the proxy was shot this frame. Resets each time we check.
    bool wasShotThisFrame; // Offset: 0xB9B

    // The last player to shoot/activate this AI proxy.
    idPlayer* lastPlayerActivator; // Offset: 0xBA0

}; // Size: 0xBA8
