struct idSWFWidget_PartyList : idSWFWidget
{
    idList < idSWFWidget_PartyUser * , TAG_IDLIST , false > partyUserWidgets; // Offset: 0x180

    float width; // Offset: 0x198

    bool newWidth; // Offset: 0x19C

    bool doneInitialUpdate; // Offset: 0x19D

}; // Size: 0x1A0
