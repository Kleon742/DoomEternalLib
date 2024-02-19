struct idMidnightAnimLoadingInfo
{
    struct idMidnightAnimMD6Info_t
    {
        idDeclMD6* model; // Offset: 0x0

        idList < idAtomicString , TAG_IDLIST , false > animNameList; // Offset: 0x8

    }; // Size: 0x20

    idList < idMidnightAnimLoadingInfo::idMidnightAnimMD6Info_t , TAG_IDLIST , false > neededAnimList; // Offset: 0x0

}; // Size: 0x18
