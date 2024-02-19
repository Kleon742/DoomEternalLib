struct idLogicGUIItemEnumeration : idLogicGUIItem
{
    // Variable output identifier
    unsigned int variableOutputId; // Offset: 0x78

    // Event output identifier
    unsigned int eventOutputId; // Offset: 0x7C

    // Enumeration
    logicEnumerationAssetReference_t enumeration; // Offset: 0x80

    // Enumeration value index
    int enumerationValueIndex; // Offset: 0x90

    // Output event when value changes
    bool outputEvent; // Offset: 0x94

}; // Size: 0x98
