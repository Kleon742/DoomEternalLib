struct meshFrameDecodeMetaData_t
{
    unsigned int meshIndex; // Offset: 0x0

    unsigned int frameOffset; // Offset: 0x4

    geomCacheFrameType_t frameType; // Offset: 0x8

    meshAnimatedStreamTypes_t streamType; // Offset: 0xC

    unsigned int parentFrames[4]; // Offset: 0x10

    meshPredictorParms_t meshPredictorParms; // Offset: 0x20

}; // Size: 0x24
