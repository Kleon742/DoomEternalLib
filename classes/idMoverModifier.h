struct idMoverModifier : idBloatedEntity
{
    // forward direction on the spline
    idVec3 splineForwardDir; // Offset: 0xB88

    // spline path we are associated with
    idManagedClassPtr < idSplinePath > splinePath; // Offset: 0xB98

    // used internally to snap a new mover to a spline
    bool initialized; // Offset: 0xBB8

    // used internally in idStudio
    bool dirty; // Offset: 0xBB9

    // length from the closest control point
    float controlPointLength; // Offset: 0xBBC

    // PCT from the closest control point
    float controlPointPCT; // Offset: 0xBC0

    // index to the closest point
    int controlPointIndex; // Offset: 0xBC4

    // position of the closest control point {{ units = m }}
    idVec3 controlPointOrigin; // Offset: 0xBC8

    // position of the next closest control point {{ units = m }}
    idVec3 controlPointOriginNext; // Offset: 0xBD4

    // modifier properties
    splineMoverModifier_t modifier; // Offset: 0xBE0

}; // Size: 0xD20
