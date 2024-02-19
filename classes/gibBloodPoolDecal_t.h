struct gibBloodPoolDecal_t
{
    // specific tagJoint the blood pool emanates from
    idAtomicString tagJoint; // Offset: 0x0

    // size variance {{ units = m }}
    float sizeVariance; // Offset: 0x8

    // how far to check for line trace {{ units = m }}
    float dist; // Offset: 0xC

    // parameters for decal to project
    idList < deferredDecalParams_t , TAG_IDLIST , false > decalParms; // Offset: 0x10

}; // Size: 0x28
