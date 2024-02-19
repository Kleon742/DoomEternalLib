struct idAnimSysNodeData_4CornerBlend : idAnimSysNodeData
{
    // Any base anim to use
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > baseAnimAlias; // Offset: 0xB8

    // ( First<->Second ) <-> ( Third<->Fourth ) )
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > cornerAnimAliases[4]; // Offset: 0xBA

    // Which blend operation to use
    idMD6Blend::blendOp_t baseBlendOp; // Offset: 0xC4

    // Which blend operation to use
    idMD6Blend::blendOp_t blendOp; // Offset: 0xC8

    // Name of scalar reference used for blendvalue first/second
    idAtomicString refValueNameBlendFirstSecond; // Offset: 0xD0

    // Name of scalar reference used for blendvalue third/fourth
    idAtomicString refValueNameBlendThirdFourth; // Offset: 0xD8

}; // Size: 0xE0
