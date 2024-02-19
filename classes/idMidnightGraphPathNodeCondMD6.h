struct idMidnightGraphPathNodeCondMD6 : idMidnightGraphPathNode
{
    enum enum_24000 : int
    {
        NB_MAX_OUTPUT = 5
    };

    struct MD6NextInfo
    {
        // indicate the model we want to manage
        idDeclMD6* md6; // Offset: 0x0

        // indicate the next node of the output
        idMidnightGraphNextInfo nextInfo; // Offset: 0x8

    }; // Size: 0x10

    // kept for backward compatibility
    idMidnightTargetGroupName groupName; // Offset: 0x30

    // store the next info for each md6
    idStaticList < idMidnightGraphPathNodeCondMD6::MD6NextInfo , 5 , false , TAG_IDLIST > next; // Offset: 0x38

}; // Size: 0xA0
