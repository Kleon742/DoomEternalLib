struct idDisjointBoundsNode
{
    // The planes will all come from the bounds of the submitted chunks.
    int planeType; // Offset: 0x0

    // {{ units = m }}
    float planeDist; // Offset: 0x4

    // positive values are node numbers, negative are (-1 - boundsNumber)
    int children[2]; // Offset: 0x8

    // portal area (original index of instance/module)
    int portalArea; // Offset: 0x10

}; // Size: 0x14
