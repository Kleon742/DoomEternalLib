struct idCollisionModel : idResource
{
    // file time for the binary model
    unsigned int binaryFileTime; // Offset: 0x58

    // file time for the source model
    unsigned int sourceFileTime; // Offset: 0x5C

    // type of model
    cmType_t modelType; // Offset: 0x60

    // model bounds
    idBounds bounds; // Offset: 0x64

    // parameters used to build this model
    collisionModelBuildParms_t buildParms; // Offset: 0x7C

    // all contents of the model ORed together
    int contents; // Offset: 0x90

    // set if the world model
    bool isWorldModel; // Offset: 0x94

    // set if a trace model
    bool isTraceModel; // Offset: 0x95

    // set if convex
    bool isConvex; // Offset: 0x96

    // true if the model is streamed
    bool isStreamed; // Offset: 0x97

    // file pointer for streaming
    idFile* streamFilePtr; // Offset: 0x98

    // binary polygon model data
    cm_polygonModel_t polygonModel; // Offset: 0xA0

    // binary sphere model data
    cm_sphereModel_t* sphereModel; // Offset: 0xC0

    streamAreasHeader_t* streamAreas; // Offset: 0xC8

    bool dataCleared; // Offset: 0xD0

}; // Size: 0xD8
