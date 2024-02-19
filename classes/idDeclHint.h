struct idDeclHint : idGameDeclTypeInfo
{
    // The String to display on the menu/codex found.
    idStrId header; // Offset: 0x90

    // The Description String of the codex Entry.
    idStrId description; // Offset: 0x94

    // stat to display in the description first
    gameStat_t gainedStat; // Offset: 0x98

    // stat to display in the description second
    gameStat_t countStat; // Offset: 0x9C

    // icon to display
    idMaterial2* icon; // Offset: 0xA0

}; // Size: 0xA8
