struct idDeclRenderParm : idDecl
{
    // can be referenced by any thread, never updated
    parmValue_t declaredValue; // Offset: 0x78

    // index into the global state
    int parmIndex; // Offset: 0x88

    parmType_t parmType; // Offset: 0x8C

    parmDataType_t parmDataType; // Offset: 0x90

    parmCreator_t creator; // Offset: 0x94

    parmEdit_t edit; // Offset: 0x98

    parmScope_t parmScope; // Offset: 0x9C

    float editRange[2]; // Offset: 0xA0

    unsigned int srgbaMask; // Offset: 0xA8

    // for parmType PT_TEXTURE_CUBE only, when resolving the image name, perform power map cube filtering
    bool cubeFilterTexture; // Offset: 0x0

    bool streamed; // Offset: 0x0

    bool globallyIndexed; // Offset: 0x0

    bool editable; // Offset: 0x0

    // If set, do not interpolate when used as an environment parm. Directly snap to target value.
    bool envNoInterpolation; // Offset: 0x0

    bool fftBloom; // Offset: 0x0

    textureMaterialKind_t materialKind; // Offset: 0xB0

    // Special Case Parm Index to link smoothnes/normal maps
    int smoothnessNormalParmIndex; // Offset: 0xB4

}; // Size: 0xB8
