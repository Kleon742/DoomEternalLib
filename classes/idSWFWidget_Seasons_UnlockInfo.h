struct idSWFWidget_Seasons_UnlockInfo : idSWFWidget
{
    idDeclWarehouseItem* cosmeticItemDecl; // Offset: 0x180

    idSWFWidget* itemInfoWidget; // Offset: 0x188

    idSWFWidget_MarqueeText* nameWidget; // Offset: 0x190

    idSWFWidget* pipListWidget; // Offset: 0x198

    idTypesafeTime < long long , gameTimeUnique_t , 999960 > showStartTime; // Offset: 0x1A0

    int numPips; // Offset: 0x1A8

    int currentPipIndex; // Offset: 0x1AC

    float pipPercent; // Offset: 0x1B0

    keyNum_t changePipJoyKey; // Offset: 0x1B4

    keyNum_t changePipPCKey; // Offset: 0x1B8

    swfPlatform_t swfPlatform; // Offset: 0x1BC

}; // Size: 0x1C0
