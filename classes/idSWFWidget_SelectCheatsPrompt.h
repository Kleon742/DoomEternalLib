struct idSWFWidget_SelectCheatsPrompt : idSWFWidget
{
    idSWFWidget_DynamicGrid* grid; // Offset: 0x180

    int numGridColumns; // Offset: 0x188

    int toggleCheatCommandID; // Offset: 0x18C

    int continueScreenCommandID; // Offset: 0x190

    int allCheatsOn; // Offset: 0x194

    idDeclUIDataGroup* uiData; // Offset: 0x198

    idSWFWidget_CommandBar* commandBar; // Offset: 0x1A0

    idDeclCheatCodesSKUBitFlags_t skuFlags; // Offset: 0x1A8

    bool unlockAllCheatCodes; // Offset: 0x1AC

    bool cheatCodesSelected[idCheatCodeManager::idCheatCodesTypes_t::MAX_CHEAT_CODE_TYPES]; // Offset: 0x1AD

}; // Size: 0x1C0
