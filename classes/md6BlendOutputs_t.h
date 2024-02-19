struct md6BlendOutputs_t
{
    md6BlendOriginOutput_t finalOriginOutput; // Offset: 0x0

    md6BlendOriginOutput_t specificOriginOutputs[24]; // Offset: 0x70

    float specificLeafAlphas[24]; // Offset: 0xAF0

    int numSpecificOriginOutputs; // Offset: 0xB50

    bool done; // Offset: 0xB54

    bool fudged; // Offset: 0xB55

    // This gets set to true when the blend job is finished with blend shapes
    bool morphMapUpdateDone; // Offset: 0xB56

    unsigned char pad[1]; // Offset: 0xB57

    long long timeDelta; // Offset: 0xB58

    // {{ units = m }}
    idVec3 position; // Offset: 0xB60

    idQuat orientation; // Offset: 0xB6C

    // bounds of all the joints {{ units = m }}
    float jointBounds[6]; // Offset: 0xB7C

    bool poseChanged; // Offset: 0xB94

}; // Size: 0xBA0
