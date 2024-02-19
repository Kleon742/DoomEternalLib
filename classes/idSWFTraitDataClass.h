struct idSWFTraitDataClass : idSWFTraitData
{
    // Value from 0-N, position in which this trait resides. 0 = position is assigned at runtime
    unsigned int slotID; // Offset: 0x8

    // Index into the ABC's class data list
    unsigned int classIndex; // Offset: 0xC

}; // Size: 0x10
