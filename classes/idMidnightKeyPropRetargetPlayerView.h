struct idMidnightKeyPropRetargetPlayerView : idMidnightKeyProperties
{
    // How long should the blend be?
    idTypesafeTime < int , millisecondUnique_t , 1000 > blendTime; // Offset: 0x10

    // Should view be locked?
    bool lockView; // Offset: 0x14

    // Minimum amount of movement allowed, 0 is nothing, 1 is max
    float lockViewMinPercentage; // Offset: 0x18

}; // Size: 0x20
