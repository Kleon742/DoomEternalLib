struct aiObstacleAnim_t
{
    // origin delta for the transition {{ units = m }}
    idVec2 deltaOrigin; // Offset: 0x0

    // rotation delta for the transition
    idVec2 deltaAxis; // Offset: 0x8

    // origin translation at apex of animation {{ units = m }}
    idVec2 apex; // Offset: 0x10

    int anim; // Offset: 0x18

    // copy of md6animflags, used because some flags are hacked in by code
    int flags; // Offset: 0x1C

    // #if defined ID_ENABLE_DEV debugging
    idMD6Anim* md6Anim; // Offset: 0x20

}; // Size: 0x28
