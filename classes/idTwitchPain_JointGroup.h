struct idTwitchPain_JointGroup
{
    // name of the joint group
    idAtomicString jointGroupName; // Offset: 0x0

    // name of the animation alias associated with this joint group
    idAnimAliasRef aliasName; // Offset: 0x8

    // aliases to use with this joint group
    idList < idAnimAliasRef , TAG_IDLIST , false > aliasNames; // Offset: 0x38

    // names of the custom anim sets we can pick from
    idList < idAtomicString , TAG_IDLIST , false > customSetNames; // Offset: 0x50

    // ms it takes to blend into this alias
    milliToGameTime_t blendInMs; // Offset: 0x68

    // ms it takes to blend out of this alias
    milliToGameTime_t blendOutMs; // Offset: 0x78

    // data about this entry, overrides parent values
    twitchPainInfo_t info; // Offset: 0x88

    // alias handle for the animation associated with this joint group
    idGrowableList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 1 , TAG_ANIMATION > aliasHandles; // Offset: 0xA8

}; // Size: 0xC8
