struct idElectricBolt
{
    idDeclElectricBolt* eboltDecl; // Offset: 0x0

    idRenderModelBeam* beamModel; // Offset: 0x8

    idStaticList < eboltControlNode_t , 32 , false , TAG_IDLIST > controlNodes; // Offset: 0x10

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > startTime; // Offset: 0x328

    int diversity; // Offset: 0x330

    // {{ units = m }}
    idVec3 startPos; // Offset: 0x334

    // {{ units = m }}
    idVec3 endPos; // Offset: 0x340

}; // Size: 0x350
