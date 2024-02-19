struct idAmbientNodeGenerationArea : idBloatedEntity
{
    enum checkOverlappingGeo_t : int
    {
        DEFAULT = 0,
        ENABLED = 1,
        DISABLED = 2
    };

    enum traceTexLod_t : int
    {
        DEFAULT = 0,
        ENABLED = 1,
        DISABLED = 2
    };

    // The spacing in meters between ambient nodes in this volume. A value of zero means the global spacing will be used.
    int spacing; // Offset: 0xB88

    // The maximum number of ambient nodes that can be generated in this volume. A value of zero means there is no maximum count for this volume.
    int maxNodeCount; // Offset: 0xB8C

    // Checks the placement points of ambient entities to see if they are outside of brush and model geometry before placing the entities. DEFAULT using whatever the global setting is.
    idAmbientNodeGenerationArea::checkOverlappingGeo_t checkOverlappingGeo; // Offset: 0xB90

    // Enables tracing the texlod mesh inside the volume.
    idAmbientNodeGenerationArea::traceTexLod_t traceTexlod; // Offset: 0xB94

    // The spacing between ambient entities that are placed with the texlod tracing. A value of zero means the global texlod spacing will be used.
    int texLodSpacing; // Offset: 0xB98

    // The height above the texlod surface (in meters) that the ambient entities will be placed. A value of zero means the global texlod height above the surface will be used.
    int heightAboveSurface; // Offset: 0xB9C

}; // Size: 0xBA0
