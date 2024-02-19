// idCurve < idVec4 >
template <typename type>
struct idCurve
{
    // knots
    idList < float , TAG_TABLE , false > times; // Offset: 0x8

    // knot values
    idList < type , TAG_TABLE , false > values; // Offset: 0x20

    // cached distance values between knots
    idList < float , TAG_TABLE , false > distances; // Offset: 0x38

    // cached index for fast lookup
    int currentIndex; // Offset: 0x50

    // set whenever the curve changes
    bool changed; // Offset: 0x54

    // used to flag when we need to recalculate the cached values
    bool recalcCache; // Offset: 0x55

}; // Size: 0x58
