// idCurve_KochanekBartelsSpline < idVec3 >
template <typename type>
struct idCurve_KochanekBartelsSpline : idCurve_Spline < type >
{
    idList < float , TAG_TABLE , false > tension; // Offset: 0x60

    idList < float , TAG_TABLE , false > continuity; // Offset: 0x78

    idList < float , TAG_TABLE , false > bias; // Offset: 0x90

}; // Size: 0xA8
