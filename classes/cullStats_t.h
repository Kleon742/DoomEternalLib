struct cullStats_t
{
    unsigned int nCullTrivReject; // Offset: 0x0

    unsigned int nCullTrivAccept; // Offset: 0x4

    unsigned int nCullBackFace; // Offset: 0x8

    unsigned int nCullTriPlane; // Offset: 0xC

    unsigned int nCullBound; // Offset: 0x10

    unsigned int nCullSepPlane; // Offset: 0x14

    unsigned int nCullRadius; // Offset: 0x18

    unsigned int nCullUmbra; // Offset: 0x1C

    unsigned int nCullTraceWorld; // Offset: 0x20

    unsigned int nTriTested; // Offset: 0x24

    unsigned int nTriPass; // Offset: 0x28

}; // Size: 0x2C
