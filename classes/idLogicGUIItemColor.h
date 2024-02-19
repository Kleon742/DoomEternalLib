struct idLogicGUIItemColor : idLogicGUIItem
{
    // Variable output identifier
    unsigned int variableOutputId; // Offset: 0x78

    // Event output identifier
    unsigned int eventOutputId; // Offset: 0x7C

    // Value
    idColor value; // Offset: 0x80

    // Output event when value changes
    bool outputEvent; // Offset: 0x90

}; // Size: 0x98
