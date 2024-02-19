// idCurve_Spline < idVec4 >
template <typename type>
struct idCurve_Spline : idCurve < type >
{
    boundary_t::eType boundaryType; // Offset: 0x58

    float closeTime; // Offset: 0x5C

}; // Size: 0x60
