struct parametricPState_t_Havok
{
    // physics time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x0

    // set when simulation is suspended
    int atRest; // Offset: 0x8

    // world origin {{ units = m }}
    idVec3 worldOrigin; // Offset: 0xC

    // world angles
    idAngles worldAngles; // Offset: 0x18

    // world axis
    idMat3 worldAxis; // Offset: 0x24

    // local origin {{ units = m }}
    idVec3 localOrigin; // Offset: 0x48

    // local angles
    idAngles localAngles; // Offset: 0x54

    // extrapolation based description of the position over time {{ ___ts = m }}
    idExtrapolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > linearExtrapolation; // Offset: 0x60

    // extrapolation based description of the orientation over time
    idExtrapolate < idAngles , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > angularExtrapolation; // Offset: 0xB8

    // interpolation based description of the position over time {{ ___ts = m }}
    idInterpolateAccelDecelLinear < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > linearInterpolation; // Offset: 0x110

    // interpolation based description of the orientation over time
    idInterpolateAccelDecelLinear < idAngles , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > angularInterpolation; // Offset: 0x1A0

    // spline based description of the position over time {{ ___ts = m }}
    idCurve_Spline < idVec3 >* spline; // Offset: 0x230

    // position along the spline over time {{ ___ts = m }}
    idInterpolateAccelDecelLinear < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > splineInterpolate; // Offset: 0x238

    // set the orientation using the spline
    bool useSplineAngles; // Offset: 0x298

}; // Size: 0x2A0
