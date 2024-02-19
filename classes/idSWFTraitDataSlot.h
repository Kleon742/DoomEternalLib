struct idSWFTraitDataSlot : idSWFTraitData
{
    // Value from 0-N, position in which this trait resides. 0 = position is assigned at runtime
    unsigned int slotID; // Offset: 0x8

    // Constant pool multiname index
    unsigned int typeName; // Offset: 0xC

    swfConstant_t value; // Offset: 0x10

}; // Size: 0x18
