struct idAnimator_Synced : idAnimator_Base
{
    idMD6LeafPlay* leaves[8]; // Offset: 0x40

    idMD6Branch* branches[7]; // Offset: 0x80

    // synced animations
    idStaticList < const idMD6Anim * , 8 , false , TAG_IDLIST > anims; // Offset: 0xB8

    // handles for each aliases
    idStaticList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 8 , false , TAG_IDLIST > aliasHandles; // Offset: 0x110

    // blend weight for each alias
    idStaticList < float , 8 , false , TAG_IDLIST > aliasWeights; // Offset: 0x138

    // alpha values for the tree, derived from the alias weights
    idStaticList < float , 8 , false , TAG_IDLIST > alphaValues; // Offset: 0x170

    idMD6LeafPlay::wrapMode_t wrapMode; // Offset: 0x1A8

    // anim rate scale
    float rateScale; // Offset: 0x1AC

}; // Size: 0x1B0
