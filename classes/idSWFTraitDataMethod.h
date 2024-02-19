struct idSWFTraitDataMethod : idSWFTraitData
{
    // ID used used to optimize virtual function calls, must match the dispID in the base class method. 0 = disabled
    unsigned int dispID; // Offset: 0x8

    // Index into the ABC's method list
    unsigned int methodIndex; // Offset: 0xC

}; // Size: 0x10
