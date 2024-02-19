struct idLookupTable
{
    enum curveType_t : int
    {
        LINEAR = 0,
        SNAP = 1,
        SPLINE = 2
    };

    // clamp
    bool clamp; // Offset: 0x0

    // If the table is linear between points, snaps to the prior points value, or curves between points
    idLookupTable::curveType_t curveType; // Offset: 0x4

    // Min value of the table
    float _min; // Offset: 0x8

    // Max value of the table
    float _max; // Offset: 0xC

    // Array of values in the table
    idCatmullRomSpline < float > values; // Offset: 0x10

}; // Size: 0x224
