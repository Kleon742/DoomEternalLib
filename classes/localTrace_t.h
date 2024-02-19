struct localTrace_t
{
    // will be 1.0 if nothing was hit, only valid if fraction < 1.0
    float fraction; // Offset: 0x0

    // {{ units = m }}
    idVec3 point; // Offset: 0x4

    // the geometric facet normal with no smoothing
    idVec3 normal; // Offset: 0x10

    int jointIndex; // Offset: 0x1C

    int indexes[3]; // Offset: 0x20

}; // Size: 0x2C
