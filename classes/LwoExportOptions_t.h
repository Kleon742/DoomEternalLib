struct LwoExportOptions_t : exporterOptions_t
{
    // exports in the global world coordinate space
    bool exportWorldCoordinates; // Offset: 0x38

    // export the game objects as well as meshes
    bool exportGameObjects; // Offset: 0x39

    // export the entity layers
    bool exportEntityLayers; // Offset: 0x3A

    // export the posed animated entities
    bool exportPosedAnimatedEntities; // Offset: 0x3B

    // creates a static geometry entity from the set of entities and models exported
    bool createStaticGeometryEntity; // Offset: 0x3C

    // creates a geomcache template from the set of entities and models
    bool createGeomCacheTemplate; // Offset: 0x3D

    // if any entities were created during the export process as with the static entity and geom cache entity options those entities will be selected
    bool selectResults; // Offset: 0x3E

    // the file that will contain the exported json document
    idStr exportFilePath; // Offset: 0x40

}; // Size: 0x70
