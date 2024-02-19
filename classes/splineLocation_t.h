struct splineLocation_t
{
    // spline path we are associated with
    idManagedClassPtr < idSplinePath > splinePath; // Offset: 0x0

    // the length of this along the spline {{ units = m }}
    float lengthOnSpline; // Offset: 0x20

    // length from the closest control point {{ units = m }}
    float controlPointLength; // Offset: 0x24

    // PCT from the closest control point
    float controlPointPCT; // Offset: 0x28

    // index to the closest point
    int controlPointIndex; // Offset: 0x2C

    // position of the closest control point {{ units = m }}
    idVec3 controlPointOrigin; // Offset: 0x30

    // position of the next closest control point {{ units = m }}
    idVec3 controlPointOriginNext; // Offset: 0x3C

    // used internally to snap a new mover to a spline
    bool initialized; // Offset: 0x48

    // used internally in idstudio
    bool dirty; // Offset: 0x49

}; // Size: 0x50
