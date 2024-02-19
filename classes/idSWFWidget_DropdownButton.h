struct idSWFWidget_DropdownButton : idSWFWidget_Button
{
    idSWFWidget_DropDownMenuList* dropdownList; // Offset: 0x2A0

    bool isDropdownButton; // Offset: 0x2A8

    bool downStateExtended; // Offset: 0x2A9

    // only used if 'm_dropdownList' isn't used
    bool isExpanded; // Offset: 0x2AA

}; // Size: 0x2B0
