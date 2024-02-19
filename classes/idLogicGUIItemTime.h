struct idLogicGUIItemTime : idLogicGUIItem
{
    // Variable output identifier
    unsigned int variableOutputId; // Offset: 0x78

    // Event output identifier
    unsigned int eventOutputId; // Offset: 0x7C

    // Value
    idTypesafeTime < int , millisecondUnique_t , 1000 > value; // Offset: 0x80

    // Step
    idTypesafeTime < int , millisecondUnique_t , 1000 > step; // Offset: 0x84

    // Step fast
    idTypesafeTime < int , millisecondUnique_t , 1000 > stepFast; // Offset: 0x88

    // Output event when value changes
    bool outputEvent; // Offset: 0x8C

}; // Size: 0x90
