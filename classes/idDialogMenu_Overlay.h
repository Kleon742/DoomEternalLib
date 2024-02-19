struct idDialogMenu_Overlay : idMenuElement
{
    idSWFWidget* saveIndicator; // Offset: 0x100

    idSWFWidget_DialogNotification* dialogNotification; // Offset: 0x108

    idSWFWidget_VoiceChatIndicator* voiceChatIndicator; // Offset: 0x110

    bool partyInviteAcceptInProgress; // Offset: 0x118

    bool hasRegisteredSocialBroadcasts; // Offset: 0x119

    bool hasPartyLeader; // Offset: 0x11A

}; // Size: 0x120
