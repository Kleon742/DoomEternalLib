struct burstInfo_t
{
    // shot count for the burstMod ( < 0 == burst mode not available for weapon, 0 == use clip size )
    int burstCount; // Offset: 0x0

    // interval between successive bursts in MS (-1 to use the firingInterval)
    milliToGameTime_t burstInterval; // Offset: 0x8

    // if nonzero then this will override firingInterval during a burst
    milliToGameTime_t burstFiringInterval; // Offset: 0x18

    // whether another burst can be queued up during an active burst
    bool canQueueBurst; // Offset: 0x28

    // whether an active burst can be interrupted
    bool canInterruptBurst; // Offset: 0x29

    // if true then don't lose charge until the burst ends
    bool remainChargedWhileBursting; // Offset: 0x2A

    // if true, every burst shot plays fire sound, fx, and weapon feedback. if false, only played on first shot.
    bool playSoundFxAndFeedbackOnEveryShot; // Offset: 0x2B

    // if burst shoot has a different shoot state, specify it here
    idAtomicString burstShootState; // Offset: 0x30

    // if burst needs a shoot again, specify it here
    idAtomicString burstShootAgainState; // Offset: 0x38

    // anim state to use on the last shot of the burst fire
    idAtomicString lastShotState; // Offset: 0x40

    // amount of ammo to use per burst (0 = ignore. uses normal ammo count)
    int ammoPerBurst; // Offset: 0x48

    // the rocket launcher lock-on fires three shots in a burst but it's not a true burst just three shots in a single animation
    int fakeBurstCount; // Offset: 0x4C

}; // Size: 0x50
