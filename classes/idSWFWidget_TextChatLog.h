struct idSWFWidget_TextChatLog : idSWFWidget
{
    idSWFWidget_List* channelButtonList; // Offset: 0x180

    idSWFWidget_Button* channelButtons[3]; // Offset: 0x188

    idSWFWidget_ScrollPanel* channelLogPanel[3]; // Offset: 0x1A0

    idSWFWidget_Text* channelLogText[3]; // Offset: 0x1B8

    idMaterial2* channelIcons[3]; // Offset: 0x1D0

    bool channelNeedsTrim[3]; // Offset: 0x1E8

    int channelMessageCount[3]; // Offset: 0x1EC

    textChatChannel_t activeChannel; // Offset: 0x1F8

    bool isOnScreen; // Offset: 0x1FC

}; // Size: 0x200
