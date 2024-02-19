struct idAnimSysNodeData_NWayBlend : idAnimSysNodeData
{
    enum blendMode_t : int
    {
        BLENDMODE_LOOP = 0,
        BLENDMODE_CLAMP = 1
    };

    // Animations
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > animAliases; // Offset: 0xB8

    // Name of scalar reference used for blendvalue
    idAtomicString refValueName; // Offset: 0xD0

    // Name of scalar reference used for speed
    idAtomicString refSpeedName; // Offset: 0xD8

    // Which blend operation to use (if blending)
    idMD6Blend::blendOp_t blendOp; // Offset: 0xE0

    // How the n-way blend behaves close to 1
    idAnimSysNodeData_NWayBlend::blendMode_t blendMode; // Offset: 0xE4

    // Looping or clamped anim
    idAnimSysNodeData::animLoopMode_t loopMode; // Offset: 0xE8

}; // Size: 0xF0
