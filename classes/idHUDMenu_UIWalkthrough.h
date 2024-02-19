struct idHUDMenu_UIWalkthrough : idHUDElement
{
    bool joystickAllowed; // Offset: 0xF8

    idUIWalkthroughSequenceItem_t* sequenceItem; // Offset: 0x100

    idSWFWidget_UIWalkthroughBar* commandBarWidget; // Offset: 0x108

    idList < idSWFWidget_UIWalkthroughTextBox * , TAG_IDLIST , false > textBoxes; // Offset: 0x110

    idSWFWidget_UIWalkthroughAbandonButton* abandonButton; // Offset: 0x128

    commandBarButtonInfo_t abandonButtonInfo; // Offset: 0x130

}; // Size: 0x548
