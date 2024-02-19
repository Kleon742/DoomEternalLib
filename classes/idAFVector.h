struct idAFVector
{
    enum afVectorType_t : int
    {
        VEC_COORDS = 0,
        VEC_JOINT = 1,
        VEC_BONECENTER = 2,
        VEC_BONEDIR = 3,
        VEC_AXIS = 4
    };

    idAFVector::afVectorType_t type; // Offset: 0x0

    idAtomicString joint1; // Offset: 0x8

    idAtomicString joint2; // Offset: 0x10

    // {{ units = m }}
    idVec3 vec; // Offset: 0x18

    bool negate; // Offset: 0x24

}; // Size: 0x28
