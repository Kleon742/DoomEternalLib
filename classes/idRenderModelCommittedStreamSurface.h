struct idRenderModelCommittedStreamSurface
{
    int numGeometries; // Offset: 0x0

    idTriangles* geometry; // Offset: 0x8

    streamedLayeredMaterialId_t layeredMaterialStreamId; // Offset: 0x10

    bool streamUseModelBounds; // Offset: 0x0

}; // Size: 0x18
