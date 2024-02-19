struct addScreenDistortionParms_t
{
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x0

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > duration; // Offset: 0x8

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationFadeIn; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > durationFadeOut; // Offset: 0x18

    idMaterial2* distortionMaterial; // Offset: 0x20

    // x: distortionMapScale, y: aberrationMapScale, z: flowMapScale, w: curveScale
    idVec4 scales; // Offset: 0x28

    idTypesafeTime < int , millisecondUnique_t , 1000 > flowPeriod; // Offset: 0x38

    float curvePower; // Offset: 0x3C

    bool looping; // Offset: 0x40

}; // Size: 0x48
