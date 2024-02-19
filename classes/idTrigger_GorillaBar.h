struct idTrigger_GorillaBar : idTrigger
{
    // the jump force to use in this bar, 0 indicates use the gorilla mechanic default
    float jumpForce; // Offset: 0xC90

    // the sound to play when triggering the bar
    idSoundEvent* gorillaBarSound; // Offset: 0xC98

    // hides render model when spawned
    bool hideRenderModel; // Offset: 0xCA0

    // does tests to make sure it's a valid monkey bar grab (should be FALSE for original, 'brush' trigger version)
    bool testForValidGrab; // Offset: 0xCA1

    // force using the left bar axis as forward bar axis
    bool forceUsingLeftAxisAsForward; // Offset: 0xCA2

    // adjusts clamped anim offset in this direction
    idVec3 animOffsetAdjust; // Offset: 0xCA4

}; // Size: 0xCB0
