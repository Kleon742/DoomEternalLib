struct idDialogParms
{
    gameDialogMessages_t msgId; // Offset: 0x0

    dialogType_t type; // Offset: 0x4

    int flags; // Offset: 0x8

    dialogAction_t acceptAction; // Offset: 0xC

    dialogAction_t cancelAction; // Offset: 0x10

    dialogParmsData_t data; // Offset: 0x18

    char* functionName; // Offset: 0xA0

    int lineNumber; // Offset: 0xA8

    int viewIndexOverride; // Offset: 0xAC

    idMenu* menuPtr; // Offset: 0xB0

    // Inserted into the message string as if it were a format. E.g. message string is "Exit %s?" and this string is "Doom". Not globally supported.
    idStrId insertString; // Offset: 0xB8

    // Only supported for the Generic Dialog type
    idStr genericTitle; // Offset: 0xC0

    // Only supported for the Generic Dialog type
    idStr genericMessage; // Offset: 0xF0

    bool playFlourish; // Offset: 0x120

    dialogPartyConnectionInfo_t partyConnectionInfo; // Offset: 0x128

    gameType_t sessionConnectGameType; // Offset: 0x190

    idMaterial2* icon; // Offset: 0x198

    swfNamedColors_t iconColor; // Offset: 0x1A0

    idTypesafeTime < int , millisecondUnique_t , 1000 > deferredClearDelay; // Offset: 0x1A4

}; // Size: 0x1A8
