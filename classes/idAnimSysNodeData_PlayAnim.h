struct idAnimSysNodeData_PlayAnim : idAnimSysNodeData
{
    enum reenterMode_t : int
    {
        REENTER_RESTART = 0,
        REENTER_CONTINUE = 1
    };

    enum blendOutMode_t : int
    {
        BLENDOUT_KEEP = 0,
        BLENDOUT_BLENDOUT = 1
    };

    // Animation to play
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > animAlias; // Offset: 0xB8

    // Loopmode
    idAnimSysNodeData::animLoopMode_t loopMode; // Offset: 0xBC

    // If we reenter this node while we haven't blended out completely yet
    idAnimSysNodeData_PlayAnim::reenterMode_t reenterMode; // Offset: 0xC0

    // How we blendout, mostly we just blend in the next node, but sometimes we might need to blend out
    idAnimSysNodeData_PlayAnim::blendOutMode_t blendOutMode; // Offset: 0xC4

    // Which blend operation to use (if blending)
    idMD6Blend::blendOp_t blendOp; // Offset: 0xC8

    // External blend modifier (0-1)
    idAtomicString externalBlendRef; // Offset: 0xD0

    // External time controller (0-1)
    idAtomicString externalTimeRef; // Offset: 0xD8

    // External timescale controller
    idAtomicString externalTimeScaleRef; // Offset: 0xE0

    // Start frame
    int startFrame; // Offset: 0xE8

    // Timescale
    float timeScale; // Offset: 0xEC

}; // Size: 0xF0
