// idCurve_NURBS < idVec3 >
template <typename type>
struct idCurve_NURBS : idCurve_NonUniformBSpline < type >
{
    idList < float , TAG_TABLE , false > weights; // Offset: 0x68

}; // Size: 0x80
