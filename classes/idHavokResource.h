struct idHavokResource : idResource
{
    idHeapArray < unsigned char , TAG_HAVOK_RESOURCE > inplaceBuffer; // Offset: 0x58

    hkReferencedObject* havokResource; // Offset: 0x70

}; // Size: 0x78
