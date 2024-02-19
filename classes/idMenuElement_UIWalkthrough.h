struct idMenuElement_UIWalkthrough : idMenuElement
{
    int menuBroadCastID; // Offset: 0x100

    bool joystickAllowed; // Offset: 0x104

    idUIWalkthroughSequenceItem_t* sequenceItem; // Offset: 0x108

    idSWFWidget_UIWalkthroughBar* commandBarWidget; // Offset: 0x110

    idList < idSWFWidget_UIWalkthroughTextBox * , TAG_IDLIST , false > textBoxes; // Offset: 0x118

    idSWFWidget_UIWalkthroughAbandonButton* abandonButton; // Offset: 0x130

    commandBarButtonInfo_t abandonButtonInfo; // Offset: 0x138

}; // Size: 0x550
