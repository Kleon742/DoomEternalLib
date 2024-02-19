struct gameDeclValue_t
{
    // list of game decls that this value applies to
    idList < const idGameDeclTypeInfo * , TAG_IDLIST , false > declList; // Offset: 0x0

    // value of something
    float value; // Offset: 0x18

}; // Size: 0x20
