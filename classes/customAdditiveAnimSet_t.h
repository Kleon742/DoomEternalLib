struct customAdditiveAnimSet_t
{
    // the anims
    idList < aliasAndAlpha_t , TAG_IDLIST , false > anims; // Offset: 0x0

    // the name of this set
    idAtomicString name; // Offset: 0x18

    // alias handle for the animation associated with this custom set
    idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_ANIMATION , false > aliasHandles; // Offset: 0x20

}; // Size: 0x38
