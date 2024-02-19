struct idAnimSysNodeData_Morphtracks : idAnimSysNodeData
{
    // Layer name to play this node on;
    idAtomicString preferredLayerName; // Offset: 0xB8

    // Setup anim to use
    idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > morphSetupAnim; // Offset: 0xC0

    // Don't print warnings
    bool suppressWarnings; // Offset: 0xC2

}; // Size: 0xC8
