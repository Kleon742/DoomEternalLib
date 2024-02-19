struct idDeclPhysics : idDeclTypeInfo
{
    // defined gravity for the game.
    float gravity; // Offset: 0x88

    // All materials defined for the game.
    idList < physMaterial_density_t , TAG_IDLIST , false > materials; // Offset: 0x90

    // All forces defined for the game.
    idList < physicsForce_t , TAG_IDLIST , false > forces; // Offset: 0xA8

    idStaticList < physicsForce_t , 9 , false , TAG_IDLIST > forcesLookup; // Offset: 0xC0

    idStaticList < physMaterial_density_t , 33 , false , TAG_IDLIST > materialLookup; // Offset: 0x148

}; // Size: 0x2F0
