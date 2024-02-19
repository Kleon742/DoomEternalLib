struct idLookupTableVec3
{
    // Indicate if the values are clamped
    bool clamp; // Offset: 0x0

    // Indicate if the values are snapped
    bool snap; // Offset: 0x1

    // Indicate if the values make a spline
    bool spline; // Offset: 0x2

    // Indicate the min for normalization
    idVec3 _min; // Offset: 0x4

    // Indicate the max for normalization
    idVec3 _max; // Offset: 0x10

    // list of pair time/value
    idCatmullRomSpline < idVec3 > values; // Offset: 0x1C

}; // Size: 0x430
