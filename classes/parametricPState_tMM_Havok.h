struct parametricPState_tMM_Havok
{
    // physics time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > time; // Offset: 0x0

    // Game time of last manual translation or rotation
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > manualUpdateTime; // Offset: 0x8

    // where we were on the spline at "time" {{ units = m }}
    float length; // Offset: 0x10

    // total length of the spline {{ units = m }}
    float totalLength; // Offset: 0x14

    // set when simulation is suspended
    int atRest; // Offset: 0x18

    // world origin {{ units = m }}
    idVec3 worldOrigin; // Offset: 0x1C

    // world axis
    idMat3 worldAxis; // Offset: 0x28

    // local origin {{ units = m }}
    idVec3 localOrigin; // Offset: 0x4C

    // local axis
    idMat3 localAxis; // Offset: 0x58

    // extrapolation based description of the position over time {{ ___ts = m }}
    idExtrapolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > linearExtrapolation; // Offset: 0x80

    // extrapolation based description of the orientation over time
    idExtrapolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > angularExtrapolation; // Offset: 0xD8

    // starting axis for the angular extrapolation
    idMat3 angularExtrapolationStartAxis; // Offset: 0x110

    // rotation vector for angular extrapolation
    idVec3 angularExtrapolationRotVec; // Offset: 0x134

    // linear velocity cached {{ units = m / s }}
    idVec3 linearVelocity; // Offset: 0x140

    // angular velocity cached {{ units = radians / s }}
    idVec3 angularVelocity; // Offset: 0x14C

    // the actual rotational speed info {{ units = degrees /sec }}
    idRotation rotationalSpeed; // Offset: 0x158

    // interpolation based description of the position over time {{ ___ts = m }}
    idInterpolateAccelDecelLinear < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > linearInterpolation; // Offset: 0x1A0

    // interpolation based description of the orientation over time
    idInterpolateAccelDecelLinear < idQuat , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > angularInterpolation; // Offset: 0x230

    // position along the spline over time {{ ___ts = m }}
    idInterpolateAccelLinearEx < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > splineInterpolate; // Offset: 0x2D8

    // angular interpolation while on spline
    idInterpolate < idQuat , idTypesafeTime < float , secondUnique_t , 1 > > splineAngleInterpolate; // Offset: 0x330

    // spline based description of the position over time {{ ___ts = m }}
    idCurve_Spline < idVec3 >* spline; // Offset: 0x370

    // last computed first Derivative on spline {{ units = m / s }}
    idVec3 splineDerivative; // Offset: 0x378

    // set the orientation using the spline
    bool useSplineAngles; // Offset: 0x384

    // set the orientation using the initial orientation obj the object as throughout the spline
    bool useSplineAnglesFromCurrent; // Offset: 0x385

    // local spline axis
    idMat3 localSplineAxis; // Offset: 0x388

    // simulation is paused until this time
    idTypesafeTime < long long , gameTimeUnique_t , 999960 > pauseTime; // Offset: 0x3B0

    // oscillation separate extrapolations for each xyz component (so we can have different phases) {{ ___ts = m }}
    idExtrapolate < float , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > oscillationExtrapolationList[3]; // Offset: 0x3B8

    // spline oscillation relative to our offset position
    bool oscillationZRelative; // Offset: 0x460

    // offset local offset that is applied on top of linear and spline movement
    idInterpolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > localOffsetInterpolation; // Offset: 0x468

    // spline master instead of using time values for interpolations we use the spline position of this master
    idHavokPhysics_ParametricMM* splineMaster; // Offset: 0x4B0

    // scale scale our local coordinates by this, relative to local angle
    idInterpolate < idVec3 , idTypesafeTime < long long , gameTimeUnique_t , 999960 > > localOriginScaleInterpolation; // Offset: 0x4B8

    // children phys objects we need to update on our spline
    idList < parametricSplineBatchInfo_tMM_Havok , TAG_IDLIST , false > splineChilds; // Offset: 0x500

    // true if we are child of other spline mover. FIXME rename this to something better/merge with "splineMaster"
    bool splineDummy; // Offset: 0x518

}; // Size: 0x520
