struct idAutomapFogOfWar
{
    struct jobFogOfWarProcessRevealsParm_t
    {
        idAutomapFogOfWar* fogOfWar; // Offset: 0x0

        idList < idAutomapFogOfWar_Reveal , TAG_IDLIST , false >* fogReveals; // Offset: 0x8

    }; // Size: 0x10

    idDeclAutomap* decl; // Offset: 0x0

    idBufferObject* shaderStorage; // Offset: 0x8

    unsigned int* tiles; // Offset: 0x10

    idBounds bounds; // Offset: 0x18

    idVec3 tileExtents; // Offset: 0x30

    // For debug
    idVec3 lastRevealPositionDrawDebug; // Offset: 0x3C

    float lastRevealRadiusDrawDebug; // Offset: 0x48

    float lastRevealHalfHeightDrawDebug; // Offset: 0x4C

    idVec3 lastRevealTraversedPositionDrawDebug; // Offset: 0x50

    float lastRevealTraversedRadiusDrawDebug; // Offset: 0x5C

    float lastRevealTraversedHalfHeightDrawDebug; // Offset: 0x60

}; // Size: 0x68
