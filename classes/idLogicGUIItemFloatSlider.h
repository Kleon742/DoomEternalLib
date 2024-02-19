struct idLogicGUIItemFloatSlider : idLogicGUIItem
{
    // Variable output identifier
    unsigned int variableOutputId; // Offset: 0x78

    // Event output identifier
    unsigned int eventOutputId; // Offset: 0x7C

    // Value
    float value; // Offset: 0x80

    // Minimum
    float min; // Offset: 0x84

    // Maximum
    float max; // Offset: 0x88

    // Output event when value changes
    bool outputEvent; // Offset: 0x8C

}; // Size: 0x90
