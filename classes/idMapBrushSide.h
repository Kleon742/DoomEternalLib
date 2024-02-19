struct idMapBrushSide
{
    idStr material; // Offset: 0x0

    idPlane plane; // Offset: 0x30

    idVec3 texMat[2]; // Offset: 0x40

    // {{ units = m }}
    idVec3 origin; // Offset: 0x58

}; // Size: 0x68
