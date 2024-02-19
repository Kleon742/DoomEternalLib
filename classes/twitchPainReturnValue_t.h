struct twitchPainReturnValue_t
{
    idGrowableList < idHandle < unsigned short , invalidAliasHandle_t , INVALID_ALIAS_HANDLE > , 8 , TAG_IDLIST > aliasHandles; // Offset: 0x0

    idGrowableList < const customAdditiveAnimSet_t * , 4 , TAG_IDLIST > customSets; // Offset: 0x28

    twitchPainInfo_t info; // Offset: 0x60

}; // Size: 0x80
