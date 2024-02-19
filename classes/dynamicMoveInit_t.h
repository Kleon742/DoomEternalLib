struct dynamicMoveInit_t
{
    // true if mover can't push blockers
    bool noPush; // Offset: 0x0

    // forces CRUSH flag on pusher
    bool forcePushCrush; // Offset: 0x1

    // allows props to be pushed if noPush == off
    bool allowPropPush; // Offset: 0x2

    // allows ai to be pushed if noPush == off
    bool allowAiPush; // Offset: 0x3

    // whether we allow ledge grabs onto this mover or not
    bool allowLedgeGrab; // Offset: 0x4

    // disables the ability for the player to jump
    bool disablePlayerJump; // Offset: 0x5

    // disables the ability for the player to jump
    bool disablePlayerDash; // Offset: 0x6

    // crush damage set up
    crushDamage_t crushDamage; // Offset: 0x8

    // If set, this dynamic only collides with the player (this is a hack fix for the platforms in samur's boss battle)
    bool collidePlayerOnly; // Offset: 0x48

}; // Size: 0x50
