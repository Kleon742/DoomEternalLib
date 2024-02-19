struct idAIMapMarkupEntity : idInfo
{
    // places in the world this markup entity references
    idList < idVec3 , TAG_IDLIST , false > points; // Offset: 0xB90

    // places in the world this markup entity references
    idList < idManagedClassPtr < idEntity > , TAG_IDLIST , false > entities; // Offset: 0xBA8

    // optional radius to restrict stuff
    float radius; // Offset: 0xBC0

    // type of markup
    aiMapMarkupType_t markupType; // Offset: 0xBC4

    // optional, match this with a key on the AI's temp memory
    int markupIndex; // Offset: 0xBC8

    // enable/disable this markup entity
    bool enabled; // Offset: 0xBCC

}; // Size: 0xBD0
