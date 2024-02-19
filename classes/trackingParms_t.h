struct trackingParms_t
{
    // maximum angular velocity in degrees per second {{ units = degrees / s }}
    idTypesafeNumber < float , DegreesUnique_t > rate; // Offset: 0x0

    // minimum angular velocity,in degrees per second, during deceleration phase {{ units = degrees / s }}
    idTypesafeNumber < float , DegreesUnique_t > minRateInDecel; // Offset: 0x4

    // acceleration rate {{ units = degrees / ( s * s ) }}
    idTypesafeNumber < float , DegreesUnique_t > acceleration; // Offset: 0x8

    // deceleration rate {{ units = degrees / ( s * s ) }}
    idTypesafeNumber < float , DegreesUnique_t > deceleration; // Offset: 0xC

}; // Size: 0x10
