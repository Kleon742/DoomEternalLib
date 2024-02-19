struct idLogicGUIItem : idClass
{
    // Label
    idStr label; // Offset: 0x10

    // Tooltip
    idStr tooltip; // Offset: 0x40

    // Same line
    bool sameLine; // Offset: 0x70

    // Indent
    float indent; // Offset: 0x74

}; // Size: 0x78
