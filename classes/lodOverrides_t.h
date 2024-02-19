struct lodOverrides_t
{
    // Use unit size override
    bool useUnitSizeOverride; // Offset: 0x0

    // Override distance to switch LOD
    float distance; // Offset: 0x4

    // Defines a unit size used to compute automatic distances
    lodUnitSizeOverrides_t unitSizeOverride; // Offset: 0x8

}; // Size: 0x10
