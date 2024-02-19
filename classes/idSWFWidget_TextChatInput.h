struct idSWFWidget_TextChatInput : idSWFWidget
{
    // need this so we can check the active channel
    idSWFWidget_TextChatLog* chatLog; // Offset: 0x180

    bool isEditing; // Offset: 0x188

    bool isShowingVirtualKeyboard; // Offset: 0x189

    int lastSelectionStart; // Offset: 0x18C

    int lastSelectionEnd; // Offset: 0x190

    idProxyPtr < idSWFWidget_TextChatInput > proxyPtr; // Offset: 0x198

}; // Size: 0x1A0
