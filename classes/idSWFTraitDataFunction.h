struct idSWFTraitDataFunction : idSWFTraitData
{
    // Value from 0-N, position in which this trait resides. 0 = position is assigned at runtime
    unsigned int slotID; // Offset: 0x8

    // Index into the ABC's method list
    unsigned int functionIndex; // Offset: 0xC

}; // Size: 0x10
