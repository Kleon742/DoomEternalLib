struct idGameStateInt : idClass
{
    enum gameStateIntCompare_t : int
    {
        GAMESTATEINT_LESS_THAN = 0,
        GAMESTATEINT_EQUAL = 1,
        GAMESTATEINT_GREATER_THAN = 2
    };

    idDeclGameStateInt* decl; // Offset: 0x10

    int gameStateValue; // Offset: 0x18

}; // Size: 0x20
