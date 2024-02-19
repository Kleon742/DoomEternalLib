struct idSplinePathCuveInstantiator
{
    idCurve_CatmullRomSpline < idVec3 >* curve1; // Offset: 0x0

    idCurve_KochanekBartelsSpline < idVec3 >* curve2; // Offset: 0x8

    idCurve_NonUniformBSpline < idVec3 >* curve3; // Offset: 0x10

    idCurve_NURBS < idVec3 >* curve4; // Offset: 0x18

}; // Size: 0x20
