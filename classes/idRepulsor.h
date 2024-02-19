struct idRepulsor
{
    // spawn id of the entity we're repulsed from (can be invalid)
    idSpawnId spawnId; // Offset: 0x0

    // position player is repulsed from {{ units = m }}
    idVec3 origin; // Offset: 0x4

    // radius of repulsor (repulison starts at the edge of the cylinder + radius) {{ units = m }}
    float radius; // Offset: 0x10

    // height of the cylinder (origin is assumed to be at the bottom of the cylinder) {{ units = m }}
    float height; // Offset: 0x14

    // used to determine which repulsors to clip against
    int flags; // Offset: 0x18

    // which repulsor method should be used
    repulsorStyle_t repulsorStyle; // Offset: 0x1C

    // if using box repulsor style, box that represents it
    idBox box; // Offset: 0x20

    // if true, will only repulse moving entities
    bool repulseOnlyMoving; // Offset: 0x5C

    // if true, will only repulse entities on the ground
    bool repulseOnlyOnGround; // Offset: 0x5D

    // force used for certain styles
    float force; // Offset: 0x60

    // did this repulsor get used.
    bool wasUsed; // Offset: 0x64

}; // Size: 0x68
