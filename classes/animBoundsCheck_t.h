struct animBoundsCheck_t
{
    idMat3 originRotation; // Offset: 0x0

    idBounds bounds; // Offset: 0x24

    // {{ units = m }}
    idVec3 originTranslation; // Offset: 0x3C

    int flags; // Offset: 0x48

    float translationFraction; // Offset: 0x4C

}; // Size: 0x50
