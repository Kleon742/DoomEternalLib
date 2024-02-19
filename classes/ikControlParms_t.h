struct ikControlParms_t
{
    // amount the character will align to terrain on each axis (pitch and roll)
    idVec2 slopeAdaptation; // Offset: 0x0

    // how quickly an end effector moves up/down to the changing terrain for limbs using the LERP method
    float effectorLerpRate; // Offset: 0x8

    // how quickly an end effector moves up/down to the changing terrain for limbs using the LAG method
    float effectorLagRate; // Offset: 0xC

    // how quickly the root offset moves up/down to the changing terrain
    float rootInterpolationRate; // Offset: 0x10

    // how much our root offset should favor contact depth ( 1.0 ) vs root depth ( 0.0 )
    float contactDepthBias; // Offset: 0x14

    // when traveling up a slope, the angle in degrees when our root will be fully stable [ 0, 90 ]
    float slopeStabilityAngle; // Offset: 0x18

}; // Size: 0x1C
