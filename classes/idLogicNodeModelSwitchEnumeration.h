struct idLogicNodeModelSwitchEnumeration : idLogicNodeModel
{
    // Enumeration
    logicEnumerationAssetReference_t enumeration; // Offset: 0x10

    // Case values
    idList < idLogicEnumerationValue , TAG_LOGIC , false > cases; // Offset: 0x20

}; // Size: 0x38
