struct idResourceFileEntry
{
    idResourceList* resourceList; // Offset: 0x0

    idStrStatic < 64 > typeName; // Offset: 0x8

    idStrDynStatic < 256 > resourceName; // Offset: 0x78

    // it would be nice if this was always based on the resource,
    idStrDynStatic < 256 > filename; // Offset: 0x1A8

    // but some resources reference source data that hasn't been processed into the generated directories. resource storage variation
    idResourceVariation variation; // Offset: 0x2D8

    resourceDepot_t depot; // Offset: 0x2DC

    idBitset < 64 > mapBits; // Offset: 0x2E0

    idBitset < 64 > chunkBits; // Offset: 0x2E8

    // platform bits and streaming bit
    int useBits; // Offset: 0x2F0

}; // Size: 0x2F8
