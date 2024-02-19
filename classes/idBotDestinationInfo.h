struct idBotDestinationInfo
{
    // The pad will attempt to apply a velocity such that the bot lands on this point.
    idManagedClassPtr < idInfo_BounceDestination > botDestination; // Offset: 0x0

    // The speed applied to bot that touch this trigger in units per second. {{ units = m / s }}
    float botLaunchSpeed; // Offset: 0x20

}; // Size: 0x28
