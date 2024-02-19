struct idDeclFacialAnimationSet : idDeclTypeInfo
{
    struct facialAnimSet_t
    {
        // name of this set
        idAtomicString name; // Offset: 0x0

        // list of glances that will occur under normal conditions
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > normalGlances; // Offset: 0x8

        // list of glances that will occur when AI glances at something in distance
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > squintGlances; // Offset: 0x20

        // list of full facial cycles to play when in ambient behavior ( no nearby focus )
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > ambientCycles; // Offset: 0x38

        // list of full facial fidgets to play when in ambient behavior
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > ambientFidgets; // Offset: 0x50

        // list of full facial cycles to play when focus tracking another actor
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > focusCycles; // Offset: 0x68

        // list of full facial fidgets to play when focus tracking another actor
        idList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , TAG_IDLIST , false > focusFidgets; // Offset: 0x80

    }; // Size: 0x98

    struct facialSetNodeNameMapEntry_t
    {
        // name of animation set this entry pertains to
        idAtomicString setName; // Offset: 0x0

        // list of all nodes that can use this animation set
        idList < idAnimWebPath , TAG_IDLIST , false > webPaths; // Offset: 0x8

    }; // Size: 0x20

    // list of all facial anim sets
    idList < idDeclFacialAnimationSet::facialAnimSet_t , TAG_IDLIST , false > animSets; // Offset: 0x88

    // list of all maps between anim sets and node names
    idList < idDeclFacialAnimationSet::facialSetNodeNameMapEntry_t , TAG_IDLIST , false > nameMap; // Offset: 0xA0

}; // Size: 0xB8
