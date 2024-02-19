struct idRenderModelStatic : idRenderModel
{
    idResourcePointer < const idStaticModel > staticModel; // Offset: 0x4D0

    unsigned int createFlags; // Offset: 0x4D8

    idStaticModelStream* modelStream; // Offset: 0x4E0

    bool recreateSurfaces; // Offset: 0x4E8

    renderModelStaticGeoDecals_t geoDecals; // Offset: 0x4F0

    bool lockedStreamGeo; // Offset: 0x510

}; // Size: 0x520
