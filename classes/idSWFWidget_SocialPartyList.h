struct idSWFWidget_SocialPartyList : idSWFWidget
{
    idSWFWidget_SectionList* list; // Offset: 0x180

    idSWFWidget_DropDownList* dropDownList; // Offset: 0x188

    idSWFWidget* messageBox; // Offset: 0x190

    idSWFWidget* createPartyMessage; // Offset: 0x198

    idList < lobbyUserId_t , TAG_IDLIST , false >* partyIdList; // Offset: 0x1A0

    idList < idHandle < int , socialInviteId_type , socialInviteId_type::SII_INVALID > , TAG_IDLIST , false >* inviteIdList; // Offset: 0x1A8

    idProxyPtr < idSWFWidget_SocialPartyList > proxyPtr; // Offset: 0x1B0

    idMenu* menu; // Offset: 0x1B8

    bool queuedSimpleListUpdate; // Offset: 0x1C0

    bool repopulateOnShow; // Offset: 0x1C1

}; // Size: 0x1C8
