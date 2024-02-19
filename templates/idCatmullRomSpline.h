// idCatmullRomSpline < float >
template <typename type>
struct idCatmullRomSpline
{
    // knots
    type times[64]; // Offset: 0x0

    // knot values
    type values[64]; // Offset: 0x100

    // number of knots
    int numKnots; // Offset: 0x200

    // cached index for fast lookup
    int currentIndex; // Offset: 0x204

    // set whenever the curve changes
    bool changed; // Offset: 0x208

    // how going past the edge of the table acts.
    idCatmullRomSpline < type >::boundary_t boundaryType; // Offset: 0x20C

    type closeTime; // Offset: 0x210

}; // Size: 0x214
