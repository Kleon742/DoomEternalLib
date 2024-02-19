struct idDiscreteCompound
{
    // Name of the compound
    idAtomicString name; // Offset: 0x0

    // All the groups in a compound that are mapped to joints
    idList < idDiscreteCompoundGroup , TAG_IDLIST , false > groups; // Offset: 0x8

    // All the parts in a compound that are mapped to groups
    idList < idDiscreteCompoundPart , TAG_IDLIST , false > parts; // Offset: 0x20

}; // Size: 0x38
